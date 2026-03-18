/*
 * XREFs of MiWriteVadFlags2 @ 0x1403FD470
 * Callers:
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiLockVadCore @ 0x1403FD500 (MiLockVadCore.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiWriteVadFlags2(__int64 a1, int a2, int a3)
{
  unsigned __int8 v6; // di

  if ( a3 )
    v6 = 17;
  else
    v6 = MiLockVadCore(a1, KeGetCurrentIrql() == 2);
  *(_DWORD *)(a1 + 64) = a2;
  if ( !a3 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 48), 0x7FFFFFFCu);
    if ( v6 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
      __writecr8(v6);
    }
  }
}
