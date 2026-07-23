/*
 * XREFs of PipProcessDevNodeTree @ 0x1408B7FE0
 * Callers:
 *     PnpDeviceActionWorker @ 0x140467910 (PnpDeviceActionWorker.c)
 *     PnpProcessRebalance @ 0x1405A6738 (PnpProcessRebalance.c)
 *     PiProcessResourceRequirementsChanged @ 0x140721BF4 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessStartSystemDevices @ 0x140721EC4 (PiProcessStartSystemDevices.c)
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 *     PiProcessReenumeration @ 0x140A39068 (PiProcessReenumeration.c)
 *     PiRestartDevice @ 0x140AB1D04 (PiRestartDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PoFxIdleDevice @ 0x1402F11C4 (PoFxIdleDevice.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     PnpDeviceCompletionQueueIsEmpty @ 0x14047A660 (PnpDeviceCompletionQueueIsEmpty.c)
 *     PoFxPrepareDevice @ 0x140488860 (PoFxPrepareDevice.c)
 *     PiCollapseEnumRequests @ 0x14049DC6C (PiCollapseEnumRequests.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x1404AE694 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x1404CE1B0 (McTemplateK0z_EtwWriteTransfer.c)
 *     PipProcessRestartPhase1 @ 0x1407344CC (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x140734598 (PipProcessRestartPhase2.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1408AFB00 (PnpSynchronizeDeviceEventQueue.c)
 *     PipProcessStartPhase2 @ 0x1408AFCBC (PipProcessStartPhase2.c)
 *     PipEnumerateCompleted @ 0x1408B6C08 (PipEnumerateCompleted.c)
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 *     PpDevCfgTraceDeviceStart @ 0x1408B8880 (PpDevCfgTraceDeviceStart.c)
 *     PipEnumerateDevice @ 0x1408B895C (PipEnumerateDevice.c)
 *     PnpPoFxActivateDevice @ 0x1408B9170 (PnpPoFxActivateDevice.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpProcessAssignResources @ 0x140979798 (PnpProcessAssignResources.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 *     IopAllocateUnicodeString @ 0x1409BB8B4 (IopAllocateUnicodeString.c)
 *     PnpCheckForActiveDependencies @ 0x1409BDBB4 (PnpCheckForActiveDependencies.c)
 *     PipProcessStartPhase1 @ 0x1409BE300 (PipProcessStartPhase1.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1409BF954 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1409BF9E8 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140A767EC (PiProcessNewDeviceNodeAsync.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
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
  int started; // edi
  char v21; // r14
  char v22; // r14
  int v23; // esi
  ULONG_PTR v24; // rax
  ULONG_PTR v26; // rax
  int v27; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v29; // rbx
  int v30; // esi
  void *CompletedRequest; // rax
  int v32; // eax
  __int64 v33; // rax
  int v34; // eax
  int restarted; // eax
  void *v36; // rax
  char v37; // r12
  char v38; // r15
  void *v39; // rax
  int v40; // eax
  int v41; // eax
  char v42; // [rsp+48h] [rbp-41h]
  char v43; // [rsp+49h] [rbp-40h] BYREF
  char v44; // [rsp+4Ah] [rbp-3Fh] BYREF
  char v45; // [rsp+4Bh] [rbp-3Eh]
  char v46; // [rsp+4Ch] [rbp-3Dh]
  int v47; // [rsp+50h] [rbp-39h]
  unsigned int v48; // [rsp+54h] [rbp-35h]
  ULONG_PTR v49; // [rsp+58h] [rbp-31h]
  PVOID *v50; // [rsp+60h] [rbp-29h]
  unsigned int v51; // [rsp+68h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  char *v53; // [rsp+D8h] [rbp+4Fh]
  int v54; // [rsp+E0h] [rbp+57h]

  v54 = a2;
  v53 = (char *)a1;
  v8 = a7;
  v44 = 0;
  v9 = a4;
  v50 = (PVOID *)a1;
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
    v53 = v11;
  }
  LOBYTE(a1) = 0;
  v51 = 0;
  LOBYTE(v7) = 0;
  v45 = 0;
  v14 = 1;
  v42 = 1;
  v48 = a1;
  v47 = v7;
LABEL_9:
  if ( !v8 )
  {
    if ( (byte_140EEFF63 & 0x10) != 0 )
      McTemplateK0z_EtwWriteTransfer(
        a1,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_AssignResources_Start,
        1LL,
        *((const wchar_t **)v11 + 6));
    LOBYTE(a2) = a5;
    v43 = 0;
    v45 = PnpProcessAssignResources(v11, a2, &v43);
    if ( (byte_140EEFF63 & 0x10) != 0 )
      McTemplateK0z_EtwWriteTransfer(
        v15,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_AssignResources_Stop,
        v16,
        *((const wchar_t **)v11 + 6));
    if ( v43 )
    {
      v41 = PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, v10, a3, v9, 0, 0, 1);
      LODWORD(a1) = (unsigned __int8)v48;
      if ( v41 == -1073741106 )
        LODWORD(a1) = 1;
      v48 = a1;
    }
    else
    {
      LOBYTE(a1) = v48;
    }
    v14 = v42;
  }
  v17 = (ULONG_PTR)v11;
  v43 = 0;
  v49 = (ULONG_PTR)v11;
  v46 = 1;
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
      && (unsigned __int8)PnpCheckForActiveDependencies(v17, 2LL, 1LL) )
    {
      PipSetDevNodeProblem(v17, 51LL, 0LL);
    }
    a2 = *(unsigned int *)(v17 + 396);
    if ( (a2 & 0x6000) != 0 )
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
            PnpPoFxActivateDevice(v17, 512LL);
            started = PipProcessStartPhase1(v17);
            if ( started == 259 )
            {
LABEL_106:
              v7 = 1;
              v47 = 1;
              goto LABEL_36;
            }
            v18 = 0;
            goto LABEL_72;
          case 0x308:
            restarted = PipProcessStartPhase2(v17, a2, 1LL);
            break;
          case 0x309:
            if ( (int)a2 < 0 )
            {
              v18 = 1;
              goto LABEL_36;
            }
            restarted = PipProcessStartPhase3(v17, a4 != 1);
            break;
          case 0x30A:
            if ( a4 == 1 && (char *)v17 != v11 )
              goto LABEL_36;
            v18 = 2;
            if ( v8 || (a2 & 8) == 0 )
              goto LABEL_36;
            v30 = PipEnumerateDevice(v17, a6, (unsigned __int8)v7);
            started = v30;
            if ( v30 == 259 )
            {
              LOBYTE(v7) = 1;
              v18 = 1;
              v47 = v7;
              goto LABEL_36;
            }
            v18 = (v30 >> 31) & 2;
LABEL_72:
            if ( started == -1073741106 )
              goto LABEL_73;
            goto LABEL_36;
          case 0x30C:
            v7 = (unsigned __int8)v7;
            started = PipProcessRestartPhase1(v17, a6, (unsigned __int8)v7);
            if ( started == 259 )
              v7 = 1;
            v47 = v7;
            v18 = started == 259;
            goto LABEL_72;
          case 0x30D:
            restarted = PipProcessRestartPhase2(v17, a2, 1LL);
            break;
          case 0x30F:
            if ( (*(_DWORD *)(v17 + 704) & 0x200) != 0 )
            {
              PoFxIdleDevice(*(_QWORD *)(v17 + 32));
              *(_DWORD *)(v17 + 704) &= ~0x200u;
            }
            started = PipEnumerateCompleted((_QWORD *)v17);
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
        v45 = 1;
        goto LABEL_36;
      }
      if ( *(_DWORD *)(v17 + 300) == 772 )
        *(_DWORD *)(v17 + 704) |= 0x10000u;
      goto LABEL_72;
    }
    if ( (a4 != 3 || (a2 & 0x2000000) == 0) && !v8 )
    {
      if ( (unsigned __int8)PnpCheckForActiveDependencies(v17, 1LL, 1LL) )
      {
        PipSetDevNodeProblem(v17, 51LL, 0LL);
      }
      else
      {
        v34 = PiProcessNewDeviceNodeAsync(v17);
        started = v34;
        if ( v34 == 259 )
          goto LABEL_106;
        if ( v34 < 0 )
          goto LABEL_72;
        v18 = 0;
      }
    }
LABEL_36:
    v44 = 0;
    started = 0;
    v21 = 0;
    if ( !PnpDeviceCompletionQueueIsEmpty() )
    {
      do
      {
        if ( !Object.Header.SignalState )
          break;
        CompletedRequest = (void *)PnpDeviceCompletionQueueGetCompletedRequest();
        v32 = PnpDeviceCompletionProcessCompletedRequest(CompletedRequest);
        v44 = 1;
        v21 = 1;
        if ( v32 == -1073741106 )
          started = -1073741106;
      }
      while ( !PnpDeviceCompletionQueueIsEmpty() );
      v11 = v53;
      v8 = a7;
    }
    if ( started == -1073741106 )
    {
      v12 = v50;
    }
    else
    {
      if ( v21 || !v43 )
      {
        v12 = v50;
LABEL_43:
        if ( !v8 && (*(_DWORD *)(v17 + 704) & 1) != 0 )
          PpDevCfgTraceDeviceStart(v17, 0LL);
        goto LABEL_44;
      }
      v44 = 0;
      started = 0;
      v22 = 0;
      if ( !PnpDeviceCompletionQueueIsEmpty() )
      {
        v37 = 0;
        v38 = 0;
        do
        {
          v22 = v38;
          if ( !Object.Header.SignalState && v37 )
            break;
          v39 = (void *)PnpDeviceCompletionQueueGetCompletedRequest();
          v40 = PnpDeviceCompletionProcessCompletedRequest(v39);
          v44 = 1;
          v37 = 1;
          v38 = 1;
          if ( v40 == -1073741106 )
            started = -1073741106;
          v22 = 1;
        }
        while ( !PnpDeviceCompletionQueueIsEmpty() );
        v17 = v49;
        v11 = v53;
        v8 = a7;
      }
      v43 = 0;
      LOBYTE(v7) = v22 != 0 ? v47 : 0;
      v12 = v50;
      v47 = v7;
      if ( started != -1073741106 )
        goto LABEL_43;
    }
LABEL_73:
    if ( !v8 )
      break;
    v51 = started;
LABEL_44:
    if ( !(_BYTE)v7 || !v18 || PnpAsyncOptions < 0 )
    {
      v23 = v18 - 1;
      if ( v23 )
      {
        if ( v23 == 1 )
        {
          v24 = *(_QWORD *)(v17 + 8);
          if ( !v24 )
            goto LABEL_59;
LABEL_48:
          v17 = v24;
          v49 = v24;
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
            PnpDeviceCompletionProcessCompletedRequests(1LL, 1LL, &v44);
            LOBYTE(v7) = 0;
            v47 = v7;
          }
        }
        else if ( (_BYTE)v7 )
        {
LABEL_96:
          v14 = 0;
          v43 = 1;
          v42 = 0;
          goto LABEL_50;
        }
        v46 = 0;
        goto LABEL_96;
      }
      v24 = *(_QWORD *)v17;
      if ( *(_QWORD *)v17 )
        goto LABEL_48;
      if ( (_BYTE)v7 && PnpAsyncOptions > 0 )
        break;
      v26 = *(_QWORD *)(v17 + 16);
      if ( v26 )
      {
        v17 = *(_QWORD *)(v17 + 16);
        v49 = v26;
      }
    }
    v33 = *(_QWORD *)(v17 + 16);
    if ( v33 )
    {
      v17 = *(_QWORD *)(v33 + 8);
      v49 = v17;
    }
    v43 = 1;
LABEL_49:
    v14 = v42;
LABEL_50:
    v9 = a4;
LABEL_51:
    v10 = v54;
    a1 = v48;
    if ( !v46 )
    {
      v14 = v42;
      if ( !v45 )
      {
        if ( !v8 )
          ObfDereferenceObject(v12[4]);
        return v51;
      }
      goto LABEL_9;
    }
  }
  v10 = v54;
LABEL_75:
  LOBYTE(v48) = 0;
  v44 = 0;
  if ( !PnpDeviceCompletionQueueIsEmpty() )
  {
    v44 = 1;
    do
    {
      v36 = (void *)PnpDeviceCompletionQueueGetCompletedRequest();
      PnpDeviceCompletionProcessCompletedRequest(v36);
    }
    while ( !PnpDeviceCompletionQueueIsEmpty() );
  }
  LOBYTE(v7) = 0;
  v9 = a4;
  v47 = v7;
  PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, v10, a3, a4, a5, a6, 1);
  v27 = IopAllocateUnicodeString(&DestinationString);
  if ( v27 < 0 )
  {
    ObfDereferenceObject(v12[4]);
    return (unsigned int)v27;
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
    v29 = PnpDeviceObjectFromDeviceInstanceWithTag(&DestinationString, 1953261124LL);
    if ( DestinationString.Buffer )
    {
      ExFreePool(DestinationString.Buffer);
      DestinationString = 0LL;
    }
    if ( v29 )
    {
      v11 = *(char **)(*(_QWORD *)(v29 + 312) + 40LL);
      v14 = v42;
      v17 = (ULONG_PTR)v11;
      v49 = (ULONG_PTR)v11;
      v12 = (PVOID *)v11;
      v53 = v11;
      v50 = (PVOID *)v11;
      goto LABEL_51;
    }
    return 3221225473LL;
  }
}
