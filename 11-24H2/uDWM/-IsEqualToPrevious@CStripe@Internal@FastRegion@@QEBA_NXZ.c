/*
 * XREFs of ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x180064CFC
 * Callers:
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180064518 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::Internal::CStripe::IsEqualToPrevious(FastRegion::Internal::CStripe *this)
{
  char *v1; // rdx
  char *v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8

  v1 = (char *)this + *((int *)this + 1);
  v2 = (char *)this + *((int *)this - 1) - 8;
  v3 = (int)((*((int *)this + 1) - (*((int *)this - 1) - 8LL)) >> 2);
  if ( v3 != (*((int *)this + 3) - (__int64)*((int *)this + 1) + 8) >> 2 )
    return 0;
  v4 = 0LL;
  v5 = v2 - v1;
  while ( v4 < v3 )
  {
    if ( *(_DWORD *)v1 != *(_DWORD *)&v1[v5] )
      return 0;
    ++v4;
    v1 += 4;
  }
  return 1;
}
