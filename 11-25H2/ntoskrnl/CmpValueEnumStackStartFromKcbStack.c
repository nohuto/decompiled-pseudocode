/*
 * XREFs of CmpValueEnumStackStartFromKcbStack @ 0x14097648C
 * Callers:
 *     CmEnumerateValueFromLayeredKey @ 0x14083F9D0 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14046346C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x14097406C (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x1409741C0 (CmpStartKeyNodeStack.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140975744 (CmpKeyNodeStackEntryInitialize.c)
 *     CmpCleanupKeyNodeStack @ 0x140975960 (CmpCleanupKeyNodeStack.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  char *v6; // r9
  __int64 v7; // r9
  __int64 v8; // r10
  int started; // ebx
  __int16 v11; // [rsp+20h] [rbp-78h] BYREF
  char v12; // [rsp+28h] [rbp-70h] BYREF

  memset_0(&v11, 0, 0x50uLL);
  v6 = &v12;
  do
  {
    CmpKeyNodeStackEntryInitialize((__int64)v6);
    v6 = (char *)(v7 + 32);
  }
  while ( v8 != 1 );
  started = CmpStartKeyNodeStack((__int64)&v11, *(_WORD *)(a2 + 2));
  if ( started >= 0 )
  {
    CmpPopulateKeyNodeStackFromKcbStack((__int64)&v11, a2, a3);
    started = CmpValueEnumStackStartFromKeyNodeStack(a1, &v11);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)&v11);
  return (unsigned int)started;
}
