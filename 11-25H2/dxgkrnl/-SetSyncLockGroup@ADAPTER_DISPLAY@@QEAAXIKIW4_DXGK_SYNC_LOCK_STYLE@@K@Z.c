/*
 * XREFs of ?SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z @ 0x140056C44
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_DISPLAY::SetSyncLockGroup(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  KSPIN_LOCK *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  v7 = 10LL * a2;
  *(_DWORD *)(a1 + 8 * v7 + 872) = a3;
  *(_DWORD *)(a1 + 80 * (a2 + 11LL)) = a5;
  *(_DWORD *)(a1 + 8 * v7 + 876) = a4;
  *(_DWORD *)(a1 + 8 * v7 + 912) = a6 >> 1;
  if ( a3 )
  {
    v8 = 0LL;
    if ( *(_QWORD *)(a1 + 80LL * a2 + 936) || (v8 = operator new[](0xF90uLL, 0x4B677844u, 64LL, a4)) != 0 )
    {
      v9 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 16) + 4384LL);
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
      if ( v8 )
      {
        *(_QWORD *)(a1 + 8 * v7 + 892) = 0LL;
        *(_QWORD *)(a1 + 8 * v7 + 900) = 0LL;
        *(_DWORD *)(a1 + 8 * v7 + 908) = 0;
        *(_QWORD *)(a1 + 8 * v7 + 920) = 0LL;
        *(_QWORD *)(a1 + 8 * v7 + 928) = 0LL;
        *(_DWORD *)(a1 + 736) = 0;
        *(_DWORD *)(a1 + 740) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
        *(_QWORD *)(a1 + 8 * v7 + 936) = v8;
        *(_QWORD *)(a1 + 8 * v7 + 944) = v8 + 384;
        KeSetTimerEx((PKTIMER)(a1 + 744), (LARGE_INTEGER)-40000000LL, 4000, (PKDPC)(a1 + 808));
      }
      *(_BYTE *)(a1 + 8 * v7 + 888) = 1;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 7045;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate SyncLock VSync Drift telemetry buffer.",
        7045LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
}
