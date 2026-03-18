/*
 * XREFs of MiCheckSameSlabType @ 0x140430B10
 * Callers:
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x140480E20 (MiJumpStackTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiCheckSameSlabType(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 v5; // rcx
  unsigned __int8 v7; // r9
  unsigned __int8 v8; // cl

  if ( a2 != a4 )
    return 0LL;
  if ( !byte_140E3CAE6 )
    return 1LL;
  v5 = (0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) >> 9;
  if ( !*(_BYTE *)(qword_140E3D140 + 2 * v5) )
    return 1LL;
  if ( *(_BYTE *)(qword_140E3D140 + 2 * v5) != 9 )
    return 1LL;
  v7 = *(_BYTE *)(qword_140E3D140 + 2 * v5 + 1) & 0x7F;
  v8 = *(_BYTE *)(qword_140E3D140 + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4)) >> 9) + 1) & 0x7F;
  if ( v7 == v8 )
    return 1LL;
  if ( !a5 )
    return 0LL;
  if ( v7 >= 0x40u )
    return 1LL;
  return v8 >= 0x40u;
}
