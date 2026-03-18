/*
 * XREFs of CcReferenceVacbArray @ 0x1403B6224
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1404A08B8 (CcGetRandomVacbArrayWithReference.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

_DWORD *__fastcall CcReferenceVacbArray(unsigned int a1)
{
  _DWORD *v1; // r8
  _DWORD *v2; // r9

  v1 = 0LL;
  v2 = *(_DWORD **)(CcVacbArrays + 8LL * a1);
  if ( v2 )
  {
    ++v2[1];
    v1 = v2;
    if ( *v2 != a1 )
      KeBugCheckEx(0x34u, 0x176uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  return v1;
}
