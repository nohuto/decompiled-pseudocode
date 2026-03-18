/*
 * XREFs of ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x140009C9C
 * Callers:
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1402D751C (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x140307C80 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1403206D8 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1403C5E54 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::GetHashBitShift(struct _KTHREAD **this)
{
  struct _KTHREAD **v1; // rbx
  unsigned int v2; // edi
  struct _KTHREAD **v3; // rbx
  int v6; // edx
  int v7; // r8d
  struct _KTHREAD **v8; // [rsp+60h] [rbp-18h] BYREF
  char v9; // [rsp+68h] [rbp-10h]

  v8 = this;
  v9 = 0;
  v1 = this;
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    this = 0LL;
  }
  if ( this[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v8);
  v2 = 32 - *((_DWORD *)v1 + 17);
  if ( v9 )
  {
    v3 = v8;
    v9 = 0;
    if ( v8[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v8, 0LL, 0LL);
      WdLogGlobalForLineNumber = 568;
    }
    if ( *((int *)v3 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 571;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            571,
            v6,
            v7,
            0,
            2,
            -1,
            (__int64)L"m_OwnerAcquireCount > 0",
            59,
            0,
            0,
            0,
            0);
      }
    }
    if ( (*((_DWORD *)v3 + 8))-- == 1 )
    {
      v3[3] = 0LL;
      ExReleasePushLockExclusiveEx(v3 + 1, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return v2;
}
