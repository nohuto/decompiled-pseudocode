/*
 * XREFs of ?NotifyGlobalVmBusStatusChange@BLTQUEUE@@QEAAXE@Z @ 0x140282808
 * Callers:
 *     ?NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z @ 0x14028289C (-NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x14043016C (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall BLTQUEUE::NotifyGlobalVmBusStatusChange(BLTQUEUE *this, char a2)
{
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
    *((_DWORD *)this + 169) |= 0x100u;
    *((_BYTE *)this + 688) = a2;
    KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
  }
  else
  {
    *((_BYTE *)this + 688) = a2;
    *((_BYTE *)this + 664) = 1;
  }
  BLTQUEUE::IssueCommand(this);
}
