/*
 * XREFs of sub_14003C174 @ 0x14003C174
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14003C534 @ 0x14003C534 (sub_14003C534.c)
 *     sub_14003C9EC @ 0x14003C9EC (sub_14003C9EC.c)
 */

__int64 __fastcall sub_14003C174(__int64 a1)
{
  int v2; // esi
  _QWORD *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  char v7; // dl
  char v9; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(qword_140019120 + 2504))(
    qword_140019128,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = sub_14003C9EC(a1);
  if ( v2 >= 0 )
  {
    v3 = (_QWORD *)(a1 + 1120);
    if ( !*(_DWORD *)(a1 + 80) )
      ((void (__fastcall *)(_QWORD, _QWORD))qword_1400194D8)(*(unsigned int *)(a1 + 56), *v3);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
    if ( !byte_140019B24 )
    {
      sub_14003C534(a1);
      byte_140019B24 = 1;
    }
    if ( !byte_140019B23 )
    {
      v4 = *(_QWORD *)(a1 + 280);
      if ( (v4 & 0x100000000000LL) != 0 && (v4 & 0x20E0000000000LL) != 0 )
      {
        v5 = *v3;
        v9 = 0;
        v6 = PoFxProcessorNotification(v5, 34LL, &v9);
        v7 = 0;
        if ( v6 >= 0 )
          v7 = v9;
        byte_140019B21 = v7;
      }
      byte_140019B23 = 1;
    }
    if ( byte_140019B21 )
      *(_QWORD *)(a1 + 280) &= 0xFFFDE1FFFFFFFFFFuLL;
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0xDu, (__int64)&unk_140014CC8, v2);
  }
  (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(qword_140019128, *(_QWORD *)(a1 + 208));
  return (unsigned int)v2;
}
