/*
 * XREFs of AlpcpLogUnwait @ 0x140742948
 * Callers:
 *     AlpcpSignalAndWait @ 0x140324E10 (AlpcpSignalAndWait.c)
 *     AlpcpWaitForSingleObject @ 0x140438750 (AlpcpWaitForSingleObject.c)
 *     AlpcpReceiveMessagePort @ 0x140895660 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x140AA9974 (AlpcpInvokeLogCallbacks.c)
 */

__int64 __fastcall AlpcpLogUnwait(int a1)
{
  __int128 v1; // xmm0
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  __int128 v4; // [rsp+30h] [rbp-28h]

  v4 = 0LL;
  v3 = 0LL;
  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  DWORD2(v4) = a1;
  LODWORD(v4) = 5;
  v3 = v1;
  return AlpcpInvokeLogCallbacks(&v3, 32LL);
}
