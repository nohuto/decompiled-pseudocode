/*
 * XREFs of ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x14007E77C
 * Callers:
 *     NtUserCallNextHookEx @ 0x14007EB30 (NtUserCallNextHookEx.c)
 * Callees:
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x14007FC00 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 */

__int64 __fastcall NtUserfnHkINLPCBTACTIVATESTRUCT(int a1, unsigned __int64 a2, struct tagCBTACTIVATESTRUCT *a3)
{
  __int64 v4[2]; // [rsp+28h] [rbp-20h] BYREF

  *(_OWORD *)v4 = 0LL;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagCBTACTIVATESTRUCT *)MmUserProbeAddress;
  *(_OWORD *)v4 = *(_OWORD *)a3;
  return xxxCallNextHookEx(a1, a2, (__int64)v4);
}
