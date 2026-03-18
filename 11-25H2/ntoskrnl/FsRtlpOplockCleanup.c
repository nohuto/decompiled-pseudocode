/*
 * XREFs of FsRtlpOplockCleanup @ 0x1404E4B20
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403EEA60 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x14057DE00 (FsRtlpOplockAckTimeoutWorker.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14042513C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140425440 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     FsRtlpOplockDequeueRH @ 0x14045A5B0 (FsRtlpOplockDequeueRH.c)
 *     IoGetOplockFullFoExt @ 0x14045A5F8 (IoGetOplockFullFoExt.c)
 *     FsRtlpClearOwner @ 0x140465220 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047F2B8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404A9C7C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404E19F4 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E51D4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057C46C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x14057D1B8 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpFreeRHOpContext @ 0x14057D960 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14057DFDC (FsRtlpSyncWithAckTimeout.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     FsRtlpOplockPerfSendData @ 0x1406FFED4 (FsRtlpOplockPerfSendData.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

int __fastcall FsRtlpOplockCleanup(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r14
  char v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char v11; // r9
  __int64 OplockFullFoExt; // r13
  _QWORD *v13; // rsi
  _QWORD *i; // rbx
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rbx
  int v24; // r15d
  char v25; // r14
  __int64 v26; // rcx
  int v27; // edx
  char v28; // si
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  _QWORD *v32; // r9
  __int64 v33; // r10
  __int64 v34; // rcx
  _QWORD *v35; // rax
  char v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rbx
  __int64 v43; // rcx
  bool v44; // zf
  __int64 v45; // rdx
  __int64 v46; // r8
  _QWORD *v47; // rcx
  _QWORD *v48; // rcx
  char v51; // [rsp+41h] [rbp-177h]
  __int64 v52; // [rsp+48h] [rbp-170h] BYREF
  int v53; // [rsp+50h] [rbp-168h] BYREF
  int v54; // [rsp+54h] [rbp-164h] BYREF
  __int64 v55; // [rsp+58h] [rbp-160h] BYREF
  __int64 v56; // [rsp+60h] [rbp-158h] BYREF
  __int64 v57; // [rsp+68h] [rbp-150h] BYREF
  __int64 v58; // [rsp+70h] [rbp-148h] BYREF
  __int64 v59; // [rsp+78h] [rbp-140h] BYREF
  _QWORD v60[2]; // [rsp+80h] [rbp-138h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+90h] [rbp-128h] BYREF
  __int64 *v62; // [rsp+B0h] [rbp-108h]
  __int64 v63; // [rsp+B8h] [rbp-100h]
  __int64 *v64; // [rsp+C0h] [rbp-F8h]
  __int64 v65; // [rsp+C8h] [rbp-F0h]
  _QWORD *v66; // [rsp+D0h] [rbp-E8h]
  __int64 v67; // [rsp+D8h] [rbp-E0h]
  __int64 *v68; // [rsp+E0h] [rbp-D8h]
  __int64 v69; // [rsp+E8h] [rbp-D0h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 *v71; // [rsp+110h] [rbp-A8h]
  __int64 v72; // [rsp+118h] [rbp-A0h]
  __int64 *v73; // [rsp+120h] [rbp-98h]
  __int64 v74; // [rsp+128h] [rbp-90h]
  int *v75; // [rsp+130h] [rbp-88h]
  __int64 v76; // [rsp+138h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+140h] [rbp-78h] BYREF
  __int64 *v78; // [rsp+160h] [rbp-58h]
  __int64 v79; // [rsp+168h] [rbp-50h]
  int *v80; // [rsp+170h] [rbp-48h]
  __int64 v81; // [rsp+178h] [rbp-40h]

  v4 = a2;
  v52 = a2;
  v60[1] = a1;
  v6 = 0;
  v51 = 0;
  LODWORD(v7) = *(_DWORD *)(a1 + 144);
  if ( (_DWORD)v7 == 1 )
    goto LABEL_86;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v56 = a1;
    v78 = &v56;
    v79 = 8LL;
    v53 = v7;
    v80 = &v53;
    v81 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)&byte_140044827, 0LL, 0LL, 4u, &v77);
  }
  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(v4 + 48));
  v55 = OplockFullFoExt;
  if ( (*(_DWORD *)(a1 + 144) & 0x1000000) != 0 )
  {
    v13 = (_QWORD *)(a1 + 104);
    for ( i = *(_QWORD **)(a1 + 104); i != v13; i = (_QWORD *)*i )
    {
      if ( *(_QWORD *)(v4 + 48) == i[2] )
      {
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v57 = i[2];
          v71 = &v57;
          v72 = 8LL;
          v58 = a1;
          v73 = &v58;
          v74 = 8LL;
          v54 = *(_DWORD *)(a1 + 144);
          v75 = &v54;
          v76 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)byte_1400447B1,
            0LL,
            0LL,
            5u,
            &v70);
        }
        while ( 1 )
        {
          v15 = *(_QWORD **)(a1 + 88);
          if ( v15 == (_QWORD *)(a1 + 88) )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(v15);
        }
        v16 = *(_QWORD **)i[1];
        v17 = *v16;
        v18 = (_QWORD *)v16[1];
        if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v18 != v16 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v16, v17, v10) )
        {
          FsRtlpOplockPerfSendData(i + 3);
          v19 = i + 5;
          if ( a3 )
            *v19 = 0LL;
          else
            FsRtlpSyncWithAckTimeout(v19);
        }
        ObfDereferenceObjectWithTag((PVOID)i[2], 0x746C6644u);
        Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v21, v20, v22);
        ExFreePoolWithTag(i, 0);
        v11 = 1;
        break;
      }
    }
    *(_DWORD *)(a1 + 144) &= ~0x1000000u;
    if ( (_QWORD *)*v13 != v13 )
      v6 = v11;
    v51 = v6;
  }
  v23 = *(__int64 **)(a1 + 40);
  v24 = 534;
  if ( v23 != (__int64 *)(a1 + 40) )
  {
    v25 = 0;
    while ( v23 != (__int64 *)(a1 + 40) )
    {
      v26 = v23[2];
      if ( *(_QWORD *)(v52 + 48) == *(_QWORD *)(v26 + 48) )
      {
        v23 = (__int64 *)v23[1];
        if ( *(_DWORD *)(v26 + 24) == 590400 )
          v25 = v11;
        v27 = 534;
        if ( *(_DWORD *)(v26 + 24) != 590400 )
          v27 = 0;
        FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*v23, v27, 0, a1);
        if ( v25 )
          break;
        v11 = 1;
      }
      v23 = (__int64 *)*v23;
    }
    FsRtlpComputeShareableOplockState((__int64 *)a1);
    v4 = v52;
  }
  v28 = 0;
  if ( OplockFullFoExt )
  {
    v29 = *(_QWORD *)(OplockFullFoExt + 40);
    if ( v29 )
    {
      if ( (*(_DWORD *)(v29 + 48) & 0xF00000) != 0 )
      {
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40), v8);
        FsRtlpModifyThreadPriorities(a1, v29, 0);
        FsRtlpClearOwner(a1, v29);
        if ( *(_QWORD *)(a1 + 72) == a1 + 72 )
          *(_BYTE *)(a1 + 32) = 0;
        ObfDereferenceObjectWithTag(*(PVOID *)(v29 + 24), 0x746C6644u);
        if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v38, v37, v39) )
        {
          FsRtlpOplockPerfSendData(v29 + 72);
          v40 = (_QWORD *)(v29 + 88);
          v36 = a3;
          if ( a3 )
            *v40 = 0LL;
          else
            FsRtlpSyncWithAckTimeout(v40);
        }
        else
        {
          v36 = a3;
        }
        ExFreePoolWithTag((PVOID)v29, 0);
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 144) & 0x10000) == 0 || !*(_QWORD *)(v29 + 56) )
        {
          v36 = a3;
          FsRtlpRemoveAndCompleteRHIrp((PVOID)v29, 0, 0, 0, a3);
          goto LABEL_62;
        }
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40), v8);
        v34 = *v32;
        v35 = (_QWORD *)v32[1];
        if ( *(_QWORD **)(*v32 + 8LL) != v32 || (_QWORD *)*v35 != v32 )
          __fastfail(3u);
        *v35 = v34;
        *(_QWORD *)(v34 + 8) = v35;
        if ( *(_QWORD *)(a1 + 120) == a1 + 120 )
          *(_DWORD *)(a1 + 144) &= 0xFFFCFFFF;
        if ( *(_QWORD *)(v29 + 40) != v33 )
          FsRtlpClearOwner(a1, v29);
        if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v34, v30, v31) )
          FsRtlpFreeRHOpContext((PVOID)v29);
        else
          ExFreePoolWithTag((PVOID)v29, 0);
        v36 = a3;
      }
      v28 = 1;
LABEL_62:
      FsRtlpComputeShareableOplockState((__int64 *)a1);
      if ( v28 )
        FsRtlpReleaseIrpsWaitingForRH(a1);
      goto LABEL_65;
    }
  }
  v36 = a3;
LABEL_65:
  v7 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v4 + 48) == v7 )
  {
    if ( (*(_DWORD *)(a1 + 144) & 0x1F00F80) == 0 )
    {
      v41 = *(_QWORD *)a1;
      v42 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
      *(_BYTE *)(v41 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v41 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v41 + 69));
      if ( *(_DWORD *)(v42 + 24) == 590400 )
      {
        v43 = *(_QWORD *)(v41 + 24);
        *(_OWORD *)v43 = 0LL;
        *(_QWORD *)(v43 + 16) = 0LL;
        *(_DWORD *)v43 = 1572865;
        *(_DWORD *)(v43 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
        *(_QWORD *)(v41 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v41 + 56) = 8LL;
        v24 = 0;
      }
      *(_DWORD *)(*(_QWORD *)a1 + 48LL) = v24;
      IofCompleteRequest(*(PIRP *)a1, 1);
      v6 = v51;
    }
    if ( (*(_DWORD *)(a1 + 144) & 0x80u) == 0 )
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0LL;
    if ( *(_QWORD *)(a1 + 24) )
    {
      FsRtlpModifyThreadPriorities(a1, 0LL, 0);
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
    }
    v44 = (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v9) == 0;
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    if ( !v44 )
      v6 = v51;
    while ( 1 )
    {
      v47 = *(_QWORD **)(a1 + 88);
      if ( v47 == (_QWORD *)(a1 + 88) )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(v47);
    }
    LODWORD(v7) = Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v47, v45, v46);
    if ( (_DWORD)v7 )
    {
      v48 = (_QWORD *)(a1 + 176);
      if ( v36 )
        *v48 = 0LL;
      else
        FsRtlpSyncWithAckTimeout(v48);
      LODWORD(v7) = FsRtlpOplockPerfSendData(a1 + 160);
    }
  }
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v59 = a1;
    v62 = &v59;
    v63 = 8LL;
    LODWORD(v52) = *(_DWORD *)(a1 + 144);
    v64 = &v52;
    v65 = 4LL;
    v60[0] = *(_QWORD *)(a1 + 88);
    v66 = v60;
    v67 = 8LL;
    v55 = *(_QWORD *)(a1 + 96);
    v68 = &v55;
    v69 = 8LL;
    LODWORD(v7) = tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_140E06C30,
                    (unsigned __int8 *)byte_140044739,
                    0LL,
                    0LL,
                    6u,
                    &v61);
  }
LABEL_86:
  if ( v6 )
    *(_DWORD *)(a1 + 144) |= 0x1000000u;
  return v7;
}
