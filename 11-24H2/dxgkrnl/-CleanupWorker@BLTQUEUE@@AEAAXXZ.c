/*
 * XREFs of ?CleanupWorker@BLTQUEUE@@AEAAXXZ @ 0x14028189C
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x140093270 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x140282E18 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1404300C8 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 */

void __fastcall BLTQUEUE::CleanupWorker(BLTQUEUE *this)
{
  BLTQUEUE::ResetInternal(this);
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
    *((_DWORD *)this + 169) &= ~0x10u;
    KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
  }
  else
  {
    *((_BYTE *)this + 660) = 0;
  }
  BLTQUEUE::FinishCommand(this, 0);
  PsTerminateSystemThread(0);
}
