/*
 * XREFs of HalpDmaControllerProgramChannel @ 0x14038B908
 * Callers:
 *     HalMapTransferEx @ 0x14038B410 (HalMapTransferEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerProgramChannel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rsi
  unsigned __int8 CurrentIrql; // di
  char v9; // r14
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // bl
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx

  v7 = (_QWORD *)a1;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  if ( CurrentIrql == 15 )
    goto LABEL_6;
  v10 = *(unsigned __int8 *)(a1 + 176);
  v11 = KeGetCurrentIrql();
  __writecr8(v10);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = v11;
    KiRaiseIrqlProcessIrqlFlags(a1, v10);
  }
  CurrentIrql = v11;
  KxAcquireSpinLock(v7 + 21);
  v12 = *(_QWORD *)(a2 + 360);
  v9 = 1;
  if ( v12 && (*(_DWORD *)(v12 + 12) & 1) != 0 )
  {
    KxReleaseSpinLock(v7 + 21);
    if ( KiIrqlFlags )
    {
      LOBYTE(v16) = v11;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
    }
    __writecr8(v11);
    return 3221225760LL;
  }
  else
  {
LABEL_6:
    v13 = v7[7] + 160LL * *(unsigned int *)(a2 + 380);
    *(_QWORD *)(v13 + 8) = a3;
    *(_QWORD *)(v13 + 16) = a4;
    guard_dispatch_icall_no_overrides(v7[8], *(unsigned int *)(a2 + 380));
    if ( v9 )
    {
      KxReleaseSpinLock(v7 + 21);
      if ( KiIrqlFlags )
      {
        LOBYTE(v15) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
}
