/*
 * XREFs of KdpRestoreBreakpoint @ 0x140B79E90
 * Callers:
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 * Callees:
 *     KdpDeleteBreakpoint @ 0x140B7B988 (KdpDeleteBreakpoint.c)
 */

__int64 __fastcall KdpRestoreBreakpoint(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 0LL;
  v4[1] = a1;
  v2 = *(unsigned int *)(a1 + 16);
  LOWORD(v4[0]) = 56;
  *(_DWORD *)(a1 + 8) = (unsigned __int8)KdpDeleteBreakpoint(v2) == 0 ? 0xC0000001 : 0;
  return KdSendPacket(2LL, v4, 0LL, &KdpContext);
}
