/*
 * XREFs of ?PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z @ 0x140303E30
 * Callers:
 *     NtDxgkGetProperties @ 0x1402FC800 (NtDxgkGetProperties.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x1402ABF50 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z.c)
 */

__int64 __fastcall PresentStatsDwm2Property(struct _KTHREAD **a1, struct _D3DKMT_PROPERTIES_PRESENT_STATS_DWM2 *a2)
{
  unsigned int v2; // ebx
  volatile signed __int32 *v3; // rdi
  unsigned int v6; // eax
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rbx
  volatile signed __int64 *v11; // rsi
  unsigned int LastCompletedPresentIdDWM; // esi
  __int64 v13; // rbp
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // [rsp+20h] [rbp-48h]

  v2 = *(_DWORD *)a2;
  v3 = (volatile signed __int32 *)(a1 + 31);
  if ( a1 != (struct _KTHREAD **)-248LL && a1[32] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v3);
  v6 = (v2 >> 6) & 0xFFFFFF;
  if ( v6 >= *((_DWORD *)a1 + 74) )
    goto LABEL_10;
  v7 = (__int64)a1[35] + 16 * v6;
  if ( ((v2 >> 25) & 0x60) != (*(_BYTE *)(v7 + 8) & 0x60) )
    goto LABEL_10;
  if ( (*(_DWORD *)(v7 + 8) & 0x2000) != 0 )
    goto LABEL_10;
  v8 = *(_DWORD *)(v7 + 8) & 0x1F;
  if ( !v8 )
    goto LABEL_10;
  if ( v8 != 3 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_10:
    v9 = 0LL;
    v10 = 0LL;
    goto LABEL_11;
  }
  v10 = *(_QWORD *)v7;
  v9 = *(_QWORD *)v7;
  if ( *(_QWORD *)v7 )
  {
    v11 = (volatile signed __int64 *)(v10 + 64);
    _InterlockedIncrement64((volatile signed __int64 *)(v10 + 64));
    _InterlockedDecrement(v3 + 4);
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_15;
  }
LABEL_11:
  _InterlockedDecrement(v3 + 4);
  v11 = (volatile signed __int64 *)(v9 + 64);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( !v10 )
  {
    LastCompletedPresentIdDWM = -1073741811;
    WdLogSingleEntry2(2LL, *(unsigned int *)a2, -1073741811LL);
    v17 = *(unsigned int *)a2;
    WdLogGlobalForLineNumber = 6227;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v17,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return LastCompletedPresentIdDWM;
  }
LABEL_15:
  v13 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v13 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 152));
  if ( *(_DWORD *)(v13 + 200) == 1 )
  {
    v15 = *(_QWORD *)(v10 + 1896);
    if ( v15 && (v16 = *((_DWORD *)a2 + 1), v16 >= *(_DWORD *)(*(_QWORD *)(v15 + 3120) + 96LL)) )
    {
      LastCompletedPresentIdDWM = -1073741811;
      WdLogSingleEntry2(3LL, v16, -1073741811LL);
      WdLogGlobalForLineNumber = 6248;
    }
    else
    {
      LastCompletedPresentIdDWM = DXGDEVICE::QueryLastCompletedPresentIdDWM(
                                    (DXGDEVICE *)v10,
                                    *((_DWORD *)a2 + 1),
                                    (struct _D3DKMT_PROPERTIES_PRESENT_STATS_DWM2 *)((char *)a2 + 8));
    }
    _InterlockedDecrement((volatile signed __int32 *)(v13 + 152));
    ExReleasePushLockSharedEx(v13 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v13);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
    return LastCompletedPresentIdDWM;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v13 + 152));
  ExReleasePushLockSharedEx(v13 + 136, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v13);
  if ( _InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
  return 3221226166LL;
}
