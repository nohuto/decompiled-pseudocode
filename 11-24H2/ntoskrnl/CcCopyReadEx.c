/*
 * XREFs of CcCopyReadEx @ 0x1404D5990
 * Callers:
 *     FsRtlCopyRead @ 0x140A1B070 (FsRtlCopyRead.c)
 *     CcCopyRead @ 0x140A43CC0 (CcCopyRead.c)
 *     CcFastCopyRead @ 0x140A71D50 (CcFastCopyRead.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020D960 (IoDiskIoAttributionDereference.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     IoReferenceIoAttributionFromThread @ 0x140273BD0 (IoReferenceIoAttributionFromThread.c)
 *     CcGetNodeForReadAhead @ 0x140273DD0 (CcGetNodeForReadAhead.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     CcUpdateReadHistory @ 0x140457680 (CcUpdateReadHistory.c)
 *     CcScheduleReadAheadNuma @ 0x140493C50 (CcScheduleReadAheadNuma.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140ABD89C (CcSetTelemetryPeriodicTimer.c)
 *     CcMapAndCopyFromCache @ 0x140ABE1E0 (CcMapAndCopyFromCache.c)
 *     CcTelemetryBucketizeLatency @ 0x140ABE8C0 (CcTelemetryBucketizeLatency.c)
 */

__int64 __fastcall CcCopyReadEx(
        _SLIST_ENTRY *Object,
        __int64 *a2,
        unsigned int a3,
        unsigned __int8 a4,
        __int64 a5,
        _DWORD *a6,
        struct _KTHREAD *a7)
{
  __int64 v8; // r12
  struct _KTHREAD *CurrentThread; // r10
  int v12; // ebx
  unsigned __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r15
  _SLIST_ENTRY *Next; // rdi
  __int64 Ahead; // rcx
  unsigned int v18; // ebx
  bool v19; // zf
  struct _KTHREAD *v20; // rdi
  unsigned int v21; // eax
  _DWORD *v22; // rax
  __int64 v23; // rsi
  _QWORD *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r8
  _QWORD *v28; // r8
  unsigned __int8 v30; // [rsp+50h] [rbp-68h]
  __int64 v31; // [rsp+58h] [rbp-60h] BYREF
  __int64 v32; // [rsp+60h] [rbp-58h] BYREF
  __int64 v33; // [rsp+68h] [rbp-50h]
  __int64 v34; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *v35; // [rsp+78h] [rbp-40h]
  int v36; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v37; // [rsp+C8h] [rbp+10h]
  int v38; // [rsp+D0h] [rbp+18h] BYREF
  unsigned __int8 v39; // [rsp+D8h] [rbp+20h]

  v8 = a3;
  v38 = 0;
  CurrentThread = KeGetCurrentThread();
  v12 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  v13 = CurrentThread->Process[1].Padding[3];
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 + 1084);
    if ( v12 >= v14 )
      v12 = v14;
  }
  if ( v12 < 2 && CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
    v12 = 2;
  v31 = 0LL;
  v32 = 0LL;
  v37 = 0LL;
  v15 = *(_QWORD *)(*((_QWORD *)&Object[2].Next + 1) + 8LL);
  v34 = v15;
  Next = Object[3].Next;
  ++qword_140F8E700;
  if ( !byte_140F8E6E1 && CcTelemetryGlobalData && !dword_140F8E800 && !dword_140F8E804 )
    CcSetTelemetryPeriodicTimer(DueTime);
  if ( v12 <= 0 )
    a4 = 1;
  v39 = a4;
  if ( *a2 + v8 > *(_QWORD *)(v15 + 8) )
    KeBugCheckEx(0x34u, 0x29DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !a5 )
    RtlRaiseStatus(-1073741592);
  Ahead = CcGetNodeForReadAhead(v15);
  v33 = Ahead;
  v18 = (unsigned int)Next->Next;
  v19 = ((__int64)Next->Next & 0x20000) == 0;
  v36 = (__int64)Next->Next & 0x20000;
  v20 = a7;
  if ( !v19 )
    CcScheduleReadAheadNuma(Object, a2, v8, a7, Ahead);
  v21 = 11988;
  if ( !a4 )
    v21 = 11984;
  __incgsdword(v21);
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  if ( v20 && v20 != KeGetCurrentThread() )
    IoReferenceIoAttributionFromThread(v20, (unsigned __int64 *)&v31);
  v30 = CcMapAndCopyFromCache((_DWORD)Object, *a2, v8, a4, a5, (__int64)&v38, (v18 >> 18) & 7, v31, (__int64)&v32);
  if ( v30 )
  {
    v35 = KeGetCurrentThread();
    __addgsdword(0x8984u, v35[1].Timer.DueTime.HighPart);
    if ( (*(_DWORD *)(v15 + 152) & 0x40000000) == 0 )
    {
      if ( v38 && !v36 )
        CcScheduleReadAheadNuma(Object, a2, v8, v20, v33);
      CcUpdateReadHistory((__int64)Object, a2, v8);
    }
    v22 = a6;
    *a6 = 0;
    *((_QWORD *)v22 + 1) = v8;
  }
  else
  {
    __incgsdword(0x2ED8u);
  }
  if ( v31 )
    IoDiskIoAttributionDereference(v31);
  if ( !byte_140F8E6E1 )
  {
    v23 = 29LL;
    v24 = (_QWORD *)(*(_QWORD *)(v15 + 512) + 232LL);
    if ( v30 )
    {
      v25 = v32;
      if ( v32 )
      {
        v26 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v25) / stru_140F8E6A8.QuadPart;
        v37 = v26;
      }
      else
      {
        v26 = 0LL;
      }
      v27 = 41LL;
      if ( !a4 )
        v27 = 65LL;
      v28 = &v24[v27];
      if ( !a4 )
        v23 = 53LL;
      CcTelemetryBucketizeLatency(v26, &v24[v23], v28);
      if ( a4 )
      {
        ++v24[17];
        if ( v37 > v24[27] )
        {
          v24[27] = v37;
          return v30;
        }
      }
      else
      {
        ++v24[18];
        if ( v37 > v24[28] )
        {
          v24[28] = v37;
          return v30;
        }
      }
    }
    else
    {
      ++*(_QWORD *)(*(_QWORD *)(v15 + 512) + 384LL);
    }
  }
  return v30;
}
