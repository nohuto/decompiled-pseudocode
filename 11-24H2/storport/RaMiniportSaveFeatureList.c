/*
 * XREFs of RaMiniportSaveFeatureList @ 0x1400559E0
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall RaMiniportSaveFeatureList(__int64 a1, unsigned int a2, const void *a3)
{
  _OWORD *v6; // rcx

  if ( *(_DWORD *)(a1 + 376) )
    return 3221225659LL;
  if ( a2 <= 0x10 )
  {
    v6 = (_OWORD *)(a1 + 380);
    *v6 = 0LL;
    memmove(v6, a3, a2);
    *(_DWORD *)(a1 + 376) = a2;
  }
  *(_BYTE *)(a1 + 248) &= 0xCFu;
  return 0LL;
}
