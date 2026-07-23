/*
 * XREFs of KdpReportCommandStringStateChange @ 0x140B79AAC
 * Callers:
 *     KdpCommandString @ 0x140B7AE2C (KdpCommandString.c)
 * Callees:
 *     KdpSetCommonState @ 0x1404CF704 (KdpSetCommonState.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KdpSetContextState @ 0x140B77164 (KdpSetContextState.c)
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 *     KdpCopyMemoryChunks @ 0x140B7CACC (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpReportCommandStringStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v9; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v10; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v11[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v12[208]; // [rsp+80h] [rbp-80h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  memset_0(v11, 0, 0xF0uLL);
  LODWORD(v8) = 0;
  do
  {
    KdpSetCommonState(12338, a3, (__int64)v11);
    KdpSetContextState((__int64)v11, a3);
    memset_0(v12, 0, 0x40uLL);
    *((_QWORD *)&v9 + 1) = &KdpMessageBuffer;
    KdpCopyMemoryChunks(*(void **)(a1 + 8), 4, (__int64)&v8);
    LOWORD(v9) = v8 + 1;
    *(_BYTE *)((unsigned __int16)(v8 + 1) + *((_QWORD *)&v9 + 1) - 1LL) = 0;
    KdpCopyMemoryChunks(*(void **)(a2 + 8), 4, (__int64)&v8);
    LOWORD(v9) = v8 + 1 + v9;
    v6 = (unsigned __int16)v9;
    *(_BYTE *)((unsigned __int16)v9 + *((_QWORD *)&v9 + 1) - 1LL) = 0;
    *((_QWORD *)&v10 + 1) = v11;
    LOWORD(v10) = 240;
    result = KdpSendWaitContinue(v6, &v10, &v9, a3);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
