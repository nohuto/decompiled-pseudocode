/*
 * XREFs of ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x1400855E0
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x14009E1FC (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1401738D0 (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140051CB0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z @ 0x140072D30 (-ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z.c)
 *     ?ndisMergeEncapsulations@@YAHPEAU_NDIS_OFFLOAD_ENCAPSULATION@@0@Z @ 0x1400BA1B0 (-ndisMergeEncapsulations@@YAHPEAU_NDIS_OFFLOAD_ENCAPSULATION@@0@Z.c)
 *     ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1400BDE90 (-ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisMRestoreFilterSettings(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OPEN_BLOCK *a2,
        unsigned __int8 a3)
{
  __int64 v3; // r12
  unsigned __int8 v4; // si
  unsigned int v5; // r15d
  struct _NDIS_MINIPORT_BLOCK *v7; // r13
  unsigned int v8; // ebx
  __int64 Pool2; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  _LIST_ENTRY *v14; // rax
  _LIST_ENTRY *v15; // rbx
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  _NDIS_OPEN_BLOCK *OpenQueue; // r11
  UCHAR Type; // al
  char v19; // bl
  _NDIS_OPEN_OFFLOAD *v20; // rcx
  unsigned int HeaderSize; // eax
  __int64 v22; // xmm1_8
  _NDIS_MINIPORT_OFFLOAD *v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rbx
  __int128 v28; // xmm0
  __int64 v29; // xmm1_8
  _LIST_ENTRY *v30; // rax
  _LIST_ENTRY *v31; // rbx
  int v32; // ebx
  _SINGLE_LIST_ENTRY *i; // rbx
  unsigned int Next; // eax
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // ecx
  struct _NDIS_OID_REQUEST *v38; // rax
  struct _NDIS_OID_REQUEST *v39; // rdi
  _LIST_ENTRY *NdisReserved; // rax
  _LIST_ENTRY *v41; // rcx
  _SINGLE_LIST_ENTRY *v42; // rsi
  unsigned int v43; // eax
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rdi
  _LIST_ENTRY *v47; // rdi
  _LIST_ENTRY *v48; // rax
  unsigned int v49; // r15d
  struct _NDIS_OPEN_BLOCK *j; // rax
  __int64 v51; // rax
  __int64 v52; // rsi
  KIRQL v53; // bl
  _LIST_ENTRY *v54; // rax
  _LIST_ENTRY *v55; // rsi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v57; // rax
  char v59[8]; // [rsp+30h] [rbp-39h]
  struct _LIST_ENTRY v61; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v62; // [rsp+58h] [rbp-11h]
  int v63; // [rsp+5Ch] [rbp-Dh]
  struct _NDIS_MINIPORT_BLOCK *v64; // [rsp+60h] [rbp-9h]
  struct _NDIS_OFFLOAD_ENCAPSULATION v65; // [rsp+68h] [rbp-1h] BYREF

  v3 = 0LL;
  v4 = a3;
  v5 = 0;
  v64 = a1;
  v62 = 0;
  v7 = a1;
  v8 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x3Fu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  if ( a2 || v4 )
  {
    v61.Blink = &v61;
    v61.Flink = &v61;
    if ( !v4 )
      goto LABEL_45;
  }
  else
  {
    v61.Blink = &v61;
    v61.Flink = &v61;
  }
  if ( v7->MediaType == NdisMedium802_3 )
  {
    Pool2 = ExAllocatePool2(64LL, 252LL, 1903313998LL);
    v3 = Pool2;
    if ( !Pool2 )
      goto LABEL_89;
    *(_DWORD *)(Pool2 + 4) = 1;
    *(_QWORD *)(Pool2 + 40) = Pool2 + 248;
    *(_DWORD *)(Pool2 + 32) = 65806;
    *(_DWORD *)(Pool2 + 48) = 4;
    *(_DWORD *)(Pool2 + 248) = -1;
    *(_DWORD *)Pool2 = 16253334;
    *(_DWORD *)(Pool2 + 88) |= 2u;
    *(_QWORD *)(Pool2 + 104) = a2;
    EtwActivityIdControl(3u, (LPGUID)(Pool2 + 168));
    if ( a2 )
    {
      ndisMReferenceOpen((__int64)a2, 6u);
      *(_DWORD *)(v3 + 88) |= 0x200u;
    }
    else
    {
      *(_QWORD *)(v3 + 104) = &ndisIntReqRestore;
    }
    Blink = v61.Blink;
    v11 = (_LIST_ENTRY *)(v3 + 72);
    *(_DWORD *)(v3 + 88) |= 0x80000u;
    if ( Blink->Flink != &v61 )
      goto LABEL_86;
    *(_QWORD *)(v3 + 80) = Blink;
    v11->Flink = &v61;
    v5 = 1;
    Blink->Flink = v11;
    v61.Blink = (_LIST_ENTRY *)(v3 + 72);
    v62 = 1;
    if ( v7->MediaType == NdisMedium802_3 )
    {
      v12 = ExAllocatePool2(64LL, 248LL, 1903313998LL);
      v13 = v12;
      if ( !v12 )
        goto LABEL_78;
      *(_DWORD *)(v12 + 4) = 1;
      *(_QWORD *)(v12 + 40) = v12 + 248;
      *(_DWORD *)(v12 + 32) = 16843011;
      *(_DWORD *)(v12 + 48) = 0;
      *(_DWORD *)v12 = 16253334;
      *(_DWORD *)(v12 + 88) |= 2u;
      *(_QWORD *)(v12 + 104) = a2;
      EtwActivityIdControl(3u, (LPGUID)(v12 + 168));
      if ( a2 )
      {
        ndisMReferenceOpen((__int64)a2, 6u);
        *(_DWORD *)(v13 + 88) |= 0x200u;
      }
      else
      {
        *(_QWORD *)(v13 + 104) = &ndisIntReqRestore;
      }
      v14 = v61.Blink;
      *(_DWORD *)(v13 + 88) |= 0x80000u;
      v3 = v13;
      v15 = (_LIST_ENTRY *)(v13 + 72);
      if ( v14->Flink != &v61 )
        goto LABEL_86;
      v15->Blink = v14;
      v15->Flink = &v61;
      v5 = 2;
      v14->Flink = v15;
      v61.Blink = v15;
      v62 = 2;
    }
  }
  Offload = v7->Offload;
  if ( Offload && Offload->SupportsTopOffload == 1 )
  {
    OpenQueue = v7->OpenQueue;
    Type = 0;
    memset(&v65, 0, sizeof(v65));
    v19 = 1;
    if ( OpenQueue )
    {
      do
      {
        v20 = OpenQueue->Offload;
        if ( v20 && v20->AlreadySetEncapsulation )
        {
          if ( v19 )
          {
            if ( v20->SetEncapsulation.Header.Type != 0xA8
              || !v20->SetEncapsulation.Header.Revision
              || v20->SetEncapsulation.Header.Size < 0x1Cu )
            {
              goto LABEL_78;
            }
            v19 = 0;
            HeaderSize = v20->SetEncapsulation.IPv6.HeaderSize;
            v22 = *(_QWORD *)&v20->SetEncapsulation.IPv6.Enabled;
            *(_OWORD *)&v65.Header.Type = *(_OWORD *)&v20->SetEncapsulation.Header.Type;
            v65.IPv6.HeaderSize = HeaderSize;
            *(_QWORD *)&v65.IPv6.Enabled = v22;
          }
          else if ( (unsigned int)ndisMergeEncapsulations(&v20->SetEncapsulation, &v65) )
          {
            goto LABEL_78;
          }
        }
        OpenQueue = OpenQueue->MiniportNextOpen;
      }
      while ( OpenQueue );
      Type = v65.Header.Type;
    }
    if ( Type != 0xA8 )
    {
      v23 = v7->Offload;
      v65.Header = (_NDIS_OBJECT_HEADER)1835432;
      if ( v23->MiniportSetEncapsulation.Header.Type == 0xA8
        && v23->MiniportSetEncapsulation.Header.Revision
        && v23->MiniportSetEncapsulation.Header.Size >= 0x1Cu
        && (v23->MiniportSetEncapsulation.IPv4.Enabled != 2 || v23->MiniportSetEncapsulation.IPv6.Enabled != 2) )
      {
        v24 = v23->MiniportSetEncapsulation.IPv4.HeaderSize;
        v25 = v23->MiniportSetEncapsulation.IPv6.HeaderSize;
        *(_QWORD *)&v65.IPv4.Enabled = *(_QWORD *)&v23->MiniportSetEncapsulation.IPv4.Enabled;
        v65.IPv6.EncapsulationType = HIDWORD(*(_QWORD *)&v23->MiniportSetEncapsulation.IPv6.Enabled);
        v65.IPv6.Enabled = 2;
        v65.IPv4.HeaderSize = v24;
        v65.IPv6.HeaderSize = v25;
        v65.IPv4.Enabled = 2;
        v26 = ExAllocatePool2(64LL, 276LL, 1903313998LL);
        v27 = v26;
        if ( !v26 )
          goto LABEL_78;
        v28 = *(_OWORD *)&v65.Header.Type;
        *(_DWORD *)(v26 + 4) = 1;
        v29 = *(_QWORD *)&v65.IPv6.Enabled;
        *(_QWORD *)(v26 + 40) = v26 + 248;
        *(_DWORD *)(v26 + 32) = 16843018;
        *(_DWORD *)(v26 + 48) = 28;
        *(_OWORD *)(v26 + 248) = v28;
        *(_QWORD *)(v26 + 264) = v29;
        *(_DWORD *)(v26 + 272) = v25;
        *(_DWORD *)v26 = 16253334;
        *(_DWORD *)(v26 + 88) |= 2u;
        *(_QWORD *)(v26 + 104) = a2;
        EtwActivityIdControl(3u, (LPGUID)(v26 + 168));
        if ( a2 )
        {
          ndisMReferenceOpen((__int64)a2, 6u);
          *(_DWORD *)(v27 + 88) |= 0x200u;
        }
        else
        {
          *(_QWORD *)(v27 + 104) = &ndisIntReqRestore;
        }
        v30 = v61.Blink;
        *(_DWORD *)(v27 + 88) |= 0x80000u;
        v3 = v27;
        v31 = (_LIST_ENTRY *)(v27 + 72);
        if ( v30->Flink != &v61 )
          goto LABEL_86;
        v31->Blink = v30;
        v31->Flink = &v61;
        ++v5;
        v30->Flink = v31;
        v61.Blink = v31;
        v62 = v5;
      }
    }
  }
LABEL_45:
  v32 = v7->WakeUpEnable & 5;
  v63 = v32;
  if ( a2 )
  {
    for ( i = a2->PatternList.Next; i; i = i->Next )
    {
      if ( (struct _NDIS_OPEN_BLOCK *)i[3].Next == a2 )
      {
        Next = (unsigned int)i[7].Next;
        v35 = Next + 24;
        if ( Next + 24 < Next )
          goto LABEL_78;
        v36 = (unsigned int)i[8].Next;
        v37 = v36 + v35;
        if ( v37 < v36 )
          goto LABEL_78;
        v38 = ndisMAllocateRequest(a2, 0xFD010104, NdisRequestSetInformation, &i[6], v37);
        v39 = v38;
        if ( !v38 )
          goto LABEL_78;
        v38->Header = (NDIS_OBJECT_HEADER)16253334;
        *(_DWORD *)&v38->NdisReserved[16] |= 2u;
        *(_QWORD *)&v38->NdisReserved[32] = a2;
        EtwActivityIdControl(3u, (LPGUID)&v38->NdisReserved[96]);
        ndisMReferenceOpen((__int64)a2, 6u);
        *(_DWORD *)&v39->NdisReserved[16] |= 0x200u;
        NdisReserved = (_LIST_ENTRY *)v39->NdisReserved;
        *(_DWORD *)&v39->NdisReserved[16] &= ~0x40000u;
        v41 = v61.Blink;
        if ( v61.Blink->Flink != &v61 )
          goto LABEL_86;
        *(_QWORD *)&v39->NdisReserved[8] = v61.Blink;
        NdisReserved->Flink = &v61;
        ++v5;
        v41->Flink = NdisReserved;
        v3 = (__int64)v39;
        v61.Blink = (_LIST_ENTRY *)v39->NdisReserved;
        v62 = v5;
      }
    }
LABEL_64:
    v32 = v63;
  }
  else
  {
    v42 = v7->PatternList.Next;
    if ( v42 )
    {
      while ( LODWORD(v42[7].Next) < 0xFFFFFFE8 )
      {
        v43 = (unsigned int)v42[8].Next;
        v44 = v43 + LODWORD(v42[7].Next) + 24;
        if ( (unsigned int)v44 < v43 )
          break;
        v45 = ExAllocatePool2(64LL, v44 + 248, 1903313998LL);
        v46 = v45;
        if ( !v45 )
          break;
        *(_DWORD *)(v45 + 4) = 1;
        *(_QWORD *)(v45 + 40) = v45 + 248;
        *(_DWORD *)v45 = 16253334;
        *(_DWORD *)(v45 + 32) = -50265853;
        *(_DWORD *)(v45 + 48) = v44;
        if ( v42 != (_SINGLE_LIST_ENTRY *)-48LL )
          memmove((void *)(v45 + 248), &v42[6], (unsigned int)v44);
        *(_DWORD *)v46 = 16253334;
        *(_DWORD *)(v46 + 88) |= 2u;
        *(_QWORD *)(v46 + 104) = 0LL;
        EtwActivityIdControl(3u, (LPGUID)(v46 + 168));
        v3 = v46;
        *(_QWORD *)(v46 + 104) = &ndisIntReqRestore;
        *(_DWORD *)(v46 + 88) |= 0xC0000u;
        v47 = (_LIST_ENTRY *)(v46 + 72);
        v48 = v61.Blink;
        if ( v61.Blink->Flink != &v61 )
          goto LABEL_86;
        v49 = v62;
        v47->Flink = &v61;
        v5 = v49 + 1;
        v47->Blink = v48;
        v48->Flink = v47;
        v61.Blink = v47;
        v42 = v42->Next;
        v62 = v5;
        if ( !v42 )
        {
          v7 = v64;
          goto LABEL_64;
        }
      }
      v7 = v64;
      goto LABEL_77;
    }
  }
  for ( j = v7->OpenQueue; j; j = j->MiniportNextOpen )
  {
    if ( a2 != j )
      v32 |= j->WakeUpEnable;
  }
  if ( v32 != v7->WakeUpEnable )
  {
    v51 = ExAllocatePool2(64LL, 252LL, 1903313998LL);
    v52 = v51;
    if ( v51 )
    {
      *(_DWORD *)(v51 + 4) = 1;
      *(_QWORD *)(v51 + 40) = v51 + 248;
      *(_DWORD *)(v51 + 32) = -50265850;
      *(_DWORD *)(v51 + 48) = 4;
      *(_DWORD *)(v51 + 248) = v32;
      *(_DWORD *)v51 = 16253334;
      *(_DWORD *)(v51 + 88) |= 2u;
      *(_QWORD *)(v51 + 104) = a2;
      EtwActivityIdControl(3u, (LPGUID)(v51 + 168));
      if ( a2 )
      {
        v53 = KeAcquireSpinLockRaiseToDpc(&a2->RefCountLock);
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)a2->RefCountTracker, 6u);
        ++a2->References;
        KeReleaseSpinLock(&a2->RefCountLock, v53);
        *(_DWORD *)(v52 + 88) |= 0x200u;
      }
      else
      {
        *(_QWORD *)(v52 + 104) = &ndisIntReqRestore;
      }
      v54 = v61.Blink;
      *(_DWORD *)(v52 + 88) |= 0x80000u;
      v3 = v52;
      v55 = (_LIST_ENTRY *)(v52 + 72);
      if ( v54->Flink == &v61 )
      {
        v55->Blink = v54;
        v55->Flink = &v61;
        v54->Flink = v55;
        v61.Blink = v55;
        v62 = v5 + 1;
        goto LABEL_77;
      }
LABEL_86:
      __fastfail(3u);
    }
  }
LABEL_77:
  v4 = a3;
LABEL_78:
  if ( v3 )
  {
    if ( v4 )
    {
      *(_DWORD *)(v3 + 88) |= 0x100u;
      _InterlockedOr((volatile signed __int32 *)&v7->Flags, 0x1000000u);
    }
    if ( (unsigned int)ndisQueueRestoreRequestsOnTop(v7, &v61, v62, v4) == 259 )
    {
      v8 = 0;
      goto LABEL_89;
    }
    while ( 1 )
    {
      Flink = v61.Flink;
      if ( v61.Flink == &v61 )
        break;
      if ( v61.Flink->Blink != &v61 )
        goto LABEL_86;
      v57 = v61.Flink->Flink;
      if ( v61.Flink->Flink->Blink != v61.Flink )
        goto LABEL_86;
      v61.Flink = v61.Flink->Flink;
      v57->Blink = &v61;
      ExFreePoolWithTag(&Flink[-5].Blink, 0);
    }
  }
  v8 = -1073741823;
LABEL_89:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v59 = v8;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x40u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v7,
      *(_QWORD *)v59);
  }
  return v8;
}
