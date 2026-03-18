/*
 * XREFs of ?AcquireVidPnSourceOwnership@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@@Z @ 0x140281634
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x140406F60 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 * Callees:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x14043016C (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

__int64 __fastcall BLTQUEUE::AcquireVidPnSourceOwnership(BLTQUEUE *this, struct DXGDEVICE *a2)
{
  __int64 result; // rax

  if ( (*((_DWORD *)this + 268) & 1) != 0 && a2 == *((struct DXGDEVICE **)this + 47) )
    return 0LL;
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    KeWaitForSingleObject((char *)this + 600, Executive, 0, 0, 0LL);
    *((_DWORD *)this + 169) |= 1u;
    *((_QWORD *)this + 86) = a2;
    KeReleaseMutex((PRKMUTEX)((char *)this + 600), 0);
  }
  else
  {
    *((_QWORD *)this + 86) = a2;
    *((_BYTE *)this + 656) = 1;
  }
  result = BLTQUEUE::IssueCommand(this);
  if ( (int)result >= 0 && a2 != *((struct DXGDEVICE **)this + 47) )
  {
    *((_QWORD *)this + 47) = a2;
    *((_OWORD *)this + 20) = 0LL;
    *((_OWORD *)this + 21) = 0LL;
    *((_DWORD *)this + 268) &= ~4u;
  }
  return result;
}
