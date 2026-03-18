/*
 * XREFs of ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z @ 0x14007EA28
 * Callers:
 *     NtUserCallNextHookEx @ 0x14007EB30 (NtUserCallNextHookEx.c)
 * Callees:
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x14007FC00 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPKBDLLHOOKSTRUCT(int a1, unsigned __int64 a2, struct tagKBDLLHOOKSTRUCT *a3)
{
  __int64 v4[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]

  *(_OWORD *)v4 = 0LL;
  v5 = 0LL;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagKBDLLHOOKSTRUCT *)MmUserProbeAddress;
  *(_OWORD *)v4 = *(_OWORD *)a3;
  v5 = *((_QWORD *)a3 + 2);
  return xxxCallNextHookEx(a1, a2, (__int64)v4);
}
