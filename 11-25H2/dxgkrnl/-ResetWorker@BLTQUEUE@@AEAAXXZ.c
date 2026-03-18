/*
 * XREFs of ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x14027BE04
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x14027A168 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x14018878C (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x14027BDBC (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x140305D64 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 */

void __fastcall BLTQUEUE::ResetWorker(BLTQUEUE *this)
{
  struct DXGSWAPCHAIN **v2; // rcx
  int v3; // eax

  BLTQUEUE::ResetInternal(this);
  KeWaitForSingleObject((char *)this + 2768, Executive, 0, 0, 0LL);
  v2 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 345);
  if ( v2 )
  {
    v3 = SwapChainAbandonInternal(*v2);
    if ( v3 < 0 )
    {
      WdLogSingleEntry2(3LL, **((_QWORD **)this + 345), v3);
      WdLogGlobalForLineNumber = 2648;
    }
    ObfDereferenceObject(*((PVOID *)this + 345));
    *((_QWORD *)this + 345) = 0LL;
  }
  KeReleaseMutex((PRKMUTEX)((char *)this + 2768), 0);
  *((_BYTE *)this + 601) = 0;
  BLTQUEUE::FinishCommand(this, 0);
}
