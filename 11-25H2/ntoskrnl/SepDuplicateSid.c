/*
 * XREFs of SepDuplicateSid @ 0x1408A3D8C
 * Callers:
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     SepDuplicateTokenUserAndGroups @ 0x140999B80 (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenUserAndGroups @ 0x140AB26B4 (SepSetTokenUserAndGroups.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepDuplicateSid(unsigned __int8 *Src, _QWORD *a2)
{
  int v4; // eax
  unsigned int v5; // ebp
  void *Pool2; // rsi
  unsigned int v7; // eax

  if ( !a2 )
    return 3221225485LL;
  v4 = Src[1];
  *a2 = 0LL;
  v5 = 4 * v4 + 8;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v7 = 4 * Src[1] + 8;
  if ( v7 <= v5 )
    memmove(Pool2, Src, v7);
  *a2 = Pool2;
  return 0LL;
}
