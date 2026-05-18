/*
 * XREFs of sub_180011AC0 @ 0x180011AC0
 * Callers:
 *     sub_180010708 @ 0x180010708 (sub_180010708.c)
 *     sub_180015AD4 @ 0x180015AD4 (sub_180015AD4.c)
 *     sub_18002324C @ 0x18002324C (sub_18002324C.c)
 *     sub_1800234A8 @ 0x1800234A8 (sub_1800234A8.c)
 *     sub_18004C918 @ 0x18004C918 (sub_18004C918.c)
 *     sub_180050008 @ 0x180050008 (sub_180050008.c)
 *     sub_180068660 @ 0x180068660 (sub_180068660.c)
 *     sub_180069980 @ 0x180069980 (sub_180069980.c)
 *     sub_1800699F0 @ 0x1800699F0 (sub_1800699F0.c)
 *     sub_18007AA40 @ 0x18007AA40 (sub_18007AA40.c)
 *     sub_18007CCF4 @ 0x18007CCF4 (sub_18007CCF4.c)
 *     sub_18007EAD4 @ 0x18007EAD4 (sub_18007EAD4.c)
 *     sub_18007FB1C @ 0x18007FB1C (sub_18007FB1C.c)
 *     sub_1800800B0 @ 0x1800800B0 (sub_1800800B0.c)
 *     sub_180080304 @ 0x180080304 (sub_180080304.c)
 *     sub_180080470 @ 0x180080470 (sub_180080470.c)
 *     sub_1800805DC @ 0x1800805DC (sub_1800805DC.c)
 *     sub_180080748 @ 0x180080748 (sub_180080748.c)
 *     sub_1800808B4 @ 0x1800808B4 (sub_1800808B4.c)
 *     sub_180081A58 @ 0x180081A58 (sub_180081A58.c)
 * Callees:
 *     sub_180010BFC @ 0x180010BFC (sub_180010BFC.c)
 */

__int64 *__fastcall sub_180011AC0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // r8
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  sub_180010BFC(a1, &v8, a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *v4 < *(_QWORD *)(v9 + 32) )
    v6 = *a1;
  *v5 = v6;
  return v5;
}
