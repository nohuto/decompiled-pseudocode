/*
 * XREFs of sub_180027B50 @ 0x180027B50
 * Callers:
 *     sub_180010690 @ 0x180010690 (sub_180010690.c)
 *     sub_180015A5C @ 0x180015A5C (sub_180015A5C.c)
 *     sub_1800231D4 @ 0x1800231D4 (sub_1800231D4.c)
 *     sub_180023430 @ 0x180023430 (sub_180023430.c)
 *     sub_18004FF90 @ 0x18004FF90 (sub_18004FF90.c)
 *     sub_1800685E8 @ 0x1800685E8 (sub_1800685E8.c)
 *     sub_18007B6F0 @ 0x18007B6F0 (sub_18007B6F0.c)
 *     sub_18007CC7C @ 0x18007CC7C (sub_18007CC7C.c)
 *     sub_18007ED40 @ 0x18007ED40 (sub_18007ED40.c)
 *     sub_18007FAA4 @ 0x18007FAA4 (sub_18007FAA4.c)
 *     sub_180080200 @ 0x180080200 (sub_180080200.c)
 *     sub_18008028C @ 0x18008028C (sub_18008028C.c)
 *     sub_1800803F8 @ 0x1800803F8 (sub_1800803F8.c)
 *     sub_180080564 @ 0x180080564 (sub_180080564.c)
 *     sub_1800806D0 @ 0x1800806D0 (sub_1800806D0.c)
 *     sub_18008083C @ 0x18008083C (sub_18008083C.c)
 *     sub_180081F40 @ 0x180081F40 (sub_180081F40.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 */

__int64 __fastcall sub_180027B50(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = sub_180015174(v9, a2);
  v5 = *v4;
  *v4 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = v5;
  v6 = v4[1];
  v4[1] = *(_QWORD *)(a1 + 80);
  v7 = (volatile signed __int32 *)v9[1];
  *(_QWORD *)(a1 + 80) = v6;
  if ( v7 )
    sub_180010544(v7);
  result = *a2;
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(*a2 + 244LL);
  return result;
}
