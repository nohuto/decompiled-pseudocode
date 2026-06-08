/*
 * XREFs of sub_14002FB54 @ 0x14002FB54
 * Callers:
 *     sub_14002DC40 @ 0x14002DC40 (sub_14002DC40.c)
 *     sub_14002FE6C @ 0x14002FE6C (sub_14002FE6C.c)
 * Callees:
 *     sub_14000BD08 @ 0x14000BD08 (sub_14000BD08.c)
 *     sub_14000BEA8 @ 0x14000BEA8 (sub_14000BEA8.c)
 *     sub_140034938 @ 0x140034938 (sub_140034938.c)
 */

__int64 __fastcall sub_14002FB54(_DWORD *a1, const char *a2, const wchar_t *a3)
{
  unsigned int v3; // r9d
  __int64 i; // rdx
  unsigned int v7; // esi
  int v9; // [rsp+20h] [rbp-28h]

  v3 = 0;
  if ( a1[2] )
  {
    for ( i = 1LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
    {
      v7 = a1[12 * (unsigned int)i + 2];
      if ( v7 >= a1[12 * (unsigned int)(i - 1) + 2]
        || a1[12 * (unsigned int)i + 3] > a1[12 * (unsigned int)(i - 1) + 3]
        || !v7 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          sub_14000BEA8((__int64)off_140018050->DeviceExtension, i, (__int64)a3, 0x2Au, v9, a3, a2);
        sub_140034938(a1);
        return (unsigned int)-1073741823;
      }
    }
  }
  else
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      sub_14000BD08((__int64)off_140018050->DeviceExtension, (__int64)a2, (__int64)a3, 0x29u, v9, a3, a2);
    return (unsigned int)-1073741811;
  }
  return v3;
}
