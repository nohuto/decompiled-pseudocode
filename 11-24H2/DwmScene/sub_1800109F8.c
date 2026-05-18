/*
 * XREFs of sub_1800109F8 @ 0x1800109F8
 * Callers:
 *     sub_180010C10 @ 0x180010C10 (sub_180010C10.c)
 *     sub_180012180 @ 0x180012180 (sub_180012180.c)
 *     sub_180016AB8 @ 0x180016AB8 (sub_180016AB8.c)
 *     sub_180027FD8 @ 0x180027FD8 (sub_180027FD8.c)
 *     sub_18002C4D8 @ 0x18002C4D8 (sub_18002C4D8.c)
 *     sub_18002C884 @ 0x18002C884 (sub_18002C884.c)
 *     sub_18002C9AC @ 0x18002C9AC (sub_18002C9AC.c)
 *     sub_18002CAD8 @ 0x18002CAD8 (sub_18002CAD8.c)
 *     sub_18002CBC4 @ 0x18002CBC4 (sub_18002CBC4.c)
 *     sub_18002D740 @ 0x18002D740 (sub_18002D740.c)
 *     sub_180038280 @ 0x180038280 (sub_180038280.c)
 *     sub_18005283C @ 0x18005283C (sub_18005283C.c)
 *     sub_180052914 @ 0x180052914 (sub_180052914.c)
 *     sub_180053E2C @ 0x180053E2C (sub_180053E2C.c)
 *     sub_18005A3A4 @ 0x18005A3A4 (sub_18005A3A4.c)
 *     sub_18006A618 @ 0x18006A618 (sub_18006A618.c)
 *     sub_1800758C0 @ 0x1800758C0 (sub_1800758C0.c)
 *     sub_18007D168 @ 0x18007D168 (sub_18007D168.c)
 *     sub_180084F80 @ 0x180084F80 (sub_180084F80.c)
 *     sub_180085190 @ 0x180085190 (sub_180085190.c)
 *     sub_180089150 @ 0x180089150 (sub_180089150.c)
 *     sub_18008A2A8 @ 0x18008A2A8 (sub_18008A2A8.c)
 *     sub_18008C754 @ 0x18008C754 (sub_18008C754.c)
 *     sub_18008D800 @ 0x18008D800 (sub_18008D800.c)
 *     sub_180098C10 @ 0x180098C10 (sub_180098C10.c)
 *     sub_1800BFB2C @ 0x1800BFB2C (sub_1800BFB2C.c)
 *     sub_1800CAFA0 @ 0x1800CAFA0 (sub_1800CAFA0.c)
 *     sub_1800D2008 @ 0x1800D2008 (sub_1800D2008.c)
 * Callees:
 *     sub_180010D50 @ 0x180010D50 (sub_180010D50.c)
 */

__int64 __fastcall sub_1800109F8(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_180010D50(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
