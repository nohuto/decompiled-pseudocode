/*
 * XREFs of KsepGetShimsForDriver @ 0x140A4FF48
 * Callers:
 *     KseDriverLoadImage @ 0x140A4FD90 (KseDriverLoadImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KsepLogInfo @ 0x14048E720 (KsepLogInfo.c)
 *     KsepPoolAllocatePaged @ 0x1404A0CB0 (KsepPoolAllocatePaged.c)
 *     KsepDebugPrint @ 0x1404D3784 (KsepDebugPrint.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140733868 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x1408296B0 (KsepDbGetDriverShims.c)
 *     KsepIsModuleShimmed @ 0x140A50440 (KsepIsModuleShimmed.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A5054C (KsepEngineGetShimsFromRegistry.c)
 *     KsepDbFreeDriverShims @ 0x140AB2B60 (KsepDbFreeDriverShims.c)
 */

__int64 __fastcall KsepGetShimsForDriver(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, _DWORD *a6)
{
  int ShimsFromRegistry; // edi
  __int64 v12; // rcx
  __int64 v13; // r14
  unsigned int v14; // ebx
  _QWORD *Paged; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v19; // rax
  __int64 *v20; // r14
  _QWORD *v21; // rax
  unsigned int v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF

  v23 = 0LL;
  v22 = 0;
  *a5 = 0LL;
  *a6 = 0;
  v24 = 0LL;
  if ( !(unsigned int)KsepIsModuleShimmed(&KseEngine, a3, &v24) )
  {
    ShimsFromRegistry = KsepEngineGetShimsFromRegistry(&KseEngine, a1, &v23, &v22);
    if ( ShimsFromRegistry == -1073741275 )
      ShimsFromRegistry = KsepDbGetDriverShims(a2, a3, a4, &v23, &v22);
    if ( ShimsFromRegistry < 0 )
      goto LABEL_5;
    v13 = v23;
    v14 = v22;
    ShimsFromRegistry = KsepResolveApplicableShimsForDriver(v23, v22);
    if ( ShimsFromRegistry >= 0 )
    {
      Paged = KsepPoolAllocatePaged(0x28uLL);
      v16 = Paged;
      if ( Paged )
      {
        Paged[4] = v13;
        *((_DWORD *)Paged + 6) = v14;
        Paged[2] = a3;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v19 = KeAbPreAcquire((__int64)&qword_140E66840, 0LL);
        v20 = v19;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E66840, 0LL) )
          ExfAcquirePushLockExclusiveEx(&qword_140E66840, v19, (__int64)&qword_140E66840);
        if ( v20 )
          *((_BYTE *)v20 + 10) = 1;
        v21 = (_QWORD *)qword_140E66838;
        if ( *(_UNKNOWN **)qword_140E66838 != &unk_140E66830 )
          __fastfail(3u);
        *v16 = &unk_140E66830;
        v16[1] = v21;
        *v21 = v16;
        qword_140E66838 = (__int64)v16;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E66840, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E66840);
        KeAbPostRelease((ULONG_PTR)&qword_140E66840);
        KeLeaveCriticalRegion();
LABEL_5:
        *a5 = v23;
        *a6 = v22;
        goto LABEL_6;
      }
      ShimsFromRegistry = -1073741670;
    }
    if ( !v13 )
      return (unsigned int)ShimsFromRegistry;
    if ( v14 )
      KsepDbFreeDriverShims(v13, v14);
LABEL_6:
    if ( ShimsFromRegistry >= 0 )
    {
      v17 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      HIDWORD(KsepHistoryMessages[v17]) = 0;
      LODWORD(KsepHistoryMessages[v17]) = 459108;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(7LL, (int)"KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
      KsepLogInfo(7LL, (__int64)"KSE: got shim(s) for driver [%ws]\n", *(_QWORD *)(a1 + 8));
    }
    return (unsigned int)ShimsFromRegistry;
  }
  v12 = v24;
  *a5 = *(_QWORD *)(v24 + 32);
  *a6 = *(_DWORD *)(v12 + 24);
  return 0LL;
}
