/*
 * XREFs of sub_140045018 @ 0x140045018
 * Callers:
 *     sub_140038BD4 @ 0x140038BD4 (sub_140038BD4.c)
 *     sub_14003FE54 @ 0x14003FE54 (sub_14003FE54.c)
 * Callees:
 *     sub_140004388 @ 0x140004388 (sub_140004388.c)
 *     sub_140005F24 @ 0x140005F24 (sub_140005F24.c)
 */

__int64 __fastcall sub_140045018(int *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // edx
  unsigned int i; // r11d
  _DWORD *v4; // r14
  __int64 v5; // rax
  _DWORD *v7; // r11
  __int64 v8; // rax
  int v9; // eax
  unsigned __int16 v10; // r9
  unsigned __int16 v11; // r9

  v1 = *((_QWORD *)a1 + 1);
  v2 = 0;
  if ( !v1 )
  {
LABEL_2:
    for ( i = 0; ; ++i )
    {
      if ( i >= a1[7] )
        return v2;
      v4 = *(_DWORD **)(*(_QWORD *)&a1[4 * i + 10] + 1144LL);
      if ( (unsigned int)LOBYTE(a1[4 * i + 12]) >= *v4 )
        break;
      if ( !BYTE2(a1[4 * i + 12]) )
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          return (unsigned int)-1073741811;
        v11 = 90;
        goto LABEL_28;
      }
      if ( !v1 )
      {
        v5 = *((unsigned __int8 *)a1 + 16);
        if ( (unsigned int)v5 >= *v4 )
        {
          if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
            return (unsigned int)-1073741811;
          v10 = 92;
LABEL_16:
          v9 = *a1;
LABEL_17:
          sub_140005F24((__int64)off_140018050->DeviceExtension, 2u, 1u, v10, (__int64)&unk_1400145E8, v9);
          return (unsigned int)-1073741811;
        }
        if ( (v4[3 * v5 + 1] & 1) == 0 )
        {
          if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
            return (unsigned int)-1073741811;
          v10 = 93;
          goto LABEL_16;
        }
      }
    }
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return (unsigned int)-1073741811;
    v11 = 89;
LABEL_28:
    sub_140004388((__int64)off_140018050->DeviceExtension, 2u, 1u, v11, (__int64)&unk_1400145E8, *a1, i);
    return (unsigned int)-1073741811;
  }
  v7 = *(_DWORD **)(v1 + 1144);
  v8 = *((unsigned __int8 *)a1 + 16);
  if ( (unsigned int)v8 < *v7 )
  {
    if ( (v7[3 * v8 + 1] & 1) == 0 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v10 = 88;
        goto LABEL_16;
      }
      return (unsigned int)-1073741811;
    }
    goto LABEL_2;
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v9 = *a1;
    v10 = 87;
    goto LABEL_17;
  }
  return (unsigned int)-1073741811;
}
