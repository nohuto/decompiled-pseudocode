/*
 * XREFs of CcCopyWriteEx @ 0x14049CDC0
 * Callers:
 *     CcCopyWrite @ 0x14049CD90 (CcCopyWrite.c)
 *     CcFastCopyWrite @ 0x1405787C0 (CcFastCopyWrite.c)
 *     DifCcCopyWriteExWrapper @ 0x140618690 (DifCcCopyWriteExWrapper.c)
 *     DifCcCopyWriteWrapper @ 0x140618850 (DifCcCopyWriteWrapper.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140ABD89C (CcSetTelemetryPeriodicTimer.c)
 *     CcTelemetryBucketizeLatency @ 0x140ABE8C0 (CcTelemetryBucketizeLatency.c)
 */

char __fastcall CcCopyWriteEx(PFILE_OBJECT FileObject, __int64 *a2, unsigned int a3, char a4, int a5, __int64 a6)
{
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // r9
  int v12; // r8d
  unsigned __int64 v13; // rax
  int v14; // eax
  _QWORD *SharedCacheMap; // rdi
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  unsigned int v20; // eax
  int v21; // ecx
  _QWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // r8
  __int64 v26; // rdx
  char v27; // [rsp+50h] [rbp-58h]
  unsigned __int64 v28; // [rsp+58h] [rbp-50h]
  __int64 v29; // [rsp+60h] [rbp-48h] BYREF
  __int64 v30; // [rsp+68h] [rbp-40h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp-38h]
  int v32[2]; // [rsp+78h] [rbp-30h] BYREF
  _QWORD *v33; // [rsp+80h] [rbp-28h]

  v10 = 0;
  *(_QWORD *)v32 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  v13 = CurrentThread->Process[1].Padding[3];
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 + 1084);
    if ( v12 >= v14 )
      v12 = v14;
  }
  if ( (v12 >= 2 || CurrentThread != KeGetCurrentThread() || !LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink))
    && v12 <= 0
    || (FileObject->Flags & 0x10) != 0 )
  {
    v10 = 1;
  }
  ++qword_140F8E710;
  if ( !byte_140F8E6E1 && CcTelemetryGlobalData && !dword_140F8E800 && !dword_140F8E804 )
    CcSetTelemetryPeriodicTimer(DueTime);
  if ( v10 && !a4 )
    return 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v33 = SharedCacheMap;
  v17 = *a2;
  *(_QWORD *)v32 = v17;
  v18 = 2;
  if ( (v17 & 0xFFF) == 0 && a3 >= 0x1000 )
    v18 = 3;
  v19 = v18 | 4;
  if ( (((_WORD)v17 + (_WORD)a3) & 0xFFF) != 0 )
    v19 = v18;
  v31 = v17 & 0xFFFFFFFFFFFFF000uLL;
  v30 = *((_QWORD *)FileObject->FsContext + 5);
  v20 = v30 - (v17 & 0xFFFFF000);
  if ( (__int64)(v30 - v31) > 0 )
  {
    v21 = v19;
    if ( !((v30 - v31) >> 32) && v20 <= 0x1000 )
      v21 = v19 | 6;
  }
  else
  {
    v21 = v19 | 7;
  }
  v27 = CcMapAndCopyInToCache(
          (int)SharedCacheMap,
          a5,
          (int)v32,
          a3,
          v21,
          FileObject,
          (__int64)&v30,
          a4,
          a6,
          (__int64)&v29);
  if ( !byte_140F8E6E1 )
  {
    v22 = (_QWORD *)(SharedCacheMap[64] + 232LL);
    if ( v27 )
    {
      if ( v29 )
      {
        v23 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v29) / stru_140F8E6A8.QuadPart;
        v28 = v23;
      }
      else
      {
        v23 = 0LL;
      }
      v24 = 94LL;
      if ( !a4 )
        v24 = 118LL;
      v25 = &v22[v24];
      v26 = 82LL;
      if ( !a4 )
        v26 = 106LL;
      CcTelemetryBucketizeLatency(v23, &v22[v26], v25);
      if ( a4 )
      {
        ++v22[77];
        if ( v28 > *(_QWORD *)(SharedCacheMap[64] + 872LL) )
        {
          v22[80] = v28;
          return v27;
        }
      }
      else
      {
        ++v22[78];
        if ( v28 > v22[81] )
        {
          v22[81] = v28;
          return v27;
        }
      }
    }
    else
    {
      ++*(_QWORD *)(SharedCacheMap[64] + 864LL);
    }
  }
  return v27;
}
