/*
 * XREFs of RtlpRunOnceWaitForInit @ 0x1800E5590
 * Callers:
 *     RtlRunOnceBeginInitialize @ 0x18001A9A0 (RtlRunOnceBeginInitialize.c)
 *     LdrpEnableUMGLTracingStateSync @ 0x18002C434 (LdrpEnableUMGLTracingStateSync.c)
 *     RtlRandomEx @ 0x18002CC00 (RtlRandomEx.c)
 *     RtlRunOnceExecuteOnce @ 0x18002D050 (RtlRunOnceExecuteOnce.c)
 *     EtwpRegisterProvider @ 0x18004A730 (EtwpRegisterProvider.c)
 *     LdrpInitMuiCrits @ 0x180079C04 (LdrpInitMuiCrits.c)
 * Callees:
 *     NtWaitForAlertByThreadId @ 0x180163CA0 (NtWaitForAlertByThreadId.c)
 */

signed __int64 __fastcall RtlpRunOnceWaitForInit(signed __int64 a1, volatile signed __int64 *a2)
{
  signed __int64 v3; // rax
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-18h]

  v5[1] = 0LL;
  v5[2] = 0LL;
  v6 = 0LL;
  v5[3] = NtCurrentTeb()->ClientId.UniqueThread;
  do
  {
    v5[0] = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v3 = _InterlockedCompareExchange64(a2, (signed __int64)v5 + 1, a1);
    if ( a1 == v3 )
      break;
    a1 = v3;
  }
  while ( (v3 & 3) == 1 );
  if ( (a1 & 3) == 1 )
  {
    do
    {
      NtWaitForAlertByThreadId((PVOID)a2, 0LL);
      a1 = *a2;
    }
    while ( (BYTE4(v6) & 4) == 0 );
  }
  return a1;
}
