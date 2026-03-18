/*
 * XREFs of ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x14002963C
 * Callers:
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402831E4 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1402E8FAC (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x140325500 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x140372180 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::GetHashBitMask(DXGADAPTERSOURCEHASH *this)
{
  DXGADAPTERSOURCEHASH *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r9d
  DXGADAPTERSOURCEHASH *v6; // rbx
  int v7; // ecx
  unsigned int v8; // edi
  int v11; // edx
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // r8
  DXGADAPTERSOURCEHASH *v19; // [rsp+60h] [rbp-28h]
  char v20; // [rsp+68h] [rbp-20h]

  v19 = this;
  v20 = 0;
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v19 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = v19;
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v2 + 3) == KeGetCurrentThread() )
  {
    if ( *((int *)v2 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 521;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            521,
            v15,
            v16,
            0LL,
            2,
            -1,
            L"m_OwnerAcquireCount > 0",
            521LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    ++*((_DWORD *)v2 + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v2 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v5 = *((_DWORD *)v2 + 9);
        if ( v5 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v3, (__int64)&EventBlockThread, v4, v5);
      }
      _InterlockedAdd64((volatile signed __int64 *)v2 + 2, 1uLL);
      ExAcquirePushLockExclusiveEx((char *)v2 + 8, 0LL);
    }
    if ( *((_QWORD *)v2 + 3) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 547;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            547,
            v13,
            v14,
            0LL,
            2,
            -1,
            L"NULL == m_OwningThread",
            547LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_DWORD *)v2 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 548;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            548,
            v11,
            v12,
            0LL,
            2,
            -1,
            L"0 == m_OwnerAcquireCount",
            548LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    *((_QWORD *)v2 + 3) = KeGetCurrentThread();
    *((_DWORD *)v2 + 8) = 1;
  }
  v6 = v19;
  v7 = 32 - *((_DWORD *)this + 17);
  v20 = 0;
  v8 = 0xFFFFFFFF >> v7 << v7;
  if ( *((struct _KTHREAD **)v19 + 3) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v19, 0LL, 0LL);
    WdLogGlobalForLineNumber = 570;
  }
  if ( *((int *)v6 + 8) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 573;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          573,
          v17,
          v18,
          0LL,
          2,
          -1,
          L"m_OwnerAcquireCount > 0",
          573LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( (*((_DWORD *)v6 + 8))-- == 1 )
  {
    *((_QWORD *)v6 + 3) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v6 + 8, 0LL);
  }
  KeLeaveCriticalRegion();
  return v8;
}
