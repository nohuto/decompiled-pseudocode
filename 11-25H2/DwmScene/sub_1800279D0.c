/*
 * XREFs of sub_1800279D0 @ 0x1800279D0
 * Callers:
 *     sub_180026B60 @ 0x180026B60 (sub_180026B60.c)
 *     sub_180041440 @ 0x180041440 (sub_180041440.c)
 *     sub_180045020 @ 0x180045020 (sub_180045020.c)
 *     sub_18005069C @ 0x18005069C (sub_18005069C.c)
 *     sub_180051580 @ 0x180051580 (sub_180051580.c)
 *     sub_180068CE0 @ 0x180068CE0 (sub_180068CE0.c)
 *     sub_18007ED40 @ 0x18007ED40 (sub_18007ED40.c)
 *     sub_18007F47C @ 0x18007F47C (sub_18007F47C.c)
 *     sub_180080FF0 @ 0x180080FF0 (sub_180080FF0.c)
 *     sub_180081F40 @ 0x180081F40 (sub_180081F40.c)
 * Callees:
 *     sub_18002755C @ 0x18002755C (sub_18002755C.c)
 */

__int64 __fastcall sub_1800279D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(*(_QWORD *)a2 + 244LL);
  result = sub_18002755C((__int64 *)(a1 + 80), (__int64)v3, &v4);
  *(_BYTE *)(*(_QWORD *)result + 32LL) = 0;
  return result;
}
