/*
 * XREFs of sub_180084F18 @ 0x180084F18
 * Callers:
 *     sub_180086554 @ 0x180086554 (sub_180086554.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 */

__int64 __fastcall sub_180084F18(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *i; // r8
  __int64 v8; // rax
  unsigned __int8 *j; // rcx
  _BYTE v11[256]; // [rsp+20h] [rbp-118h] BYREF

  if ( a2 )
  {
    memset(v11, 0, sizeof(v11));
    for ( i = " \t"; i != &asc_180105CD0[a5]; ++i )
    {
      v8 = (unsigned __int8)*i;
      v11[v8] = 1;
    }
    for ( j = a1; j < &a1[a2]; ++j )
    {
      if ( !v11[*j] )
        return j - a1;
    }
  }
  return -1LL;
}
