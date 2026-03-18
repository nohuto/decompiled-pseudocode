/*
 * XREFs of VidSchTimeoutSyncObject @ 0x14003D658
 * Callers:
 *     VidSchDestroySyncObject @ 0x1400B2F30 (VidSchDestroySyncObject.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14002C1B0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x140030434 (VidSchiUnblockUnorderedWaiter.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003D844 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 */

__int64 __fastcall VidSchTimeoutSyncObject(_VIDSCH_SYNC_OBJECT *this)
{
  __int64 v1; // rbx
  int v3; // ecx
  char v4; // dl
  bool v5; // zf
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v10[2]; // [rsp+28h] [rbp-48h] BYREF
  char v11; // [rsp+38h] [rbp-38h]
  int v12; // [rsp+3Ch] [rbp-34h]
  _QWORD v13[4]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v14; // [rsp+60h] [rbp-10h]

  v1 = *((_QWORD *)this + 1);
  v14 = 0;
  v13[0] = v1 + 1984;
  AcquireSpinLock::Acquire((Acquire *)v13);
  v3 = *((_DWORD *)this + 12);
  v4 = 0;
  v9 = v1;
  v5 = *((_DWORD *)this + 10) == 0;
  v10[1] = v10;
  v11 = 0;
  v10[0] = v10;
  v12 = 2;
  if ( v5 )
  {
    if ( (unsigned int)(v3 - 4) > 2 )
    {
LABEL_7:
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v9, 0LL);
      goto LABEL_8;
    }
  }
  else
  {
    v7 = v3 - 2;
    if ( !v7 )
    {
      VidSchiUnblockUnorderedWaiter((HwQueueStagingList *)&v9, (__int64)this, 1);
      goto LABEL_4;
    }
    v8 = v7 - 2;
    if ( v8 && (unsigned int)(v8 - 1) > 1 )
      goto LABEL_6;
  }
  _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled(this, (struct HwQueueStagingList *)&v9, 1);
LABEL_4:
  if ( !v12 )
    goto LABEL_8;
  v4 = v11;
LABEL_6:
  if ( !v4 )
    goto LABEL_7;
LABEL_8:
  AcquireSpinLock::Release((AcquireSpinLock *)v13);
  return 0LL;
}
