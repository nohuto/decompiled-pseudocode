/*
 * XREFs of ?ConnectDisplayBroker@DispBrokerClient@@QEAAJXZ @ 0x1403DC7F8
 * Callers:
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1404115E8 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1403DC890 (-EnsureConnected@DispBrokerClient@@AEAAJXZ.c)
 */

__int64 __fastcall DispBrokerClient::ConnectDisplayBroker(DispBrokerClient *this)
{
  int v2; // eax
  __int64 v3; // rsi
  unsigned int *v4; // rcx

  v2 = DispBrokerClient::EnsureConnected(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  WdLogSingleEntry2(2LL, **(unsigned int **)this, v2);
  v4 = *(unsigned int **)this;
  WdLogGlobalForLineNumber = 358;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to connect the display broker ALPC port for session 0x%I64x (Status = 0x%I64x).",
    *v4,
    v3,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v3;
}
