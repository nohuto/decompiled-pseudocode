/*
 * XREFs of CmpGetSubKeyCountForKcbStack @ 0x1409077DC
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140908F00 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x140909054 (CmpStartKeyNodeStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140909284 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x14090A4AC (CmpKeyNodeStackEntryInitialize.c)
 *     CmpCleanupKeyNodeStack @ 0x14090A6C8 (CmpCleanupKeyNodeStack.c)
 */

__int64 __fastcall CmpGetSubKeyCountForKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // r8
  __int64 v6; // r8
  __int64 v7; // r9
  int started; // ebx
  _BYTE v10[8]; // [rsp+20h] [rbp-78h] BYREF
  char v11; // [rsp+28h] [rbp-70h] BYREF

  memset_0(v10, 0, 0x50uLL);
  v5 = &v11;
  do
  {
    CmpKeyNodeStackEntryInitialize(v5);
    v5 = (char *)(v6 + 32);
  }
  while ( v7 != 1 );
  started = CmpStartKeyNodeStack(v10, *(unsigned __int16 *)(a1 + 2));
  if ( started >= 0 )
  {
    CmpPopulateKeyNodeStackFromKcbStack(v10, a1, 0LL);
    started = CmpGetSubKeyCountForKeyNodeStack(v10, a3);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack(v10);
  return (unsigned int)started;
}
