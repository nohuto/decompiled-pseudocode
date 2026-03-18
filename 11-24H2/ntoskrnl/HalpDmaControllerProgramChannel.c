/*
 * XREFs of HalpDmaControllerProgramChannel @ 0x140391FD8
 * Callers:
 *     HalMapTransferEx @ 0x140391AE0 (HalMapTransferEx.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaControllerProgramChannel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v8; // rsi
  unsigned __int8 CurrentIrql; // di
  char v10; // r14
  unsigned __int64 v11; // rdx
  unsigned __int8 v12; // bl
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx

  v8 = (_QWORD *)a1;
  CurrentIrql = KeGetCurrentIrql();
  v10 = 0;
  if ( CurrentIrql == 15 )
    goto LABEL_6;
  v11 = *(unsigned __int8 *)(a1 + 176);
  v12 = KeGetCurrentIrql();
  __writecr8(v11);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = v12;
    KiRaiseIrqlProcessIrqlFlags(a1, v11);
  }
  CurrentIrql = v12;
  KxAcquireSpinLock(v8 + 21);
  v13 = *(_QWORD *)(a2 + 360);
  v10 = 1;
  if ( v13 && (*(_DWORD *)(v13 + 12) & 1) != 0 )
  {
    KxReleaseSpinLock(v8 + 21);
    if ( KiIrqlFlags )
    {
      LOBYTE(v17) = v12;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
    }
    __writecr8(v12);
    return 3221225760LL;
  }
  else
  {
LABEL_6:
    v14 = v8[7] + 160LL * *(unsigned int *)(a2 + 380);
    *(_QWORD *)(v14 + 8) = a3;
    *(_QWORD *)(v14 + 16) = a4;
    guard_dispatch_icall_no_overrides(v8[8], *(unsigned int *)(a2 + 380), *(unsigned int *)(a2 + 384), a5);
    if ( v10 )
    {
      KxReleaseSpinLock(v8 + 21);
      if ( KiIrqlFlags )
      {
        LOBYTE(v16) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
}
