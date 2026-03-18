/*
 * XREFs of ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x140291A10
 * Callers:
 *     NtUserCallNextHookEx @ 0x14007EB30 (NtUserCallNextHookEx.c)
 * Callees:
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x14007FC00 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPRECT(unsigned int a1, __int64 a2, struct tagRECT *a3)
{
  __int64 v4[2]; // [rsp+28h] [rbp-20h] BYREF

  *(_OWORD *)v4 = 0LL;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagRECT *)MmUserProbeAddress;
  *(struct tagRECT *)v4 = *a3;
  return xxxCallNextHookEx(a1, a2, (__int64)v4);
}
