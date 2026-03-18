/*
 * XREFs of ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x140282E60
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x140093270 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x14018AA9C (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x140282E18 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1404300C8 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 */

void __fastcall BLTQUEUE::ResetWorker(BLTQUEUE *this)
{
  struct DXGSWAPCHAIN **v2; // rcx
  int v3; // eax

  BLTQUEUE::ResetInternal(this);
  KeWaitForSingleObject((char *)this + 2840, Executive, 0, 0, 0LL);
  v2 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 354);
  if ( v2 )
  {
    v3 = SwapChainAbandonInternal(*v2);
    if ( v3 < 0 )
    {
      WdLogSingleEntry2(3LL, **((_QWORD **)this + 354), v3);
      WdLogGlobalForLineNumber = 3008;
    }
    ObfDereferenceObject(*((PVOID *)this + 354));
    *((_QWORD *)this + 354) = 0LL;
  }
  KeReleaseMutex((PRKMUTEX)((char *)this + 2840), 0);
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
    *((_DWORD *)this + 169) &= ~2u;
    KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
  }
  else
  {
    *((_BYTE *)this + 657) = 0;
  }
  BLTQUEUE::FinishCommand(this, 0);
}
