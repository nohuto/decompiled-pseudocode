/*
 * XREFs of ViPendingDelayCompletion @ 0x140B93E88
 * Callers:
 *     VfPendingMoreProcessingRequired @ 0x140BA9000 (VfPendingMoreProcessingRequired.c)
 * Callees:
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeInitializeTimerEx @ 0x1404449F0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140B93FF0 (ViPendingQueuePassiveLevelCompletion.c)
 */

__int64 __fastcall ViPendingDelayCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // esi
  __int64 Pool2; // rax
  _DWORD *v11; // rdi
  struct _KTIMER *v12; // r14
  __int64 v13; // rbx
  void *v14; // rbx

  v8 = 1;
  Pool2 = ExAllocatePool2(0x40uLL, 0xB0uLL, 0x64707249uLL);
  v11 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    v12 = (struct _KTIMER *)(Pool2 + 104);
    KeInitializeTimerEx((PKTIMER)(Pool2 + 104), SynchronizationTimer);
    *(_DWORD *)(a2 + 56) |= 0x10u;
    *((_QWORD *)v11 + 4) = a5;
    *(_QWORD *)v11 = a2;
    *((_QWORD *)v11 + 1) = a1;
    *((_QWORD *)v11 + 3) = a4;
    *((_QWORD *)v11 + 2) = a3;
    *((_BYTE *)v11 + 172) = *(_BYTE *)(a2 + 185);
    v13 = *(_QWORD *)(a2 + 216);
    if ( v13 && (v14 = *(void **)(v13 + 40)) != 0LL )
      PsReferenceSiloContext(v14);
    else
      v14 = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      v11[42] = 2;
      KeInitializeDpc((PRKDPC)(v11 + 10), (PKDEFERRED_ROUTINE)ViPendingCompleteAtDPC, v11);
      KiSetTimerEx((__int64)v12, -3000LL, 0, 0, (__int64)(v11 + 10));
    }
    else
    {
      v11[42] = 1;
      KiSetTimerEx((__int64)v12, -3000LL, 0, 0, 0LL);
      v8 = ViPendingQueuePassiveLevelCompletion(v11);
      if ( !v8 )
      {
        KeCancelTimer(v12);
        ExFreePoolWithTag(v11, 0);
        *(_DWORD *)(a2 + 56) &= ~0x10u;
        if ( v14 )
          ObfDereferenceObject(v14);
      }
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
