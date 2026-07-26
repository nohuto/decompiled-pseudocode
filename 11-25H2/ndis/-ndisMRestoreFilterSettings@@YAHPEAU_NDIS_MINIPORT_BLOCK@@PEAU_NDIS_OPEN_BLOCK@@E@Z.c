/*
 * XREFs of ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x140079080
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1400A6CA4 (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017FC80 (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005AF00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z @ 0x140079420 (-ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z.c)
 *     ?ndisMergeEncapsulations@@YAHPEAU_NDIS_OFFLOAD_ENCAPSULATION@@0@Z @ 0x1400C13E0 (-ndisMergeEncapsulations@@YAHPEAU_NDIS_OFFLOAD_ENCAPSULATION@@0@Z.c)
 *     ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1400C50C0 (-ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 __fastcall ndisMRestoreFilterSettings(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OPEN_BLOCK *a2,
        unsigned __int8 a3)
{
  struct _NDIS_OID_REQUEST *v3; // rsi
  unsigned int v6; // r13d
  unsigned int v8; // r14d
  unsigned int v9; // ebx
  _SINGLE_LIST_ENTRY *i; // r13
  _NDIS_OPEN_BLOCK *k; // rax
  struct _NDIS_OID_REQUEST *v13; // rax
  struct _NDIS_OID_REQUEST *v14; // rbx
  _LIST_ENTRY *v15; // rax
  _LIST_ENTRY *v16; // rbx
  struct _NDIS_OID_REQUEST *v17; // rax
  unsigned int Next; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  struct _NDIS_OID_REQUEST *v22; // rax
  _NDIS_MINIPORT_OFFLOAD *Offload; // r11
  _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  char v25; // dl
  _SINGLE_LIST_ENTRY *j; // rdx
  _LIST_ENTRY *NdisReserved; // rax
  _LIST_ENTRY *Blink; // rcx
  struct _NDIS_OID_REQUEST *v29; // rax
  _LIST_ENTRY *v30; // rax
  _LIST_ENTRY *v31; // rcx
  _NDIS_OPEN_OFFLOAD *v32; // rcx
  unsigned int HeaderSize; // eax
  __int64 v34; // xmm1_8
  bool v35; // zf
  unsigned int v36; // eax
  __int64 v37; // xmm0_8
  unsigned int v38; // eax
  struct _NDIS_OID_REQUEST *v39; // rax
  struct _NDIS_OID_REQUEST *v40; // rbx
  _LIST_ENTRY *v41; // rax
  _LIST_ENTRY *v42; // rbx
  UCHAR *v43; // rax
  _LIST_ENTRY *v44; // rcx
  unsigned int v45; // eax
  unsigned int v46; // ecx
  struct _NDIS_OID_REQUEST *v47; // rax
  _LIST_ENTRY *v48; // rax
  _LIST_ENTRY *v49; // rcx
  _SINGLE_LIST_ENTRY **v50; // rdx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v52; // rax
  char v53[8]; // [rsp+30h] [rbp-49h]
  __int64 v54; // [rsp+38h] [rbp-41h]
  char v55; // [rsp+40h] [rbp-39h]
  unsigned int v56; // [rsp+44h] [rbp-35h]
  struct _LIST_ENTRY v57; // [rsp+48h] [rbp-31h] BYREF
  _NDIS_OPEN_BLOCK *v58; // [rsp+58h] [rbp-21h] BYREF
  struct _NDIS_OID_REQUEST *v59; // [rsp+60h] [rbp-19h]
  struct _NDIS_OID_REQUEST *v60; // [rsp+68h] [rbp-11h]
  struct _NDIS_OFFLOAD_ENCAPSULATION v61; // [rsp+70h] [rbp-9h] BYREF

  v3 = 0LL;
  v6 = 0;
  v56 = 0;
  v8 = -1073741823;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v54) = a3;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x3Fu,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      (char)a2,
      v54);
  }
  if ( a2 || a3 )
  {
    v57.Blink = &v57;
    v57.Flink = &v57;
    if ( !a3 )
      goto LABEL_5;
  }
  else
  {
    v57.Blink = &v57;
    v57.Flink = &v57;
  }
  if ( a1->MediaType == NdisMedium802_3 )
  {
    LODWORD(v58) = -1;
    v17 = ndisMAllocateRequest(a2, 0x1010Eu, NdisRequestSetInformation, &v58, 4u);
    v3 = v17;
    if ( !v17 )
      goto LABEL_15;
    v17->Header = (NDIS_OBJECT_HEADER)16253334;
    *(_DWORD *)&v17->NdisReserved[16] |= 2u;
    *(_QWORD *)&v17->NdisReserved[32] = a2;
    EtwActivityIdControl(3u, (LPGUID)&v17->NdisReserved[96]);
    if ( a2 )
    {
      ndisMReferenceOpen((__int64)a2, 6u);
      *(_DWORD *)&v3->NdisReserved[16] |= 0x200u;
    }
    else
    {
      *(_QWORD *)&v3->NdisReserved[32] = &ndisIntReqRestore;
    }
    *(_DWORD *)&v3->NdisReserved[16] |= 0x80000u;
    NdisReserved = (_LIST_ENTRY *)v3->NdisReserved;
    Blink = v57.Blink;
    if ( v57.Blink->Flink != &v57 )
      goto LABEL_22;
    *(_QWORD *)&v3->NdisReserved[8] = v57.Blink;
    NdisReserved->Flink = &v57;
    v6 = 1;
    Blink->Flink = NdisReserved;
    v57.Blink = (_LIST_ENTRY *)v3->NdisReserved;
    v56 = 1;
    if ( a1->MediaType == NdisMedium802_3 )
    {
      v29 = ndisMAllocateRequest(a2, 0x1010103u, NdisRequestSetInformation, 0LL, 0);
      if ( !v29 )
        goto LABEL_14;
      v29->Header = (NDIS_OBJECT_HEADER)16253334;
      *(_DWORD *)&v29->NdisReserved[16] |= 2u;
      *(_QWORD *)&v29->NdisReserved[32] = a2;
      v3 = v29;
      EtwActivityIdControl(3u, (LPGUID)&v29->NdisReserved[96]);
      if ( a2 )
      {
        ndisMReferenceOpen((__int64)a2, 6u);
        *(_DWORD *)&v3->NdisReserved[16] |= 0x200u;
      }
      else
      {
        *(_QWORD *)&v3->NdisReserved[32] = &ndisIntReqRestore;
      }
      *(_DWORD *)&v3->NdisReserved[16] |= 0x80000u;
      v30 = (_LIST_ENTRY *)v3->NdisReserved;
      v31 = v57.Blink;
      if ( v57.Blink->Flink != &v57 )
        goto LABEL_22;
      *(_QWORD *)&v3->NdisReserved[8] = v57.Blink;
      v30->Flink = &v57;
      v6 = 2;
      v31->Flink = v30;
      v57.Blink = (_LIST_ENTRY *)v3->NdisReserved;
      v56 = 2;
    }
  }
  Offload = a1->Offload;
  if ( !Offload || Offload->SupportsTopOffload != 1 )
    goto LABEL_5;
  OpenQueue = a1->OpenQueue;
  v25 = 1;
  v55 = 1;
  memset(&v61, 0, sizeof(v61));
  while ( 1 )
  {
    v58 = OpenQueue;
    if ( !OpenQueue )
      break;
    v32 = OpenQueue->Offload;
    if ( v32 && v32->AlreadySetEncapsulation )
    {
      if ( v25 )
      {
        if ( v32->SetEncapsulation.Header.Type != 0xA8
          || !v32->SetEncapsulation.Header.Revision
          || v32->SetEncapsulation.Header.Size < 0x1Cu )
        {
          goto LABEL_14;
        }
        v25 = 0;
        HeaderSize = v32->SetEncapsulation.IPv6.HeaderSize;
        v34 = *(_QWORD *)&v32->SetEncapsulation.IPv6.Enabled;
        *(_OWORD *)&v61.Header.Type = *(_OWORD *)&v32->SetEncapsulation.Header.Type;
        v55 = 0;
        *(_QWORD *)&v61.IPv6.Enabled = v34;
        v61.IPv6.HeaderSize = HeaderSize;
      }
      else
      {
        if ( (unsigned int)ndisMergeEncapsulations(&v32->SetEncapsulation, &v61) )
          goto LABEL_14;
        v25 = v55;
      }
    }
    OpenQueue = v58->MiniportNextOpen;
  }
  if ( v61.Header.Type == 0xA8
    || (v35 = Offload->MiniportSetEncapsulation.Header.Type == 0xA8, v61.Header = (_NDIS_OBJECT_HEADER)1835432, !v35)
    || !Offload->MiniportSetEncapsulation.Header.Revision
    || Offload->MiniportSetEncapsulation.Header.Size < 0x1Cu
    || Offload->MiniportSetEncapsulation.IPv4.Enabled == 2 && Offload->MiniportSetEncapsulation.IPv6.Enabled == 2 )
  {
LABEL_5:
    v9 = a1->WakeUpEnable & 5;
    LODWORD(v58) = v9;
    if ( a2 )
    {
      for ( i = a2->PatternList.Next; i; i = i->Next )
      {
        if ( (struct _NDIS_OPEN_BLOCK *)i[3].Next == a2 )
        {
          Next = (unsigned int)i[7].Next;
          v19 = Next + 24;
          if ( Next + 24 < Next )
            goto LABEL_14;
          v20 = (unsigned int)i[8].Next;
          v21 = v20 + v19;
          if ( v21 < v20 )
            goto LABEL_14;
          v22 = ndisMAllocateRequest(a2, 0xFD010104, NdisRequestSetInformation, &i[6], v21);
          v59 = v22;
          if ( !v22 )
            goto LABEL_14;
          v22->Header = (NDIS_OBJECT_HEADER)16253334;
          *(_DWORD *)&v22->NdisReserved[16] |= 2u;
          *(_QWORD *)&v22->NdisReserved[32] = a2;
          EtwActivityIdControl(3u, (LPGUID)&v22->NdisReserved[96]);
          ndisMReferenceOpen((__int64)a2, 6u);
          v3 = v59;
          v43 = v59->NdisReserved;
          *(_DWORD *)&v59->NdisReserved[16] |= 0x200u;
          *((_DWORD *)v43 + 4) &= ~0x40000u;
          v44 = v57.Blink;
          if ( v57.Blink->Flink != &v57 )
            goto LABEL_22;
          ++v56;
          *(_QWORD *)v43 = &v57;
          *((_QWORD *)v43 + 1) = v44;
          v44->Flink = (_LIST_ENTRY *)v43;
          v57.Blink = (_LIST_ENTRY *)v43;
        }
      }
      v6 = v56;
    }
    else
    {
      for ( j = a1->PatternList.Next; ; j = *v50 )
      {
        v59 = (struct _NDIS_OID_REQUEST *)j;
        if ( !j )
          break;
        if ( LODWORD(j[7].Next) >= 0xFFFFFFE8 )
          goto LABEL_14;
        v45 = (unsigned int)j[8].Next;
        v46 = v45 + LODWORD(j[7].Next) + 24;
        if ( v46 < v45 )
          goto LABEL_14;
        v47 = ndisMAllocateRequest(0LL, 0xFD010103, NdisRequestSetInformation, &j[6], v46);
        v60 = v47;
        if ( !v47 )
          goto LABEL_14;
        v47->Header = (NDIS_OBJECT_HEADER)16253334;
        *(_DWORD *)&v47->NdisReserved[16] |= 2u;
        *(_QWORD *)&v47->NdisReserved[32] = 0LL;
        EtwActivityIdControl(3u, (LPGUID)&v47->NdisReserved[96]);
        v3 = v60;
        *(_QWORD *)&v60->NdisReserved[32] = &ndisIntReqRestore;
        v48 = (_LIST_ENTRY *)v3->NdisReserved;
        *(_DWORD *)&v3->NdisReserved[16] |= 0xC0000u;
        v49 = v57.Blink;
        if ( v57.Blink->Flink != &v57 )
          goto LABEL_22;
        *(_QWORD *)&v3->NdisReserved[8] = v57.Blink;
        v48->Flink = &v57;
        ++v6;
        v50 = (_SINGLE_LIST_ENTRY **)v59;
        v49->Flink = v48;
        v57.Blink = (_LIST_ENTRY *)v3->NdisReserved;
        v56 = v6;
      }
    }
    for ( k = a1->OpenQueue; k; k = k->MiniportNextOpen )
    {
      if ( a2 != k )
      {
        v9 |= k->WakeUpEnable;
        LODWORD(v58) = v9;
      }
    }
    if ( v9 != a1->WakeUpEnable )
    {
      v13 = ndisMAllocateRequest(a2, 0xFD010106, NdisRequestSetInformation, &v58, 4u);
      v14 = v13;
      if ( v13 )
      {
        v13->Header = (NDIS_OBJECT_HEADER)16253334;
        *(_DWORD *)&v13->NdisReserved[16] |= 2u;
        *(_QWORD *)&v13->NdisReserved[32] = a2;
        EtwActivityIdControl(3u, (LPGUID)&v13->NdisReserved[96]);
        if ( a2 )
        {
          ndisMReferenceOpen((__int64)a2, 6u);
          *(_DWORD *)&v14->NdisReserved[16] |= 0x200u;
        }
        else
        {
          *(_QWORD *)&v14->NdisReserved[32] = &ndisIntReqRestore;
        }
        *(_DWORD *)&v14->NdisReserved[16] |= 0x80000u;
        v15 = v57.Blink;
        v3 = v14;
        v16 = (_LIST_ENTRY *)v14->NdisReserved;
        if ( v57.Blink->Flink != &v57 )
          goto LABEL_22;
        v16->Blink = v57.Blink;
        v16->Flink = &v57;
        v15->Flink = v16;
        v57.Blink = v16;
        v56 = v6 + 1;
      }
    }
    goto LABEL_14;
  }
  v36 = Offload->MiniportSetEncapsulation.IPv4.HeaderSize;
  *(_QWORD *)&v61.IPv4.Enabled = *(_QWORD *)&Offload->MiniportSetEncapsulation.IPv4.Enabled;
  v37 = *(_QWORD *)&Offload->MiniportSetEncapsulation.IPv6.Enabled;
  v61.IPv4.HeaderSize = v36;
  v38 = Offload->MiniportSetEncapsulation.IPv6.HeaderSize;
  v61.IPv6.EncapsulationType = HIDWORD(v37);
  v61.IPv6.Enabled = 2;
  v61.IPv6.HeaderSize = v38;
  v61.IPv4.Enabled = 2;
  v39 = ndisMAllocateRequest(a2, 0x101010Au, NdisRequestSetInformation, &v61, 0x1Cu);
  v40 = v39;
  if ( v39 )
  {
    v39->Header = (NDIS_OBJECT_HEADER)16253334;
    *(_DWORD *)&v39->NdisReserved[16] |= 2u;
    *(_QWORD *)&v39->NdisReserved[32] = a2;
    EtwActivityIdControl(3u, (LPGUID)&v39->NdisReserved[96]);
    if ( a2 )
    {
      ndisMReferenceOpen((__int64)a2, 6u);
      *(_DWORD *)&v40->NdisReserved[16] |= 0x200u;
    }
    else
    {
      *(_QWORD *)&v40->NdisReserved[32] = &ndisIntReqRestore;
    }
    *(_DWORD *)&v40->NdisReserved[16] |= 0x80000u;
    v41 = v57.Blink;
    v3 = v40;
    v42 = (_LIST_ENTRY *)v40->NdisReserved;
    if ( v57.Blink->Flink == &v57 )
    {
      v42->Blink = v57.Blink;
      v42->Flink = &v57;
      ++v6;
      v41->Flink = v42;
      v57.Blink = v42;
      v56 = v6;
      goto LABEL_5;
    }
LABEL_22:
    __fastfail(3u);
  }
LABEL_14:
  if ( v3 )
  {
    if ( a3 )
    {
      *(_DWORD *)&v3->NdisReserved[16] |= 0x100u;
      a1->Flags |= 0x1000000u;
    }
    if ( (unsigned int)ndisQueueRestoreRequestsOnTop(a1, &v57, v56, a3) == 259 )
    {
      v8 = 0;
    }
    else
    {
      while ( 1 )
      {
        Flink = v57.Flink;
        if ( v57.Flink == &v57 )
          break;
        if ( v57.Flink->Blink != &v57 )
          goto LABEL_22;
        v52 = v57.Flink->Flink;
        if ( v57.Flink->Flink->Blink != v57.Flink )
          goto LABEL_22;
        v57.Flink = v57.Flink->Flink;
        v52->Blink = &v57;
        ExFreePoolWithTag(&Flink[-5].Blink, 0);
      }
    }
  }
LABEL_15:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v53 = v8;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x40u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      (char)a1,
      *(_QWORD *)v53);
  }
  return v8;
}
