/*
 * XREFs of VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x14002C1FC
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140023BF0 (VidSchiScheduleCommandToRun.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140050FC0 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     VidSchiCompleteSignalCommmand @ 0x140019130 (VidSchiCompleteSignalCommmand.c)
 *     VidSchiUnwaitMonitoredFences @ 0x140019940 (VidSchiUnwaitMonitoredFences.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003D844 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400476A8 (VidSchiUnwaitNativeFenceWaiters.c)
 *     VidSchiUpdateNativeFenceCurrentValue @ 0x1400478D4 (VidSchiUpdateNativeFenceCurrentValue.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 */

void __fastcall VidSchiProcessCrossAdapterSignaledSyncObjects(struct HwQueueStagingList *a1, __int64 a2)
{
  __int64 ****v4; // rcx
  __int64 ***v5; // rax
  char v6; // r15
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 **v9; // rdx
  __int64 ***v10; // rax
  _QWORD *v11; // rdx
  __int64 *v12; // rcx
  __int64 *v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v19; // [rsp+28h] [rbp-D8h] BYREF
  __int64 **v20; // [rsp+30h] [rbp-D0h]
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v23; // [rsp+58h] [rbp-A8h]
  _QWORD v24[200]; // [rsp+60h] [rbp-A0h] BYREF

  memset(&v24[37], 0, 452);
  v23 = 0;
  v20 = &v19;
  v21 = a2 + 3408;
  v19 = (__int64 *)&v19;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 3408), &LockHandle);
  v4 = (__int64 ****)(a2 + 3392);
  LOBYTE(v23) = 1;
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == (__int64 ***)v4 )
      break;
    if ( v5[1] != (__int64 **)v4
      || (v9 = *v5, (*v5)[1] != (__int64 *)v5)
      || (*v4 = (__int64 ***)v9,
          v9[1] = (__int64 *)v4,
          *v5 = 0LL,
          v5[1] = 0LL,
          v10 = v5 + 2,
          v11 = v20,
          *v20 != (__int64 *)&v19) )
    {
LABEL_10:
      __fastfail(3u);
    }
    v10[1] = v20;
    *v10 = &v19;
    *v11 = v10;
    --*(_DWORD *)(a2 + 3424);
    v20 = (__int64 **)v10;
  }
  v6 = *(_BYTE *)(a2 + 3428);
  *(_BYTE *)(a2 + 3428) = 0;
  AcquireSpinLock::Release((AcquireSpinLock *)&v21);
  while ( 1 )
  {
    v8 = v19;
    if ( v19 == (__int64 *)&v19 )
      break;
    if ( (__int64 **)v19[1] != &v19 )
      goto LABEL_10;
    v12 = (__int64 *)*v19;
    if ( *(__int64 **)(*v19 + 8) != v19 )
      goto LABEL_10;
    v19 = (__int64 *)*v19;
    v12[1] = (__int64)&v19;
    v13 = v8 - 34;
    *v8 = 0LL;
    v8[1] = 0LL;
    v14 = *(_QWORD *)(a2 + 264);
    switch ( *((_DWORD *)v8 - 56) )
    {
      case 2:
        memset(v24, 0, sizeof(v24));
        LODWORD(v24[0]) = 895576406;
        LODWORD(v24[6]) = 5;
        v24[11] = v14;
        if ( *((_BYTE *)v13 + 28) )
          v17 = *(_QWORD *)(v13[38] + 32);
        else
          v17 = v13[10];
        v24[127] = v17;
        v24[95] = v13;
        HIDWORD(v24[94]) = 1;
        VidSchiCompleteSignalCommmand(a1, (__int64)v24, 0);
        break;
      case 4:
      case 5:
        if ( *(_BYTE *)(v13[38] + 48) )
          _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled((_VIDSCH_SYNC_OBJECT *)v13, a1, 0);
        else
          VidSchiUnwaitMonitoredFences(a1, a2);
        break;
      case 6:
        if ( *(_BYTE *)(v13[38] + 48) )
        {
          _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled((_VIDSCH_SYNC_OBJECT *)v13, a1, 0);
          if ( !g_NativeFenceDebugTest )
          {
            v16 = v13[20];
            LODWORD(v18) = 1;
            VidSchiUpdateNativeFenceCurrentValue(a2, v16, 0xFFFFFFFFLL, &v18);
          }
        }
        else
        {
          if ( !g_NativeFenceDebugTest )
          {
            v15 = v13[20];
            LODWORD(v18) = 2;
            VidSchiUpdateNativeFenceCurrentValue(a2, v15, 0LL, &v18);
          }
          VidSchiUnwaitNativeFenceWaiters(a1, v13, v7, 0LL, v18);
        }
        break;
    }
  }
  if ( v6 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 2464LL) & 0x800) != 0 && !g_NativeFenceDebugTest )
    {
      LODWORD(v18) = 2;
      VidSchiUpdateNativeFenceCurrentValue(a2, 0LL, 0LL, &v18);
    }
    VidSchiUnwaitMonitoredFences(a1, a2);
  }
}
