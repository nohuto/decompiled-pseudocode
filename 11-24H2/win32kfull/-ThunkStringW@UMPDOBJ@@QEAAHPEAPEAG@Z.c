/*
 * XREFs of ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1401CACB8
 * Callers:
 *     ?UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z @ 0x140334E60 (-UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z.c)
 * Callees:
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D89F0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 */

__int64 __fastcall UMPDOBJ::ThunkStringW(UMPDOBJ *this, unsigned __int16 **a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // r8

  result = 0LL;
  if ( !*a2 )
    return 1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( (*a2)[v3] );
  v4 = v3 + 1;
  if ( v4 < 0x7FFFFFFF )
    return UMPDOBJ::ThunkMemBlock(this, (const void **)a2, 2 * (int)v4);
  return result;
}
