/*
 * XREFs of sub_140045EF0 @ 0x140045EF0
 * Callers:
 *     sub_1400392E0 @ 0x1400392E0 (sub_1400392E0.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_14000CC98 @ 0x14000CC98 (sub_14000CC98.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

int __fastcall sub_140045EF0(unsigned int *a1)
{
  int result; // eax
  unsigned int i; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-78h]
  char DstBuf[16]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v10; // [rsp+50h] [rbp-48h]
  char v11; // [rsp+60h] [rbp-38h]

  if ( a1 )
  {
    result = 0;
    *(_OWORD *)DstBuf = 0LL;
    v11 = 0;
    v10 = 0LL;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      if ( LOWORD(off_140018050->DeviceType) )
        result = sub_140003D28(off_140018050->DeviceExtension, 5, 2, 111, (__int64)&unk_140012FE8);
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
        result = sub_140003D28(off_140018050->DeviceExtension, 5, 2, 112, (__int64)&unk_140012FE8);
    }
    for ( i = 0; i < *a1; ++i )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        if ( LOWORD(off_140018050->DeviceType) )
          sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x71u, (__int64)&unk_140012FE8);
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          if ( LOWORD(off_140018050->DeviceType) )
            sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x72u, (__int64)&unk_140012FE8);
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            if ( LOWORD(off_140018050->DeviceType) )
              sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x73u, (__int64)&unk_140012FE8);
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
              sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x74u, (__int64)&unk_140012FE8);
          }
        }
      }
      itoa_s(a1[5 * i + 4], DstBuf, 0x21uLL, 2);
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
        sub_14000CC98((__int64)off_140018050->DeviceExtension, v4, v5, 0x75u, v8, a1[5 * i + 4], DstBuf);
      result = itoa_s(a1[5 * i + 5], DstBuf, 0x21uLL, 2);
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        if ( LOWORD(off_140018050->DeviceType) )
          result = sub_14000CC98((__int64)off_140018050->DeviceExtension, v6, v7, 0x76u, v8, a1[5 * i + 5], DstBuf);
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          if ( LOWORD(off_140018050->DeviceType) )
            result = sub_140003D28(off_140018050->DeviceExtension, 5, 2, 119, (__int64)&unk_140012FE8);
        }
      }
    }
  }
  return result;
}
