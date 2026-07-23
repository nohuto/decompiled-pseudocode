/*
 * XREFs of CmpValueEnumStackStartFromKcbStack @ 0x14090804C
 * Callers:
 *     CmEnumerateValueFromLayeredKey @ 0x1408E3094 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140458108 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140908F00 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x140909054 (CmpStartKeyNodeStack.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x14090A4AC (CmpKeyNodeStackEntryInitialize.c)
 *     CmpCleanupKeyNodeStack @ 0x14090A6C8 (CmpCleanupKeyNodeStack.c)
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
    CmpKeyNodeStackEntryInitialize(v6);
    v6 = (char *)(v7 + 32);
  }
  while ( v8 != 1 );
  started = CmpStartKeyNodeStack(&v11, *(unsigned __int16 *)(a2 + 2));
  if ( started >= 0 )
  {
    CmpPopulateKeyNodeStackFromKcbStack(&v11, a2, a3);
    started = CmpValueEnumStackStartFromKeyNodeStack(a1, &v11);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack(&v11);
  return (unsigned int)started;
}
