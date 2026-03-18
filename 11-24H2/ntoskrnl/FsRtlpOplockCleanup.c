/*
 * XREFs of FsRtlpOplockCleanup @ 0x1404E3BFC
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403DA5B0 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x140581220 (FsRtlpOplockAckTimeoutWorker.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402601A4 (FsRtlpClearOwner.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140330618 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14033091C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x140330A70 (FsRtlpComputeShareableOplockState.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403DC8D4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x140459914 (FsRtlpOplockDequeueRH.c)
 *     IoGetOplockFullFoExt @ 0x14045995C (IoGetOplockFullFoExt.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047FCA8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E42B0 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x1404F48B4 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057F78C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpFreeRHOpContext @ 0x140580D80 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14058178C (FsRtlpSyncWithAckTimeout.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     FsRtlpOplockPerfSendData @ 0x14070BDB4 (FsRtlpOplockPerfSendData.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

int __fastcall FsRtlpOplockCleanup(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r14
  char v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 OplockFullFoExt; // r13
  _QWORD *v13; // rsi
  _QWORD *i; // rbx
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rbx
  int v22; // r15d
  char v23; // r14
  __int64 v24; // rcx
  int v25; // edx
  char v26; // si
  __int64 v27; // rbx
  _QWORD *v28; // r9
  __int64 v29; // r10
  __int64 v30; // rcx
  _QWORD *v31; // rax
  char v32; // r13
  __int64 v33; // rcx
  _QWORD *v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rbx
  __int64 v37; // rcx
  bool v38; // zf
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rcx
  _QWORD *v43; // rcx
  char v46; // [rsp+41h] [rbp-177h]
  __int64 v47; // [rsp+48h] [rbp-170h] BYREF
  int v48; // [rsp+50h] [rbp-168h] BYREF
  int v49; // [rsp+54h] [rbp-164h] BYREF
  __int64 v50; // [rsp+58h] [rbp-160h] BYREF
  __int64 v51; // [rsp+60h] [rbp-158h] BYREF
  __int64 v52; // [rsp+68h] [rbp-150h] BYREF
  __int64 v53; // [rsp+70h] [rbp-148h] BYREF
  __int64 v54; // [rsp+78h] [rbp-140h] BYREF
  _QWORD v55[2]; // [rsp+80h] [rbp-138h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+90h] [rbp-128h] BYREF
  __int64 *v57; // [rsp+B0h] [rbp-108h]
  __int64 v58; // [rsp+B8h] [rbp-100h]
  __int64 *v59; // [rsp+C0h] [rbp-F8h]
  __int64 v60; // [rsp+C8h] [rbp-F0h]
  _QWORD *v61; // [rsp+D0h] [rbp-E8h]
  __int64 v62; // [rsp+D8h] [rbp-E0h]
  __int64 *v63; // [rsp+E0h] [rbp-D8h]
  __int64 v64; // [rsp+E8h] [rbp-D0h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 *v66; // [rsp+110h] [rbp-A8h]
  __int64 v67; // [rsp+118h] [rbp-A0h]
  __int64 *v68; // [rsp+120h] [rbp-98h]
  __int64 v69; // [rsp+128h] [rbp-90h]
  int *v70; // [rsp+130h] [rbp-88h]
  __int64 v71; // [rsp+138h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+140h] [rbp-78h] BYREF
  __int64 *v73; // [rsp+160h] [rbp-58h]
  __int64 v74; // [rsp+168h] [rbp-50h]
  int *v75; // [rsp+170h] [rbp-48h]
  __int64 v76; // [rsp+178h] [rbp-40h]

  v4 = a2;
  v47 = a2;
  v55[1] = a1;
  v6 = 0;
  v46 = 0;
  LODWORD(v7) = *(_DWORD *)(a1 + 144);
  if ( (_DWORD)v7 == 1 )
    goto LABEL_86;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v51 = a1;
    v73 = &v51;
    v74 = 8LL;
    v48 = v7;
    v75 = &v48;
    v76 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)&word_140044836, 0LL, 0LL, 4u, &v72);
  }
  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(v4 + 48));
  v50 = OplockFullFoExt;
  if ( (*(_DWORD *)(a1 + 144) & 0x1000000) != 0 )
  {
    v13 = (_QWORD *)(a1 + 104);
    for ( i = *(_QWORD **)(a1 + 104); i != v13; i = (_QWORD *)*i )
    {
      if ( *(_QWORD *)(v4 + 48) == i[2] )
      {
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v52 = i[2];
          v66 = &v52;
          v67 = 8LL;
          v53 = a1;
          v68 = &v53;
          v69 = 8LL;
          v49 = *(_DWORD *)(a1 + 144);
          v70 = &v49;
          v71 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)byte_1400446F3,
            0LL,
            0LL,
            5u,
            &v65);
        }
        while ( 1 )
        {
          v15 = *(_QWORD **)(a1 + 88);
          if ( v15 == (_QWORD *)(a1 + 88) )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(v15, v8, v10, v11);
        }
        v16 = *(_QWORD **)i[1];
        v17 = *v16;
        v18 = (_QWORD *)v16[1];
        if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v18 != v16 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v16) )
        {
          FsRtlpOplockPerfSendData(i + 3);
          v19 = i + 5;
          if ( a3 )
            *v19 = 0LL;
          else
            FsRtlpSyncWithAckTimeout(v19);
        }
        ObfDereferenceObjectWithTag((PVOID)i[2], 0x746C6644u);
        Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v20);
        ExFreePoolWithTag(i, 0);
        LOBYTE(v11) = 1;
        break;
      }
    }
    *(_DWORD *)(a1 + 144) &= ~0x1000000u;
    if ( (_QWORD *)*v13 != v13 )
      v6 = v11;
    v46 = v6;
  }
  v21 = *(__int64 **)(a1 + 40);
  v22 = 534;
  if ( v21 != (__int64 *)(a1 + 40) )
  {
    v23 = 0;
    while ( v21 != (__int64 *)(a1 + 40) )
    {
      v24 = v21[2];
      if ( *(_QWORD *)(v47 + 48) == *(_QWORD *)(v24 + 48) )
      {
        v21 = (__int64 *)v21[1];
        if ( *(_DWORD *)(v24 + 24) == 590400 )
          v23 = v11;
        v25 = 534;
        if ( *(_DWORD *)(v24 + 24) != 590400 )
          v25 = 0;
        FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*v21, v25, 0, a1);
        if ( v23 )
          break;
        LOBYTE(v11) = 1;
      }
      v21 = (__int64 *)*v21;
    }
    FsRtlpComputeShareableOplockState(a1);
    v4 = v47;
  }
  v26 = 0;
  if ( OplockFullFoExt )
  {
    v27 = *(_QWORD *)(OplockFullFoExt + 40);
    if ( v27 )
    {
      if ( (*(_DWORD *)(v27 + 48) & 0xF00000) != 0 )
      {
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40), v8);
        FsRtlpModifyThreadPriorities(a1, v27, 0LL);
        FsRtlpClearOwner(a1, v27);
        if ( *(_QWORD *)(a1 + 72) == a1 + 72 )
          *(_BYTE *)(a1 + 32) = 0;
        ObfDereferenceObjectWithTag(*(PVOID *)(v27 + 24), 0x746C6644u);
        if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v33) )
        {
          FsRtlpOplockPerfSendData(v27 + 72);
          v34 = (_QWORD *)(v27 + 88);
          v32 = a3;
          if ( a3 )
            *v34 = 0LL;
          else
            FsRtlpSyncWithAckTimeout(v34);
        }
        else
        {
          v32 = a3;
        }
        ExFreePoolWithTag((PVOID)v27, 0);
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 || !*(_QWORD *)(v27 + 56) )
        {
          v32 = a3;
          FsRtlpRemoveAndCompleteRHIrp((PVOID)v27, 0, 0, 0, a3);
          goto LABEL_62;
        }
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40), v8);
        v30 = *v28;
        v31 = (_QWORD *)v28[1];
        if ( *(_QWORD **)(*v28 + 8LL) != v28 || (_QWORD *)*v31 != v28 )
          __fastfail(3u);
        *v31 = v30;
        *(_QWORD *)(v30 + 8) = v31;
        if ( *(_QWORD *)(a1 + 120) == a1 + 120 )
          *(_DWORD *)(a1 + 144) &= 0xFFFCFFFF;
        if ( *(_QWORD *)(v27 + 40) != v29 )
          FsRtlpClearOwner(a1, v27);
        if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v30) )
          FsRtlpFreeRHOpContext((PVOID)v27);
        else
          ExFreePoolWithTag((PVOID)v27, 0);
        v32 = a3;
      }
      v26 = 1;
LABEL_62:
      FsRtlpComputeShareableOplockState(a1);
      if ( v26 )
        FsRtlpReleaseIrpsWaitingForRH(a1);
      goto LABEL_65;
    }
  }
  v32 = a3;
LABEL_65:
  v7 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v4 + 48) == v7 )
  {
    if ( (*(_DWORD *)(a1 + 144) & 0x1F00F80) == 0 )
    {
      v35 = *(_QWORD *)a1;
      v36 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
      *(_BYTE *)(v35 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v35 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v35 + 69));
      if ( *(_DWORD *)(v36 + 24) == 590400 )
      {
        v37 = *(_QWORD *)(v35 + 24);
        *(_OWORD *)v37 = 0LL;
        *(_QWORD *)(v37 + 16) = 0LL;
        *(_DWORD *)v37 = 1572865;
        *(_DWORD *)(v37 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
        *(_QWORD *)(v35 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v35 + 56) = 8LL;
        v22 = 0;
      }
      *(_DWORD *)(*(_QWORD *)a1 + 48LL) = v22;
      IofCompleteRequest(*(PIRP *)a1, 1);
      v6 = v46;
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
    v38 = (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v9) == 0;
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    if ( !v38 )
      v6 = v46;
    while ( 1 )
    {
      v42 = *(_QWORD **)(a1 + 88);
      if ( v42 == (_QWORD *)(a1 + 88) )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(v42, v39, v40, v41);
    }
    LODWORD(v7) = Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v42);
    if ( (_DWORD)v7 )
    {
      v43 = (_QWORD *)(a1 + 176);
      if ( v32 )
        *v43 = 0LL;
      else
        FsRtlpSyncWithAckTimeout(v43);
      LODWORD(v7) = FsRtlpOplockPerfSendData(a1 + 160);
    }
  }
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v54 = a1;
    v57 = &v54;
    v58 = 8LL;
    LODWORD(v47) = *(_DWORD *)(a1 + 144);
    v59 = &v47;
    v60 = 4LL;
    v55[0] = *(_QWORD *)(a1 + 88);
    v61 = v55;
    v62 = 8LL;
    v50 = *(_QWORD *)(a1 + 96);
    v63 = &v50;
    v64 = 8LL;
    LODWORD(v7) = tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_140E06C30,
                    (unsigned __int8 *)byte_140044769,
                    0LL,
                    0LL,
                    6u,
                    &v56);
  }
LABEL_86:
  if ( v6 )
    *(_DWORD *)(a1 + 144) |= 0x1000000u;
  return v7;
}
