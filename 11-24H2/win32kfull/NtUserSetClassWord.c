/*
 * XREFs of NtUserSetClassWord @ 0x14029CE90
 * Callers:
 *     <none>
 * Callees:
 *     _SetClassWord @ 0x140285DB0 (_SetClassWord.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserSetClassWord(__int64 a1, int a2, __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int16 v8; // bx

  EnterCrit(0LL, 0LL);
  v6 = ValidateReceivingHwnd(a1, 1);
  v8 = 0;
  if ( v6 )
    v8 = SetClassWord(v6, a2, a3);
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
