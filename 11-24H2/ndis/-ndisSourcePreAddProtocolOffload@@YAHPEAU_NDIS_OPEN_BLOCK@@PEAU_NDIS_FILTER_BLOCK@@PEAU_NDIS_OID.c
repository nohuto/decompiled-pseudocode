/*
 * XREFs of ?ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x140006230
 * Callers:
 *     ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140005900 (-ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLOAD@@K@Z @ 0x140005DC0 (-ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLO.c)
 *     ?ndisComparePMProtocolOffloads@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@0@Z @ 0x1400065C0 (-ndisComparePMProtocolOffloads@@YAEPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@0@Z.c)
 *     ?ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400066A0 (-ndisIsPMProtocolOffloadSupported@@YAEW4_NDIS_PM_PROTOCOL_OFFLOAD_TYPE@@PEAU_NDIS_MINIPORT_BLOCK.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qLL @ 0x140035A80 (WPP_RECORDER_SF_qLL.c)
 */

__int64 __fastcall ndisSourcePreAddProtocolOffload(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3,
        char *a4)
{
  struct _NDIS_FILTER_BLOCK *v6; // rbx
  unsigned int v8; // esi
  struct _NDIS_PM_PROTOCOL_OFFLOAD *InformationBuffer; // r14
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdx
  int v11; // edx
  _SINGLE_LIST_ENTRY *Next; // rbx
  struct _NDIS_PACKET_PATTERN_ENTRY *PMProtocolOffloadEntry; // rcx

  v6 = a2;
  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      90,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      (char)a3);
  }
  InformationBuffer = (struct _NDIS_PM_PROTOCOL_OFFLOAD *)a3->DATA.QUERY_INFORMATION.InformationBuffer;
  *a4 = 1;
  if ( a1 )
    MiniportHandle = a1->MiniportHandle;
  else
    MiniportHandle = v6->Miniport;
  if ( ndisIsPMProtocolOffloadSupported(InformationBuffer->ProtocolOffloadType, MiniportHandle) )
  {
    if ( a1 )
      Next = a1->PMProtocolOffloadList.Next;
    else
      Next = v6->PMProtocolOffloadList.Next;
    if ( Next )
    {
      while ( !ndisComparePMProtocolOffloads((struct _NDIS_PM_PROTOCOL_OFFLOAD *)&Next[6], InformationBuffer) )
      {
        Next = Next->Next;
        if ( !Next )
          goto LABEL_9;
      }
      v8 = -1073676267;
    }
    else
    {
LABEL_9:
      PMProtocolOffloadEntry = ndisCreatePMProtocolOffloadEntry(InformationBuffer, a3->PortNumber);
      if ( PMProtocolOffloadEntry )
      {
        PMProtocolOffloadEntry->Source = *(void **)&a3->NdisReserved[32];
        *(_QWORD *)&a3->NdisReserved[88] = PMProtocolOffloadEntry;
        *a4 = 0;
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  else
  {
    v8 = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      11,
      91,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      *a4,
      v8);
  return v8;
}
