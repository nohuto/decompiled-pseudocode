/*
 * XREFs of NdisMIndicateStatus @ 0x140099D40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x140059F50 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14005A010 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     NdisMIndicateStatusEx @ 0x140069730 (NdisMIndicateStatusEx.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

void __stdcall NdisMIndicateStatus(
        NDIS_HANDLE MiniportHandle,
        NDIS_STATUS GeneralStatus,
        PVOID StatusBuffer,
        UINT StatusBufferSize)
{
  int v8; // eax
  int v9; // eax
  unsigned __int8 v10; // al
  int v11; // ecx
  __int64 *v12; // rax
  int v13; // ecx
  KIRQL v14; // dl
  __int64 v15; // [rsp+30h] [rbp-A9h]
  unsigned __int8 v16[4]; // [rsp+40h] [rbp-99h] BYREF
  int v17; // [rsp+44h] [rbp-95h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-89h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-19h] BYREF
  int v20; // [rsp+C8h] [rbp-11h]
  int v21; // [rsp+CCh] [rbp-Dh]
  __int64 v22; // [rsp+D0h] [rbp-9h]
  __int64 v23; // [rsp+D8h] [rbp-1h]
  int v24; // [rsp+E0h] [rbp+7h]
  int v25; // [rsp+E4h] [rbp+Bh]

  v16[0] = 0;
  v17 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xB6u,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)MiniportHandle,
      GeneralStatus);
  v20 = *((_DWORD *)MiniportHandle + 87);
  v22 = *((_QWORD *)MiniportHandle + 345);
  v23 = *((_QWORD *)MiniportHandle + 346);
  v8 = *((_DWORD *)MiniportHandle + 203);
  memset(&StatusIndication.StatusBuffer, 0, 64);
  v24 = v8;
  v9 = *((_DWORD *)MiniportHandle + 204);
  *((_DWORD *)&StatusIndication.Header + 1) = 0;
  StatusIndication.StatusBufferSize = StatusBufferSize;
  memset(&StatusIndication.PortNumber, 0, 32);
  v25 = v9;
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.SourceHandle = MiniportHandle;
  StatusIndication.StatusCode = GeneralStatus;
  StatusIndication.StatusBuffer = StatusBuffer;
  v19 = 2621824LL;
  v21 = 0;
  if ( !*((_QWORD *)MiniportHandle + 3) )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportHandle + 12);
    v16[0] = v10;
    if ( GeneralStatus == 1073807372 )
    {
      v11 = 2;
    }
    else
    {
      if ( GeneralStatus != 1073807371 )
      {
LABEL_9:
        *((_QWORD *)MiniportHandle + 65) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v10);
        ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, v16);
        ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, &StatusIndication);
        ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, v16[0]);
        goto LABEL_23;
      }
      v11 = 1;
    }
    *((_BYTE *)MiniportHandle + 88) |= 8u;
    HIDWORD(v19) = v11;
    *((_DWORD *)MiniportHandle + 86) = v11;
    StatusIndication.StatusBuffer = &v19;
    StatusIndication.StatusCode = 1073807383;
    StatusIndication.StatusBufferSize = 40;
    goto LABEL_9;
  }
  if ( GeneralStatus == 1073807379 )
  {
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, v16);
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, &StatusIndication);
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, v16[0]);
    goto LABEL_23;
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, v16);
  if ( GeneralStatus == 1073807371 )
  {
    if ( *((_DWORD *)MiniportHandle + 86) == 1
      && !*((_DWORD *)MiniportHandle + 459)
      && *((_DWORD *)MiniportHandle + 458) == 1 )
    {
      StatusIndication.Flags |= 4u;
      v12 = (__int64 *)&v17;
      StatusIndication.StatusCode = 1073807384;
      v17 = 1;
      StatusIndication.StatusBufferSize = 4;
LABEL_21:
      StatusIndication.StatusBuffer = v12;
      goto LABEL_22;
    }
    v13 = 1;
LABEL_20:
    HIDWORD(v19) = v13;
    v12 = &v19;
    StatusIndication.StatusCode = 1073807383;
    StatusIndication.StatusBufferSize = 40;
    goto LABEL_21;
  }
  if ( GeneralStatus == 1073807372 )
  {
    v13 = 2;
    goto LABEL_20;
  }
LABEL_22:
  v14 = v16[0];
  *((_QWORD *)MiniportHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v14);
  NdisMIndicateStatusEx(MiniportHandle, &StatusIndication);
LABEL_23:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v15) = GeneralStatus;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xB7u,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)MiniportHandle,
      v15);
  }
}
