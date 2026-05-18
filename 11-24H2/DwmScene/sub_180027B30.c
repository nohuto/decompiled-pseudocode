/*
 * XREFs of sub_180027B30 @ 0x180027B30
 * Callers:
 *     sub_180026CC0 @ 0x180026CC0 (sub_180026CC0.c)
 *     sub_1800415A0 @ 0x1800415A0 (sub_1800415A0.c)
 *     sub_180045180 @ 0x180045180 (sub_180045180.c)
 *     sub_1800507FC @ 0x1800507FC (sub_1800507FC.c)
 *     sub_1800516E0 @ 0x1800516E0 (sub_1800516E0.c)
 *     sub_180068E40 @ 0x180068E40 (sub_180068E40.c)
 *     sub_18007EEA0 @ 0x18007EEA0 (sub_18007EEA0.c)
 *     sub_18007F5DC @ 0x18007F5DC (sub_18007F5DC.c)
 *     sub_180081150 @ 0x180081150 (sub_180081150.c)
 *     sub_1800820A0 @ 0x1800820A0 (sub_1800820A0.c)
 * Callees:
 *     sub_1800276BC @ 0x1800276BC (sub_1800276BC.c)
 */

__int64 __fastcall sub_180027B30(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(*(_QWORD *)a2 + 244LL);
  result = sub_1800276BC((__int64 *)(a1 + 80), (__int64)v3, &v4);
  *(_BYTE *)(*(_QWORD *)result + 32LL) = 0;
  return result;
}
