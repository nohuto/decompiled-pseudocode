/*
 * XREFs of sub_1405079D0 @ 0x1405079D0
 * Callers:
 *     <none>
 * Callees:
 *     KeExitRetpoline @ 0x14045517C (KeExitRetpoline.c)
 *     _guard_check_icall_no_overrides @ 0x1406B4D40 (_guard_check_icall_no_overrides.c)
 */

__int64 __fastcall sub_1405079D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r10
  char v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r11
  __int16 v11; // r9
  unsigned __int64 v12; // rdi
  __int64 (__fastcall *v13)(unsigned __int64, _QWORD, __int64, __int64); // rbx

  KeExitRetpoline();
  v7 = *(_QWORD *)(a1 + 32);
  v8 = 1;
  v9 = (unsigned __int64)&qword_140E0F288 ^ ((v7 ^ ((v7 ^ 0xE04C2400uLL) >> 4)) >> 4);
  v10 = v9;
  v11 = v9;
  if ( (v9 & 0xF) != 0 )
    v8 = v9 & 0xF;
  for ( ; v8; --v8 )
  {
    v7 = *(_QWORD *)((v9 & 0xF) + v7);
    v9 ^= (v7 ^ ((v7 ^ 0x1DF400uLL) >> 4)) >> 4;
  }
  v12 = v10 ^ v7;
  if ( (v11 & 0x1000) == 0 )
    v12 = v7;
  v13 = *(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v12 + 24);
  guard_check_icall_no_overrides(v13);
  return v13(v12, *(_QWORD *)(v12 + 32), a3, a4);
}
