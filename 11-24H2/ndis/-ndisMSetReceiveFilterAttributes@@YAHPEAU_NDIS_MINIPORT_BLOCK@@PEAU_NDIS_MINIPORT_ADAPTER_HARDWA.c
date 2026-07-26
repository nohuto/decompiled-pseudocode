/*
 * XREFs of ?ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x14009E98C
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x14007F870 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisMCheckReceiveFilterPacketCoalescingAttributes@@YAHPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x14009C834 (-ndisMCheckReceiveFilterPacketCoalescingAttributes@@YAHPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z.c)
 *     ?ndisShouldSuppressReceiveFilterCapabilities@@YAEPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x14009F2DC (-ndisShouldSuppressReceiveFilterCapabilities@@YAEPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisMSetReceiveFilterAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *a2)
{
  struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *v2; // rsi
  int v4; // ebx
  struct _NDIS_RECEIVE_FILTER_CAPABILITIES *HardwareReceiveFilterCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *CurrentReceiveFilterCapabilities; // rax
  size_t v7; // rbp
  _NDIS_RECEIVE_FILTER_CAPABILITIES *Pool2; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v9; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v10; // rax
  unsigned __int16 *p_Type; // rdx
  size_t v12; // r8
  unsigned __int16 *v13; // rdx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterHwCapabilities; // rcx
  char v18; // [rsp+30h] [rbp-38h]
  char v19[8]; // [rsp+38h] [rbp-30h]

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      132,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      v18);
  }
  HardwareReceiveFilterCapabilities = v2->HardwareReceiveFilterCapabilities;
  if ( !HardwareReceiveFilterCapabilities->Header.Revision
    || HardwareReceiveFilterCapabilities->Header.Size < 0x38u
    || (CurrentReceiveFilterCapabilities = v2->CurrentReceiveFilterCapabilities,
        !CurrentReceiveFilterCapabilities->Header.Revision)
    || CurrentReceiveFilterCapabilities->Header.Size < 0x38u )
  {
    v4 = -1073741811;
    goto LABEL_29;
  }
  if ( ndisShouldSuppressReceiveFilterCapabilities(HardwareReceiveFilterCapabilities)
    || ndisShouldSuppressReceiveFilterCapabilities(v2->CurrentReceiveFilterCapabilities) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x85u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      (char)v2->HardwareReceiveFilterCapabilities,
      v2->CurrentReceiveFilterCapabilities);
  }
  else
  {
    v4 = ndisMCheckReceiveFilterPacketCoalescingAttributes(v2->HardwareReceiveFilterCapabilities);
    if ( v4 || (v4 = ndisMCheckReceiveFilterPacketCoalescingAttributes(v2->CurrentReceiveFilterCapabilities)) != 0 )
    {
      if ( v4 < 0 && v4 != -1073676283 )
        goto LABEL_29;
    }
    else
    {
      if ( !a1->ReceiveFilterCurrentCapabilities && !a1->ReceiveFilterHwCapabilities )
      {
        v7 = 84LL;
        Pool2 = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)ExAllocatePool2(64LL, 84LL, 1718568014LL);
        a1->ReceiveFilterCurrentCapabilities = Pool2;
        if ( Pool2 )
        {
          v9 = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)ExAllocatePool2(64LL, 84LL, 1718568014LL);
          a1->TopReceiveFilterCurrentCapabilities = v9;
          if ( v9 )
          {
            v10 = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)ExAllocatePool2(64LL, 84LL, 1718568014LL);
            a1->ReceiveFilterHwCapabilities = v10;
            if ( v10 )
            {
              p_Type = (unsigned __int16 *)&v2->HardwareReceiveFilterCapabilities->Header.Type;
              v12 = p_Type[1];
              if ( p_Type[1] >= 0x54u )
                v12 = 84LL;
              memmove(v10, p_Type, v12);
              v13 = (unsigned __int16 *)&v2->CurrentReceiveFilterCapabilities->Header.Type;
              if ( v13[1] < 0x54u )
                v7 = v13[1];
              memmove(a1->ReceiveFilterCurrentCapabilities, v13, v7);
              memmove(a1->TopReceiveFilterCurrentCapabilities, v2->CurrentReceiveFilterCapabilities, v7);
              a1->EnabledReceiveQueueTypes = v2->CurrentReceiveFilterCapabilities->EnabledQueueTypes;
              a1->EnabledReceiveFilterTypes = v2->CurrentReceiveFilterCapabilities->EnabledFilterTypes;
              goto LABEL_35;
            }
          }
        }
        v4 = -1073741670;
LABEL_29:
        ReceiveFilterCurrentCapabilities = a1->ReceiveFilterCurrentCapabilities;
        if ( ReceiveFilterCurrentCapabilities )
        {
          ExFreePoolWithTag(ReceiveFilterCurrentCapabilities, 0);
          a1->ReceiveFilterCurrentCapabilities = 0LL;
        }
        TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
        if ( TopReceiveFilterCurrentCapabilities )
        {
          ExFreePoolWithTag(TopReceiveFilterCurrentCapabilities, 0);
          a1->TopReceiveFilterCurrentCapabilities = 0LL;
        }
        ReceiveFilterHwCapabilities = a1->ReceiveFilterHwCapabilities;
        if ( ReceiveFilterHwCapabilities )
        {
          ExFreePoolWithTag(ReceiveFilterHwCapabilities, 0);
          a1->ReceiveFilterHwCapabilities = 0LL;
        }
        goto LABEL_35;
      }
      v4 = -1073676283;
    }
  }
LABEL_35:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v19 = v4;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x86u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      (char)v2,
      *(_QWORD *)v19);
  }
  return (unsigned int)v4;
}
