/*
 * XREFs of sub_140029CA8 @ 0x140029CA8
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140035274 @ 0x140035274 (sub_140035274.c)
 *     sub_1400353C8 @ 0x1400353C8 (sub_1400353C8.c)
 *     sub_14003EE7C @ 0x14003EE7C (sub_14003EE7C.c)
 */

__int64 __fastcall sub_140029CA8(__int64 a1)
{
  __int64 v2; // rcx

  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(qword_140019120 + 2504))(
    qword_140019128,
    *(_QWORD *)(a1 + 208),
    0LL);
  if ( (*(_DWORD *)(a1 + 280) & 0x7F070LL) != 0 && *(_QWORD *)(a1 + 528) && (int)sub_14003EE7C(a1, a1 + 536) < 0 )
    *(_QWORD *)(a1 + 536) = 0LL;
  v2 = *(_QWORD *)(a1 + 280);
  if ( (v2 & 0x1000000000LL) != 0 )
    *(_QWORD *)(a1 + 552) = *(_QWORD *)(a1 + 1200);
  if ( (v2 & 0x800000) != 0 )
  {
    if ( (v2 & 0xF8000000) != 0 && (int)sub_140035274(a1) >= 0 && !_bittest64((const signed __int64 *)(a1 + 280), 0x24u) )
      *(_QWORD *)(a1 + 552) = *(_QWORD *)(a1 + 472);
    if ( (*(_DWORD *)(a1 + 280) & 0x3000000) != 0
      && (int)sub_1400353C8(a1) >= 0
      && (*(_QWORD *)(a1 + 280) & 0x10F8000000LL) == 0 )
    {
      *(_QWORD *)(a1 + 552) = *(_QWORD *)(a1 + 520);
    }
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(qword_140019128, *(_QWORD *)(a1 + 208));
}
