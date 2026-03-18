/*
 * XREFs of KsepGetShimsForDriver @ 0x140959F74
 * Callers:
 *     KseDriverLoadImage @ 0x140959DBC (KseDriverLoadImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KsepDebugPrint @ 0x1402CA2D8 (KsepDebugPrint.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KsepLogInfo @ 0x14048E6C8 (KsepLogInfo.c)
 *     KsepPoolAllocatePaged @ 0x1404A03F0 (KsepPoolAllocatePaged.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14073F888 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDbFreeDriverShims @ 0x140959C50 (KsepDbFreeDriverShims.c)
 *     KsepIsModuleShimmed @ 0x14095A46C (KsepIsModuleShimmed.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14095A578 (KsepEngineGetShimsFromRegistry.c)
 *     KsepDbGetDriverShims @ 0x14095B0A8 (KsepDbGetDriverShims.c)
 */

__int64 __fastcall KsepGetShimsForDriver(__int64 a1, int a2, __int64 a3, int a4, _QWORD *a5, _DWORD *a6)
{
  int v6; // ebx
  int ShimsFromRegistry; // edi
  __int64 v12; // rcx
  _QWORD *v13; // r14
  unsigned int v14; // ebx
  _QWORD *Paged; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // r14
  _QWORD *v21; // rax
  unsigned int v22; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF

  v6 = a3;
  v23 = 0LL;
  v22 = 0;
  *a5 = 0LL;
  *a6 = 0;
  v24 = 0LL;
  if ( !(unsigned int)KsepIsModuleShimmed(&KseEngine, a3, &v24) )
  {
    ShimsFromRegistry = KsepEngineGetShimsFromRegistry(&KseEngine, a1, &v23, &v22);
    if ( ShimsFromRegistry == -1073741275 )
      ShimsFromRegistry = KsepDbGetDriverShims(a2, v6, a4, (unsigned int)&v23, (__int64)&v22);
    if ( ShimsFromRegistry < 0 )
      goto LABEL_5;
    v13 = v23;
    v14 = v22;
    ShimsFromRegistry = KsepResolveApplicableShimsForDriver((__int64)v23, v22);
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
        v19 = KeAbPreAcquire((__int64)&qword_140E66B10, 0LL);
        v20 = v19;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E66B10, 0LL) )
          ExfAcquirePushLockExclusiveEx(&qword_140E66B10, (__int64)v19, (__int64)&qword_140E66B10);
        if ( v20 )
          *((_BYTE *)v20 + 10) = 1;
        v21 = (_QWORD *)qword_140E66B08;
        if ( *(_UNKNOWN **)qword_140E66B08 != &unk_140E66B00 )
          __fastfail(3u);
        *v16 = &unk_140E66B00;
        v16[1] = v21;
        *v21 = v16;
        qword_140E66B08 = (__int64)v16;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E66B10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E66B10);
        KeAbPostRelease((ULONG_PTR)&qword_140E66B10);
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
