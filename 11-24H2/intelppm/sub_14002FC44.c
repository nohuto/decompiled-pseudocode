/*
 * XREFs of sub_14002FC44 @ 0x14002FC44
 * Callers:
 *     sub_14002F738 @ 0x14002F738 (sub_14002F738.c)
 * Callees:
 *     sub_14000B7E0 @ 0x14000B7E0 (sub_14000B7E0.c)
 *     sub_14000BA5C @ 0x14000BA5C (sub_14000BA5C.c)
 */

__int64 __fastcall sub_14002FC44(const wchar_t *a1, unsigned int *a2, const wchar_t *a3, _DWORD *a4, __int64 a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // r10d
  __int64 i; // rdx
  int v10; // [rsp+20h] [rbp-48h]

  v6 = -1073741823;
  if ( a2 && a4 )
  {
    v7 = *a2;
    if ( *a2 == *a4 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= v7 )
          return 0;
        if ( a2[12 * i + 2] != a4[12 * i + 2] )
          break;
      }
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_14000BA5C((__int64)off_140018050->DeviceExtension, i, (__int64)a3, (__int64)a4, v10, a1, a3, a5);
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      sub_14000B7E0((__int64)off_140018050->DeviceExtension, (__int64)a2, (__int64)a3, (__int64)a4, v10, a1, a3, a5);
    }
  }
  return v6;
}
