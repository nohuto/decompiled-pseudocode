/*
 * XREFs of sub_140027F04 @ 0x140027F04
 * Callers:
 *     sub_14002C480 @ 0x14002C480 (sub_14002C480.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 */

__int64 __fastcall sub_140027F04(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  int v4; // eax
  __int64 i; // rdi
  __int128 *v6; // rax
  __int128 v7; // xmm0
  int v8; // ebx
  unsigned __int16 v9; // r9
  unsigned int j; // edi
  __int128 v12; // xmm0
  __int64 v13; // rsi
  __int64 v14; // [rsp+30h] [rbp-A1h]
  _QWORD v15[2]; // [rsp+38h] [rbp-99h] BYREF
  __int128 v16; // [rsp+48h] [rbp-89h] BYREF
  __int128 v17; // [rsp+58h] [rbp-79h]
  __int128 v18; // [rsp+68h] [rbp-69h]
  __int64 v19; // [rsp+78h] [rbp-59h]
  int v20; // [rsp+80h] [rbp-51h]
  _OWORD v21[2]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-29h]
  void *v23; // [rsp+B0h] [rbp-21h]
  _QWORD v24[5]; // [rsp+B8h] [rbp-19h]
  __int128 v25; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+F0h] [rbp+1Fh]
  __int16 v27; // [rsp+F8h] [rbp+27h]

  v15[0] = 1703960LL;
  v19 = 0LL;
  v20 = 0;
  v22 = 0LL;
  v27 = 0;
  v15[1] = &v25;
  v23 = &unk_140013448;
  v24[0] = a1 + 166;
  v24[1] = &unk_140013458;
  v24[2] = a1 + 170;
  v24[3] = &unk_140013498;
  v16 = 0LL;
  v24[4] = a1 + 174;
  v17 = 0LL;
  v18 = 0LL;
  memset(v21, 0, sizeof(v21));
  v25 = xmmword_140013478;
  v26 = 0x49004D00570052LL;
  v2 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(qword_140019120 + 1632))(qword_140019128, a1);
  a1[172] = 0;
  v3 = v2;
  a1[168] = 4;
  a1[176] = 4;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(qword_140019120 + 328))(qword_140019128, v2, v15);
  if ( v4 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 4u, 0xAu, (__int64)&unk_140013468, v4);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 4 )
    {
      for ( j = 0; ; ++j )
      {
        if ( j >= 3 )
          return 0LL;
        memset(v21, 0, sizeof(v21));
        v22 = 0LL;
        LODWORD(v21[0]) = 40;
        v12 = *(_OWORD *)v24[2 * j - 1];
        DWORD1(v21[1]) = 2;
        *(_OWORD *)((char *)v21 + 4) = v12;
        sub_140010680((char *)&v16, 0, 0x40uLL);
        *(_QWORD *)&v17 = v21;
        LODWORD(v16) = 64;
        v13 = v24[2 * j];
        BYTE9(v17) = 1;
        v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, _QWORD, __int64))(qword_140019120 + 2984))(
               qword_140019128,
               v3,
               &v16,
               0LL,
               v13);
        if ( v8 < 0 )
          break;
        *(_BYTE *)(v13 + 12) = 1;
      }
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        return (unsigned int)v8;
      v9 = 12;
      goto LABEL_10;
    }
    v22 = 0LL;
    v6 = (__int128 *)*(&off_1400120F0 + 3 * i);
    memset(v21, 0, sizeof(v21));
    LODWORD(v21[0]) = 40;
    v7 = *v6;
    DWORD2(v21[1]) = *((_DWORD *)&off_1400120F0 + 6 * i + 4);
    *(_OWORD *)((char *)v21 + 4) = v7;
    sub_140010680((char *)&v16, 0, 0x40uLL);
    *(_QWORD *)&v17 = v21;
    LODWORD(v16) = 64;
    *(_QWORD *)&v18 = *(&off_1400120F0 + 3 * i + 1);
    BYTE9(v17) = 1;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, _QWORD, _QWORD))(qword_140019120 + 2984))(
           qword_140019128,
           v3,
           &v16,
           0LL,
           0LL);
    if ( v8 < 0 )
      break;
  }
  if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
    return (unsigned int)v8;
  v9 = 11;
LABEL_10:
  LODWORD(v14) = v8;
  sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 4u, v9, (__int64)&unk_140013468, v14);
  return (unsigned int)v8;
}
