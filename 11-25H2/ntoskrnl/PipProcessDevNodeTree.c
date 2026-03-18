/*
 * XREFs of PipProcessDevNodeTree @ 0x1408355F8
 * Callers:
 *     PnpDeviceActionWorker @ 0x14046E540 (PnpDeviceActionWorker.c)
 *     PnpProcessRebalance @ 0x1405A5E38 (PnpProcessRebalance.c)
 *     PiProcessResourceRequirementsChanged @ 0x140717F64 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessStartSystemDevices @ 0x140718234 (PiProcessStartSystemDevices.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 *     PiProcessReenumeration @ 0x140A3E2E8 (PiProcessReenumeration.c)
 *     PiRestartDevice @ 0x140AB2E28 (PiRestartDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     PoFxIdleDevice @ 0x140477718 (PoFxIdleDevice.c)
 *     PnpDeviceCompletionQueueIsEmpty @ 0x14047ED90 (PnpDeviceCompletionQueueIsEmpty.c)
 *     PoFxPrepareDevice @ 0x14048EBF4 (PoFxPrepareDevice.c)
 *     PiCollapseEnumRequests @ 0x1404A33EC (PiCollapseEnumRequests.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x1404B45E4 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x1404D5600 (McTemplateK0z_EtwWriteTransfer.c)
 *     PipProcessRestartPhase1 @ 0x14072A30C (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x14072A3D8 (PipProcessRestartPhase2.c)
 *     PiProcessNewDeviceNodeAsync @ 0x14082CDEC (PiProcessNewDeviceNodeAsync.c)
 *     PnpProcessAssignResources @ 0x14082F690 (PnpProcessAssignResources.c)
 *     PipSetDevNodeProblem @ 0x140831BCC (PipSetDevNodeProblem.c)
 *     PnpCheckForActiveDependencies @ 0x14083248C (PnpCheckForActiveDependencies.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140832F24 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140833970 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpPoFxActivateDevice @ 0x140834FC8 (PnpPoFxActivateDevice.c)
 *     PipEnumerateDevice @ 0x1408353E4 (PipEnumerateDevice.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 *     PpDevCfgTraceDeviceStart @ 0x140835E98 (PpDevCfgTraceDeviceStart.c)
 *     PipEnumerateCompleted @ 0x14083619C (PipEnumerateCompleted.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140934F70 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     IopAllocateUnicodeString @ 0x14096AEDC (IopAllocateUnicodeString.c)
 *     PipProcessStartPhase1 @ 0x1409A0E70 (PipProcessStartPhase1.c)
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 *     PipProcessStartPhase2 @ 0x140A6C1C8 (PipProcessStartPhase2.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140A88290 (PnpSynchronizeDeviceEventQueue.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

__int64 __fastcall PipProcessDevNodeTree(__int64 a1, __int64 a2, int a3, int a4, char a5, unsigned __int8 a6, char a7)
{
  int v7; // r15d
  char v8; // r12
  int v9; // esi
  int v10; // edi
  char *v11; // r13
  PVOID *v12; // r14
  bool v13; // al
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // r8
  ULONG_PTR v17; // rbx
  int v18; // esi
  int v19; // eax
  __int64 v20; // rdx
  int started; // edi
  char v22; // r14
  char v23; // r14
  int v24; // esi
  ULONG_PTR v25; // rax
  ULONG_PTR v27; // rax
  int v28; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v30; // rbx
  int v31; // esi
  void *CompletedRequest; // rax
  int v33; // eax
  __int64 v34; // rax
  int v35; // eax
  int restarted; // eax
  void *v37; // rax
  char v38; // r12
  char v39; // r15
  void *v40; // rax
  int v41; // eax
  int v42; // eax
  char v43; // [rsp+48h] [rbp-41h]
  char v44; // [rsp+49h] [rbp-40h] BYREF
  char v45; // [rsp+4Ah] [rbp-3Fh] BYREF
  char v46; // [rsp+4Bh] [rbp-3Eh]
  char v47; // [rsp+4Ch] [rbp-3Dh]
  int v48; // [rsp+50h] [rbp-39h]
  unsigned int v49; // [rsp+54h] [rbp-35h]
  ULONG_PTR v50; // [rsp+58h] [rbp-31h]
  PVOID *v51; // [rsp+60h] [rbp-29h]
  unsigned int v52; // [rsp+68h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  char *v54; // [rsp+D8h] [rbp+4Fh]
  int v55; // [rsp+E0h] [rbp+57h]

  v55 = a2;
  v54 = (char *)a1;
  v8 = a7;
  v45 = 0;
  v9 = a4;
  v51 = (PVOID *)a1;
  v10 = a2;
  v11 = (char *)a1;
  v12 = (PVOID *)a1;
  DestinationString = 0LL;
  if ( a2 && !*(_BYTE *)(a2 + 28) && a4 != 1 && !a7 )
  {
    v13 = PiCollapseEnumRequests(a2);
    a1 = (__int64)IopRootDeviceNode;
    if ( v13 )
      v11 = (char *)IopRootDeviceNode;
    v54 = v11;
  }
  LOBYTE(a1) = 0;
  v52 = 0;
  LOBYTE(v7) = 0;
  v46 = 0;
  v14 = 1;
  v43 = 1;
  v49 = a1;
  v48 = v7;
LABEL_9:
  if ( !v8 )
  {
    if ( (byte_140EEFA6B & 0x10) != 0 )
      McTemplateK0z_EtwWriteTransfer(
        a1,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_AssignResources_Start,
        1LL,
        *((const wchar_t **)v11 + 6));
    v44 = 0;
    v46 = PnpProcessAssignResources((__int64)v11, a5, (__int64)&v44);
    if ( (byte_140EEFA6B & 0x10) != 0 )
      McTemplateK0z_EtwWriteTransfer(
        v15,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_AssignResources_Stop,
        v16,
        *((const wchar_t **)v11 + 6));
    if ( v44 )
    {
      v42 = PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, v10, a3, v9, 0, 0, 1);
      LODWORD(a1) = (unsigned __int8)v49;
      if ( v42 == -1073741106 )
        LODWORD(a1) = 1;
      v49 = a1;
    }
    else
    {
      LOBYTE(a1) = v49;
    }
    v14 = v43;
  }
  v17 = (ULONG_PTR)v11;
  v44 = 0;
  v50 = (ULONG_PTR)v11;
  v47 = 1;
  while ( 1 )
  {
    v18 = 1;
    if ( (_BYTE)a1 )
      goto LABEL_75;
    if ( v14 )
    {
      v19 = *(_DWORD *)(v17 + 704);
      if ( (v19 & 0x10000) != 0 )
        *(_DWORD *)(v17 + 704) = v19 & 0xFFFEFFFF;
    }
    if ( (unsigned int)(*(_DWORD *)(v17 + 300) - 769) > 1
      && (*(_DWORD *)(v17 + 396) & 0x6000) == 0
      && PnpCheckForActiveDependencies(v17, 2u) )
    {
      PipSetDevNodeProblem(v17, 51LL, 0LL);
    }
    v20 = *(unsigned int *)(v17 + 396);
    if ( (v20 & 0x6000) != 0 )
      goto LABEL_43;
    if ( *(_DWORD *)(v17 + 300) != 769 )
    {
      if ( *(_DWORD *)(v17 + 300) != 772 )
      {
        switch ( *(_DWORD *)(v17 + 300) )
        {
          case 0x306:
            if ( v8 )
              goto LABEL_36;
            PnpPoFxActivateDevice(v17, 512);
            started = PipProcessStartPhase1(v17);
            if ( started == 259 )
            {
LABEL_106:
              v7 = 1;
              v48 = 1;
              goto LABEL_36;
            }
            v18 = 0;
            goto LABEL_72;
          case 0x308:
            restarted = PipProcessStartPhase2(v17, v20, 1LL);
            break;
          case 0x309:
            if ( (int)v20 < 0 )
            {
              v18 = 1;
              goto LABEL_36;
            }
            restarted = PipProcessStartPhase3(v17, a4 != 1, 1LL);
            break;
          case 0x30A:
            if ( a4 == 1 && (char *)v17 != v11 )
              goto LABEL_36;
            v18 = 2;
            if ( v8 || (v20 & 8) == 0 )
              goto LABEL_36;
            v31 = PipEnumerateDevice(v17, a6, (unsigned __int8)v7);
            started = v31;
            if ( v31 == 259 )
            {
              LOBYTE(v7) = 1;
              v18 = 1;
              v48 = v7;
              goto LABEL_36;
            }
            v18 = (v31 >> 31) & 2;
LABEL_72:
            if ( started == -1073741106 )
              goto LABEL_73;
            goto LABEL_36;
          case 0x30C:
            v7 = (unsigned __int8)v7;
            started = PipProcessRestartPhase1(v17, a6, (unsigned __int8)v7);
            if ( started == 259 )
              v7 = 1;
            v48 = v7;
            v18 = started == 259;
            goto LABEL_72;
          case 0x30D:
            restarted = PipProcessRestartPhase2(v17, v20, 1LL);
            break;
          case 0x30F:
            if ( (*(_DWORD *)(v17 + 704) & 0x200) != 0 )
            {
              PoFxIdleDevice(*(_QWORD *)(v17 + 32));
              *(_DWORD *)(v17 + 704) &= ~0x200u;
            }
            started = PipEnumerateCompleted(v17);
            v18 = 2;
            goto LABEL_72;
          default:
            goto LABEL_36;
        }
        started = restarted;
        if ( restarted < 0 )
          started = -1073741106;
        v18 = (unsigned int)restarted >> 31;
        goto LABEL_72;
      }
      if ( v8 || (*(_DWORD *)(v17 + 704) & 0x10000) != 0 )
        goto LABEL_36;
      started = PipCallDriverAddDevice(v17);
      if ( started >= 0 )
      {
        PoFxPrepareDevice(v17, 0);
        v18 = 0;
        v46 = 1;
        goto LABEL_36;
      }
      if ( *(_DWORD *)(v17 + 300) == 772 )
        *(_DWORD *)(v17 + 704) |= 0x10000u;
      goto LABEL_72;
    }
    if ( (a4 != 3 || (v20 & 0x2000000) == 0) && !v8 )
    {
      if ( PnpCheckForActiveDependencies(v17, 1u) )
      {
        PipSetDevNodeProblem(v17, 51LL, 0LL);
      }
      else
      {
        v35 = PiProcessNewDeviceNodeAsync(v17, a6);
        started = v35;
        if ( v35 == 259 )
          goto LABEL_106;
        if ( v35 < 0 )
          goto LABEL_72;
        v18 = 0;
      }
    }
LABEL_36:
    v45 = 0;
    started = 0;
    v22 = 0;
    if ( !PnpDeviceCompletionQueueIsEmpty() )
    {
      do
      {
        if ( !Object.Header.SignalState )
          break;
        CompletedRequest = (void *)PnpDeviceCompletionQueueGetCompletedRequest();
        v33 = PnpDeviceCompletionProcessCompletedRequest(CompletedRequest);
        v45 = 1;
        v22 = 1;
        if ( v33 == -1073741106 )
          started = -1073741106;
      }
      while ( !PnpDeviceCompletionQueueIsEmpty() );
      v11 = v54;
      v8 = a7;
    }
    if ( started == -1073741106 )
    {
      v12 = v51;
    }
    else
    {
      if ( v22 || !v44 )
      {
        v12 = v51;
LABEL_43:
        if ( !v8 && (*(_DWORD *)(v17 + 704) & 1) != 0 )
          PpDevCfgTraceDeviceStart(v17, 0LL);
        goto LABEL_44;
      }
      v45 = 0;
      started = 0;
      v23 = 0;
      if ( !PnpDeviceCompletionQueueIsEmpty() )
      {
        v38 = 0;
        v39 = 0;
        do
        {
          v23 = v39;
          if ( !Object.Header.SignalState && v38 )
            break;
          v40 = (void *)PnpDeviceCompletionQueueGetCompletedRequest();
          v41 = PnpDeviceCompletionProcessCompletedRequest(v40);
          v45 = 1;
          v38 = 1;
          v39 = 1;
          if ( v41 == -1073741106 )
            started = -1073741106;
          v23 = 1;
        }
        while ( !PnpDeviceCompletionQueueIsEmpty() );
        v17 = v50;
        v11 = v54;
        v8 = a7;
      }
      v44 = 0;
      LOBYTE(v7) = v23 != 0 ? v48 : 0;
      v12 = v51;
      v48 = v7;
      if ( started != -1073741106 )
        goto LABEL_43;
    }
LABEL_73:
    if ( !v8 )
      break;
    v52 = started;
LABEL_44:
    if ( !(_BYTE)v7 || !v18 || PnpAsyncOptions < 0 )
    {
      v24 = v18 - 1;
      if ( v24 )
      {
        if ( v24 == 1 )
        {
          v25 = *(_QWORD *)(v17 + 8);
          if ( !v25 )
            goto LABEL_59;
LABEL_48:
          v17 = v25;
          v50 = v25;
        }
        goto LABEL_49;
      }
    }
    while ( 1 )
    {
LABEL_59:
      if ( (char *)v17 == v11 )
      {
        if ( (PnpAsyncOptions & 4) != 0 && (*(_DWORD *)(v17 + 396) & 0x6000) != 0 )
        {
          if ( (_BYTE)v7 )
          {
            PnpDeviceCompletionProcessCompletedRequests(1, 1, &v45);
            LOBYTE(v7) = 0;
            v48 = v7;
          }
        }
        else if ( (_BYTE)v7 )
        {
LABEL_91:
          v14 = 0;
          v44 = 1;
          v43 = 0;
          goto LABEL_50;
        }
        v47 = 0;
        goto LABEL_91;
      }
      v25 = *(_QWORD *)v17;
      if ( *(_QWORD *)v17 )
        goto LABEL_48;
      if ( (_BYTE)v7 && PnpAsyncOptions > 0 )
        break;
      v27 = *(_QWORD *)(v17 + 16);
      if ( v27 )
      {
        v17 = *(_QWORD *)(v17 + 16);
        v50 = v27;
      }
    }
    v34 = *(_QWORD *)(v17 + 16);
    if ( v34 )
    {
      v17 = *(_QWORD *)(v34 + 8);
      v50 = v17;
    }
    v44 = 1;
LABEL_49:
    v14 = v43;
LABEL_50:
    v9 = a4;
LABEL_51:
    v10 = v55;
    a1 = v49;
    if ( !v47 )
    {
      v14 = v43;
      if ( !v46 )
      {
        if ( !v8 )
          ObfDereferenceObject(v12[4]);
        return v52;
      }
      goto LABEL_9;
    }
  }
  v10 = v55;
LABEL_75:
  LOBYTE(v49) = 0;
  v45 = 0;
  if ( !PnpDeviceCompletionQueueIsEmpty() )
  {
    v45 = 1;
    do
    {
      v37 = (void *)PnpDeviceCompletionQueueGetCompletedRequest();
      PnpDeviceCompletionProcessCompletedRequest(v37);
    }
    while ( !PnpDeviceCompletionQueueIsEmpty() );
  }
  LOBYTE(v7) = 0;
  v9 = a4;
  v48 = v7;
  PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, v10, a3, a4, a5, a6, 1);
  v28 = IopAllocateUnicodeString(&DestinationString);
  if ( v28 < 0 )
  {
    ObfDereferenceObject(v12[4]);
    return (unsigned int)v28;
  }
  else
  {
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v11 + 40));
    ObfDereferenceObject(v12[4]);
    ExReleaseResourceLite(&IopDeviceTreeLock);
    ExReleaseResourceLite(&PiEngineLock);
    KeLeaveCriticalRegion();
    PnpSynchronizeDeviceEventQueue();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    v30 = PnpDeviceObjectFromDeviceInstanceWithTag(&DestinationString, 1953261124LL);
    if ( DestinationString.Buffer )
    {
      ExFreePool(DestinationString.Buffer);
      DestinationString = 0LL;
    }
    if ( v30 )
    {
      v11 = *(char **)(*(_QWORD *)(v30 + 312) + 40LL);
      v14 = v43;
      v17 = (ULONG_PTR)v11;
      v50 = (ULONG_PTR)v11;
      v12 = (PVOID *)v11;
      v54 = v11;
      v51 = (PVOID *)v11;
      goto LABEL_51;
    }
    return 3221225473LL;
  }
}
