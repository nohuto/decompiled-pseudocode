/*
 * XREFs of ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1400601E0
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x140154AB0 (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 */

void __fastcall ndisPostProcessRestartParametersAfterMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_RESTART_INFORMATION *a2)
{
  unsigned int v4; // edx
  __int64 MediaType; // r8
  bool v6; // zf
  KIRQL v7; // bp
  unsigned int SupportedOidListLength; // edx
  unsigned int *v9; // rcx
  unsigned int *SupportedOidList; // rcx
  unsigned int LookaheadSize; // eax

  if ( (a1->DeviceFlags & 1) != 0 )
    a2->General.SupportedPacketFilters |= 0x20u;
  if ( a2->Attributes.Oid )
  {
    a1->RecvScaleCapabilities = a2->RssCaps;
    v4 = a2->General.MacOptions | a2->MiniportMacOptionsToPreserve;
    a2->General.MacOptions = v4;
    MediaType = a1->MediaType;
    a1->MacOptions = v4;
    if ( (_DWORD)MediaType == 3 )
    {
      a1->MiniportMaximumLookahead = 512;
    }
    else
    {
      switch ( (int)MediaType )
      {
        case 0:
          LookaheadSize = a2->General.LookaheadSize;
          if ( LookaheadSize > 0x200 )
            LookaheadSize = 512;
          a1->MiniportMaximumLookahead = LookaheadSize;
          goto LABEL_6;
        case 4:
        case 9:
        case 10:
        case 15:
        case 16:
        case 18:
        case 19:
          a1->MiniportMaximumLookahead = a2->General.LookaheadSize;
          break;
        default:
          break;
      }
      if ( (int)MediaType >= 20 )
      {
        a1->MiniportMaximumLookahead = a2->General.LookaheadSize;
LABEL_15:
        v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        SupportedOidListLength = a1->SupportedOidListLength;
        a1->MiniportThread = KeGetCurrentThread();
        if ( a2->General.SupportedOidListLength != SupportedOidListLength )
        {
          SupportedOidList = a1->SupportedOidList;
          if ( SupportedOidList )
          {
            ExFreePoolWithTag(SupportedOidList, 0);
            SupportedOidListLength = 0;
            a1->SupportedOidListLength = 0;
          }
        }
        if ( a2->General.SupportedOidListLength && !SupportedOidListLength )
          a1->SupportedOidList = (unsigned int *)ExAllocatePool2(66LL, a2->General.SupportedOidListLength, 1835091022LL);
        v9 = a1->SupportedOidList;
        if ( v9 )
        {
          memmove(v9, a2->General.SupportedOidList, a2->General.SupportedOidListLength);
          a1->SupportedOidListLength = a2->General.SupportedOidListLength;
        }
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v7);
        a1->IfBlock->AccessType = a2->General.AccessType;
        a1->IfBlock->ConnectionType = a2->General.ConnectionType;
        a1->IfBlock->ifMtu = a2->General.MtuSize;
        return;
      }
      v6 = (_DWORD)MediaType == 0;
      if ( (int)MediaType < 0 )
      {
LABEL_13:
        if ( v6 )
          a1->MaximumLongAddresses = a2->General.MaxMulticastListSize;
        goto LABEL_15;
      }
    }
LABEL_6:
    if ( ((_DWORD)MediaType == 3 || ndisMediaTypeCl[MediaType]) && (v4 & 0x80000001) == 0x80000001 )
      a1->MiniportMaximumLookahead = 512;
    v6 = (_DWORD)MediaType == 0;
    goto LABEL_13;
  }
}
