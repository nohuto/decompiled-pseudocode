/*
 * XREFs of CcCoalescingCallBackHelper @ 0x1403A7800
 * Callers:
 *     CcCoalescingCallBack @ 0x1403A7700 (CcCoalescingCallBack.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcNotifyWriteBehindInternal @ 0x1403A724C (CcNotifyWriteBehindInternal.c)
 *     CcScheduleLazyWriteScan @ 0x1403A79B0 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindVolume @ 0x1403A7B2C (CcNotifyWriteBehindVolume.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x1403A7C1C (CcRescheduleLazyWriteScanOnVolume.c)
 *     CcRescheduleLazyWriteScan @ 0x1403A7D34 (CcRescheduleLazyWriteScan.c)
 */

char __fastcall CcCoalescingCallBackHelper(__int64 a1, __int64 a2, int *a3)
{
  _BYTE *v3; // rsi
  int v5; // ecx
  int v7; // ecx
  char v8; // al
  int v10; // ecx
  __int64 v11; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = (_BYTE *)(a2 + 1172);
  v5 = *a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !CcEnablePerVolumeLazyWriter )
    v3 = (_BYTE *)(a1 + 1292);
  v7 = v5 - 1;
  if ( v7 )
  {
    v10 = v7 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        return 1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
      LOBYTE(v11) = 1;
      CcScheduleLazyWriteScan(a1, a2, v11, 0LL);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
      *v3 = 0;
      if ( CcEnablePerVolumeLazyWriter )
        CcRescheduleLazyWriteScanOnVolume(a2);
      else
        CcRescheduleLazyWriteScan(a1);
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
    v8 = CcEnablePerVolumeLazyWriter;
    *v3 = 1;
    if ( v8 )
      *(_BYTE *)(a2 + 985) = 0;
    else
      *(_BYTE *)(a1 + 1049) = 0;
    if ( *(_QWORD *)(a1 + 1056) >= 0x2000uLL )
    {
      if ( v8 )
      {
        CcNotifyWriteBehindVolume(a2, *(_BYTE *)(a2 + 1172) != 0 ? 16 : 4);
        if ( !*(_BYTE *)(a2 + 1172) )
          *(_BYTE *)(a2 + 985) = 1;
      }
      else
      {
        CcNotifyWriteBehindInternal(a1, *(_BYTE *)(a1 + 1292) != 0 ? 16 : 4);
        if ( !*(_BYTE *)(a1 + 1292) )
          *(_BYTE *)(a1 + 1049) = 1;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 1;
}
