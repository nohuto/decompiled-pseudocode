/*
 * XREFs of IoReportDetectedDevice @ 0x14071A3E0
 * Callers:
 *     HalpDriverEntry @ 0x1406FC830 (HalpDriverEntry.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     RtlStringCbLengthW @ 0x14044CF68 (RtlStringCbLengthW.c)
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     PpDevNodeRemoveFromTree @ 0x14049E834 (PpDevNodeRemoveFromTree.c)
 *     PpDevNodeInsertIntoTree @ 0x1404B9B64 (PpDevNodeInsertIntoTree.c)
 *     PipAreDriversLoaded @ 0x1404DD238 (PipAreDriversLoaded.c)
 *     PipIsDevNodeDNStarted @ 0x1404DD25C (PipIsDevNodeDNStarted.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x1406A8F30 (ZwDeleteKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IopGetOriginalServiceName @ 0x14071B258 (IopGetOriginalServiceName.c)
 *     IopGetRootDeviceId @ 0x14071B2E4 (IopGetRootDeviceId.c)
 *     IopIsReportedAlready @ 0x14071B37C (IopIsReportedAlready.c)
 *     IoReportResourceUsageInternal @ 0x14071EAA8 (IoReportResourceUsageInternal.c)
 *     PnpSetRegistryDword @ 0x1407209BC (PnpSetRegistryDword.c)
 *     PnpAllocateDeviceInstancePath @ 0x140722320 (PnpAllocateDeviceInstancePath.c)
 *     IopDuplicateDetection @ 0x140722BDC (IopDuplicateDetection.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x14072B9FC (IopCreateRootEnumeratedDeviceObject.c)
 *     IopCreateLegacyDeviceIds @ 0x1407310C4 (IopCreateLegacyDeviceIds.c)
 *     IopDoDeferredSetInterfaceState @ 0x1408AFDC4 (IopDoDeferredSetInterfaceState.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B4E80 (PnpUnicodeStringToWstrFree.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     RtlUpcaseUnicodeString @ 0x140949F30 (RtlUpcaseUnicodeString.c)
 *     PnpDetermineResourceListSize @ 0x140979290 (PnpDetermineResourceListSize.c)
 *     PipAllocateDeviceNode @ 0x140979B04 (PipAllocateDeviceNode.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14097BDFC (PnpDeviceObjectToDeviceInstance.c)
 *     _CmSetDeviceRegProp @ 0x14097BE58 (_CmSetDeviceRegProp.c)
 *     PipClearDevNodeProblem @ 0x14098187C (PipClearDevNodeProblem.c)
 *     PpDeviceRegistration @ 0x1409BAF3C (PpDeviceRegistration.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1409BB950 (PnpCleanupDeviceRegistryValues.c)
 *     _CmCreateDevice @ 0x1409C4008 (_CmCreateDevice.c)
 *     PnpUnicodeStringToWstr @ 0x1409C5120 (PnpUnicodeStringToWstr.c)
 *     PpDevNodeLockTree @ 0x140A05140 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A0D4DC (PpDevNodeUnlockTree.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140A80A64 (PnpMapDeviceObjectToDeviceInstance.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140A89C08 (IopWriteAllocatedResourcesToRegistry.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoReportDetectedDevice(
        PDRIVER_OBJECT DriverObject,
        INTERFACE_TYPE LegacyBusType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PCM_RESOURCE_LIST ResourceList,
        PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements,
        BOOLEAN ResourceAssigned,
        PDEVICE_OBJECT *DeviceObject)
{
  PDRIVER_EXTENSION DriverExtension; // r15
  wchar_t *v10; // rdx
  const UNICODE_STRING *p_ServiceKeyName; // r15
  PDEVICE_OBJECT v14; // rax
  __int64 v15; // r8
  PVOID DeviceNode; // rdi
  NTSTATUS result; // eax
  wchar_t *Buffer; // rdx
  wchar_t *i; // rcx
  __int16 v20; // ax
  const UNICODE_STRING *v21; // rcx
  int appended; // ebx
  int v23; // eax
  int v24; // r13d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v26; // rdi
  unsigned __int16 Length; // cx
  size_t v28; // r12
  wchar_t *v29; // rax
  signed __int64 v30; // rcx
  __int16 v31; // cx
  struct _DEVICE_OBJECT *v32; // rax
  struct _DEVICE_OBJECT *v33; // r12
  PDEVICE_OBJECT v34; // rcx
  int v35; // eax
  __int64 Pool2; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  NTSTATUS DeviceInstancePath; // eax
  NTSTATUS v41; // eax
  __int64 v42; // r8
  __int64 v43; // rdx
  NTSTATUS v44; // eax
  STRSAFE_PCNZWCH v45; // r13
  __int64 v46; // rdx
  __int64 v47; // r9
  PDRIVER_OBJECT v48; // rbx
  bool v49; // zf
  const UNICODE_STRING *v50; // rbx
  int LegacyDeviceIds; // eax
  unsigned int v52; // eax
  int v53; // ecx
  _DWORD *v54; // r15
  HANDLE v55; // rbx
  ULONG v56; // eax
  HANDLE v57; // rbx
  unsigned int v58; // eax
  unsigned int v59; // ebx
  void *v60; // rax
  void *v61; // rsi
  __int64 v62; // r8
  int v63; // edx
  int Data; // [rsp+20h] [rbp-E0h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-D8h]
  __int64 v66; // [rsp+30h] [rbp-D0h]
  int v67; // [rsp+38h] [rbp-C8h]
  int v68; // [rsp+40h] [rbp-C0h]
  char v69; // [rsp+50h] [rbp-B0h] BYREF
  char v70; // [rsp+51h] [rbp-AFh] BYREF
  char v71; // [rsp+52h] [rbp-AEh] BYREF
  char v72; // [rsp+53h] [rbp-ADh]
  _DWORD cbMax[3]; // [rsp+54h] [rbp-ACh] BYREF
  BOOL v74; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  __int64 v76; // [rsp+78h] [rbp-88h] BYREF
  int v77; // [rsp+80h] [rbp-80h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v79; // [rsp+90h] [rbp-70h] BYREF
  PDEVICE_OBJECT v80; // [rsp+98h] [rbp-68h] BYREF
  int v81; // [rsp+A0h] [rbp-60h]
  PDRIVER_OBJECT v82; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+C0h] [rbp-40h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+C8h] [rbp-38h] BYREF
  size_t pcbLength; // [rsp+D0h] [rbp-30h] BYREF
  PVOID v87; // [rsp+D8h] [rbp-28h]
  PVOID P; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v89; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v90; // [rsp+F8h] [rbp-8h] BYREF
  PDEVICE_OBJECT *v91; // [rsp+108h] [rbp+8h]
  wchar_t pszDest[200]; // [rsp+110h] [rbp+10h] BYREF

  DriverExtension = DriverObject->DriverExtension;
  v10 = pszDest;
  v87 = ResourceRequirements;
  p_ServiceKeyName = &DriverExtension->ServiceKeyName;
  v91 = DeviceObject;
  v82 = DriverObject;
  v70 = 0;
  v14 = *DeviceObject;
  v15 = 2LL;
  *(_QWORD *)&Destination.Length = 26214400LL;
  DeviceNode = 0LL;
  psz = 0LL;
  memset(cbMax, 0, sizeof(cbMax));
  pcbLength = 0LL;
  v77 = 0;
  v79 = 0LL;
  v69 = 0;
  v76 = 0LL;
  v74 = 0;
  Destination.Buffer = pszDest;
  KeyHandle = 0LL;
  v72 = 0;
  v80 = 0LL;
  P = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  if ( v14 )
  {
    DeviceNode = v14->DeviceObjectExtension->DeviceNode;
    v76 = (__int64)DeviceNode;
    if ( !DeviceNode )
      return -1073741578;
LABEL_13:
    appended = PiPnpRtlBeginOperation(&P, v10, v15);
    if ( appended >= 0 )
    {
      PpDevNodeLockTree(1LL);
      if ( DeviceNode || (v82->Flags & 4) != 0 )
      {
        v24 = 0;
      }
      else
      {
        v23 = IopDuplicateDetection((unsigned int)LegacyBusType, BusNumber, SlotNumber, &v76);
        v24 = 0;
        appended = v23;
        if ( v23 >= 0 )
          v74 = v76 != 0;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v26 = v76;
      if ( v76 )
      {
LABEL_90:
        if ( v74 )
        {
          if ( (unsigned int)PipAreDriversLoaded(v26)
            || (*(_DWORD *)(v26 + 396) & 0x6000) != 0
            && ((v52 = *(_DWORD *)(v26 + 404), v52 > 0x1C) || (v53 = 268697602, !_bittest(&v53, v52))) )
          {
            ObfDereferenceObject(*(PVOID *)(v26 + 32));
            appended = -1073741810;
            goto LABEL_31;
          }
          if ( !v80 )
            PipClearDevNodeProblem(v26);
        }
        if ( !*(_QWORD *)&cbMax[1] )
        {
          appended = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(v26 + 32), &cbMax[1], 983103LL);
          if ( appended < 0 )
          {
LABEL_31:
            if ( v69 )
            {
              if ( KeyHandle )
                ZwDeleteKey(KeyHandle);
              if ( v79 )
                ZwDeleteKey(v79);
              if ( *(_QWORD *)&cbMax[1] )
                ZwDeleteKey(*(HANDLE *)&cbMax[1]);
              PnpCleanupDeviceRegistryValues(v26 + 40);
              PpDevNodeRemoveFromTree((_QWORD *)v26);
              IoDeleteDevice(*(PDEVICE_OBJECT *)(v26 + 32));
              ObfDereferenceObject(*(PVOID *)(v26 + 32));
            }
            goto LABEL_39;
          }
        }
        goto LABEL_99;
      }
      appended = RtlAppendUnicodeToString(&Destination, L"\\");
      if ( appended >= 0 )
      {
        Length = Destination.Length;
        v81 = Destination.Length;
        v28 = (400 - (unsigned __int64)Destination.Length) >> 1;
        v29 = &pszDest[(unsigned __int64)Destination.Length >> 1];
        for ( *(_QWORD *)&DestinationString.Length = v29; ; v29 = *(wchar_t **)&DestinationString.Length )
        {
          Destination.Length = Length;
          LODWORD(v66) = v24;
          ppszDestEnd = v29;
          RtlStringCchPrintfExW(v29, v28, &ppszDestEnd, 0LL, 0, L"%04u", v66);
          v30 = &ppszDestEnd[-((unsigned __int64)Destination.Length >> 1)] - pszDest;
          if ( (_DWORD)v30 == -1 )
            v31 = 400 - Destination.Length;
          else
            v31 = 2 * v30;
          Destination.Length += v31;
          appended = CmCreateDevice(PiPnpRtlCtx, Destination.Buffer, 983103, (unsigned int)&cbMax[1], (__int64)&v69, 0);
          if ( appended < 0 )
            goto LABEL_31;
          if ( v69 )
            goto LABEL_50;
          v74 = 0;
          if ( (unsigned __int8)IopIsReportedAlready(
                                  (unsigned int)&Destination,
                                  cbMax[1],
                                  (_DWORD)p_ServiceKeyName,
                                  (_DWORD)ResourceList,
                                  (__int64)&v74) )
            break;
          ZwClose(*(HANDLE *)&cbMax[1]);
          Length = v81;
          ++v24;
        }
        v32 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(&Destination, 1953261124LL);
        v80 = v32;
        if ( !v32 )
        {
          appended = -1073741823;
          v26 = 0LL;
          goto LABEL_31;
        }
        v26 = (__int64)v32->DeviceObjectExtension->DeviceNode;
        v76 = v26;
LABEL_50:
        if ( v26 )
          goto LABEL_90;
        appended = IopCreateRootEnumeratedDeviceObject(&v80);
        if ( appended < 0 )
          goto LABEL_31;
        v33 = v80;
        v34 = v80;
        v72 = 1;
        v80->Flags |= 0x1000u;
        v35 = PipAllocateDeviceNode(v34, &v76);
        v26 = v76;
        if ( v35 == -1073740946 || !v76 )
        {
          IoDeleteDevice(v33);
          appended = -1073741670;
          goto LABEL_31;
        }
        if ( (v82->Flags & 4) == 0 )
        {
          Pool2 = ExAllocatePool2(0x100uLL, p_ServiceKeyName->Length, 0x48706E50u);
          *(_QWORD *)(v26 + 64) = Pool2;
          if ( !Pool2 )
            goto LABEL_56;
          *(_WORD *)(v26 + 58) = p_ServiceKeyName->Length;
          DeviceInstancePath = RtlUpcaseUnicodeString((PUNICODE_STRING)(v26 + 56), p_ServiceKeyName, 0);
          appended = DeviceInstancePath;
          if ( DeviceInstancePath < 0 )
            goto LABEL_61;
        }
        DeviceInstancePath = PnpAllocateDeviceInstancePath(v26, (unsigned int)Destination.Length + 2);
        appended = DeviceInstancePath;
        if ( DeviceInstancePath < 0 )
          goto LABEL_61;
        v41 = RtlUpcaseUnicodeString((PUNICODE_STRING)(v26 + 40), &Destination, 0);
        appended = v41;
        if ( v41 < 0 )
        {
          v42 = (unsigned int)v41;
          v43 = 3LL;
LABEL_65:
          PipSetDevNodeProblem(v26, v43, v42);
          goto LABEL_31;
        }
        *(_WORD *)(*(_QWORD *)(v26 + 48) + 2 * ((unsigned __int64)*(unsigned __int16 *)(v26 + 40) >> 1)) = 0;
        v77 = 32;
        v44 = CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(v26 + 48), cbMax[1], 11, 4, (__int64)&v77, 4, 0);
        appended = v44;
        if ( v44 < 0 )
          goto LABEL_68;
        v70 = -1;
        v44 = PnpSetObjectProperty(
                PiPnpRtlCtx,
                *(_QWORD *)(v26 + 48),
                1,
                0LL,
                (__int64)&DEVPKEY_Device_Reported,
                17,
                (__int64)&v70,
                1,
                0);
        appended = v44;
        if ( v44 < 0 )
          goto LABEL_68;
        v44 = PnpUnicodeStringToWstr(&psz, cbMax, p_ServiceKeyName);
        appended = v44;
        if ( v44 < 0 )
          goto LABEL_68;
        v45 = psz;
        appended = RtlStringCbLengthW(psz, cbMax[0], &pcbLength);
        if ( appended < 0 )
        {
          PnpUnicodeStringToWstrFree(v45, p_ServiceKeyName);
          v42 = (unsigned int)appended;
          v43 = 19LL;
          goto LABEL_65;
        }
        appended = CmSetDeviceRegProp(
                     PiPnpRtlCtx,
                     *(_QWORD *)(v26 + 48),
                     cbMax[1],
                     5,
                     1,
                     (__int64)v45,
                     (int)pcbLength + 2,
                     0);
        PnpUnicodeStringToWstrFree(v45, p_ServiceKeyName);
        if ( appended < 0 )
        {
          v37 = (unsigned int)appended;
          goto LABEL_69;
        }
        v79 = 0LL;
        v44 = CmOpenDeviceRegKey(PiPnpRtlCtx, *(_QWORD *)(v26 + 48), 19, 0, 983103, 1, (__int64)&v79, 0LL);
        appended = v44;
        if ( v44 < 0 )
          goto LABEL_68;
        v44 = PnpSetRegistryDword(v79);
        appended = v44;
        if ( v44 < 0 )
          goto LABEL_68;
        v48 = v82;
        if ( (v82->Flags & 4) == 0 )
        {
          LOBYTE(v47) = 1;
          LOBYTE(v46) = 1;
          PpDeviceRegistration(&Destination, v46, 0LL, v47);
        }
        v49 = (v48->Flags & 4) == 0;
        v50 = (const UNICODE_STRING *)&v89;
        Destination.Buffer = 0LL;
        if ( v49 )
          v50 = p_ServiceKeyName;
        *(_DWORD *)&Destination.Length = 0;
        cbMax[0] = 400;
        if ( (int)IopGetOriginalServiceName(v50, pszDest, cbMax) >= 0 && cbMax[0] > 2u )
        {
          WORD1(v90) = 400;
          *((_QWORD *)&v90 + 1) = pszDest;
          LOWORD(v90) = LOWORD(cbMax[0]) - 2;
          v50 = (const UNICODE_STRING *)&v90;
        }
        LegacyDeviceIds = IopCreateLegacyDeviceIds(v33, v50, ResourceList);
        appended = LegacyDeviceIds;
        v39 = v26;
        if ( LegacyDeviceIds < 0 )
        {
          v37 = (unsigned int)LegacyDeviceIds;
          v38 = 19LL;
          goto LABEL_59;
        }
        PipSetDevNodeFlags(v26, 17LL);
        *(_DWORD *)(v26 + 660) = *((_DWORD *)IopRootDeviceNode + 165);
        PipSetDevNodeState(v26, 772);
        PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, v26);
        DeviceInstancePath = PnpMapDeviceObjectToDeviceInstance(v33, v26 + 40);
        appended = DeviceInstancePath;
        if ( DeviceInstancePath < 0 )
        {
LABEL_61:
          v37 = (unsigned int)DeviceInstancePath;
          goto LABEL_57;
        }
        PsReferenceSiloContext(v33);
LABEL_99:
        v54 = v87;
        if ( !ResourceList && !v87 )
          goto LABEL_106;
        v44 = CmOpenDeviceRegKey(PiPnpRtlCtx, *(_QWORD *)(v26 + 48), 20, 0, 983103, 1, (__int64)&KeyHandle, 0LL);
        appended = v44;
        if ( v44 >= 0 )
        {
          if ( !ResourceList
            || (v55 = KeyHandle,
                DestinationString = 0LL,
                RtlInitUnicodeString(&DestinationString, L"BootConfig"),
                v56 = PnpDetermineResourceListSize(ResourceList),
                v44 = ZwSetValueKey(v55, &DestinationString, 0, 8u, ResourceList, v56),
                appended = v44,
                v44 >= 0) )
          {
            if ( !v54
              || (v57 = KeyHandle,
                  DestinationString = 0LL,
                  RtlInitUnicodeString(&DestinationString, L"BasicConfigVector"),
                  v44 = ZwSetValueKey(v57, &DestinationString, 0, 0xAu, v54, *v54),
                  appended = v44,
                  v44 >= 0) )
            {
LABEL_106:
              if ( ResourceAssigned )
              {
                PipSetDevNodeFlags(v26, 256LL);
                PnpSetRegistryDword(*(HANDLE *)&cbMax[1]);
                v58 = PnpDetermineResourceListSize(ResourceList);
                IopWriteAllocatedResourcesToRegistry(v26, ResourceList, v58);
              }
              else if ( ResourceList && ResourceList->Count && ResourceList->List[0].PartialResourceList.Count )
              {
                v59 = PnpDetermineResourceListSize(ResourceList);
                v60 = (void *)ExAllocatePool2(0x100uLL, v59, 0x47706E50u);
                v61 = v60;
                if ( !v60 )
                {
LABEL_56:
                  v37 = 3221225626LL;
                  appended = -1073741670;
LABEL_57:
                  v38 = 3LL;
                  goto LABEL_58;
                }
                memmove(v60, ResourceList, v59);
                pszFormat = *(NTSTRSAFE_PCWSTR *)(v26 + 32);
                v62 = *((_QWORD *)pszFormat + 1);
                v71 = 0;
                appended = IoReportResourceUsageInternal(
                             0,
                             v63,
                             v62,
                             0,
                             Data,
                             (__int64)pszFormat,
                             (__int64)v61,
                             v67,
                             v68,
                             (__int64)&v71);
                ExFreePoolWithTag(v61, 0x47706E50u);
                if ( appended >= 0 && !v71 )
                {
LABEL_120:
                  *(_DWORD *)(v26 + 660) = *(_DWORD *)(*(_QWORD *)(v26 + 16) + 660LL);
                  IopDoDeferredSetInterfaceState(v26);
                  PipSetDevNodeState(v26, 777);
                  if ( v72 )
                    PipSetDevNodeFlags(v26, 0x80000000LL);
                  *v91 = *(PDEVICE_OBJECT *)(v26 + 32);
                  goto LABEL_39;
                }
                if ( !(unsigned int)PipIsDevNodeDNStarted(v26) )
                  PipSetDevNodeProblem(v26, 12LL, (unsigned int)appended);
                appended = -1073741800;
              }
              else
              {
                PipSetDevNodeFlags(v26, 256LL);
              }
              if ( appended < 0 )
                goto LABEL_31;
              goto LABEL_120;
            }
          }
        }
LABEL_68:
        v37 = (unsigned int)v44;
LABEL_69:
        v38 = 19LL;
LABEL_58:
        v39 = v26;
LABEL_59:
        PipSetDevNodeProblem(v39, v38, v37);
        goto LABEL_31;
      }
    }
LABEL_39:
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    PpDevNodeUnlockTree(1LL);
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( v79 )
      ZwClose(v79);
    if ( *(_QWORD *)&cbMax[1] )
      ZwClose(*(HANDLE *)&cbMax[1]);
    if ( P )
      PiPnpRtlEndOperation(P);
    return appended;
  }
  if ( (DriverObject->Flags & 4) != 0 )
  {
    Buffer = p_ServiceKeyName->Buffer;
    for ( i = &Buffer[((unsigned __int64)p_ServiceKeyName->Length >> 1) - 1]; i != Buffer; --i )
    {
      if ( *i == 92 )
      {
        *((_QWORD *)&v89 + 1) = i + 1;
        v20 = p_ServiceKeyName->Length
            - 2 * ((__int64)(unsigned int)((_DWORD)i + 2 - LODWORD(p_ServiceKeyName->Buffer)) >> 1);
        v21 = (const UNICODE_STRING *)&v89;
        LOWORD(v89) = v20;
        WORD1(v89) = v20;
        goto LABEL_12;
      }
    }
    return -1073741585;
  }
  else
  {
    v21 = p_ServiceKeyName;
LABEL_12:
    result = IopGetRootDeviceId(v21, &Destination);
    if ( result >= 0 )
      goto LABEL_13;
  }
  return result;
}
