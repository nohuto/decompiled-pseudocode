/*
 * XREFs of ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140067C10
 * Callers:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140008000 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 * Callees:
 *     ?ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x140006050 (-ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z.c)
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

__int64 __fastcall ndisPMAddWOLPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  struct _NDIS_PACKET_PATTERN_ENTRY *v6; // rbx
  char v7; // r15
  unsigned int SetMiniport; // eax
  int v9; // edx
  unsigned int v10; // edi
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  int v12; // eax
  KIRQL v13; // dl
  int v14; // r15d
  int v15; // edx
  struct _NDIS_PACKET_PATTERN_ENTRY *v16; // rax
  int v17; // edx
  __int64 v18; // r11
  unsigned int PortNumber; // eax
  int v20; // eax
  int v21; // r9d
  struct _SINGLE_LIST_ENTRY *p_Link; // r15
  int Next_high; // eax
  int WoLPatternSize; // eax
  int v25; // edx
  _QWORD *v26; // rbx
  void *v27; // rcx
  _QWORD *v28; // r15
  unsigned __int8 v30[16]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[248]; // [rsp+70h] [rbp-90h] BYREF

  memset(v32, 0, sizeof(v32));
  v30[0] = 0;
  P[0] = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x4Du,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  ndisWaitForKernelObject(&a1->PMPatternSemaphore);
  while ( 1 )
  {
    *(_DWORD *)&a3->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, a2);
    v10 = SetMiniport;
    if ( SetMiniport != -1071439869 && SetMiniport != -1073741670 )
      break;
    if ( !v7 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, v30);
      if ( a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x14u )
        Next = a1->WOLPatternList.Next;
      else
        Next = a1->PatternList.Next;
      v12 = ndisClonePMPatternList(Next, (struct _SINGLE_LIST_ENTRY *)P);
      v13 = v30[0];
      v14 = v12;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v13);
      if ( v14 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v15,
            14,
            79,
            (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
            v14);
        }
        goto LABEL_27;
      }
      v7 = 1;
    }
    v16 = ndisRemovePMLowestPriorityEntry(
            (struct _SINGLE_LIST_ENTRY *)P,
            *((_DWORD *)a3->DATA.QUERY_INFORMATION.InformationBuffer + 2));
    if ( !v16 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_27;
      v20 = *(_DWORD *)(v18 + 8);
      v21 = 80;
      LOBYTE(v17) = 4;
      goto LABEL_26;
    }
    v16->Link.Next = &v6->Link;
    v6 = v16;
    memset(&v32[112], 0, 136);
    *(_QWORD *)&v32[104] = &ndisIntReqGeneric;
    memset(v32, 0, 104);
    *(_DWORD *)&v32[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
    EtwActivityIdControl(3u, (LPGUID)&v32[168]);
    *(_DWORD *)v32 = 15466902;
    *(_DWORD *)&v32[32] = -50265845;
    *(_DWORD *)&v32[4] = 1;
    PortNumber = v6->PortNumber;
    *(_DWORD *)&v32[88] |= 0x1800000u;
    *(_DWORD *)&v32[8] = PortNumber;
    *(_QWORD *)&v32[40] = &v6->Id;
    *(_DWORD *)&v32[48] = 4;
    v20 = ndisQuerySetMiniportEx(a1, 0LL, (struct _NDIS_OID_REQUEST *)v32, 0, 0LL, a2);
    if ( v20 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_27;
      v21 = 81;
      LOBYTE(v17) = 2;
LABEL_26:
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v17,
        14,
        v21,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
        v20);
      goto LABEL_27;
    }
  }
  if ( SetMiniport && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      14,
      78,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      SetMiniport);
  }
LABEL_27:
  while ( 1 )
  {
    p_Link = &v6->Link;
    if ( !v6 )
      break;
    v6 = (struct _NDIS_PACKET_PATTERN_ENTRY *)v6->Link.Next;
    *(_QWORD *)&v32[104] = &ndisIntReqGeneric;
    memset(v32, 0, 104);
    memset(&v32[112], 0, 136);
    *(_DWORD *)&v32[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
    EtwActivityIdControl(3u, (LPGUID)&v32[168]);
    *(_DWORD *)v32 = 15466902;
    *(_DWORD *)&v32[32] = -50265846;
    *(_DWORD *)&v32[4] = 1;
    Next_high = HIDWORD(p_Link[5].Next);
    *(_QWORD *)&v32[40] = p_Link + 6;
    *(_DWORD *)&v32[8] = Next_high;
    WoLPatternSize = ndisGetWoLPatternSize((struct _NDIS_PM_WOL_PATTERN *)&p_Link[6]);
    *(_DWORD *)&v32[88] |= 0x1800000u;
    *(_DWORD *)&v32[48] = WoLPatternSize;
    if ( (unsigned int)ndisQuerySetMiniportEx(a1, 0LL, (struct _NDIS_OID_REQUEST *)v32, 0, 0LL, a2) )
    {
      p_Link->Next = &v6->Link;
      break;
    }
    ExFreePoolWithTag(p_Link, 0);
  }
  KeReleaseSemaphore(&a1->PMPatternSemaphore, 0, 1, 0);
  ndisCreatePMRejectWorkItem(a1, p_Link, 1073938513);
  v26 = P[0];
  if ( P[0] )
  {
    do
    {
      v27 = v26;
      v28 = v26;
      if ( v26 )
      {
        v28 = (_QWORD *)*v26;
        v26 = (_QWORD *)*v26;
      }
      ExFreePoolWithTag(v27, 0);
    }
    while ( v28 );
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v25,
      0xBu,
      0x52u,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      v10);
  return v10;
}
