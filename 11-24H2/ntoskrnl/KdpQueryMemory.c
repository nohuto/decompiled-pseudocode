/*
 * XREFs of KdpQueryMemory @ 0x140B79534
 * Callers:
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpQueryMemory(__int64 a1)
{
  int v1; // edx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 32) )
  {
    v1 = -1073741811;
  }
  else
  {
    *(_DWORD *)(a1 + 36) = 7;
    *(_DWORD *)(a1 + 32) = *(_QWORD *)(a1 + 16) > 0x7FFFFFFEFFFFuLL ? 2 : 0;
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 8) = v1;
  *((_QWORD *)&v3 + 1) = a1;
  LOWORD(v3) = 56;
  return KdSendPacket(2LL, &v3, 0LL, &KdpContext);
}
