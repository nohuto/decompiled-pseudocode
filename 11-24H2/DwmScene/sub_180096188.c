/*
 * XREFs of sub_180096188 @ 0x180096188
 * Callers:
 *     sub_18002B070 @ 0x18002B070 (sub_18002B070.c)
 * Callees:
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_1800291FC @ 0x1800291FC (sub_1800291FC.c)
 *     sub_180029BC0 @ 0x180029BC0 (sub_180029BC0.c)
 *     sub_1800955C8 @ 0x1800955C8 (sub_1800955C8.c)
 *     sub_18009662C @ 0x18009662C (sub_18009662C.c)
 *     sub_180097BD0 @ 0x180097BD0 (sub_180097BD0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180096188(__int64 a1)
{
  __int64 v2; // rbx
  _BYTE v4[136]; // [rsp+20h] [rbp-B8h] BYREF
  void *v5[6]; // [rsp+A8h] [rbp-30h] BYREF
  __int64 v6; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v7; // [rsp+E8h] [rbp+10h]
  char v8; // [rsp+F0h] [rbp+18h] BYREF

  v7 = a1;
  sub_18002811C(a1);
  sub_180029BC0((__int64)v4);
  v2 = **(_QWORD **)(a1 + 48);
LABEL_2:
  v6 = v2;
  while ( v2 != *(_QWORD *)(a1 + 48) )
  {
    if ( (unsigned int)sub_180097BD0(*(_QWORD *)(a1 + 16 * (*(_QWORD *)(v2 + 32) + 4LL)), v4) == 3 )
    {
      sub_1800955C8(a1 + 8, (__int64 *)(v2 + 32));
      v2 = *(_QWORD *)sub_18009662C(a1 + 48, &v8, v2);
      goto LABEL_2;
    }
    sub_18001C420(&v6);
    v2 = v6;
  }
  sub_1800291FC(v5, (__int64)v5);
  return sub_1800282BC(a1);
}
