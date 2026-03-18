/*
 * XREFs of DpiFdoHandleDisplayDetectControl @ 0x140027534
 * Callers:
 *     DpiDxgkDdiDisplayDetectControl @ 0x14031E19C (DpiDxgkDdiDisplayDetectControl.c)
 * Callees:
 *     DpiFdoQueueConnectionChangePackage @ 0x140027A48 (DpiFdoQueueConnectionChangePackage.c)
 *     DxgkQueryConnectionChanges @ 0x140027BD0 (DxgkQueryConnectionChanges.c)
 *     DpiFdoInitializeConnectionChangePackage @ 0x140028DF0 (DpiFdoInitializeConnectionChangePackage.c)
 *     DpIndicateConnectorChange @ 0x14004D250 (DpIndicateConnectorChange.c)
 *     ?DmmSetTargetForceableState@@YAJQEAXIE@Z @ 0x140186E54 (-DmmSetTargetForceableState@@YAJQEAXIE@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoIsChildConnected @ 0x14031D668 (DpiPdoIsChildConnected.c)
 */

__int64 __fastcall DpiFdoHandleDisplayDetectControl(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  int v5; // esi
  int v7; // ebx
  bool v8; // zf
  char v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // r13
  _QWORD *v12; // r12
  int v13; // edx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  int IsChildConnected; // eax
  bool v19; // r14
  int ConnectionChanges; // eax
  int v21; // eax
  __int64 v22; // rax
  _QWORD *v23; // [rsp+40h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  char v25; // [rsp+A8h] [rbp+48h]
  char v26; // [rsp+B0h] [rbp+50h] BYREF
  char v27; // [rsp+B8h] [rbp+58h] BYREF

  v4 = *a2;
  v26 = 0;
  v5 = v4 & 0xF000000;
  v27 = 0;
  v7 = 0;
  v8 = (v4 & 0xF000000) == 50331648;
  if ( (v4 & 0xF000000) == 0x3000000 )
    goto LABEL_31;
  if ( v5 == 0x4000000 )
  {
    v8 = 0;
LABEL_31:
    v19 = v8;
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3624), &LockHandle);
    if ( v5 == 50331648 && *(_QWORD *)(a1 + 3632) != a1 + 3632 )
      v7 = DpIndicateConnectorChange(*(PDEVICE_OBJECT *)(a1 + 24));
    *(_BYTE *)(a1 + 3648) = v19;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return (unsigned int)v7;
  }
  if ( ((v5 - 0x1000000) & 0xFEFFFFFF) != 0 )
  {
    v7 = -1073741811;
    WdLogSingleEntry2(2LL, (v4 >> 24) & 0xF, -1073741811LL);
    WdLogGlobalForLineNumber = 18905;
    return (unsigned int)v7;
  }
  v25 = 0;
  v9 = 0;
  if ( v5 != 0x2000000 )
  {
    LOBYTE(a3) = *((_BYTE *)a2 + 21);
    IsChildConnected = DpiPdoIsChildConnected(
                         *(_QWORD *)(a1 + 24),
                         v4 & 0xFFFFFF,
                         a3,
                         (v4 & 0x10000000) != 0,
                         (__int64)&v26,
                         (__int64)&v27);
    v7 = IsChildConnected;
    if ( IsChildConnected < 0 )
    {
      WdLogSingleEntry1(2LL, IsChildConnected);
      WdLogGlobalForLineNumber = 18770;
      goto LABEL_25;
    }
    if ( (IsChildConnected == 1075708975 || IsChildConnected == 1075708988)
      && (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
    {
      v21 = DmmSetTargetForceableState(*(void *const *)(a1 + 4032), *a2 & 0xFFFFFF, v7 == 1075708975);
      if ( v21 < 0 )
      {
        WdLogSingleEntry3(2LL, v21, v7 == 1075708975, 0LL);
        WdLogGlobalForLineNumber = 18791;
      }
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
    }
    if ( !v27 && (!v26 || !*((_BYTE *)a2 + 20)) || v7 == 1075708975 )
      return (unsigned int)v7;
    v22 = DpiFdoInitializeConnectionChangePackage(
            (int)a2 + 4,
            *a2 & 0xFFFFFF,
            v26 != 0 ? 10 : 8,
            -2,
            *((_BYTE *)a2 + 20),
            0,
            0,
            1);
    if ( v22 )
    {
      v7 = DpiFdoQueueConnectionChangePackage(a1, v22, 0LL);
      if ( v7 >= 0 )
        goto LABEL_36;
    }
    else
    {
      v7 = -1073741670;
    }
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 18839;
LABEL_25:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 3780), 0xFFFFFFFE);
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 152), BusRelations);
    return (unsigned int)v7;
  }
  v10 = (_QWORD *)(a1 + 3600);
  v11 = *(_QWORD **)(a1 + 3600);
  while ( 1 )
  {
    v23 = v11;
    v12 = v11;
    if ( v11 == v10 )
      break;
    LOBYTE(a3) = *((_BYTE *)a2 + 21);
    v13 = *((_DWORD *)v11 - 2);
    v11 = (_QWORD *)*v11;
    v14 = DpiPdoIsChildConnected(*(_QWORD *)(a1 + 24), v13, a3, (*a2 & 0x10000000) != 0, (__int64)&v26, (__int64)&v27);
    v7 = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL, v14);
      WdLogGlobalForLineNumber = 18681;
      goto LABEL_23;
    }
    if ( v14 == 1075708988 || v14 == 1075708975 )
    {
      if ( (int)DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL) >= 0 )
      {
        v15 = DmmSetTargetForceableState(*(void *const *)(a1 + 4032), *((_DWORD *)v23 - 2), v7 == 1075708975);
        if ( v15 < 0 )
        {
          WdLogSingleEntry3(2LL, v15, v7 == 1075708975, 0LL);
          WdLogGlobalForLineNumber = 18702;
        }
        DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(a1 + 24), 0LL);
        v12 = v23;
      }
      v9 = v25;
      v10 = (_QWORD *)(a1 + 3600);
      if ( v7 == 1075708975 )
        continue;
    }
    if ( v27 )
    {
LABEL_18:
      v16 = DpiFdoInitializeConnectionChangePackage(
              (int)a2 + 4,
              *((_DWORD *)v12 - 2),
              v26 != 0 ? 10 : 8,
              -2,
              *((_BYTE *)a2 + 20),
              0,
              0,
              1);
      if ( !v16 )
      {
        v7 = -1073741670;
LABEL_40:
        WdLogSingleEntry1(2LL, v7);
        WdLogGlobalForLineNumber = 18749;
LABEL_23:
        v9 = v25;
        break;
      }
      v7 = DpiFdoQueueConnectionChangePackage(a1, v16, 0LL);
      if ( v7 < 0 )
        goto LABEL_40;
      v9 = 1;
      v25 = 1;
LABEL_21:
      v10 = (_QWORD *)(a1 + 3600);
    }
    else
    {
      v9 = v25;
      v10 = (_QWORD *)(a1 + 3600);
      if ( v26 )
      {
        if ( !*((_BYTE *)a2 + 20) )
          goto LABEL_21;
        goto LABEL_18;
      }
    }
  }
  if ( v7 < 0 )
    goto LABEL_25;
  if ( !v9 )
    return (unsigned int)v7;
LABEL_36:
  if ( !*((_BYTE *)a2 + 22) )
  {
    LOBYTE(a3) = 1;
    v7 = DpiFdoQueueConnectionChangePackage(a1, 0LL, a3);
    if ( v7 >= 0 )
      return (unsigned int)v7;
    goto LABEL_25;
  }
  LOBYTE(a3) = *((_BYTE *)a2 + 20);
  ConnectionChanges = DxgkQueryConnectionChanges(*(_QWORD *)(a1 + 24), 0, a3, *((_BYTE *)a2 + 21), 0, 0);
  v7 = ConnectionChanges;
  if ( ConnectionChanges < 0 )
  {
    WdLogSingleEntry1(2LL, ConnectionChanges);
    WdLogGlobalForLineNumber = 18875;
    goto LABEL_25;
  }
  return (unsigned int)v7;
}
