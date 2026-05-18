/*
 * XREFs of sub_180025670 @ 0x180025670
 * Callers:
 *     sub_180015880 @ 0x180015880 (sub_180015880.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180025670(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v6; // xmm1
  __int64 (__fastcall *v7)(__int64, _BYTE *, _OWORD *); // rax
  __int64 result; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  _OWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF

  sub_18002894C(a1 + 24);
  (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)a1 + 272LL))(a1, a2, a3);
  v6 = a3[1];
  v7 = *(__int64 (__fastcall **)(__int64, _BYTE *, _OWORD *))(*(_QWORD *)a1 + 136LL);
  v11[0] = *a3;
  v11[1] = v6;
  result = v7(a1, v9, v11);
  if ( v10 )
    return sub_18001060C(v10);
  return result;
}
