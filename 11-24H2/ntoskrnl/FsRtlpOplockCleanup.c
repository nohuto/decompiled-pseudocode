/*
 * XREFs of FsRtlpOplockCleanup @ 0x1403CDA80
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403CE7F0 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x14057E5E0 (FsRtlpOplockAckTimeoutWorker.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402907B4 (FsRtlpClearOwner.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1402B8E90 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402B9194 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403CB79C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     FsRtlpOplockDequeueRH @ 0x14044E644 (FsRtlpOplockDequeueRH.c)
 *     IoGetOplockFullFoExt @ 0x14044E68C (IoGetOplockFullFoExt.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047A8E8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404DA8E8 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404DAB70 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpFreeRHOpContext @ 0x14057E1A0 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14057EB0C (FsRtlpSyncWithAckTimeout.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     FsRtlpOplockPerfSendData @ 0x140709948 (FsRtlpOplockPerfSendData.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

int __fastcall FsRtlpOplockCleanup(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r14
  char v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 OplockFullFoExt; // r13
  _QWORD *v12; // rsi
  _QWORD *i; // rbx
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  __int64 *v19; // rbx
  int v20; // r12d
  __int64 v21; // rcx
  char v22; // r14
  int v23; // edx
  char v24; // si
  __int64 v25; // rbx
  _QWORD *v26; // r9
  __int64 v27; // r10
  __int64 v28; // rcx
  _QWORD *v29; // rax
  char v30; // r13
  _QWORD *v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // rcx
  _QWORD *v35; // rcx
  _QWORD *v36; // rcx
  char v39; // [rsp+41h] [rbp-177h]
  __int64 v40; // [rsp+48h] [rbp-170h] BYREF
  int v41; // [rsp+50h] [rbp-168h] BYREF
  int v42; // [rsp+54h] [rbp-164h] BYREF
  __int64 v43; // [rsp+58h] [rbp-160h] BYREF
  __int64 v44; // [rsp+60h] [rbp-158h] BYREF
  __int64 v45; // [rsp+68h] [rbp-150h] BYREF
  __int64 v46; // [rsp+70h] [rbp-148h] BYREF
  __int64 v47; // [rsp+78h] [rbp-140h] BYREF
  _QWORD v48[2]; // [rsp+80h] [rbp-138h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+90h] [rbp-128h] BYREF
  __int64 *v50; // [rsp+B0h] [rbp-108h]
  __int64 v51; // [rsp+B8h] [rbp-100h]
  __int64 *v52; // [rsp+C0h] [rbp-F8h]
  __int64 v53; // [rsp+C8h] [rbp-F0h]
  _QWORD *v54; // [rsp+D0h] [rbp-E8h]
  __int64 v55; // [rsp+D8h] [rbp-E0h]
  __int64 *v56; // [rsp+E0h] [rbp-D8h]
  __int64 v57; // [rsp+E8h] [rbp-D0h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 *v59; // [rsp+110h] [rbp-A8h]
  __int64 v60; // [rsp+118h] [rbp-A0h]
  __int64 *v61; // [rsp+120h] [rbp-98h]
  __int64 v62; // [rsp+128h] [rbp-90h]
  int *v63; // [rsp+130h] [rbp-88h]
  __int64 v64; // [rsp+138h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+140h] [rbp-78h] BYREF
  __int64 *v66; // [rsp+160h] [rbp-58h]
  __int64 v67; // [rsp+168h] [rbp-50h]
  int *v68; // [rsp+170h] [rbp-48h]
  __int64 v69; // [rsp+178h] [rbp-40h]

  v4 = a2;
  v40 = a2;
  v48[1] = a1;
  v6 = 0;
  v39 = 0;
  LODWORD(v7) = *(_DWORD *)(a1 + 144);
  if ( (_DWORD)v7 == 1 )
    goto LABEL_77;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v44 = a1;
    v66 = &v44;
    v67 = 8LL;
    v41 = v7;
    v68 = &v41;
    v69 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)&word_140044B5E, 0LL, 0LL, 4u, &v65);
  }
  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(v4 + 48));
  v43 = OplockFullFoExt;
  if ( (*(_DWORD *)(a1 + 144) & 0x1000000) != 0 )
  {
    v12 = (_QWORD *)(a1 + 104);
    for ( i = *(_QWORD **)(a1 + 104); i != v12; i = (_QWORD *)*i )
    {
      if ( *(_QWORD *)(v4 + 48) == i[2] )
      {
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v45 = i[2];
          v59 = &v45;
          v60 = 8LL;
          v46 = a1;
          v61 = &v46;
          v62 = 8LL;
          v42 = *(_DWORD *)(a1 + 144);
          v63 = &v42;
          v64 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)&word_140044C6E,
            0LL,
            0LL,
            5u,
            &v58);
        }
        while ( 1 )
        {
          v14 = *(_QWORD **)(a1 + 88);
          if ( v14 == (_QWORD *)(a1 + 88) )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(v14);
        }
        v15 = *(_QWORD **)i[1];
        v16 = *v15;
        v17 = (_QWORD *)v15[1];
        if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v17 != v15 )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        FsRtlpOplockPerfSendData(i + 3);
        v18 = i + 5;
        if ( a3 )
          *v18 = 0LL;
        else
          FsRtlpSyncWithAckTimeout(v18);
        ObfDereferenceObjectWithTag((PVOID)i[2], 0x746C6644u);
        ExFreePoolWithTag(i, 0);
        v10 = 1LL;
        break;
      }
    }
    *(_DWORD *)(a1 + 144) &= ~0x1000000u;
    if ( (_QWORD *)*v12 != v12 )
      v6 = v10;
    v39 = v6;
  }
  v19 = *(__int64 **)(a1 + 40);
  v20 = 534;
  if ( v19 != (__int64 *)(a1 + 40) )
  {
    while ( v19 != (__int64 *)(a1 + 40) )
    {
      v21 = v19[2];
      if ( *(_QWORD *)(v40 + 48) == *(_QWORD *)(v21 + 48) )
      {
        v19 = (__int64 *)v19[1];
        v22 = 0;
        if ( *(_DWORD *)(v21 + 24) == 590400 )
          v22 = v10;
        v23 = 534;
        if ( *(_DWORD *)(v21 + 24) != 590400 )
          v23 = 0;
        FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*v19, v23, 0, a1);
        if ( v22 )
          break;
        LOBYTE(v10) = 1;
      }
      v19 = (__int64 *)*v19;
    }
    FsRtlpComputeShareableOplockState(a1);
    v4 = v40;
  }
  v24 = 0;
  if ( OplockFullFoExt )
  {
    v25 = *(_QWORD *)(OplockFullFoExt + 40);
    if ( v25 )
    {
      if ( (*(_DWORD *)(v25 + 48) & 0xF00000) != 0 )
      {
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40), v8, v9, v10);
        FsRtlpModifyThreadPriorities(a1, v25, 0LL);
        FsRtlpClearOwner(a1, v25);
        if ( *(_QWORD *)(a1 + 72) == a1 + 72 )
          *(_BYTE *)(a1 + 32) = 0;
        ObfDereferenceObjectWithTag(*(PVOID *)(v25 + 24), 0x746C6644u);
        FsRtlpOplockPerfSendData(v25 + 72);
        v31 = (_QWORD *)(v25 + 88);
        v30 = a3;
        if ( a3 )
          *v31 = 0LL;
        else
          FsRtlpSyncWithAckTimeout(v31);
        ExFreePoolWithTag((PVOID)v25, 0);
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 || !*(_QWORD *)(v25 + 56) )
        {
          v30 = a3;
          FsRtlpRemoveAndCompleteRHIrp((PVOID)v25, 0, 0, 0, a3);
          goto LABEL_55;
        }
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40), v8, v9, v25 + 56);
        v28 = *v26;
        v29 = (_QWORD *)v26[1];
        if ( *(_QWORD **)(*v26 + 8LL) != v26 || (_QWORD *)*v29 != v26 )
          __fastfail(3u);
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        if ( *(_QWORD *)(a1 + 120) == a1 + 120 )
          *(_DWORD *)(a1 + 144) &= 0xFFFCFFFF;
        if ( *(_QWORD *)(v25 + 40) != v27 )
          FsRtlpClearOwner(a1, v25);
        FsRtlpFreeRHOpContext((PVOID)v25);
        v30 = a3;
      }
      v24 = 1;
LABEL_55:
      FsRtlpComputeShareableOplockState(a1);
      if ( v24 )
        FsRtlpReleaseIrpsWaitingForRH(a1);
      goto LABEL_58;
    }
  }
  v30 = a3;
LABEL_58:
  v7 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v4 + 48) == v7 )
  {
    if ( (*(_DWORD *)(a1 + 144) & 0x1F00F80) == 0 )
    {
      v32 = *(_QWORD *)a1;
      v33 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
      *(_BYTE *)(v32 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v32 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v32 + 69));
      if ( *(_DWORD *)(v33 + 24) == 590400 )
      {
        v34 = *(_QWORD *)(v32 + 24);
        *(_OWORD *)v34 = 0LL;
        *(_QWORD *)(v34 + 16) = 0LL;
        *(_DWORD *)v34 = 1572865;
        *(_DWORD *)(v34 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
        *(_QWORD *)(v32 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v32 + 56) = 8LL;
        v20 = 0;
      }
      *(_DWORD *)(*(_QWORD *)a1 + 48LL) = v20;
      IofCompleteRequest(*(PIRP *)a1, 1);
    }
    if ( (*(_DWORD *)(a1 + 144) & 0x80u) == 0 )
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0LL;
    if ( *(_QWORD *)(a1 + 24) )
    {
      FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
    }
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    while ( 1 )
    {
      v35 = *(_QWORD **)(a1 + 88);
      if ( v35 == (_QWORD *)(a1 + 88) )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(v35);
    }
    v36 = (_QWORD *)(a1 + 176);
    if ( v30 )
      *v36 = 0LL;
    else
      FsRtlpSyncWithAckTimeout(v36);
    LODWORD(v7) = FsRtlpOplockPerfSendData(a1 + 160);
    v6 = v39;
  }
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v47 = a1;
    v50 = &v47;
    v51 = 8LL;
    LODWORD(v40) = *(_DWORD *)(a1 + 144);
    v52 = &v40;
    v53 = 4LL;
    v48[0] = *(_QWORD *)(a1 + 88);
    v54 = v48;
    v55 = 8LL;
    v43 = *(_QWORD *)(a1 + 96);
    v56 = &v43;
    v57 = 8LL;
    LODWORD(v7) = tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_140E06C30,
                    (unsigned __int8 *)&word_140044BF6,
                    0LL,
                    0LL,
                    6u,
                    &v49);
  }
LABEL_77:
  if ( v6 )
    *(_DWORD *)(a1 + 144) |= 0x1000000u;
  return v7;
}
