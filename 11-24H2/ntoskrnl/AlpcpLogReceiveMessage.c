/*
 * XREFs of AlpcpLogReceiveMessage @ 0x1408928A0
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x14088AA00 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408912A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessagePort @ 0x140895660 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveDirectMessagePort @ 0x14093E0B8 (AlpcpReceiveDirectMessagePort.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x140AA9974 (AlpcpInvokeLogCallbacks.c)
 */

__int64 __fastcall AlpcpLogReceiveMessage(__int64 a1)
{
  __int128 v1; // xmm0
  int v2; // eax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]

  v5 = 0LL;
  v4 = 0LL;
  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v2 = *(_DWORD *)(a1 + 264);
  LODWORD(v5) = 2;
  v4 = v1;
  DWORD2(v5) = v2;
  return AlpcpInvokeLogCallbacks(&v4, 32LL);
}
