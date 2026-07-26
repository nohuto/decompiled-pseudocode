/*
 * XREFs of ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14005BCC0
 * Callers:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140015760 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 * Callees:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x140013110 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qqqd @ 0x140026E30 (WPP_RECORDER_SF_qqqd.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z @ 0x14005C170 (-ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z.c)
 *     ?ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z @ 0x14005CB90 (-ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z.c)
 *     ?ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x140097810 (-ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z @ 0x1400BA288 (-ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisPMAddProtocolOffload(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  struct _NDIS_PACKET_PATTERN_ENTRY *Next; // rbx
  char v7; // r15
  unsigned int SetMiniport; // eax
  unsigned int v9; // edi
  unsigned __int16 v10; // r9
  unsigned __int8 v11; // dl
  struct _SINGLE_LIST_ENTRY *p_Link; // r15
  int v13; // edx
  _QWORD *v14; // rbx
  struct _NDIS_PACKET_PATTERN_ENTRY *v16; // rax
  __int64 v17; // r11
  unsigned int PortNumber; // eax
  int v19; // eax
  int Next_high; // eax
  unsigned int PMProtocolOffloadSize; // eax
  int v22; // eax
  KIRQL v23; // dl
  int v24; // r15d
  void *v25; // rcx
  _QWORD *v26; // r15
  struct _NDIS_FILTER_BLOCK *v27; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v28[16]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v30[248]; // [rsp+70h] [rbp-90h] BYREF

  memset(v30, 0, sizeof(v30));
  v28[0] = 0;
  P[0] = 0LL;
  Next = 0LL;
  v7 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x61u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  ndisWaitForKernelObject(&a1->PMOffloadSemaphore);
  while ( 1 )
  {
    *(_DWORD *)&a3->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, a2);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439868 && SetMiniport != -1073741670 )
      break;
    if ( !v7 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, v28);
      v22 = ndisClonePMPatternList(a1->PMProtocolOffloadList.Next, (struct _SINGLE_LIST_ENTRY *)P);
      v23 = v28[0];
      v24 = v22;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v23);
      if ( v24 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_10;
        v10 = 99;
        LODWORD(v27) = v24;
        v11 = 2;
LABEL_9:
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          0xEu,
          v10,
          (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
          v27);
        goto LABEL_10;
      }
      v7 = 1;
    }
    v16 = ndisRemovePMLowestPriorityEntry(
            (struct _SINGLE_LIST_ENTRY *)P,
            *((_DWORD *)a3->DATA.QUERY_INFORMATION.InformationBuffer + 2));
    if ( !v16 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v19 = *(_DWORD *)(v17 + 8);
      v10 = 100;
      v11 = 4;
      goto LABEL_32;
    }
    v16->Link.Next = &Next->Link;
    Next = v16;
    memset(&v30[112], 0, 136);
    *(_QWORD *)&v30[104] = &ndisIntReqGeneric;
    memset(v30, 0, 104);
    *(_DWORD *)&v30[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
    EtwActivityIdControl(3u, (LPGUID)&v30[168]);
    *(_DWORD *)v30 = 15466902;
    *(_DWORD *)&v30[32] = -50265841;
    *(_DWORD *)&v30[4] = 1;
    PortNumber = Next->PortNumber;
    *(_DWORD *)&v30[88] |= 0x1800000u;
    *(_DWORD *)&v30[8] = PortNumber;
    *(_QWORD *)&v30[40] = &Next->Id;
    *(_DWORD *)&v30[48] = 4;
    v19 = ndisQuerySetMiniportEx(a1, 0LL, (struct _NDIS_OID_REQUEST *)v30, 0, 0LL, a2);
    if ( v19 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v10 = 101;
      v11 = 2;
LABEL_32:
      LODWORD(v27) = v19;
      goto LABEL_9;
    }
  }
  if ( SetMiniport && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = 98;
    LODWORD(v27) = SetMiniport;
    v11 = 2;
    goto LABEL_9;
  }
LABEL_10:
  while ( 1 )
  {
    p_Link = &Next->Link;
    if ( !Next )
      break;
    Next = (struct _NDIS_PACKET_PATTERN_ENTRY *)Next->Link.Next;
    *(_QWORD *)&v30[104] = &ndisIntReqGeneric;
    memset(v30, 0, 104);
    memset(&v30[112], 0, 136);
    *(_DWORD *)&v30[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
    EtwActivityIdControl(3u, (LPGUID)&v30[168]);
    *(_DWORD *)v30 = 15466902;
    *(_DWORD *)&v30[32] = -50265843;
    *(_DWORD *)&v30[4] = 1;
    Next_high = HIDWORD(p_Link[5].Next);
    *(_QWORD *)&v30[40] = p_Link + 6;
    *(_DWORD *)&v30[8] = Next_high;
    PMProtocolOffloadSize = ndisGetPMProtocolOffloadSize((struct _NDIS_PM_PROTOCOL_OFFLOAD *)&p_Link[6]);
    *(_DWORD *)&v30[88] |= 0x1800000u;
    *(_DWORD *)&v30[48] = PMProtocolOffloadSize;
    if ( (unsigned int)ndisQuerySetMiniportEx(a1, 0LL, (struct _NDIS_OID_REQUEST *)v30, 0, 0LL, a2) )
    {
      p_Link->Next = &Next->Link;
      break;
    }
    ExFreePoolWithTag(p_Link, 0);
  }
  KeReleaseSemaphore(&a1->PMOffloadSemaphore, 0, 1, 0);
  ndisCreatePMRejectWorkItem(a1, p_Link, 1073938514);
  v14 = P[0];
  if ( P[0] )
  {
    do
    {
      v25 = v14;
      v26 = v14;
      if ( v14 )
      {
        v26 = (_QWORD *)*v14;
        v14 = (_QWORD *)*v14;
      }
      ExFreePoolWithTag(v25, 0);
    }
    while ( v26 );
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      0xBu,
      0x66u,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      v9);
  return v9;
}
