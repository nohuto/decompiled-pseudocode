/*
 * XREFs of NtUserSetClassWord @ 0x1C01DA2F0
 * Callers:
 *     <none>
 * Callees:
 *     _SetClassWord @ 0x1C01BDAB0 (_SetClassWord.c)
 */

__int64 __fastcall NtUserSetClassWord(__int64 a1, int a2, __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 v11; // bx

  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v11 = 0;
  if ( v6 )
    v11 = SetClassWord(v6, a2, a3);
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
