/*
 * XREFs of ?NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14008FA80
 * Callers:
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14004B2E0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     NdisMRemoveMiniport @ 0x14009DDF0 (NdisMRemoveMiniport.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140174190 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140016910 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

void __fastcall NdisMRemoveMiniportInternal(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  enum _NDIS_MINIPORT_EVENT v2; // di
  unsigned int PnPFlags; // eax
  unsigned __int64 *p_Lock; // rcx
  KIRQL v6; // dl
  __int16 v7; // dx
  unsigned __int8 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  v8 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      101,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)a1);
  }
  if ( (a1->Flags & 0x100) == 0 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v8);
    PnPFlags = a1->PnPFlags;
    p_Lock = &a1->Lock;
    a1->MiniportThread = 0LL;
    v6 = v8;
    if ( (PnPFlags & 0x100) != 0 )
    {
      KeReleaseSpinLock(p_Lock, v8);
    }
    else
    {
      a1->PnPFlags = PnPFlags | 0x100;
      KeReleaseSpinLock(p_Lock, v6);
      ndisLogMiniportEvent(a1, v2);
      IoInvalidateDeviceState(a1->PhysicalDeviceObject);
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        13,
        102,
        (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
        (char)a1);
    }
  }
}
