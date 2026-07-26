/*
 * XREFs of NdisMSetAttributesEx @ 0x1401840E0
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x140057C10 (NdisMSetMiniportAttributes.c)
 *     NdisMSetAttributes @ 0x1400A8510 (NdisMSetAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisInitializeTimer @ 0x140088F90 (NdisInitializeTimer.c)
 *     ?ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401844C0 (-ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __stdcall NdisMSetAttributesEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportAdapterContext,
        UINT CheckForHangTimeInSeconds,
        ULONG AttributeFlags,
        NDIS_INTERFACE_TYPE AdapterType)
{
  NDIS_HANDLE v7; // rsi
  KIRQL v9; // bp
  __int64 i; // rcx
  UINT v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  KIRQL v16; // di
  int v17; // edx

  v7 = MiniportAdapterContext;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MiniportAdapterContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportAdapterContext,
      1,
      100,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)MiniportAdapterHandle);
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x180) != 0 )
  {
    if ( v7 && *((NDIS_HANDLE *)MiniportAdapterHandle + 3) != v7 )
      __int2c();
  }
  else
  {
    *((_QWORD *)MiniportAdapterHandle + 3) = v7;
  }
  *((_DWORD *)MiniportAdapterHandle + 454) = AttributeFlags;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  ndisSetMiniportHandlers((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle);
  for ( i = *((_QWORD *)MiniportAdapterHandle + 7); i; i = *(_QWORD *)(i + 392) )
    *(_QWORD *)(i + 56) = *((_QWORD *)MiniportAdapterHandle + 3);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v9);
  *((_DWORD *)MiniportAdapterHandle + 119) = AdapterType;
  if ( CheckForHangTimeInSeconds > 1 )
  {
    v11 = CheckForHangTimeInSeconds & 0xFFFFFFFE;
    if ( CheckForHangTimeInSeconds > 0x40 )
      v11 = 64;
  }
  else
  {
    v11 = 2;
  }
  *((_DWORD *)MiniportAdapterHandle + 94) = v11;
  v12 = *((_DWORD *)MiniportAdapterHandle + 30);
  v13 = *((_DWORD *)MiniportAdapterHandle + 468) | 0x2000000;
  *((_DWORD *)MiniportAdapterHandle + 468) = v13;
  if ( (AttributeFlags & 8) != 0 )
  {
    v12 |= 8u;
    v13 |= 1u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v12;
    *((_DWORD *)MiniportAdapterHandle + 468) = v13;
  }
  if ( (AttributeFlags & 1) != 0 )
  {
    v12 |= 0x800u;
    v13 |= 0x20u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v12;
    *((_DWORD *)MiniportAdapterHandle + 468) = v13;
  }
  if ( (AttributeFlags & 2) != 0 )
  {
    v12 |= 0x1000u;
    v13 |= 0x40u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v12;
    *((_DWORD *)MiniportAdapterHandle + 468) = v13;
  }
  if ( (AttributeFlags & 0x10) != 0 )
  {
    v12 |= 0x8000u;
    v13 |= 0x100u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v12;
    *((_DWORD *)MiniportAdapterHandle + 468) = v13;
  }
  if ( (AttributeFlags & 0x40) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 31) |= 0x8000u;
    *((_DWORD *)MiniportAdapterHandle + 468) = v13 | 0x200000;
  }
  if ( (AttributeFlags & 0x100) != 0 )
    *((_DWORD *)MiniportAdapterHandle + 30) = v12 & 0xFFFDFFFF;
  KeInitializeEvent((PRKEVENT)((char *)MiniportAdapterHandle + 1912), NotificationEvent, 1u);
  v14 = *((_DWORD *)MiniportAdapterHandle + 30);
  if ( (AttributeFlags & 0x20) != 0 || (v14 & 0x20000) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x800u;
    *((_DWORD *)MiniportAdapterHandle + 30) = v14 | 0x40000;
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)MiniportAdapterHandle + 216),
      (PNDIS_TIMER_FUNCTION)ndisMWakeUpDpcX,
      MiniportAdapterHandle);
    *((_QWORD *)MiniportAdapterHandle + 55) = ndisMSendCompleteX;
  }
  else
  {
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)MiniportAdapterHandle + 216),
      (PNDIS_TIMER_FUNCTION)ndisMWakeUpDpc,
      MiniportAdapterHandle);
  }
  v15 = *((_DWORD *)MiniportAdapterHandle + 30);
  if ( (v15 & 0x20000) != 0 )
  {
    ndisReferencePackage((struct _PKG_REF *)dword_140124018);
    v15 = *((_DWORD *)MiniportAdapterHandle + 30);
  }
  if ( *((_BYTE *)MiniportAdapterHandle + 32) > 5u
    || *((_BYTE *)MiniportAdapterHandle + 32) == 5 && *((_BYTE *)MiniportAdapterHandle + 33)
    || (AttributeFlags & 0x200) != 0 )
  {
    *((_BYTE *)MiniportAdapterHandle + 928) |= 2u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x20000u;
  }
  if ( ndisPadShortPackets && (AttributeFlags & 0x810) == 0 )
  {
    *((_BYTE *)MiniportAdapterHandle + 928) |= 8u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x20000000u;
  }
  if ( (AttributeFlags & 0x80u) != 0 )
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x100000u;
  *((_DWORD *)MiniportAdapterHandle + 30) = v15 | 0x10000;
  v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  ndisSetMiniportHandlers((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v16);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v17,
      1,
      101,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)MiniportAdapterHandle);
  }
}
