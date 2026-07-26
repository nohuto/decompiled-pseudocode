/*
 * XREFs of ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x14009EC94
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x14007F870 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     ?ndisIovInitVf@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DEE18 (-ndisIovInitVf@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisMSetSriovAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *a2)
{
  struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *v2; // rbp
  NTSTATUS LocallyUniqueId; // ebx
  _NDIS_SRIOV_CAPABILITIES *HardwareSriovCapabilities; // rax
  size_t v6; // rsi
  _NDIS_SRIOV_CAPABILITIES *CurrentSriovCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchHwCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax
  _NDIS_SRIOV_CAPABILITIES *Pool2; // rax
  unsigned __int16 *p_Type; // rdx
  size_t v12; // r8
  _NDIS_SRIOV_CAPABILITIES *v13; // rax
  _NDIS_SRIOV_CAPABILITIES *v14; // rax
  unsigned __int16 *v15; // rdx
  _NDIS_SRIOV_CAPABILITIES *TopSriovCurrentCapabilities; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovHwCapabilities; // rcx
  char v20; // [rsp+30h] [rbp-28h]

  v2 = a2;
  LocallyUniqueId = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      137,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      v20);
  }
  HardwareSriovCapabilities = v2->HardwareSriovCapabilities;
  if ( !HardwareSriovCapabilities->Header.Revision
    || (v6 = 12LL, HardwareSriovCapabilities->Header.Size < 0xCu)
    || (CurrentSriovCapabilities = v2->CurrentSriovCapabilities, !CurrentSriovCapabilities->Header.Revision)
    || CurrentSriovCapabilities->Header.Size < 0xCu
    || (HardwareSriovCapabilities->SriovCapabilities & 3) == 3
    && ((NicSwitchHwCapabilities = a1->NicSwitchHwCapabilities) == 0LL || NicSwitchHwCapabilities->Header.Revision < 2u)
    || (CurrentSriovCapabilities->SriovCapabilities & 3) == 3
    && ((NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities) == 0LL
     || NicSwitchCurrentCapabilities->Header.Revision < 2u) )
  {
    LocallyUniqueId = -1073741811;
    goto LABEL_33;
  }
  if ( a1->SriovCurrentCapabilities || a1->SriovHwCapabilities )
  {
    LocallyUniqueId = -1073676283;
    goto LABEL_39;
  }
  Pool2 = (_NDIS_SRIOV_CAPABILITIES *)ExAllocatePool2(64LL, 12LL, 1869169742LL);
  a1->SriovHwCapabilities = Pool2;
  if ( !Pool2 )
  {
LABEL_16:
    LocallyUniqueId = -1073741670;
LABEL_33:
    TopSriovCurrentCapabilities = a1->TopSriovCurrentCapabilities;
    if ( TopSriovCurrentCapabilities )
    {
      ExFreePoolWithTag(TopSriovCurrentCapabilities, 0);
      a1->TopSriovCurrentCapabilities = 0LL;
    }
    SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
    if ( SriovCurrentCapabilities )
    {
      ExFreePoolWithTag(SriovCurrentCapabilities, 0);
      a1->SriovCurrentCapabilities = 0LL;
    }
    SriovHwCapabilities = a1->SriovHwCapabilities;
    if ( SriovHwCapabilities )
    {
      ExFreePoolWithTag(SriovHwCapabilities, 0);
      a1->SriovHwCapabilities = 0LL;
    }
    goto LABEL_39;
  }
  p_Type = (unsigned __int16 *)&v2->HardwareSriovCapabilities->Header.Type;
  v12 = p_Type[1];
  if ( p_Type[1] >= 0xCu )
    v12 = 12LL;
  memmove(Pool2, p_Type, v12);
  if ( (v2->CurrentSriovCapabilities->SriovCapabilities & 3) != 3 || ndisSystemSupportsSriov )
  {
    v13 = (_NDIS_SRIOV_CAPABILITIES *)ExAllocatePool2(64LL, 12LL, 1869169742LL);
    a1->SriovCurrentCapabilities = v13;
    if ( !v13 )
      goto LABEL_16;
    v14 = (_NDIS_SRIOV_CAPABILITIES *)ExAllocatePool2(64LL, 12LL, 1869169742LL);
    a1->TopSriovCurrentCapabilities = v14;
    if ( !v14 )
      goto LABEL_16;
    v15 = (unsigned __int16 *)&v2->CurrentSriovCapabilities->Header.Type;
    if ( v15[1] < 0xCu )
      v6 = v15[1];
    memmove(a1->SriovCurrentCapabilities, v15, v6);
    memmove(a1->TopSriovCurrentCapabilities, v2->CurrentSriovCapabilities, v6);
    LocallyUniqueId = ZwAllocateLocallyUniqueId(&a1->SriovLuid);
    if ( (LocallyUniqueId
       || (v2->CurrentSriovCapabilities->SriovCapabilities & 5) == 5 && (LocallyUniqueId = ndisIovInitVf(a1)) != 0)
      && LocallyUniqueId < 0
      && LocallyUniqueId != -1073676283 )
    {
      goto LABEL_33;
    }
  }
LABEL_39:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x8Au,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      (char)v2,
      LocallyUniqueId);
  return (unsigned int)LocallyUniqueId;
}
