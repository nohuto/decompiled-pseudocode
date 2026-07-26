/*
 * XREFs of ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1400591E0
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140161320 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140059320 (-ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisPostProcessRestartParametersAfterProtocols(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_RESTART_INFORMATION *a2)
{
  unsigned int *SupportedOidList; // rcx
  _NDIS_RESTART_ATTRIBUTES *Next; // rcx
  KIRQL v6; // al
  int v7; // edx
  _NDIS_RESTART_ATTRIBUTES *v8; // rbx

  if ( a2->Attributes.Oid )
  {
    ndisUpdateOperationalStatus(a1);
    SupportedOidList = a2->General.SupportedOidList;
    if ( SupportedOidList )
    {
      ExFreePoolWithTag(SupportedOidList, 0);
      a2->General.SupportedOidList = 0LL;
    }
    Next = a2->Attributes.Next;
    if ( a2->Attributes.Next )
    {
      do
      {
        v8 = Next->Next;
        ExFreePoolWithTag(Next, 0);
        Next = v8;
      }
      while ( v8 );
    }
    v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    if ( (a1->PnPFlags & 0x10) != 0 || (a1->Flags & 0x100) != 0 )
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v6);
    }
    else
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v6);
      if ( IoWMIRegistrationControl(a1->DeviceObject, 4u) )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v7,
            1,
            37,
            (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
            (char)a1);
        }
      }
    }
  }
}
