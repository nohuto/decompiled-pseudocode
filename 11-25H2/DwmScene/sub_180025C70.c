/*
 * XREFs of sub_180025C70 @ 0x180025C70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_1800250E0 @ 0x1800250E0 (sub_1800250E0.c)
 *     sub_180025134 @ 0x180025134 (sub_180025134.c)
 *     sub_1800284DC @ 0x1800284DC (sub_1800284DC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180025C70(__int64 a1, __int64 a2)
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
    result = sub_180025134(a1);
    v5 = result;
    for ( i = 0; i < v5; ++i )
    {
      sub_1800250E0(a1, &v8, i);
      v7 = v8;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 368LL))(v8);
      if ( result == a2 )
      {
        sub_1800284DC(v7 + 8, v10);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
        result = sub_180010F44((__int64)v10);
      }
      if ( v9 )
        result = sub_18001050C(v9);
    }
  }
  return result;
}
