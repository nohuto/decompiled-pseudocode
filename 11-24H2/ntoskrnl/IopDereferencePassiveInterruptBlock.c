/*
 * XREFs of IopDereferencePassiveInterruptBlock @ 0x14045704C
 * Callers:
 *     IopPassiveInterruptWorker @ 0x140456EC0 (IopPassiveInterruptWorker.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1406FC0A4 (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     IopReleaseGlobalPassiveInterruptListLock @ 0x140457110 (IopReleaseGlobalPassiveInterruptListLock.c)
 *     IopReleasePassiveInterruptBlockLock @ 0x14045714C (IopReleasePassiveInterruptBlockLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x140457184 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferencePassiveInterruptBlock(PVOID P)
{
  char v2; // di
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  KSPIN_LOCK v7; // rcx
  PVOID *v8; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  v2 = 0;
  IopAcquireGlobalPassiveInterruptListLock(&v9);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v3, 12LL);
  }
  KxAcquireSpinLock((PKSPIN_LOCK)P + 7);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 48, 0xFFFFFFFF) == 1 )
  {
    v7 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v8 = (PVOID *)*((_QWORD *)P + 1), *v8 != P) )
      __fastfail(3u);
    *v8 = (PVOID)v7;
    v2 = 1;
    *(_QWORD *)(v7 + 8) = v8;
  }
  LOBYTE(v5) = CurrentIrql;
  IopReleasePassiveInterruptBlockLock(P, v5);
  LOBYTE(v6) = v9;
  IopReleaseGlobalPassiveInterruptListLock(v6);
  if ( v2 )
    ExFreePoolWithTag(P, 0x6269704Bu);
}
