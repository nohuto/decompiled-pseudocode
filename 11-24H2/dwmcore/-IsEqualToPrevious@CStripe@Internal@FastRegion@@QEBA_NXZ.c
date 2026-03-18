/*
 * XREFs of ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1801C3660
 * Callers:
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002B300 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002DB30 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180030720 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CStripe::IsEqualToPrevious(FastRegion::Internal::CStripe *this)
{
  _DWORD *v1; // rax
  __int64 v2; // r9
  __int64 i; // rdx

  v1 = (_DWORD *)((char *)this + *((int *)this + 1));
  v2 = (int)((*((int *)this + 1) - (*((int *)this - 1) - 8LL)) >> 2);
  if ( v2 != (*((int *)this + 3) - (__int64)*((int *)this + 1) + 8) >> 2 )
    return 0;
  for ( i = 0LL; i < v2; ++i )
  {
    if ( *v1 != *(_DWORD *)((char *)v1 + *((int *)this - 1) - 8LL - *((int *)this + 1)) )
      return 0;
    ++v1;
  }
  return 1;
}
