/*
 * XREFs of sub_14003C708 @ 0x14003C708
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_1400398E4 @ 0x1400398E4 (sub_1400398E4.c)
 *     sub_14003A240 @ 0x14003A240 (sub_14003A240.c)
 *     sub_14003C3EC @ 0x14003C3EC (sub_14003C3EC.c)
 *     sub_140042D4C @ 0x140042D4C (sub_140042D4C.c)
 *     sub_1400447B8 @ 0x1400447B8 (sub_1400447B8.c)
 */

__int64 __fastcall sub_14003C708(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // r14d
  void (__fastcall *v4)(__int64, __int64, _QWORD); // rax
  const signed __int64 *v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // r12
  _DWORD *v8; // rdi
  int v9; // edx
  int v10; // ecx
  int v12; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v13[3]; // [rsp+34h] [rbp-Ch] BYREF
  char v14; // [rsp+80h] [rbp+40h] BYREF
  char v15; // [rsp+88h] [rbp+48h] BYREF
  char v16; // [rsp+90h] [rbp+50h] BYREF
  int v17; // [rsp+98h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 208);
  v3 = 0;
  v12 = 0;
  v4 = *(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504);
  v13[0] = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v4(qword_140019128, v2, 0LL);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
  v5 = (const signed __int64 *)(a1 + 280);
  if ( !byte_140019B22 )
  {
    if ( (*v5 & 0x200000200LL) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 1120);
      v17 = 0;
      if ( (int)PoFxProcessorNotification(v6, 16LL, &v17) >= 0 )
        dword_1400197EC = v17;
      sub_1400447B8(0LL);
    }
    byte_140019B22 = 1;
    v3 = sub_14003A240(a1);
  }
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  if ( v3 >= 0 )
  {
    v7 = (_QWORD *)(a1 + 280);
    if ( _bittest64(v5, 0x2Cu) )
    {
      sub_1400398E4(a1);
      v7 = (_QWORD *)(a1 + 280);
    }
    v3 = sub_14003C3EC(a1, v13, &v16, &v12, &v15, &v14);
    if ( v3 >= 0 )
    {
      v8 = (_DWORD *)(a1 + 1128);
      *(_BYTE *)(a1 + 1138) = v14;
      *(_BYTE *)(a1 + 1137) = v15;
      *(_DWORD *)(a1 + 1128) = v12;
      *(_DWORD *)(a1 + 1132) = v13[0];
      *(_BYTE *)(a1 + 1136) = v16;
      sub_140042D4C(a1, 0LL);
      v10 = *(_DWORD *)(a1 + 1132);
      if ( (*v5 & 0x100000000000LL) != 0 )
      {
        if ( v10 )
        {
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            LOBYTE(v9) = 2;
            sub_140003D28(off_140018050->DeviceExtension, v9, 1, 15, (__int64)&unk_140014CC8);
            v8 = (_DWORD *)(a1 + 1128);
          }
          *(_DWORD *)(a1 + 1132) = 0;
        }
      }
      else if ( !v10 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LOBYTE(v9) = 4;
          sub_140003D28(off_140018050->DeviceExtension, v9, 2, 16, (__int64)&unk_140014CC8);
        }
        *v7 &= 0xFFFFFFFDFFFFFDFFuLL;
      }
      if ( !*(_BYTE *)(a1 + 1137) && !*v8 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LOBYTE(v9) = 4;
          sub_140003D28(off_140018050->DeviceExtension, v9, 2, 17, (__int64)&unk_140014CC8);
        }
        *(_QWORD *)(a1 + 280) &= ~0x1000000000uLL;
      }
    }
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0xEu, (__int64)&unk_140014CC8, v3);
  }
  (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(qword_140019128, *(_QWORD *)(a1 + 208));
  return (unsigned int)v3;
}
