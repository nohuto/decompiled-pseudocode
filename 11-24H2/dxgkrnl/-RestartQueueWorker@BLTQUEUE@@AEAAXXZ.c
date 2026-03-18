/*
 * XREFs of ?RestartQueueWorker@BLTQUEUE@@AEAAXXZ @ 0x140282F6C
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x140093270 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1402822D0 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1404300C8 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 */

void __fastcall BLTQUEUE::RestartQueueWorker(BLTQUEUE *this)
{
  struct _KMUTANT *v2; // rbx

  v2 = (struct _KMUTANT *)((char *)this + 600);
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
    KeReleaseMutex(v2, 0);
  }
  BLTQUEUE::DiscardPendingPresent(this);
  *((_DWORD *)this + 129) = 0;
  *((_DWORD *)this + 130) = 0;
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
    *((_DWORD *)this + 169) &= ~0x80u;
    KeReleaseMutex(v2, 0);
  }
  else
  {
    *((_BYTE *)this + 663) = 0;
  }
  BLTQUEUE::FinishCommand(this, 0);
}
