/*
 * XREFs of ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x140029DDC
 * Callers:
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1402D751C (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x140307C80 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1403206D8 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1403C5E54 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::GetHashBitMask(struct _KTHREAD **this)
{
  struct _KTHREAD **v1; // rsi
  struct _KTHREAD **v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r9d
  struct _KTHREAD **v6; // rbx
  int v7; // ecx
  unsigned int v8; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KTHREAD **v19; // [rsp+60h] [rbp-28h]
  char v20; // [rsp+68h] [rbp-20h]

  v19 = this;
  v20 = 0;
  v1 = this;
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    this = 0LL;
  }
  if ( this[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = v19;
  KeEnterCriticalRegion();
  if ( v2[3] == KeGetCurrentThread() )
  {
    if ( *((int *)v2 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 519;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(519LL, v15, v16, 0LL, 2, -1, L"m_OwnerAcquireCount > 0", 7, 0, 0, 0, 0);
      }
    }
    ++*((_DWORD *)v2 + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2 + 1, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v5 = *((_DWORD *)v2 + 9);
        if ( v5 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v3, (__int64)&EventBlockThread, v4, v5);
      }
      _InterlockedAdd64((volatile signed __int64 *)v2 + 2, 1uLL);
      ExAcquirePushLockExclusiveEx(v2 + 1, 0LL);
    }
    if ( v2[3] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 545;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(545LL, v13, v14, 0LL, 2, -1, L"NULL == m_OwningThread", 33, 0, 0, 0, 0);
      }
    }
    if ( *((_DWORD *)v2 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 546;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            546LL,
            v11,
            v12,
            0LL,
            2,
            -1,
            L"0 == m_OwnerAcquireCount",
            34,
            0,
            0,
            0,
            0);
      }
    }
    v2[3] = KeGetCurrentThread();
    *((_DWORD *)v2 + 8) = 1;
  }
  v6 = v19;
  v7 = 32 - *((_DWORD *)v1 + 17);
  v20 = 0;
  v8 = 0xFFFFFFFF >> v7 << v7;
  if ( v19[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v19, 0LL, 0LL);
    WdLogGlobalForLineNumber = 568;
  }
  if ( *((int *)v6 + 8) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 571;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(571LL, v17, v18, 0LL, 2, -1, L"m_OwnerAcquireCount > 0", 59, 0, 0, 0, 0);
    }
  }
  if ( (*((_DWORD *)v6 + 8))-- == 1 )
  {
    v6[3] = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 1, 0LL);
  }
  KeLeaveCriticalRegion();
  return v8;
}
