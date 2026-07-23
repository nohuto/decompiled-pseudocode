/*
 * XREFs of MiBetterDriverPageNeeded @ 0x140471FB0
 * Callers:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 */

_BOOL8 __fastcall MiBetterDriverPageNeeded(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9

  if ( (unsigned int)MiGetPfnSlabType(48 * a2 - 0x220000000000LL) != 9 )
    return 0LL;
  if ( v2 == -1 )
  {
    if ( *(_QWORD *)(v4 + 16696) && v3 >= *(_QWORD *)(v4 + 16680) )
      return 0LL;
  }
  else if ( (unsigned int)MiGetPfnSlabType(v5 + 48 * v2) == 9 )
  {
    return v8 < v7;
  }
  return 1LL;
}
