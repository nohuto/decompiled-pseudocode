/*
 * XREFs of ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x14006C3E0
 * Callers:
 *     ?ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140005810 (-ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140005B60 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140058210 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14005FFC0 (-ndisOidPostAddPMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140062ED0 (-ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostPMAddWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14006C9E0 (-ndisOidPostPMAddWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B5A40 (-ndisSetOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetCombinedPMConfig(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PM_PARAMETERS *a2)
{
  KIRQL v4; // r9
  int v5; // edx
  int v6; // eax
  unsigned int v7; // r8d
  _NDIS_OPEN_BLOCK *i; // rcx
  _NDIS_FILTER_BLOCK *j; // rcx
  unsigned int v10; // edx
  __int128 v11; // [rsp+20h] [rbp-28h]

  LODWORD(v11) = 1311360;
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v5 = 0;
  v6 = 0;
  a1->MiniportThread = KeGetCurrentThread();
  v7 = a2->EnabledWoLPacketPatterns & 2;
  for ( i = a1->OpenQueue; i; i = i->MiniportNextOpen )
  {
    v7 |= i->PMCurrentParameters.EnabledWoLPacketPatterns;
    v6 |= i->PMCurrentParameters.EnabledProtocolOffloads;
    v5 |= i->PMCurrentParameters.MediaSpecificWakeUpEvents;
  }
  for ( j = a1->LowestFilter; j; j = j->HigherFilter )
  {
    v7 |= j->PMCurrentParameters.EnabledWoLPacketPatterns;
    v6 |= j->PMCurrentParameters.EnabledProtocolOffloads;
    v5 |= j->PMCurrentParameters.MediaSpecificWakeUpEvents;
  }
  v10 = a1->PMWmiParameters.MediaSpecificWakeUpEvents | v5;
  DWORD1(v11) = a1->PMWmiParameters.EnabledWoLPacketPatterns | v7;
  DWORD2(v11) = a1->PMWmiParameters.EnabledProtocolOffloads | v6;
  HIDWORD(v11) = a2->WakeUpFlags;
  *(_OWORD *)&a2->Header.Type = v11;
  a2->MediaSpecificWakeUpEvents = v10;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v4);
}
