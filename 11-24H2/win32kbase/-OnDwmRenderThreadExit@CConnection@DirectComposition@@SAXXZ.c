/*
 * XREFs of ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x14019F908
 * Callers:
 *     DCompositionThreadCallout @ 0x140106B80 (DCompositionThreadCallout.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1400E1A10 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 */

void DirectComposition::CConnection::OnDwmRenderThreadExit(void)
{
  __int64 DCompSessionState; // rdi
  struct _ERESOURCE *v1; // rcx
  volatile signed __int32 *v2; // rbx
  unsigned int v3; // edx

  DCompSessionState = W32GetDCompSessionState();
  *(_QWORD *)(DCompSessionState + 8) = 0LL;
  v1 = *(struct _ERESOURCE **)(DCompSessionState + 32);
  if ( v1 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(v1);
    v2 = *(volatile signed __int32 **)(DCompSessionState + 16);
    if ( v2 )
      _InterlockedIncrement(v2 + 2);
    ExReleaseResourceLite(*(PERESOURCE *)(DCompSessionState + 32));
    KeLeaveCriticalRegion();
    if ( v2 )
    {
      DirectComposition::CConnection::Disconnect((DirectComposition::CConnection *)v2);
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v2, v3);
    }
  }
}
