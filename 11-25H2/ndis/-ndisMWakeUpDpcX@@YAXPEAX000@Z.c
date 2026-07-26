/*
 * XREFs of ?ndisMWakeUpDpcX@@YAXPEAX000@Z @ 0x140061320
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140007E60 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140010990 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140040330 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     McTemplateK0qqx_EtwWriteTransfer @ 0x1400CC638 (McTemplateK0qqx_EtwWriteTransfer.c)
 */

void __fastcall ndisMWakeUpDpcX(
        PVOID SystemSpecific1,
        char *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  char v5; // r13
  char v6; // r14
  KIRQL v7; // r15
  struct _NDIS_REFCOUNT_BLOCK **v8; // rsi
  int v9; // ecx
  int v10; // edx
  KIRQL v11; // al
  struct _NDIS_REFCOUNT_BLOCK *v12; // r8
  KIRQL v13; // r14
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r10
  int v15; // esi
  int v16; // edx
  char v17; // al
  bool v18; // sf
  int v19; // ecx
  int v20; // r8d
  char v21; // dl
  ULONG v22; // esi
  _QWORD *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // edx
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rcx
  unsigned __int8 i; // cl
  _NDIS_REFCOUNT_TAGGED_ENTRY *v32; // r9
  unsigned __int8 RefCount; // al
  struct _KEVENT *v34; // rcx
  char *v35; // rsi
  _NDIS_REFCOUNT_STACK_ENTRY v36; // edx
  WORK_QUEUE_TYPE v37; // edx
  PKDPC Dpc; // [rsp+20h] [rbp-79h]
  __int64 v39; // [rsp+30h] [rbp-69h]
  _WORD v40[2]; // [rsp+40h] [rbp-59h] BYREF
  char v41; // [rsp+44h] [rbp-55h]
  __int16 v42; // [rsp+45h] [rbp-54h]
  char v43; // [rsp+47h] [rbp-52h]
  __int64 v44; // [rsp+48h] [rbp-51h]
  __int64 v45; // [rsp+50h] [rbp-49h]
  GUID v46; // [rsp+58h] [rbp-41h]
  int v47; // [rsp+68h] [rbp-31h]
  int v48; // [rsp+6Ch] [rbp-2Dh]
  int v49; // [rsp+70h] [rbp-29h]
  int v50; // [rsp+74h] [rbp-25h]
  unsigned int Number; // [rsp+78h] [rbp-21h]
  int v52; // [rsp+7Ch] [rbp-1Dh]
  _WORD WnodeEventItem[2]; // [rsp+80h] [rbp-19h] BYREF
  char v54; // [rsp+84h] [rbp-15h]
  __int16 v55; // [rsp+85h] [rbp-14h]
  char v56; // [rsp+87h] [rbp-12h]
  __int64 v57; // [rsp+88h] [rbp-11h]
  __int64 v58; // [rsp+90h] [rbp-9h]
  GUID v59; // [rsp+98h] [rbp-1h]
  int v60; // [rsp+A8h] [rbp+Fh]
  int v61; // [rsp+ACh] [rbp+13h]
  int v62; // [rsp+B0h] [rbp+17h]
  int v63; // [rsp+B4h] [rbp+1Bh]
  __int64 v64; // [rsp+B8h] [rbp+1Fh]
  unsigned int v65; // [rsp+C0h] [rbp+27h]
  int v66; // [rsp+C4h] [rbp+2Bh]
  __int64 Clock; // [rsp+108h] [rbp+6Fh]

  Clock = 0LL;
  if ( HIBYTE(dword_140127110) )
  {
    v5 = 1;
    v29 = (*((_QWORD *)FunctionContext + 503) >> 24) & 0xFFFFFF;
    v40[1] = 0;
    v49 = v29;
    v42 = 0;
    v43 = 0;
    v45 = 0LL;
    v47 = 0;
    v52 = 0;
    v48 = 0x20000;
    v46 = EtwGuidNdisReceive;
    v41 = 21;
    v50 = 4;
    Number = KeGetPcr()->Prcb.Number;
    v40[0] = 64;
    v44 = qword_140127108;
    IoWMIWriteEvent(v40);
    if ( (byte_140125105 & 2) != 0 )
    {
      LODWORD(Dpc) = 4;
      McTemplateK0qq_EtwWriteTransfer(
        v30,
        &DpcStart,
        (const GUID *)(FunctionContext + 4008),
        (*((_QWORD *)FunctionContext + 503) >> 24) & 0xFFFFFF,
        (__int64)Dpc);
    }
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v5 = 0;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  if ( *((int *)FunctionContext + 30) < 0 || (*((_DWORD *)FunctionContext + 31) & 0x20080000) != 0 )
  {
    *((_QWORD *)FunctionContext + 65) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
    KeSetEvent((PRKEVENT)(FunctionContext + 1912), 0, 0);
    goto LABEL_40;
  }
  *((_QWORD *)FunctionContext + 65) = 0LL;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  v6 = 1;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)FunctionContext + 554);
  v8 = (struct _NDIS_REFCOUNT_BLOCK **)(FunctionContext + 4896);
  if ( FunctionContext[4444] )
    goto LABEL_10;
  if ( *v8 )
    NdisReferenceWithTag(*v8, 0x53u);
  v9 = *((_DWORD *)FunctionContext + 1110);
  *((_DWORD *)FunctionContext + 1110) = v9 + 1;
  if ( v9 == -1 )
  {
    *((_DWORD *)FunctionContext + 1110) = -1;
LABEL_10:
    v6 = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xCu,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)FunctionContext,
      *((_DWORD *)FunctionContext + 1110));
  KeReleaseSpinLock((PKSPIN_LOCK)FunctionContext + 554, v7);
  if ( v6 )
  {
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)FunctionContext + 492, 1, 0) )
    {
      if ( (unsigned __int8)FunctionContext[32] > 6u
        || FunctionContext[32] == 6 && (unsigned __int8)FunctionContext[33] >= 0x50u )
      {
        v37 = CustomPriorityWorkQueue|NormalWorkQueue;
      }
      else
      {
        v37 = CustomPriorityWorkQueue|RealTimeWorkQueue|0x8;
      }
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(FunctionContext + 1936), v37);
LABEL_29:
      v17 = 0;
      goto LABEL_30;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        20,
        25,
        (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
        (char)FunctionContext);
    }
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)FunctionContext + 554);
    v12 = *v8;
    v13 = v11;
    if ( !*v8 || (unsigned __int64)v12[-1].RefWithStack + 62 <= 1 )
      goto LABEL_24;
    if ( v12 == (struct _NDIS_REFCOUNT_BLOCK *)1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( v12->NumRefTags <= 0x53u )
      ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)v12, 0x53uLL);
    if ( v12->Type )
    {
      if ( v12->Type != 1 )
        goto LABEL_24;
      v35 = (char *)v12[73].RefWithStack + 56;
      v36 = v12[74].RefWithStack[0].Block.Dereferences[2];
      if ( *(unsigned int *)&v36 >> 17 < 0x3FFE && *(_WORD *)&v36 >> 1 == (*(unsigned int *)&v36 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)v12[73].RefWithStack + 1);
        *((_DWORD *)v35 + 14) &= 0x10001u;
        goto LABEL_24;
      }
      if ( *(_WORD *)&v36 >> 1 || (*(_BYTE *)&v36 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)((char *)v12[73].RefWithStack + 56), 0);
        goto LABEL_24;
      }
    }
    else
    {
      Tags = v12->TaggedRefCounts.Tags;
      if ( Tags )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= v12->NumOverflowTaggedEntries )
            goto LABEL_23;
          v32 = &Tags[i];
          if ( v32->Tag == 83 )
          {
            RefCount = v32->RefCount;
            if ( RefCount )
              break;
          }
        }
        v32->RefCount = RefCount - 1;
        goto LABEL_24;
      }
LABEL_23:
      if ( _bittestandreset((signed __int32 *)&v12->RefWithStack[0].Block.References[2], 0x13u) )
      {
LABEL_24:
        v15 = *((_DWORD *)FunctionContext + 1110) - 1;
        *((_DWORD *)FunctionContext + 1110) = v15;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v39) = *((_DWORD *)FunctionContext + 1110);
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x14u,
            0xEu,
            (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
            (char)FunctionContext,
            v39);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)FunctionContext + 554, v13);
        if ( !v15 )
        {
          v34 = (struct _KEVENT *)*((_QWORD *)FunctionContext + 201);
          if ( v34 )
            KeSetEvent(v34, 0, 0);
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v16,
            20,
            26,
            (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
            (char)FunctionContext);
        }
        goto LABEL_29;
      }
    }
    ndisReportRefcountImbalance((ULONG_PTR)v12, 0x53u);
  }
  v17 = 1;
LABEL_30:
  if ( v17 )
  {
    KeSetEvent((PRKEVENT)(FunctionContext + 1912), 0, 0);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
    v18 = *((int *)FunctionContext + 30) < 0;
    *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
    if ( v18 )
      goto LABEL_39;
    v19 = *((_DWORD *)FunctionContext + 31);
    if ( (v19 & 0x20080000) != 0 )
      goto LABEL_39;
    v20 = 1000 * *((_DWORD *)FunctionContext + 94);
    v21 = FunctionContext[32];
    v22 = v20 / 5;
    v23 = (_QWORD *)*((_QWORD *)FunctionContext + 470);
    if ( (unsigned __int8)v21 < 6u )
    {
      if ( !v23[24] || !v23[15] )
        goto LABEL_39;
    }
    else
    {
      if ( !v23[26] || !v23[27] )
        goto LABEL_39;
      if ( (unsigned __int8)v21 > 6u || (unsigned __int8)FunctionContext[33] >= 0x1Eu )
        v22 = 4000;
    }
    *((_DWORD *)FunctionContext + 31) = v19 & 0xDFFFFFFF;
    v24 = -10000LL * v20;
    KeClearEvent((PRKEVENT)(FunctionContext + 1912));
    KeSetCoalescableTimer((PKTIMER)(FunctionContext + 216), (LARGE_INTEGER)v24, 0, v22, (PKDPC)(FunctionContext + 280));
LABEL_39:
    *((_QWORD *)FunctionContext + 65) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  }
LABEL_40:
  if ( v5 )
  {
    v25 = WmiGetClock(0LL, 0LL);
    WnodeEventItem[1] = 0;
    v26 = v25 - Clock;
    LODWORD(v25) = (*((_QWORD *)FunctionContext + 503) >> 24) & 0xFFFFFF;
    v55 = 0;
    v62 = v25;
    v56 = 0;
    v58 = 0LL;
    v60 = 0;
    v66 = 0;
    v61 = 0x20000;
    v59 = EtwGuidNdisReceive;
    v54 = 17;
    v64 = v26;
    v63 = 4;
    v65 = KeGetPcr()->Prcb.Number;
    WnodeEventItem[0] = 72;
    v57 = qword_140127108;
    IoWMIWriteEvent(WnodeEventItem);
    if ( (byte_140125105 & 2) != 0 )
      McTemplateK0qqx_EtwWriteTransfer(
        v28,
        v27,
        (_DWORD)FunctionContext + 4008,
        (*((_QWORD *)FunctionContext + 503) >> 24) & 0xFFFFFF,
        4,
        v26);
  }
}
