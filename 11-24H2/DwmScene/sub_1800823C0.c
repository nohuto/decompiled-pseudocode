/*
 * XREFs of sub_1800823C0 @ 0x1800823C0
 * Callers:
 *     sub_1800820A0 @ 0x1800820A0 (sub_1800820A0.c)
 * Callees:
 *     sub_180075A78 @ 0x180075A78 (sub_180075A78.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800823C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rbx
  _QWORD *v9; // r14

  *(_DWORD *)(a1 + 96) = *(_DWORD *)a3;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a3 + 8);
  v8 = (_QWORD *)(a3 + 16);
  v9 = (_QWORD *)(a1 + 112);
  if ( a1 + 112 != a3 + 16 )
  {
    sub_180075A78(a1 + 112);
    *v9 = *v8;
    v9[1] = v8[1];
    v9[2] = v8[2];
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
  }
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a3 + 40);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2, a4);
  return sub_180075A78((__int64)v8);
}
