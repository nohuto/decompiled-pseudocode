/*
 * XREFs of sub_14003A3C0 @ 0x14003A3C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140038F80 @ 0x140038F80 (sub_140038F80.c)
 */

__int64 __fastcall sub_14003A3C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 64);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(qword_140019120 + 2504))(
    qword_140019128,
    *(_QWORD *)(v2 + 208),
    0LL);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019168, 0LL);
  byte_140019838 = 0;
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019168);
  sub_140038F80(a2);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(qword_140019128, *(_QWORD *)(v2 + 208));
}
