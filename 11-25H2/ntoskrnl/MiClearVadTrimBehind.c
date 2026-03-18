/*
 * XREFs of MiClearVadTrimBehind @ 0x1402A3230
 * Callers:
 *     MiDeprioritizeVad @ 0x1402A2F94 (MiDeprioritizeVad.c)
 *     MiInitializePartialVad @ 0x140902310 (MiInitializePartialVad.c)
 * Callees:
 *     MiLockVadCore @ 0x1402A3860 (MiLockVadCore.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiClearVadTrimBehind(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  unsigned __int8 v5; // bp

  v3 = *(_DWORD *)(a1 + 64) & 0xFFFFFFFD;
  if ( a2 )
    v5 = 17;
  else
    v5 = MiLockVadCore(a1, KeGetCurrentIrql() == 2);
  *(_DWORD *)(a1 + 64) = v3;
  if ( !a2 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 48), 0x7FFFFFFCu);
    if ( v5 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
      __writecr8(v5);
    }
  }
}
