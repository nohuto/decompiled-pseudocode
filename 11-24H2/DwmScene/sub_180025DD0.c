/*
 * XREFs of sub_180025DD0 @ 0x180025DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 *     sub_180025294 @ 0x180025294 (sub_180025294.c)
 *     sub_18002863C @ 0x18002863C (sub_18002863C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180025DD0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // esi
  unsigned int i; // ebx
  __int64 v7; // r14
  __int64 v8; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+38h] [rbp-50h]
  _BYTE v10[32]; // [rsp+40h] [rbp-48h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_BYTE)result )
  {
    result = sub_180025294(a1);
    v5 = result;
    for ( i = 0; i < v5; ++i )
    {
      sub_180025240(a1, &v8, i);
      v7 = v8;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 368LL))(v8);
      if ( result == a2 )
      {
        sub_18002863C(v7 + 8, v10);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
        result = sub_180011044((__int64)v10);
      }
      if ( v9 )
        result = sub_18001060C(v9);
    }
  }
  return result;
}
