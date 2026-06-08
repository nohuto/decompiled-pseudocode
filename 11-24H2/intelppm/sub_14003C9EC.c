/*
 * XREFs of sub_14003C9EC @ 0x14003C9EC
 * Callers:
 *     sub_14003C174 @ 0x14003C174 (sub_14003C174.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 */

__int64 __fastcall sub_14003C9EC(__int64 a1)
{
  bool v2; // zf
  int v3; // ebx
  _QWORD *v4; // rdi
  _QWORD v6[10]; // [rsp+30h] [rbp-29h] BYREF
  int v7; // [rsp+80h] [rbp+27h]
  __int128 *v8; // [rsp+88h] [rbp+2Fh]
  __int128 v9; // [rsp+90h] [rbp+37h] BYREF
  __int64 v10; // [rsp+A0h] [rbp+47h]

  v10 = 0LL;
  v9 = 0LL;
  sub_140010680((char *)v6, 0, 0x60uLL);
  LODWORD(v10) = -1;
  v2 = *(_DWORD *)(a1 + 80) == 0;
  v6[0] = 0x100000001LL;
  v7 = 1;
  v8 = &v9;
  v6[6] = sub_1400046C0;
  v6[7] = a1;
  if ( v2 || !byte_140019A68 )
  {
    v4 = (_QWORD *)(a1 + 1120);
    v3 = PoFxRegisterDevice(*(_QWORD *)a1, v6, a1 + 1120);
    if ( v3 >= 0 )
    {
      PoFxActivateComponent(*v4, 0LL, 0LL);
      PoFxStartDevicePowerManagement(*v4);
    }
    else
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 4u, 0x12u, (__int64)&unk_140014CC8, v3, v6[0]);
      *v4 = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v3;
}
