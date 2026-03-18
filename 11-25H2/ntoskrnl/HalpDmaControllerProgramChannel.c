/*
 * XREFs of HalpDmaControllerProgramChannel @ 0x140332C78
 * Callers:
 *     HalMapTransferEx @ 0x140332780 (HalMapTransferEx.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerProgramChannel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rsi
  unsigned __int8 CurrentIrql; // di
  char v9; // r14
  unsigned __int8 v10; // bl
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx

  v7 = (_QWORD *)a1;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  if ( CurrentIrql == 15 )
    goto LABEL_6;
  v10 = KeGetCurrentIrql();
  __writecr8(*(unsigned __int8 *)(a1 + 176));
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = v10;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  CurrentIrql = v10;
  KxAcquireSpinLock(v7 + 21);
  v11 = *(_QWORD *)(a2 + 360);
  v9 = 1;
  if ( v11 && (*(_DWORD *)(v11 + 12) & 1) != 0 )
  {
    KxReleaseSpinLock(v7 + 21);
    if ( KiIrqlFlags )
    {
      LOBYTE(v15) = v10;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
    }
    __writecr8(v10);
    return 3221225760LL;
  }
  else
  {
LABEL_6:
    v12 = v7[7] + 160LL * *(unsigned int *)(a2 + 380);
    *(_QWORD *)(v12 + 8) = a3;
    *(_QWORD *)(v12 + 16) = a4;
    guard_dispatch_icall_no_overrides(v7[8], *(unsigned int *)(a2 + 380));
    if ( v9 )
    {
      KxReleaseSpinLock(v7 + 21);
      if ( KiIrqlFlags )
      {
        LOBYTE(v14) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
}
