/*
 * XREFs of sub_180025510 @ 0x180025510
 * Callers:
 *     sub_180015780 @ 0x180015780 (sub_180015780.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180025510(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v6; // xmm1
  __int64 (__fastcall *v7)(__int64, _BYTE *, _OWORD *); // rax
  __int64 result; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  _OWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF

  sub_1800287EC(a1 + 24);
  (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)a1 + 272LL))(a1, a2, a3);
  v6 = a3[1];
  v7 = *(__int64 (__fastcall **)(__int64, _BYTE *, _OWORD *))(*(_QWORD *)a1 + 136LL);
  v11[0] = *a3;
  v11[1] = v6;
  result = v7(a1, v9, v11);
  if ( v10 )
    return sub_18001050C(v10);
  return result;
}
