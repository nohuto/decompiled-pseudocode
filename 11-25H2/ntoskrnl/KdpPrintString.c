/*
 * XREFs of KdpPrintString @ 0x140B69CE8
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1404AEB30 (KdRefreshDebuggerNotPresent.c)
 *     KdpPrint @ 0x140B68F08 (KdpPrint.c)
 * Callees:
 *     KdpPollBreakInWithPortLock @ 0x1405AC7F8 (KdpPollBreakInWithPortLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x140B6AACC (KdpCopyMemoryChunks.c)
 */

bool __fastcall KdpPrintString(__int64 a1)
{
  void *v1; // rcx
  __int64 v3; // [rsp+30h] [rbp-40h] BYREF
  __int128 v4; // [rsp+38h] [rbp-38h] BYREF
  __int128 v5; // [rsp+48h] [rbp-28h] BYREF
  int v6; // [rsp+58h] [rbp-18h] BYREF
  __int16 v7; // [rsp+5Ch] [rbp-14h]
  __int16 Number; // [rsp+5Eh] [rbp-12h]
  int v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+64h] [rbp-Ch]

  v1 = *(void **)(a1 + 8);
  LODWORD(v3) = 0;
  v10 = 0;
  v4 = 0LL;
  v5 = 0LL;
  KdpCopyMemoryChunks(v1, 4, (__int64)&v3);
  if ( (unsigned __int64)(unsigned int)v3 + 16 > (unsigned int)KdTransportMaxPacketSize )
    LODWORD(v3) = KdTransportMaxPacketSize - 16;
  v7 = KeProcessorLevel;
  v6 = 12848;
  Number = KeGetPcr()->Prcb.Number;
  LOWORD(v5) = 16;
  *((_QWORD *)&v5 + 1) = &v6;
  v9 = v3;
  LOWORD(v4) = v3;
  *((_QWORD *)&v4 + 1) = &KdpMessageBuffer;
  KdSendPacket(3LL, &v5, &v4, &KdpContext);
  return KdpPollBreakInWithPortLock();
}
