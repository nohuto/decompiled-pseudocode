/*
 * XREFs of sub_18005DFA8 @ 0x18005DFA8
 * Callers:
 *     sub_180063434 @ 0x180063434 (sub_180063434.c)
 * Callees:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     sub_18005DD38 @ 0x18005DD38 (sub_18005DD38.c)
 */

_BOOL8 __fastcall sub_18005DFA8(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r11
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_1800131AC(a2);
  v6 = sub_18001E5E0(v5, v3, 2LL * *(_QWORD *)(v4 + 16));
  return sub_18005DD38(a1, v9, v7, v6)[1] != 0LL;
}
