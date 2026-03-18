/*
 * XREFs of VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x14001FBBC
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140018790 (VidSchiScheduleCommandToRun.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1400508A0 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     VidSchiCompleteSignalCommmand @ 0x14000DCD0 (VidSchiCompleteSignalCommmand.c)
 *     VidSchiUnwaitMonitoredFences @ 0x14000E4E0 (VidSchiUnwaitMonitoredFences.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003B954 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400458E8 (VidSchiUnwaitNativeFenceWaiters.c)
 *     VidSchiUpdateNativeFenceCurrentValue @ 0x140045B14 (VidSchiUpdateNativeFenceCurrentValue.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     memset @ 0x140056340 (memset.c)
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
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v20; // [rsp+28h] [rbp-D8h] BYREF
  __int64 **v21; // [rsp+30h] [rbp-D0h]
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v24; // [rsp+58h] [rbp-A8h]
  _QWORD v25[200]; // [rsp+60h] [rbp-A0h] BYREF

  memset(&v25[37], 0, 452);
  v24 = 0;
  v21 = &v20;
  v22 = a2 + 3408;
  v20 = (__int64 *)&v20;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 3408), &LockHandle);
  v4 = (__int64 ****)(a2 + 3392);
  LOBYTE(v24) = 1;
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
          v11 = v21,
          *v21 != (__int64 *)&v20) )
    {
LABEL_10:
      __fastfail(3u);
    }
    v10[1] = v21;
    *v10 = &v20;
    *v11 = v10;
    --*(_DWORD *)(a2 + 3424);
    v21 = (__int64 **)v10;
  }
  v6 = *(_BYTE *)(a2 + 3428);
  *(_BYTE *)(a2 + 3428) = 0;
  AcquireSpinLock::Release((AcquireSpinLock *)&v22);
  while ( 1 )
  {
    v8 = v20;
    if ( v20 == (__int64 *)&v20 )
      break;
    if ( (__int64 **)v20[1] != &v20 )
      goto LABEL_10;
    v12 = (__int64 *)*v20;
    if ( *(__int64 **)(*v20 + 8) != v20 )
      goto LABEL_10;
    v20 = (__int64 *)*v20;
    v12[1] = (__int64)&v20;
    v13 = v8 - 34;
    *v8 = 0LL;
    v8[1] = 0LL;
    v14 = *(_QWORD *)(a2 + 264);
    switch ( *((_DWORD *)v8 - 56) )
    {
      case 2:
        memset(v25, 0, sizeof(v25));
        LODWORD(v25[0]) = 895576406;
        LODWORD(v25[6]) = 5;
        v25[11] = v14;
        if ( *((_BYTE *)v13 + 28) )
          v18 = *(_QWORD *)(v13[38] + 32);
        else
          v18 = v13[10];
        v25[127] = v18;
        v25[95] = v13;
        HIDWORD(v25[94]) = 1;
        VidSchiCompleteSignalCommmand(a1, (__int64)v25, 0LL, v17);
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
            LODWORD(v19) = 1;
            VidSchiUpdateNativeFenceCurrentValue(a2, v16, 0xFFFFFFFFLL, &v19);
          }
        }
        else
        {
          if ( !g_NativeFenceDebugTest )
          {
            v15 = v13[20];
            LODWORD(v19) = 2;
            VidSchiUpdateNativeFenceCurrentValue(a2, v15, 0LL, &v19);
          }
          VidSchiUnwaitNativeFenceWaiters(a1, v13, v7, 0LL, v19);
        }
        break;
    }
  }
  if ( v6 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 2464LL) & 0x800) != 0 && !g_NativeFenceDebugTest )
    {
      LODWORD(v19) = 2;
      VidSchiUpdateNativeFenceCurrentValue(a2, 0LL, 0LL, &v19);
    }
    VidSchiUnwaitMonitoredFences(a1, a2);
  }
}
