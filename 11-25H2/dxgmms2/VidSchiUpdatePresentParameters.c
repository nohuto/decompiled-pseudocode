/*
 * XREFs of VidSchiUpdatePresentParameters @ 0x140029D20
 * Callers:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x14002934C (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x14002906C (VidSchiFlushPendingTokenList.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x14002A1D8 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiUpdatePresentParameters(struct _VIDSCH_GLOBAL *a1, int *a2)
{
  unsigned int v2; // edi
  _OWORD *v3; // r14
  __int64 v4; // rax
  unsigned int v6; // ebx
  __int64 v7; // r13
  __int128 v8; // xmm0
  __int64 v10; // r15
  __int128 v11; // xmm1
  bool v12; // zf
  int v13; // eax
  char v14; // dl
  char v15; // cl
  int v16; // eax
  char v17; // cl
  __int64 result; // rax
  _OWORD *v19; // rbx
  const void *v20; // rcx
  unsigned int i; // edx
  __int64 v22; // r8
  __int64 v23; // rax
  __int128 v24; // xmm6
  int v25; // ebx
  __int128 v26; // xmm7
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // cl
  int v32; // eax
  unsigned int v33; // r11d
  char v34; // cl
  unsigned int v35; // [rsp+38h] [rbp-99h]
  unsigned int v36; // [rsp+3Ch] [rbp-95h]
  char v37; // [rsp+40h] [rbp-91h]
  struct _VIDSCH_GLOBAL *v38; // [rsp+48h] [rbp-89h] BYREF
  _QWORD v39[2]; // [rsp+50h] [rbp-81h] BYREF
  char v40; // [rsp+60h] [rbp-71h]
  int v41; // [rsp+64h] [rbp-6Dh]
  __int64 v42; // [rsp+68h] [rbp-69h]
  char *v43; // [rsp+70h] [rbp-61h]
  struct _KLOCK_QUEUE_HANDLE v44; // [rsp+78h] [rbp-59h] BYREF
  __int16 v45; // [rsp+90h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-39h] BYREF
  __int128 Source2; // [rsp+B0h] [rbp-21h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-11h] BYREF

  v4 = (unsigned int)a2[29];
  v6 = *a2;
  v7 = (unsigned int)v4;
  v8 = *(_OWORD *)(a2 + 109);
  v36 = a2[29];
  v10 = *((_QWORD *)a1 + v4 + 429);
  v11 = *(_OWORD *)(a2 + 113);
  LOBYTE(v4) = (*a2 & 0x800000) != 0;
  v42 = v10;
  v37 = v4;
  Source2 = v8;
  v6 >>= 31;
  v48 = v11;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 248, &LockHandle);
  v12 = (_BYTE)v6 == *(_BYTE *)(v10 + 3200);
  *(_BYTE *)(v10 + 3200) = v6;
  LOBYTE(v2) = !v12;
  if ( !(_BYTE)v6
    || (v3 = (_OWORD *)(v10 + 3204),
        v19 = (_OWORD *)(v10 + 3220),
        v20 = (const void *)(v10 + 3204),
        LODWORD(v10) = 16,
        RtlCompareMemory(v20, &Source2, 0x10uLL) == 16)
    && RtlCompareMemory(v19, &v48, 0x10uLL) == 16 )
  {
    if ( !(_BYTE)v2 )
    {
LABEL_3:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      LODWORD(v3) = a2[150] & 0x3FF;
      if ( *((_BYTE *)a1 + 156) )
        v2 = ((unsigned int)a2[150] >> 10) & 0x3FF;
      else
        v2 = 0;
      v12 = !_BitScanForward((unsigned int *)&v13, (unsigned int)v3);
      v14 = -1;
      v15 = -1;
      if ( !v12 )
        v15 = v13;
      LODWORD(v7) = 0;
      v12 = !_BitScanForward((unsigned int *)&v16, v2);
      LODWORD(v10) = v15;
      v17 = -1;
      if ( !v12 )
        v17 = v16;
      result = (unsigned int)v17;
      v35 = v17;
      goto LABEL_10;
    }
  }
  else
  {
    *v3 = Source2;
    *v19 = v48;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)a1 + 38) )
      goto LABEL_3;
    v22 = *(int *)(304LL * i + *((_QWORD *)a1 + v7 + 429) + 188);
    if ( (int)v22 > -1 && *(_DWORD *)(160 * v22 + *((_QWORD *)a1 + 445) + 112) == 2 )
      break;
  }
  g_DxgMmsBugcheckExportIndex = 1;
  LODWORD(result) = WdLogSingleEntry5(0LL, 281LL, 0x100000LL, 0LL, v7, a1);
  WdLogGlobalForLineNumber = 906;
  do
  {
    if ( (unsigned int)v10 >= (unsigned int)result )
    {
      v34 = v14;
      v2 &= ~(1 << result);
      v12 = !_BitScanForward((unsigned int *)&result, v2);
      if ( !v12 )
        v34 = result;
      result = (unsigned int)v34;
      v35 = v34;
    }
    else
    {
      v23 = (unsigned int)v7 * ((8 * a2[152] + 231) & 0xFFFFFFF8);
      v24 = *(_OWORD *)((char *)a2 + v23 + 760);
      v25 = *(int *)((char *)a2 + v23 + 792);
      v26 = *(_OWORD *)((char *)a2 + v23 + 776);
      v45 = 0;
      v43 = (char *)a1 + 1984;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 248, &v44);
      LOBYTE(v45) = 1;
      v39[1] = v39;
      v39[0] = v39;
      v38 = a1;
      v40 = 0;
      v41 = 2;
      v27 = 304LL * (unsigned int)v10;
      v28 = v42;
      *(_OWORD *)(v27 + v42 + 152) = v24;
      *(_OWORD *)(v27 + v28 + 168) = v26;
      *(_DWORD *)(v27 + v28 + 184) = v25;
      v29 = *(int *)(v27 + *((_QWORD *)a1 + v36 + 429) + 188);
      if ( (int)v29 > -1 )
      {
        v30 = *((_QWORD *)a1 + 445) + 160 * v29;
        if ( v30 )
        {
          if ( *(_DWORD *)(v30 + 112) == 1 )
          {
            *(_BYTE *)(v30 + 108) = v37;
            *(_BYTE *)(v30 + 96) = 1;
            if ( VidSchiCheckPlaneIndependentFlipCondition(a1, v36, v10) )
              VidSchiFlushPendingTokenList((struct HwQueueStagingList *)&v38, a1, v33, v10);
          }
        }
      }
      if ( !v40 && v41 )
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v38, 0LL);
      if ( (_BYTE)v45 )
      {
        if ( HIBYTE(v45) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v44);
        else
          KeReleaseInStackQueuedSpinLock(&v44);
      }
      v14 = -1;
      v31 = -1;
      LODWORD(v3) = ~(1 << v10) & (unsigned int)v3;
      v12 = !_BitScanForward((unsigned int *)&v32, (unsigned int)v3);
      if ( !v12 )
        v31 = v32;
      result = v35;
      LODWORD(v10) = v31;
    }
    LODWORD(v7) = v7 + 1;
LABEL_10:
    ;
  }
  while ( (_DWORD)v3 || v2 );
  return result;
}
