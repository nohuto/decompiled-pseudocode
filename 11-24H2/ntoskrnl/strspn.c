/*
 * XREFs of strspn @ 0x1404FD380
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

size_t __cdecl strspn(const char *Str, const char *Control)
{
  const char *v2; // r9
  int v3; // r8d
  unsigned int v4; // ecx
  _OWORD v6[2]; // [rsp+0h] [rbp-38h] BYREF

  v2 = Str;
  memset(v6, 0, sizeof(v6));
  v3 = 0;
  while ( *Control )
    _bittestandset((signed __int32 *)v6, *(unsigned __int8 *)Control++);
  v4 = *(unsigned __int8 *)Str;
  if ( !(_BYTE)v4 )
    return 0LL;
  if ( ((*((_BYTE *)v6 + ((unsigned __int64)v4 >> 3)) >> (v4 & 7)) & 1) != 0 )
  {
    do
    {
      ++v2;
      ++v3;
    }
    while ( ((*((_BYTE *)v6 + ((unsigned __int64)*(unsigned __int8 *)v2 >> 3)) >> (*v2 & 7)) & 1) != 0 );
  }
  return v3;
}
