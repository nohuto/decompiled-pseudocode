/*
 * XREFs of sub_140039440 @ 0x140039440
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140039E1C @ 0x140039E1C (sub_140039E1C.c)
 *     sub_140040340 @ 0x140040340 (sub_140040340.c)
 *     sub_140044260 @ 0x140044260 (sub_140044260.c)
 */

__int64 __fastcall sub_140039440(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  __int64 v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(qword_140019120 + 2504))(
    qword_140019128,
    *(_QWORD *)(a1 + 208),
    0LL);
  if ( (*(_DWORD *)(a1 + 280) & 0x200LL) != 0 )
  {
    v2 = sub_140040340(a1);
    if ( v2 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v7 = v2;
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0xAu, (__int64)&unk_140014AE0, v7);
    }
  }
  v8 = 0LL;
  v3 = -1073741823;
  if ( (*(_QWORD *)(a1 + 280) & 0x200000200LL) != 0 )
  {
    v4 = sub_140039E1C(a1, &v8);
    v3 = v4;
    if ( v4 < 0 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LODWORD(v6) = v4;
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0xBu, (__int64)&unk_140014AE0, v6);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFDFFFFFDFFuLL;
    }
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019168, 0LL);
  *(_QWORD *)(a1 + 1144) = v8;
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019168);
  (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(qword_140019128, *(_QWORD *)(a1 + 208));
  sub_140044260(a1, 0LL);
  return v3;
}
