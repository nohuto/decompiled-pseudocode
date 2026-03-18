/*
 * XREFs of NtUserRegisterTasklist @ 0x1C01D9150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRegisterTasklist(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx

  EnterCrit(0LL, 0LL);
  v2 = (__int64 *)ValidateHwnd(a1);
  v6 = 0LL;
  if ( v2 )
  {
    v3 = v2[2];
    v6 = 1LL;
    gptiTasklist = v3;
    ghwndSwitch = *v2;
    *(_DWORD *)(v2[2] + 488) |= 0x40u;
  }
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return v6;
}
