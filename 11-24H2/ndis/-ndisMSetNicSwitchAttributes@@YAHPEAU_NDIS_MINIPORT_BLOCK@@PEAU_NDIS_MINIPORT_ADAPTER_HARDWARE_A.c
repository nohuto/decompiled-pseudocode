/*
 * XREFs of ?ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x14009E47C
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x14007F870 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisMSetNicSwitchAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *a2)
{
  struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *v2; // rbp
  unsigned int v4; // ebx
  _NDIS_NIC_SWITCH_CAPABILITIES *HardwareNicSwitchCapabilities; // rax
  UCHAR Revision; // r9
  USHORT Size; // r10
  _NDIS_NIC_SWITCH_CAPABILITIES *CurrentNicSwitchCapabilities; // rcx
  UCHAR v9; // r8
  USHORT v10; // dx
  size_t v11; // rsi
  _NDIS_NIC_SWITCH_CAPABILITIES *Pool2; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *v13; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *v14; // rax
  unsigned __int16 *p_Type; // rdx
  size_t v16; // r8
  unsigned __int16 *v17; // rdx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchHwCapabilities; // rcx
  char v22; // [rsp+30h] [rbp-28h]
  char v23[4]; // [rsp+38h] [rbp-20h]

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      135,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      v22);
  }
  HardwareNicSwitchCapabilities = v2->HardwareNicSwitchCapabilities;
  Revision = HardwareNicSwitchCapabilities->Header.Revision;
  if ( Revision
    && (Size = HardwareNicSwitchCapabilities->Header.Size, Size >= 0x20u)
    && (CurrentNicSwitchCapabilities = v2->CurrentNicSwitchCapabilities,
        (v9 = CurrentNicSwitchCapabilities->Header.Revision) != 0)
    && (v10 = CurrentNicSwitchCapabilities->Header.Size, v10 >= 0x20u) )
  {
    if ( a1->NicSwitchCurrentCapabilities || a1->NicSwitchHwCapabilities )
    {
      v4 = -1073676283;
      goto LABEL_37;
    }
    if ( v9 >= 2u
      && (v10 < 0x74u
       || CurrentNicSwitchCapabilities->NumTotalMacAddresses
       || CurrentNicSwitchCapabilities->NumMacAddressesPerPort
       || CurrentNicSwitchCapabilities->NumVlansPerPort)
      || Revision >= 2u
      && (Size < 0x74u
       || HardwareNicSwitchCapabilities->NumTotalMacAddresses
       || HardwareNicSwitchCapabilities->NumMacAddressesPerPort
       || HardwareNicSwitchCapabilities->NumVlansPerPort) )
    {
      v4 = -1073741637;
    }
    else
    {
      v11 = 132LL;
      Pool2 = (_NDIS_NIC_SWITCH_CAPABILITIES *)ExAllocatePool2(64LL, 132LL, 1718568014LL);
      a1->NicSwitchCurrentCapabilities = Pool2;
      if ( Pool2 )
      {
        v13 = (_NDIS_NIC_SWITCH_CAPABILITIES *)ExAllocatePool2(64LL, 132LL, 1718568014LL);
        a1->TopNicSwitchCurrentCapabilities = v13;
        if ( v13 )
        {
          v14 = (_NDIS_NIC_SWITCH_CAPABILITIES *)ExAllocatePool2(64LL, 132LL, 1718568014LL);
          a1->NicSwitchHwCapabilities = v14;
          if ( v14 )
          {
            p_Type = (unsigned __int16 *)&v2->HardwareNicSwitchCapabilities->Header.Type;
            v16 = p_Type[1];
            if ( p_Type[1] >= 0x84u )
              v16 = 132LL;
            memmove(v14, p_Type, v16);
            v17 = (unsigned __int16 *)&v2->CurrentNicSwitchCapabilities->Header.Type;
            if ( v17[1] < 0x84u )
              v11 = v17[1];
            memmove(a1->NicSwitchCurrentCapabilities, v17, v11);
            memmove(a1->TopNicSwitchCurrentCapabilities, v2->CurrentNicSwitchCapabilities, v11);
            goto LABEL_37;
          }
        }
      }
      v4 = -1073741670;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities;
  if ( NicSwitchCurrentCapabilities )
  {
    ExFreePoolWithTag(NicSwitchCurrentCapabilities, 0);
    a1->NicSwitchCurrentCapabilities = 0LL;
  }
  TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
  if ( TopNicSwitchCurrentCapabilities )
  {
    ExFreePoolWithTag(TopNicSwitchCurrentCapabilities, 0);
    a1->TopNicSwitchCurrentCapabilities = 0LL;
  }
  NicSwitchHwCapabilities = a1->NicSwitchHwCapabilities;
  if ( NicSwitchHwCapabilities )
  {
    ExFreePoolWithTag(NicSwitchHwCapabilities, 0);
    a1->NicSwitchHwCapabilities = 0LL;
  }
LABEL_37:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v23 = v4;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x88u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      (char)v2,
      *(_DWORD *)v23);
  }
  return v4;
}
