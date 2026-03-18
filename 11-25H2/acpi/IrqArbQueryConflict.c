/*
 * XREFs of IrqArbQueryConflict @ 0x1400A9DD0
 * Callers:
 *     <none>
 * Callees:
 *     IrqArbpQueryConflictIsa @ 0x1400AA46C (IrqArbpQueryConflictIsa.c)
 *     ArbQueryConflict @ 0x1400AB6B0 (ArbQueryConflict.c)
 *     PcisuppIsPciDevice @ 0x1400B1EC4 (PcisuppIsPciDevice.c)
 */

__int64 __fastcall IrqArbQueryConflict(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2[1];
  v6 = 0;
  if ( (*(_BYTE *)(v2 + 4) & 0x20) != 0 )
    return IrqArbpQueryConflictIsa(a1, a2);
  if ( (int)PcisuppIsPciDevice(*a2, &v6) < 0 )
    return ArbQueryConflict(a1, a2);
  if ( !v6 )
    return IrqArbpQueryConflictIsa(a1, a2);
  a2[2] = 0LL;
  return 0LL;
}
