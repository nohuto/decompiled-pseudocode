/*
 * XREFs of sub_180040AFC @ 0x180040AFC
 * Callers:
 *     sub_180041718 @ 0x180041718 (sub_180041718.c)
 *     sub_180050600 @ 0x180050600 (sub_180050600.c)
 *     sub_180050A58 @ 0x180050A58 (sub_180050A58.c)
 *     sub_1800516E0 @ 0x1800516E0 (sub_1800516E0.c)
 *     sub_180052088 @ 0x180052088 (sub_180052088.c)
 *     sub_180052358 @ 0x180052358 (sub_180052358.c)
 *     sub_180055BB0 @ 0x180055BB0 (sub_180055BB0.c)
 *     sub_180057494 @ 0x180057494 (sub_180057494.c)
 *     sub_180068E40 @ 0x180068E40 (sub_180068E40.c)
 *     sub_180069470 @ 0x180069470 (sub_180069470.c)
 *     sub_18007D9F4 @ 0x18007D9F4 (sub_18007D9F4.c)
 *     sub_18007EEA0 @ 0x18007EEA0 (sub_18007EEA0.c)
 *     sub_18007F490 @ 0x18007F490 (sub_18007F490.c)
 *     sub_18007F784 @ 0x18007F784 (sub_18007F784.c)
 *     sub_1800813F8 @ 0x1800813F8 (sub_1800813F8.c)
 *     sub_1800814EC @ 0x1800814EC (sub_1800814EC.c)
 *     sub_1800C3114 @ 0x1800C3114 (sub_1800C3114.c)
 *     sub_1800C46B0 @ 0x1800C46B0 (sub_1800C46B0.c)
 * Callees:
 *     sub_180040B74 @ 0x180040B74 (sub_180040B74.c)
 */

__int64 __fastcall sub_180040AFC(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  _DWORD *v3; // r11
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  sub_180040B74(a1, v5, a2);
  result = v6;
  if ( *(_BYTE *)(v6 + 25) || *v3 < *(_DWORD *)(v6 + 32) )
    return *(_QWORD *)v2;
  return result;
}
