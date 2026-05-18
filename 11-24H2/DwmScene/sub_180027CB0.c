/*
 * XREFs of sub_180027CB0 @ 0x180027CB0
 * Callers:
 *     sub_180010790 @ 0x180010790 (sub_180010790.c)
 *     sub_180015B5C @ 0x180015B5C (sub_180015B5C.c)
 *     sub_180023334 @ 0x180023334 (sub_180023334.c)
 *     sub_180023590 @ 0x180023590 (sub_180023590.c)
 *     sub_1800500F0 @ 0x1800500F0 (sub_1800500F0.c)
 *     sub_180068748 @ 0x180068748 (sub_180068748.c)
 *     sub_18007B850 @ 0x18007B850 (sub_18007B850.c)
 *     sub_18007CDDC @ 0x18007CDDC (sub_18007CDDC.c)
 *     sub_18007EEA0 @ 0x18007EEA0 (sub_18007EEA0.c)
 *     sub_18007FC04 @ 0x18007FC04 (sub_18007FC04.c)
 *     sub_180080360 @ 0x180080360 (sub_180080360.c)
 *     sub_1800803EC @ 0x1800803EC (sub_1800803EC.c)
 *     sub_180080558 @ 0x180080558 (sub_180080558.c)
 *     sub_1800806C4 @ 0x1800806C4 (sub_1800806C4.c)
 *     sub_180080830 @ 0x180080830 (sub_180080830.c)
 *     sub_18008099C @ 0x18008099C (sub_18008099C.c)
 *     sub_1800820A0 @ 0x1800820A0 (sub_1800820A0.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 */

__int64 __fastcall sub_180027CB0(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = sub_180015274(v9, a2);
  v5 = *v4;
  *v4 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = v5;
  v6 = v4[1];
  v4[1] = *(_QWORD *)(a1 + 80);
  v7 = (volatile signed __int32 *)v9[1];
  *(_QWORD *)(a1 + 80) = v6;
  if ( v7 )
    sub_180010644(v7);
  result = *a2;
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(*a2 + 244LL);
  return result;
}
