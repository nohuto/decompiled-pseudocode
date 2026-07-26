/*
 * XREFs of ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400070D0
 * Callers:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140008000 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 * Callees:
 *     ?ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z @ 0x140005E90 (-ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z.c)
 *     ?ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z @ 0x140007580 (-ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x14000AD80 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qqqd @ 0x140015780 (WPP_RECORDER_SF_qqqd.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x14008C060 (-ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z @ 0x1400B2458 (-ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisPMAddProtocolOffload(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  struct _NDIS_FILTER_BLOCK *v4; // r13
  struct _NDIS_PACKET_PATTERN_ENTRY *Next; // rbx
  char v7; // r15
  unsigned int SetMiniport; // eax
  int v9; // edx
  unsigned int v10; // edi
  struct _SINGLE_LIST_ENTRY *p_Link; // r15
  int v12; // edx
  _QWORD *v13; // rbx
  struct _NDIS_PACKET_PATTERN_ENTRY *v15; // rax
  int v16; // edx
  __int64 v17; // r11
  unsigned int PortNumber; // eax
  int v19; // eax
  int Next_high; // eax
  int PMProtocolOffloadSize; // eax
  int v22; // eax
  KIRQL v23; // dl
  int v24; // r15d
  int v25; // edx
  int v26; // r9d
  void *v27; // rcx
  _QWORD *v28; // r15
  unsigned __int8 v29[16]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v31[248]; // [rsp+70h] [rbp-90h] BYREF

  memset(v31, 0, sizeof(v31));
  v4 = a2;
  v29[0] = 0;
  P[0] = 0LL;
  Next = 0LL;
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      97,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      (char)v4,
      (char)a3);
  }
  ndisWaitForKernelObject(&a1->PMOffloadSemaphore);
  while ( 1 )
  {
    *(_DWORD *)&a3->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, v4);
    v10 = SetMiniport;
    if ( SetMiniport != -1071439868 && SetMiniport != -1073741670 )
    {
      if ( SetMiniport && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          14,
          98,
          (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
          SetMiniport);
      }
      goto LABEL_9;
    }
    if ( !v7 )
      break;
LABEL_15:
    v15 = ndisRemovePMLowestPriorityEntry(
            (struct _SINGLE_LIST_ENTRY *)P,
            *((_DWORD *)a3->DATA.QUERY_INFORMATION.InformationBuffer + 2));
    if ( !v15 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_9;
      v19 = *(_DWORD *)(v17 + 8);
      v26 = 100;
      LOBYTE(v16) = 4;
      goto LABEL_31;
    }
    v15->Link.Next = &Next->Link;
    Next = v15;
    memset(&v31[112], 0, 136);
    *(_QWORD *)&v31[104] = &ndisIntReqGeneric;
    memset(v31, 0, 104);
    *(_DWORD *)&v31[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
    EtwActivityIdControl(3u, (LPGUID)&v31[168]);
    *(_DWORD *)v31 = 15466902;
    *(_DWORD *)&v31[32] = -50265841;
    *(_DWORD *)&v31[4] = 1;
    PortNumber = Next->PortNumber;
    *(_DWORD *)&v31[88] |= 0x1800000u;
    *(_DWORD *)&v31[8] = PortNumber;
    *(_QWORD *)&v31[40] = &Next->Id;
    *(_DWORD *)&v31[48] = 4;
    v19 = ndisQuerySetMiniportEx(a1, 0LL, (struct _NDIS_OID_REQUEST *)v31, 0, 0LL, v4);
    if ( v19 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_9;
      v26 = 101;
      LOBYTE(v16) = 2;
LABEL_31:
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v16,
        14,
        v26,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
        v19);
      goto LABEL_9;
    }
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, v29);
  v22 = ndisClonePMPatternList(a1->PMProtocolOffloadList.Next, (struct _SINGLE_LIST_ENTRY *)P);
  v23 = v29[0];
  v24 = v22;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v23);
  if ( !v24 )
  {
    v7 = 1;
    goto LABEL_15;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v25) = 2;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v25,
      14,
      99,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      v24);
  }
LABEL_9:
  while ( 1 )
  {
    p_Link = &Next->Link;
    if ( !Next )
      break;
    Next = (struct _NDIS_PACKET_PATTERN_ENTRY *)Next->Link.Next;
    *(_QWORD *)&v31[104] = &ndisIntReqGeneric;
    memset(v31, 0, 104);
    memset(&v31[112], 0, 136);
    *(_DWORD *)&v31[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
    EtwActivityIdControl(3u, (LPGUID)&v31[168]);
    *(_DWORD *)v31 = 15466902;
    *(_DWORD *)&v31[32] = -50265843;
    *(_DWORD *)&v31[4] = 1;
    Next_high = HIDWORD(p_Link[5].Next);
    *(_QWORD *)&v31[40] = p_Link + 6;
    *(_DWORD *)&v31[8] = Next_high;
    PMProtocolOffloadSize = ndisGetPMProtocolOffloadSize((struct _NDIS_PM_PROTOCOL_OFFLOAD *)&p_Link[6]);
    *(_DWORD *)&v31[88] |= 0x1800000u;
    *(_DWORD *)&v31[48] = PMProtocolOffloadSize;
    if ( (unsigned int)ndisQuerySetMiniportEx(a1, 0LL, (struct _NDIS_OID_REQUEST *)v31, 0, 0LL, v4) )
    {
      p_Link->Next = &Next->Link;
      break;
    }
    ExFreePoolWithTag(p_Link, 0);
  }
  KeReleaseSemaphore(&a1->PMOffloadSemaphore, 0, 1, 0);
  ndisCreatePMRejectWorkItem(a1, p_Link, 1073938514);
  v13 = P[0];
  if ( P[0] )
  {
    do
    {
      v27 = v13;
      v28 = v13;
      if ( v13 )
      {
        v28 = (_QWORD *)*v13;
        v13 = (_QWORD *)*v13;
      }
      ExFreePoolWithTag(v27, 0);
    }
    while ( v28 );
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      11,
      102,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      (char)v4,
      (char)a3,
      v10);
  return v10;
}
