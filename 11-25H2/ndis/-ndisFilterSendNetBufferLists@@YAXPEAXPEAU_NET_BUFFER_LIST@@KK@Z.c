/*
 * XREFs of ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x14001F9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     NdisFSendNetBufferListsComplete @ 0x1400207A0 (NdisFSendNetBufferListsComplete.c)
 *     ?NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z @ 0x140032490 (-NdisSetStatusInNblChain@@YAXPEAU_NET_BUFFER_LIST@@H@Z.c)
 *     ??$ndisInvokeIterativeDatapath@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x14003C590 (--$ndisInvokeIterativeDatapath@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAXPEAU_NET_BUFFER_LIST.c)
 *     ??$ndisExpandDataPathStack@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10KK@Z@Z @ 0x14003CA30 (--$ndisExpandDataPathStack@$0A@$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KK@Z@@YAJPEAU_NET_BUFFER_LIST@@KK.c)
 *     ?ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x140044000 (-ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEA.c)
 *     ?ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x140044330 (-ndisFDoLoopbackNetBufferList@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x14008DD70 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisFilterSendNetBufferLists(void *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // r12d
  __int64 v7; // rbp
  struct _NET_BUFFER_LIST *v10; // r14
  _QWORD *v11; // rsi
  __int64 v12; // rbx
  int v13; // edi
  __int64 v14; // rbx
  __int64 v15; // rax
  void (__fastcall *v16)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD); // r13
  struct _NET_BUFFER_LIST **p_Next; // rcx
  struct _NET_BUFFER_LIST *i; // rax
  bool v19; // zf
  int v20; // r8d
  struct _NET_BUFFER_LIST *v21; // rbp
  _SLIST_HEADER *v22; // rsi
  struct _NET_BUFFER_LIST *Alignment; // rcx
  struct _NET_BUFFER *FirstNetBuffer; // r13
  int v25; // r8d
  ULONG v26; // ecx
  _SLIST_HEADER *v27; // rax
  unsigned __int8 v28[4]; // [rsp+40h] [rbp-48h] BYREF
  ULONG SendCompleteFlags; // [rsp+44h] [rbp-44h]
  struct _NET_BUFFER_LIST *v30; // [rsp+48h] [rbp-40h]
  __int64 v32; // [rsp+90h] [rbp+8h]
  unsigned __int8 v33; // [rsp+98h] [rbp+10h] BYREF

  v5 = *((_QWORD *)a1 + 57);
  v6 = 0;
  v7 = *((_QWORD *)a1 + 4);
  v10 = a2;
  v11 = a1;
  if ( *(_BYTE *)v5 == 5
    && FILTER_TEST_FLAG(*((const struct _NDIS_FILTER_BLOCK **)a1 + 57), 0x8000u)
    && !*(_DWORD *)(v5 + 336)
    && (*(_BYTE *)(v7 + 91) && (*(_WORD *)(v7 + 1820) > 1u || *(_BYTE *)(v7 + 1999))
     || (a4 & 2) != 0
     || (*(_DWORD *)(v7 + 120) & 0x4000) != 0) )
  {
    SendCompleteFlags = 0;
    v21 = v10;
    v28[0] = 0;
    v22 = 0LL;
    v33 = 0;
    while ( 1 )
    {
      v19 = (v21->Flags & 0x800) == 0;
      Alignment = (struct _NET_BUFFER_LIST *)v21->Link.Alignment;
      v30 = (struct _NET_BUFFER_LIST *)v21->Link.Alignment;
      if ( v19 )
      {
        FirstNetBuffer = v21->FirstNetBuffer;
        do
        {
          ndisFIsLoopbackNetBuffer((struct _NDIS_FILTER_BLOCK *)v5, FirstNetBuffer, v21, v28, &v33);
          if ( v28[0] == 1 )
          {
            v28[0] = 0;
            ndisFDoLoopbackNetBufferList((struct _NDIS_FILTER_BLOCK *)v5, FirstNetBuffer, v21, a3, a4);
          }
          FirstNetBuffer = (struct _NET_BUFFER *)FirstNetBuffer->Link.Alignment;
        }
        while ( FirstNetBuffer );
        if ( v33 == 1 )
        {
          v33 = 0;
          if ( v10 == v21 )
            v10 = v30;
          else
            v22->Alignment = (unsigned __int64)v30;
          v26 = SendCompleteFlags | 1;
          v21->Link.Alignment = 0LL;
          v21->Status = 0;
          if ( (a4 & 1) == 0 )
            v26 = SendCompleteFlags;
          SendCompleteFlags = v26;
          NdisFSendNetBufferListsComplete((NDIS_HANDLE)v5, v21, v26);
          Alignment = v30;
          goto LABEL_37;
        }
        Alignment = v30;
      }
      else
      {
        v33 = 0;
      }
      v22 = (_SLIST_HEADER *)v21;
LABEL_37:
      v21 = Alignment;
      if ( !Alignment )
      {
        v11 = a1;
        break;
      }
    }
  }
  if ( v10 )
  {
    LODWORD(v4) = KeGetPcr()->Prcb.Number;
    v12 = v11[53] + 96 * v4;
    if ( ((a4 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v12 + 16) )
    {
      v13 = a4 | 1;
      if ( !*(_QWORD *)v12 )
      {
        *(_QWORD *)v12 = v10;
LABEL_8:
        *(_QWORD *)(v12 + 8) = v10;
        v10->Scratch = 0LL;
        v10->ChildRefCount = v13;
        v10->Status = a3;
        return;
      }
      p_Next = *(struct _NET_BUFFER_LIST ***)(v12 + 8);
      if ( a3 != *((_DWORD *)p_Next + 35) || v13 != *((_DWORD *)p_Next + 33) || (v13 & 0x34) != 0 )
      {
        p_Next[14] = v10;
        goto LABEL_8;
      }
      for ( i = *p_Next; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
        p_Next = &i->Next;
      *p_Next = v10;
    }
    else
    {
      v14 = v11[57];
      v15 = v11[55];
      v16 = (void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))v11[54];
      v32 = v15;
      if ( *(_BYTE *)v14 == 17 )
      {
        v16(v15, v10, a3, a4);
      }
      else if ( (a4 & 1) != 0 || (v19 = KeGetCurrentIrql() == 2, v15 = v32, v19) )
      {
        ndisInvokeIterativeDatapath<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>(
          (int)v10,
          (int)a2,
          a3,
          a4,
          (struct _NDIS_FILTER_BLOCK *)v14,
          v15,
          (__int64)v16);
      }
      else if ( (int)ndisExpandDataPathStack<0,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long)>(
                       (_DWORD)v10,
                       a3,
                       v20,
                       a4,
                       v14,
                       v32,
                       (__int64)v16) < 0 )
      {
        if ( byte_1401278B0 && (*(_DWORD *)(v14 + 840) & 2) != 0 )
          PktMonClientNblDropNdis(v14 + 784, (_DWORD)v10, v25, 2, -1073741670, -536866812);
        NdisSetStatusInNblChain(v10, -1073741670);
        v27 = (_SLIST_HEADER *)v10;
        do
        {
          v27 = (_SLIST_HEADER *)v27->Alignment;
          ++v6;
        }
        while ( v27 );
        _InterlockedAdd((volatile signed __int32 *)(v14 + 296), v6);
        ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v14, v10, 1u);
      }
    }
  }
}
