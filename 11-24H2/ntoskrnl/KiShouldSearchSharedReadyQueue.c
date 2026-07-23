/*
 * XREFs of KiShouldSearchSharedReadyQueue @ 0x140426AF0
 * Callers:
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404F6E34 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldSearchSharedReadyQueue(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v4; // r8
  __int64 v5; // rax

  v2 = *(_BYTE *)(a1 + 35);
  if ( (v2 & 0x10) == 0 )
    return 1LL;
  v4 = *(_QWORD *)(a1 + 192);
  if ( KiForceParkingConfiguration && (v2 & 0x20) != 0 )
    v5 = ~*(_QWORD *)(v4 + 104);
  else
    v5 = *(_QWORD *)(v4 + 80);
  return (v5 & *(_QWORD *)(a2 + 712)) == 0;
}
