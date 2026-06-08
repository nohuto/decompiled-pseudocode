/*
 * XREFs of sub_140037EB4 @ 0x140037EB4
 * Callers:
 *     sub_140037C28 @ 0x140037C28 (sub_140037C28.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_1400327D4 @ 0x1400327D4 (sub_1400327D4.c)
 *     sub_1400395E0 @ 0x1400395E0 (sub_1400395E0.c)
 *     sub_14003CF60 @ 0x14003CF60 (sub_14003CF60.c)
 */

__int64 __fastcall sub_140037EB4(__int64 a1)
{
  int v2; // ebx
  unsigned __int16 v3; // r9
  __int64 v4; // rsi
  __int64 v5; // rbx
  void *v6; // rax
  __int64 v7; // rbp
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v2 = sub_1400327D4(a1, &qword_140019820);
  if ( v2 >= 0 )
  {
    v4 = qword_140019820;
    if ( !*(_DWORD *)qword_140019820 )
      return 0;
    v2 = sub_14003CF60(a1, qword_140019820, (unsigned int)&v10, (unsigned int)&v11, (__int64)&v12);
    if ( v2 < 0 )
      return (unsigned int)v2;
    v5 = v10;
    *(_QWORD *)(v10 + 32) = sub_140003E70;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Cu) )
    {
      *(_QWORD *)(v5 + 16) = sub_14000EA90;
      v6 = sub_14000EA10;
    }
    else
    {
      v6 = guard_check_icall_nop;
    }
    v7 = v11;
    *(_QWORD *)(v5 + 24) = v6;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Cu) )
      sub_1400395E0(a1, v4, v5, v7);
    qword_140019818 = v12;
    qword_140019808 = v5;
    qword_140019810 = v7;
    byte_1400197F0 = 1;
    v2 = ((__int64 (__fastcall *)(__int64))qword_1400194A0)(v5);
    if ( v2 >= 0 )
      return 0;
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return (unsigned int)v2;
    v3 = 22;
    goto LABEL_4;
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v3 = 21;
LABEL_4:
    v9 = v2;
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, v3, (__int64)&unk_140014AD0, v9);
  }
  return (unsigned int)v2;
}
