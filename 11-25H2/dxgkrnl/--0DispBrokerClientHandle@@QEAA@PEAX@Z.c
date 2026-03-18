/*
 * XREFs of ??0DispBrokerClientHandle@@QEAA@PEAX@Z @ 0x14006CFC8
 * Callers:
 *     ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1403E4D90 (-EnsureConnected@DispBrokerClient@@AEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

DispBrokerClientHandle *__fastcall DispBrokerClientHandle::DispBrokerClientHandle(
        DispBrokerClientHandle *this,
        void *a2)
{
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = PsGetCurrentProcessId();
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 35;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"PortHandle != nullptr", 35LL, 0LL, 0LL, 0LL, 0LL);
  }
  return this;
}
