/*
 * XREFs of sub_14002FD80 @ 0x14002FD80
 * Callers:
 *     sub_14002F738 @ 0x14002F738 (sub_14002F738.c)
 * Callees:
 *     sub_14000AFD8 @ 0x14000AFD8 (sub_14000AFD8.c)
 *     sub_14000B1C4 @ 0x14000B1C4 (sub_14000B1C4.c)
 */

__int64 __fastcall sub_14002FD80(const wchar_t *a1, unsigned int *a2, const wchar_t *a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // r10d
  __int64 i; // rdx
  int v9; // [rsp+20h] [rbp-38h]

  v5 = -1073741823;
  if ( a2 && a4 )
  {
    v6 = *a2;
    if ( *a2 == *a4 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= v6 )
          return 0;
        if ( a2[5 * i + 1] != a4[5 * i + 1] )
          break;
      }
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_14000B1C4((__int64)off_140018050->DeviceExtension, i, (__int64)a3, (__int64)a4, v9, a1, a3);
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      sub_14000AFD8((__int64)off_140018050->DeviceExtension, (__int64)a2, (__int64)a3, 0x49u, v9, a1, a3);
    }
  }
  return v5;
}
