/*
 * XREFs of ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B2EAC
 * Callers:
 *     ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140005EB0 (-ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B3200 (-ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400066E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qDL @ 0x140006710 (WPP_RECORDER_SF_qDL.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     ?ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z @ 0x14006C510 (-ndisCompareWoLPatterns@@YAEPEAU_NDIS_PM_WOL_PATTERN@@0@Z.c)
 *     ?ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1400706D0 (-ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008B280 (-ndisIsWoLPacketTypeSupported@@YAEW4_NDIS_PM_WOL_PACKET@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1400B2808 (-ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z.c)
 *     ?ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1400B3C4C (-ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 */

__int64 __fastcall ndisMiniportPreAddWoLPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        char *a3)
{
  unsigned int v3; // ebx
  _SINGLE_LIST_ENTRY *v5; // rdi
  struct _NDIS_OID_REQUEST *v6; // r15
  struct _NDIS_PM_WOL_PATTERN *InformationBuffer; // rbp
  unsigned int v9; // edx
  int v10; // r8d
  _SINGLE_LIST_ENTRY *OidSourceHandle; // rax
  struct _SINGLE_LIST_ENTRY *p_WOLPatternList; // rcx
  _SINGLE_LIST_ENTRY *v13; // r12
  _SINGLE_LIST_ENTRY *Next; // r14
  _SINGLE_LIST_ENTRY *i; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *WoLPatternEntry; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v17; // r9
  int PatternId; // eax
  _NDIS_PM_WOL_PACKET WoLPacketType; // eax
  char v21; // [rsp+28h] [rbp-40h]
  char v22; // [rsp+30h] [rbp-38h]

  v3 = 0;
  v5 = 0LL;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      56,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      v22);
  }
  InformationBuffer = (struct _NDIS_PM_WOL_PATTERN *)v6->DATA.QUERY_INFORMATION.InformationBuffer;
  *a3 = 1;
  if ( !ndisIsWoLPacketTypeSupported(InformationBuffer->WoLPacketType, a1)
    && (v10 != 2 || (unsigned int)(a1->PMAdvertisedCapabilities.MinMagicPacketWakeUp - 2) > 2) )
  {
    v3 = -1073741637;
    goto LABEL_41;
  }
  OidSourceHandle = (_SINGLE_LIST_ENTRY *)ndisGetOidSourceHandle(v6);
  p_WOLPatternList = &a1->WOLPatternList;
  v13 = OidSourceHandle;
  Next = a1->WOLPatternList.Next;
  if ( Next )
  {
    while ( 1 )
    {
      v5 = Next;
      if ( ndisCompareWoLPatterns((struct _NDIS_PM_WOL_PATTERN *)&Next[6], InformationBuffer) )
        break;
      Next = Next->Next;
      if ( !Next )
      {
        v5 = 0LL;
        goto LABEL_11;
      }
    }
    for ( i = Next + 1; i; i = i->Next )
    {
      if ( i[2].Next == v13 )
      {
        v3 = -1073676267;
        goto LABEL_41;
      }
    }
LABEL_11:
    p_WOLPatternList = &a1->WOLPatternList;
  }
  if ( (InformationBuffer->Flags & 1) == 0
    || (v9 = InformationBuffer->PatternId, v9 >= 0xFFFF) && !ndisPMPatternIdExist(p_WOLPatternList, v9) )
  {
    WoLPatternEntry = ndisCreateWoLPatternEntry(InformationBuffer, v6->PortNumber);
    v17 = WoLPatternEntry;
    if ( !WoLPatternEntry )
    {
      v3 = -1073741670;
      goto LABEL_41;
    }
    WoLPatternEntry->Source = v13;
    a1->OidContext = WoLPatternEntry;
    if ( (InformationBuffer->Flags & 1) != 0 )
    {
      PatternId = InformationBuffer->PatternId;
      goto LABEL_38;
    }
    if ( a1->MajorNdisVersion <= 6u && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x55u) )
    {
LABEL_31:
      if ( v5 )
        PatternId = HIDWORD(v5[24].Next);
      else
        PatternId = ndisGetNewPatternEntryId(&a1->WOLPatternList);
      goto LABEL_38;
    }
    WoLPacketType = InformationBuffer->WoLPacketType;
    if ( WoLPacketType == NdisPMWoLPacketMagicPacket )
    {
      PatternId = 65534;
    }
    else
    {
      if ( WoLPacketType != NdisPMWoLPacketEapolRequestIdMessage )
        goto LABEL_31;
      PatternId = 65533;
    }
LABEL_38:
    InformationBuffer->PatternId = PatternId;
    v17->WoLPattern.PatternId = PatternId;
    v17->Id = PatternId;
    if ( v5 )
    {
      *a3 = 1;
      v17->DupLink.Next = v5 + 1;
    }
    else
    {
      *a3 = 0;
    }
    goto LABEL_41;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = v9;
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      14,
      57,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      v21);
  }
  v3 = -1073676267;
LABEL_41:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xBu,
      0x3Au,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      *a3,
      v3);
  return v3;
}
