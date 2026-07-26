/*
 * XREFs of NdisMIndicateStatus @ 0x14009F960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x140035250 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14007BF40 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMIndicateStatus(
        NDIS_HANDLE MiniportHandle,
        NDIS_STATUS GeneralStatus,
        PVOID StatusBuffer,
        UINT StatusBufferSize)
{
  int v8; // eax
  int v9; // eax
  KIRQL v10; // al
  int v11; // ecx
  KIRQL v12; // al
  __int64 *v13; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-A9h]
  unsigned __int8 v17[4]; // [rsp+40h] [rbp-99h] BYREF
  int v18; // [rsp+44h] [rbp-95h] BYREF
  struct _NDIS_STATUS_INDICATION v19; // [rsp+50h] [rbp-89h] BYREF
  __int64 v20; // [rsp+C0h] [rbp-19h] BYREF
  int v21; // [rsp+C8h] [rbp-11h]
  int v22; // [rsp+CCh] [rbp-Dh]
  __int64 v23; // [rsp+D0h] [rbp-9h]
  __int64 v24; // [rsp+D8h] [rbp-1h]
  int v25; // [rsp+E0h] [rbp+7h]
  int v26; // [rsp+E4h] [rbp+Bh]

  v17[0] = 0;
  v18 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xB6u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)MiniportHandle,
      GeneralStatus);
  v21 = *((_DWORD *)MiniportHandle + 87);
  v23 = *((_QWORD *)MiniportHandle + 345);
  v24 = *((_QWORD *)MiniportHandle + 346);
  v8 = *((_DWORD *)MiniportHandle + 203);
  memset(&v19.StatusBuffer, 0, 64);
  v25 = v8;
  v9 = *((_DWORD *)MiniportHandle + 204);
  *((_DWORD *)&v19.Header + 1) = 0;
  v19.StatusBufferSize = StatusBufferSize;
  memset(&v19.PortNumber, 0, 32);
  v26 = v9;
  v19.Header = (_NDIS_OBJECT_HEADER)7340440;
  v19.SourceHandle = MiniportHandle;
  v19.StatusCode = GeneralStatus;
  v19.StatusBuffer = StatusBuffer;
  v20 = 2621824LL;
  v22 = 0;
  if ( !*((_QWORD *)MiniportHandle + 3) )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportHandle + 12);
    v17[0] = v10;
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
LABEL_10:
        ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, v17);
        ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, &v19);
        *((_DWORD *)MiniportHandle + 1104) &= ~1u;
        *((_QWORD *)MiniportHandle + 524) = 0LL;
        *((_QWORD *)MiniportHandle + 65) = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)MiniportHandle + 12);
        KeLowerIrql(v17[0]);
        goto LABEL_23;
      }
      v11 = 1;
    }
    *((_BYTE *)MiniportHandle + 88) |= 8u;
    HIDWORD(v20) = v11;
    *((_DWORD *)MiniportHandle + 86) = v11;
    v19.StatusBuffer = &v20;
    v19.StatusCode = 1073807383;
    v19.StatusBufferSize = 40;
    goto LABEL_9;
  }
  if ( GeneralStatus == 1073807379 )
    goto LABEL_10;
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportHandle + 12);
  if ( GeneralStatus == 1073807371 )
  {
    if ( *((_DWORD *)MiniportHandle + 86) == 1
      && !*((_DWORD *)MiniportHandle + 459)
      && *((_DWORD *)MiniportHandle + 458) == 1 )
    {
      v19.Flags |= 4u;
      v18 = 1;
      v13 = (__int64 *)&v18;
      v19.StatusCode = 1073807384;
      v19.StatusBufferSize = 4;
LABEL_21:
      v19.StatusBuffer = v13;
      goto LABEL_22;
    }
    v14 = 1;
LABEL_20:
    HIDWORD(v20) = v14;
    v13 = &v20;
    v19.StatusCode = 1073807383;
    v19.StatusBufferSize = 40;
    goto LABEL_21;
  }
  if ( GeneralStatus == 1073807372 )
  {
    v14 = 2;
    goto LABEL_20;
  }
LABEL_22:
  *((_QWORD *)MiniportHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v12);
  v15 = (__int64)*(int *)(*((_QWORD *)MiniportHandle + 470) + 896LL) << 7;
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, struct _NDIS_STATUS_INDICATION *))((char *)g_MiniportHookDrivers
                                                                                        + v15
                                                                                        + 64))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v15 + 24),
    *((_QWORD *)MiniportHandle + 661),
    MiniportHandle,
    &v19);
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v16) = GeneralStatus;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xB7u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)MiniportHandle,
      v16);
  }
}
