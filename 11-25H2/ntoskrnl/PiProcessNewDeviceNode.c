/*
 * XREFs of PiProcessNewDeviceNode @ 0x14082CE68
 * Callers:
 *     PiProcessNewDeviceNodeWorker @ 0x140717F20 (PiProcessNewDeviceNodeWorker.c)
 *     PiProcessNewDeviceNodeAsync @ 0x14082CDEC (PiProcessNewDeviceNodeAsync.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PipSetDevNodeState @ 0x140493D48 (PipSetDevNodeState.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1404A36F4 (PpMarkDeviceStackExtensionFlag.c)
 *     PnpIrpDeviceEnumerated @ 0x1404ABC5C (PnpIrpDeviceEnumerated.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1404C85C4 (McTemplateK0p_EtwWriteTransfer.c)
 *     Feature_KernelPnP_EnumerationNotifications__private_IsEnabledDeviceUsageNoInline @ 0x1404F2690 (Feature_KernelPnP_EnumerationNotifications__private_IsEnabledDeviceUsageNoInline.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     McTemplateK0pzz_EtwWriteTransfer @ 0x1405A22D8 (McTemplateK0pzz_EtwWriteTransfer.c)
 *     McTemplateK0zzzzz_EtwWriteTransfer @ 0x1405A2490 (McTemplateK0zzzzz_EtwWriteTransfer.c)
 *     PpvUtilFailDriver @ 0x1405A5B0C (PpvUtilFailDriver.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PnpDisableDevice @ 0x140717160 (PnpDisableDevice.c)
 *     PnpLogDuplicateDevice @ 0x140718314 (PnpLogDuplicateDevice.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14071E164 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x140720500 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpProfileCancelTransitioningDock @ 0x1407216F0 (PpProfileCancelTransitioningDock.c)
 *     PnpSetInvalidIDEvent @ 0x14072207C (PnpSetInvalidIDEvent.c)
 *     PipDmgInitializeIommuExtension @ 0x140725B78 (PipDmgInitializeIommuExtension.c)
 *     PnpTraceDockDeviceEnumeration @ 0x140726548 (PnpTraceDockDeviceEnumeration.c)
 *     PiIommuPutInterface @ 0x140729D8C (PiIommuPutInterface.c)
 *     KseAddHardwareId @ 0x14082C174 (KseAddHardwareId.c)
 *     PipDmgDestroyIommuExtension @ 0x14082C4C0 (PipDmgDestroyIommuExtension.c)
 *     PiIommuGetInterface @ 0x14082C4F4 (PiIommuGetInterface.c)
 *     PnpGetDeviceLocationStrings @ 0x14082C604 (PnpGetDeviceLocationStrings.c)
 *     PiQueryRemovableDeviceOverride @ 0x14082E4B8 (PiQueryRemovableDeviceOverride.c)
 *     PipClearDevNodeUserFlags @ 0x14082F904 (PipClearDevNodeUserFlags.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140830FBC (PnpNewDeviceNodeDependencyCheck.c)
 *     PipSetDevNodeProblem @ 0x140831BCC (PipSetDevNodeProblem.c)
 *     PiQueryAndAllocateBootResources @ 0x140831F94 (PiQueryAndAllocateBootResources.c)
 *     PipSetDevNodeFlags @ 0x1408331E8 (PipSetDevNodeFlags.c)
 *     PnpSetPlugPlayEvent @ 0x14083327C (PnpSetPlugPlayEvent.c)
 *     PiUpdateDevicePanel @ 0x140833618 (PiUpdateDevicePanel.c)
 *     PipSetDevNodeUserFlags @ 0x140833844 (PipSetDevNodeUserFlags.c)
 *     PnpIrpQueryID @ 0x1408338E8 (PnpIrpQueryID.c)
 *     PpIrpQueryCapabilities @ 0x140834CB8 (PpIrpQueryCapabilities.c)
 *     PipClearDevNodeFlags @ 0x1408350BC (PipClearDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpCheckDeviceIdsChanged @ 0x140868014 (PnpCheckDeviceIdsChanged.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1408905EC (PpDevCfgProcessDeviceOperations.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140934F70 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmCreateDevice @ 0x14094E818 (_CmCreateDevice.c)
 *     PnpSaveDeviceCapabilities @ 0x140950928 (PnpSaveDeviceCapabilities.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140950B3C (PiDcUpdateDeviceContainerMembership.c)
 *     _CmSetDeviceRegProp @ 0x140950F0C (_CmSetDeviceRegProp.c)
 *     _PnpSetObjectProperty @ 0x1409558B8 (_PnpSetObjectProperty.c)
 *     RtlGUIDFromString @ 0x140959130 (RtlGUIDFromString.c)
 *     PipClearDevNodeProblem @ 0x1409AD2C0 (PipClearDevNodeProblem.c)
 *     PnpQueryDeviceText @ 0x1409AF378 (PnpQueryDeviceText.c)
 *     PnpFindAlternateStringData @ 0x140A187A8 (PnpFindAlternateStringData.c)
 *     PnpQueryDeviceID @ 0x140A2FC8C (PnpQueryDeviceID.c)
 *     PnpFixupID @ 0x140A2FDDC (PnpFixupID.c)
 *     PpDeviceRegistration @ 0x140A46B4C (PpDeviceRegistration.c)
 *     PnpGenerateDeviceIdsHash @ 0x140A4ACDC (PnpGenerateDeviceIdsHash.c)
 *     PipMakeGloballyUniqueId @ 0x140A5491C (PipMakeGloballyUniqueId.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140A5BF4C (PnpIsDeviceInstanceEnabled.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140A634F0 (PiBuildDeviceNodeInstancePath.c)
 *     PiQueryResourceRequirements @ 0x140A64274 (PiQueryResourceRequirements.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140A65E38 (PnpInitializeInheritedRestrictedSd.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x140A6C9F8 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x140A6E420 (PipGenerateContainerID.c)
 *     PnpQueryBusInformation @ 0x140A711A0 (PnpQueryBusInformation.c)
 *     PnpClearDeviceTemporaryProperties @ 0x140A75198 (PnpClearDeviceTemporaryProperties.c)
 *     PnpInitializeSessionId @ 0x140A7A298 (PnpInitializeSessionId.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140A8151C (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpQueryExtendedAddress @ 0x140A93560 (PnpQueryExtendedAddress.c)
 *     PpDevCfgProcessDevice @ 0x140A9A1A4 (PpDevCfgProcessDevice.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessNewDeviceNode(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // esi
  ULONG_PTR v6; // r13
  int v7; // eax
  int v8; // r14d
  int Capabilities; // ebx
  int v10; // edx
  char v11; // al
  char v12; // r12
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // eax
  PVOID v17; // r14
  int GloballyUniqueId; // ebx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  const WCHAR *v22; // r15
  bool v23; // zf
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rdx
  int Device; // ebx
  __int64 v28; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v30; // r14d
  PVOID v31; // rbx
  int v32; // eax
  int v33; // edx
  int v34; // eax
  void *v35; // rax
  ULONG_PTR v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  _WORD *v41; // rcx
  __int64 v42; // rcx
  unsigned __int16 *v43; // rbx
  _WORD *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  _WORD *v48; // rcx
  __int64 v49; // rcx
  unsigned __int16 *v50; // rbx
  _WORD *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  struct _KTHREAD *v54; // rax
  __int64 v55; // rax
  int v56; // r15d
  int v57; // r12d
  int v58; // eax
  int v59; // eax
  struct _KTHREAD *v60; // rax
  __int64 v61; // r8
  int v62; // ebx
  __int64 v63; // rax
  __int64 v64; // rdx
  unsigned int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 FailedInstallProblemStatus; // r8
  int v69; // eax
  int v70; // ecx
  int v71; // eax
  __int64 v72; // rcx
  int v73; // eax
  PVOID v74; // r14
  __int64 v75; // rcx
  __int64 v76; // rcx
  int v77; // eax
  PVOID v78; // rsi
  __int64 v79; // rcx
  WCHAR *v80; // rbx
  __int64 v81; // r8
  int v82; // r14d
  struct _KTHREAD *v83; // rax
  struct _KTHREAD *v84; // rax
  struct _KTHREAD *v85; // rax
  HANDLE v86; // rsi
  PVOID v87; // r15
  PVOID v88; // r12
  int v89; // eax
  char v90; // bl
  int v91; // r14d
  int v92; // eax
  PVOID v93; // rdx
  int v94; // eax
  unsigned int v95; // edx
  char v96; // al
  __int64 v97; // rdx
  PVOID v98; // r14
  int AlternateStringData; // eax
  unsigned int v100; // ebx
  __int64 v101; // rax
  int DeviceLocationStrings; // eax
  PVOID v103; // rbx
  int v104; // ebx
  int v105; // eax
  int v106; // ebx
  unsigned int v107; // eax
  __int64 v108; // r8
  int v109; // eax
  bool v110; // bl
  __int64 v111; // r8
  int v112; // eax
  struct _KTHREAD *v113; // rax
  __int64 v114; // r8
  __int64 v115; // rdx
  int v116; // eax
  int v117; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // rcx
  PVOID v122; // rcx
  unsigned int v123; // ebx
  int BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int BugCheckParameter4a; // [rsp+28h] [rbp-E0h]
  int v127; // [rsp+58h] [rbp-B0h] BYREF
  int v128; // [rsp+5Ch] [rbp-ACh]
  unsigned int v129; // [rsp+60h] [rbp-A8h] BYREF
  int v130; // [rsp+64h] [rbp-A4h]
  char v131; // [rsp+68h] [rbp-A0h] BYREF
  char v132; // [rsp+69h] [rbp-9Fh] BYREF
  int v133; // [rsp+6Ch] [rbp-9Ch]
  __int64 v134; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  PVOID v136; // [rsp+80h] [rbp-88h] BYREF
  void *v137; // [rsp+88h] [rbp-80h] BYREF
  const wchar_t *v138; // [rsp+90h] [rbp-78h] BYREF
  PVOID P; // [rsp+98h] [rbp-70h] BYREF
  int v140; // [rsp+A0h] [rbp-68h] BYREF
  int v141; // [rsp+A4h] [rbp-64h]
  int v142; // [rsp+A8h] [rbp-60h]
  PCWSTR SourceString; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v144; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v145; // [rsp+C0h] [rbp-48h] BYREF
  int v146; // [rsp+C8h] [rbp-40h] BYREF
  PVOID v147; // [rsp+D0h] [rbp-38h] BYREF
  PVOID v148; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v149; // [rsp+E0h] [rbp-28h] BYREF
  PVOID v150; // [rsp+E8h] [rbp-20h] BYREF
  const WCHAR *v151; // [rsp+F0h] [rbp-18h] BYREF
  PVOID v152; // [rsp+F8h] [rbp-10h] BYREF
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp-8h] BYREF
  __int64 v154; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v155[10]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v156[4]; // [rsp+168h] [rbp+60h] BYREF
  int v157; // [rsp+16Ch] [rbp+64h]
  GUID Guid; // [rsp+1A8h] [rbp+A0h] BYREF

  SourceString = 0LL;
  v148 = 0LL;
  memset_0(v156, 0, 0x40uLL);
  Guid = 0LL;
  v144 = 0LL;
  DestinationString = 0LL;
  v147 = 0LL;
  v138 = 0LL;
  v152 = 0LL;
  v145 = 0LL;
  P = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  v140 = 0;
  v146 = 0;
  v132 = 0;
  v137 = 0LL;
  if ( (byte_140EEFA6B & 0x10) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v3,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessNewDevice_Start,
      0LL,
      BugCheckParameter2);
  LOBYTE(v141) = 0;
  LOWORD(v127) = 0;
  v142 = 0;
  v5 = 0;
  v128 = 0;
  v6 = *(_QWORD *)(BugCheckParameter2 + 32);
  v154 = MEMORY[0xFFFFF78000000014];
  v136 = 0LL;
  Handle = 0LL;
  v129 = 0;
  LODWORD(v134) = 0;
  v133 = 0;
  v130 = 0;
  PiPnpRtlBeginOperation(&v152, v2, v4);
  PipClearDevNodeFlags(BugCheckParameter2, 0x2000000LL);
  v7 = PnpQueryDeviceID(BugCheckParameter2, &v148, &v138);
  if ( v7 < 0 )
  {
    v8 = v7;
    if ( v7 == -1073479624 )
      v8 = -1073741823;
    v133 = v8;
  }
  Capabilities = PpIrpQueryCapabilities(v6, v156);
  PipClearDevNodeUserFlags(BugCheckParameter2, 2LL);
  v11 = v157;
  v12 = 0;
  if ( Capabilities >= 0 )
  {
    if ( (v157 & 0x20000) != 0 )
    {
      PipSetDevNodeUserFlags(BugCheckParameter2, 2LL);
      v11 = v157;
    }
    if ( (v11 & 0x40) != 0 )
      v12 = 1;
  }
  if ( (v11 & 0x20) != 0 )
  {
    if ( *(_DWORD *)(BugCheckParameter2 + 568) == 4 )
      PpProfileCancelTransitioningDock(BugCheckParameter2, v10);
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  *(_DWORD *)(BugCheckParameter2 + 568) = v13;
  v149 = -1LL;
  PnpQueryExtendedAddress(v6, &v149);
  PnpQueryDeviceText(*(_QWORD *)(BugCheckParameter2 + 32), 0LL, v14, &v147);
  PnpQueryDeviceText(*(_QWORD *)(BugCheckParameter2 + 32), 1LL, v15, &v150);
  v16 = PnpIrpQueryID(*(_QWORD *)(BugCheckParameter2 + 32), 3LL, &P);
  v17 = P;
  GloballyUniqueId = v16;
  if ( v16 < 0 )
  {
    if ( v16 != -1073479624 && v16 != -1073741670 )
    {
LABEL_24:
      if ( v17 )
      {
        ExFreePoolWithTag(v17, 0);
        v17 = 0LL;
        P = 0LL;
      }
      goto LABEL_26;
    }
LABEL_22:
    PipSetDevNodeProblem(BugCheckParameter2, 9LL, (unsigned int)GloballyUniqueId);
    v19 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (*(_DWORD *)(v19 + 396) & 0x200000) == 0 )
    {
      PipSetDevNodeFlags(v19, 0x200000LL);
      PnpSetInvalidIDEvent((const void **)(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL));
    }
    goto LABEL_24;
  }
  if ( !(2 * (unsigned int)PnpFixupID((_DWORD)P, 200, 0, 0, *(_QWORD *)(BugCheckParameter2 + 16) + 56LL)) )
  {
    GloballyUniqueId = -1073479624;
    goto LABEL_22;
  }
LABEL_26:
  if ( v12 )
  {
    if ( GloballyUniqueId == -1073741637 )
    {
      PipSetDevNodeProblem(BugCheckParameter2, 9LL, 3221225659LL);
      PipSetDevNodeFlags(*(_QWORD *)(BugCheckParameter2 + 16), 0x200000LL);
      PnpSetInvalidIDEvent((const void **)(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL));
    }
  }
  else if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0 || *(_DWORD *)(BugCheckParameter2 + 404) != 9 )
  {
    v20 = *(_QWORD **)(BugCheckParameter2 + 16);
    if ( v20 != IopRootDeviceNode )
    {
      v21 = v20[4];
      v137 = 0LL;
      GloballyUniqueId = PipMakeGloballyUniqueId(v21, v17, &v137);
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
      v17 = v137;
      P = v137;
    }
  }
  v22 = (const WCHAR *)v148;
  while ( 1 )
  {
    if ( GloballyUniqueId < 0 )
    {
      v23 = (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0;
      v133 = GloballyUniqueId;
      if ( v23 || *(_DWORD *)(BugCheckParameter2 + 404) != 9 )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v24 = 3221225626LL;
          v25 = 3LL;
        }
        else
        {
          v24 = (unsigned int)GloballyUniqueId;
          v25 = 19LL;
        }
        PipSetDevNodeProblem(BugCheckParameter2, v25, v24);
      }
    }
    Device = PiBuildDeviceNodeInstancePath(BugCheckParameter2, v22, v138, v17);
    if ( Device < 0 )
    {
      v130 = v5;
      goto LABEL_54;
    }
    if ( (byte_140EEFA6B & 0x10) != 0 )
      McTemplateK0pzz_EtwWriteTransfer(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL),
        v26,
        v28,
        BugCheckParameter2,
        *(_QWORD *)(BugCheckParameter2 + 48),
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL));
    CurrentThread = KeGetCurrentThread();
    Handle = 0LL;
    v30 = 0;
    v128 = 0;
    --CurrentThread->KernelApcDisable;
    v131 = 0;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    Device = CmCreateDevice(
               PiPnpRtlCtx,
               *(_QWORD *)(BugCheckParameter2 + 48),
               983103,
               (unsigned int)&Handle,
               (__int64)&v131,
               0);
    if ( Device >= 0 )
    {
      v30 = 2 - (v131 != 0);
      v128 = v30;
    }
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    if ( Device < 0 )
    {
      PipSetDevNodeProblem(BugCheckParameter2, 19LL, (unsigned int)Device);
      v22 = (const WCHAR *)v148;
      v17 = P;
      v136 = Handle;
LABEL_54:
      v133 = Device;
      v31 = v136;
      goto LABEL_55;
    }
    v31 = Handle;
    v5 = 0;
    v22 = (const WCHAR *)v148;
    v23 = v30 == 1;
    v136 = Handle;
    v17 = P;
    if ( v23 )
      v5 = 0x20000;
    v130 = v5;
LABEL_55:
    PpMarkDeviceStackExtensionFlag(v6, 16, 1);
    v32 = *(_DWORD *)(BugCheckParameter2 + 300);
    if ( v32 == 769 )
    {
      v33 = 772;
LABEL_59:
      PipSetDevNodeState(BugCheckParameter2, v33);
      goto LABEL_60;
    }
    if ( v32 == 770 )
    {
      v33 = 771;
      goto LABEL_59;
    }
LABEL_60:
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) != 0 )
    {
      v34 = *(_DWORD *)(BugCheckParameter2 + 404);
      if ( v34 == 9 || ((v34 - 3) & 0xFFFFFFEF) == 0 )
        goto LABEL_107;
    }
    if ( v128 == 1 )
      break;
    v35 = (void *)PnpDeviceObjectFromDeviceInstanceWithTag(BugCheckParameter2 + 40, 1701867088LL);
    v36 = (ULONG_PTR)v35;
    if ( !v35 )
      goto LABEL_104;
    if ( v35 == (void *)v6 )
    {
      ObfDereferenceObjectWithTag(v35, 0x65706E50u);
      goto LABEL_104;
    }
    if ( !v12 )
    {
      PpvUtilFailDriver(0);
      IoAddTriageDumpDataBlock(v6, (PVOID)*(unsigned __int16 *)(v6 + 2));
      v40 = *(_QWORD *)(v6 + 8);
      if ( v40 )
      {
        IoAddTriageDumpDataBlock(v40, (PVOID)(unsigned int)*(__int16 *)(v40 + 2));
        v41 = (_WORD *)(*(_QWORD *)(v6 + 8) + 56LL);
        if ( *v41 )
        {
          IoAddTriageDumpDataBlock((ULONG)v41, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v6 + 8) + 56LL));
        }
      }
      v42 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
      if ( v42 )
      {
        v43 = (unsigned __int16 *)(v42 + 40);
        IoAddTriageDumpDataBlock(v42, (PVOID)0x388);
        if ( *v43 )
        {
          IoAddTriageDumpDataBlock((ULONG)v43, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v43 + 1), (PVOID)*v43);
        }
        v44 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL) + 56LL);
        if ( *v44 )
        {
          IoAddTriageDumpDataBlock((ULONG)v44, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL) + 56LL));
        }
        v45 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL) + 16LL);
        if ( v45 && *(_WORD *)(v45 + 56) )
        {
          IoAddTriageDumpDataBlock(v45 + 56, (PVOID)2);
          v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v46 + 64), (PVOID)*(unsigned __int16 *)(v46 + 56));
        }
      }
      IoAddTriageDumpDataBlock(v36, (PVOID)*(unsigned __int16 *)(v36 + 2));
      v47 = *(_QWORD *)(v36 + 8);
      if ( v47 )
      {
        IoAddTriageDumpDataBlock(v47, (PVOID)(unsigned int)*(__int16 *)(v47 + 2));
        v48 = (_WORD *)(*(_QWORD *)(v36 + 8) + 56LL);
        if ( *v48 )
        {
          IoAddTriageDumpDataBlock((ULONG)v48, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v36 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v36 + 8) + 56LL));
        }
      }
      v49 = *(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL);
      if ( v49 )
      {
        v50 = (unsigned __int16 *)(v49 + 40);
        IoAddTriageDumpDataBlock(v49, (PVOID)0x388);
        if ( *v50 )
        {
          IoAddTriageDumpDataBlock((ULONG)v50, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v50 + 1), (PVOID)*v50);
        }
        v51 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL) + 56LL);
        if ( *v51 )
        {
          IoAddTriageDumpDataBlock((ULONG)v51, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL) + 56LL));
        }
        v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL) + 16LL);
        if ( v52 && *(_WORD *)(v52 + 56) )
        {
          IoAddTriageDumpDataBlock(v52 + 56, (PVOID)2);
          v53 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v53 + 64), (PVOID)*(unsigned __int16 *)(v53 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, v6, v36, 0LL);
    }
    ZwClose(v31);
    v157 &= ~0x40u;
    v136 = 0LL;
    v12 = 0;
    Handle = 0LL;
    PipSetDevNodeProblem(BugCheckParameter2, 42LL, 0LL);
    v37 = *(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL);
    PnpLogDuplicateDevice(v22, (PCWSTR)v17);
    if ( (byte_140EEFA6B & 0x40) != 0 )
      McTemplateK0zzzzz_EtwWriteTransfer(
        *(_QWORD *)(v37 + 16),
        v38,
        v39,
        v22,
        v138,
        (const wchar_t *)v17,
        *(const wchar_t **)(*(_QWORD *)(v37 + 16) + 48LL),
        *(const wchar_t **)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL));
    if ( *(_QWORD *)(v37 + 16) == *(_QWORD *)(BugCheckParameter2 + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObjectWithTag((PVOID)v36, 0x65706E50u);
    GloballyUniqueId = PipMakeGloballyUniqueId(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 32LL), v17, &v137);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    v17 = v137;
    v5 = v130;
    P = v137;
  }
  v54 = KeGetCurrentThread();
  --v54->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v31 = Handle;
  v136 = Handle;
  if ( Handle && v147 )
  {
    v55 = -1LL;
    do
      ++v55;
    while ( *((_WORD *)v147 + v55) );
    CmSetDeviceRegProp(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      (_DWORD)Handle,
      1,
      1,
      (__int64)v147,
      2 * v55 + 2,
      v5);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
LABEL_104:
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) != 0 && *(_DWORD *)(BugCheckParameter2 + 404) == 42 )
    PipClearDevNodeProblem(BugCheckParameter2);
LABEL_107:
  v56 = v128;
  if ( v31 )
  {
    if ( v128 != 1 )
      PnpClearDeviceTemporaryProperties(*(_QWORD *)(BugCheckParameter2 + 48));
    v57 = v130;
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastKnownParent,
      18,
      *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL),
      *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL) + 2,
      v130);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v154,
      8,
      v130);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v130);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4,
      v130);
  }
  else
  {
    v57 = v130;
  }
  if ( (v157 & 0x4000) != 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
      || (v58 = *(_DWORD *)(BugCheckParameter2 + 404), v58 != 1) && v58 != 14 )
    {
      PnpDisableDevice(BugCheckParameter2, 0x1Du);
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v59 = *(_DWORD *)(BugCheckParameter2 + 404), v59 != 9) && ((v59 - 3) & 0xFFFFFFEF) != 0 )
  {
    v60 = KeGetCurrentThread();
    --v60->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v62 = (int)Handle;
    v136 = Handle;
    if ( Handle && v150 )
    {
      v63 = -1LL;
      do
        ++v63;
      while ( *((_WORD *)v150 + v63) );
      CmSetDeviceRegProp(
        PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        (_DWORD)Handle,
        14,
        1,
        (__int64)v150,
        2 * v63 + 2,
        v57);
    }
    LOBYTE(v61) = v56 == 1;
    LOBYTE(v127) = v56 == 1;
    PnpSaveDeviceCapabilities(BugCheckParameter2, v156, v61);
    if ( v149 != -1 )
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_ExtendedAddress,
        9,
        (__int64)&v149,
        8,
        v57);
    v64 = *(_QWORD *)(BugCheckParameter2 + 48);
    v140 = 4;
    if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v64, v62, 11, (__int64)&v146, (__int64)&v129, (__int64)&v140, 0) < 0
      || v146 != 4
      || v140 != 4 )
    {
      v65 = 0;
      v129 = 0;
      v66 = 1LL;
      goto LABEL_136;
    }
    v65 = v129;
    if ( (v129 & 0x20) != 0 )
    {
      v66 = 18LL;
      LOBYTE(v127) = v56 == 1;
      if ( (v129 & 1) != 0 )
        goto LABEL_137;
LABEL_136:
      LOBYTE(v127) = 1;
LABEL_137:
      if ( (v157 & 0x100) != 0 )
      {
        v67 = *(_QWORD *)(BugCheckParameter2 + 48);
        v129 = v65 | 0x400;
        CmSetDeviceRegProp(PiPnpRtlCtx, v67, v62, 11, 4, (__int64)&v129, 4, v57);
      }
      else
      {
        if ( (_DWORD)v66 == 28 )
        {
          FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(
                                                       *(_QWORD *)(BugCheckParameter2 + 48),
                                                       v62);
          v66 = 28LL;
        }
        else
        {
          FailedInstallProblemStatus = 0LL;
        }
        PipSetDevNodeProblem(BugCheckParameter2, v66, FailedInstallProblemStatus);
      }
    }
    else if ( (v129 & 0x40) != 0 )
    {
      v66 = 28LL;
      LOBYTE(v127) = v56 == 1;
      goto LABEL_137;
    }
    v69 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(BugCheckParameter2 + 32), BugCheckParameter2 + 40);
    v70 = v133;
    if ( v69 < 0 )
      v70 = v69;
    v133 = v70;
    if ( PnpBootMode )
    {
      *(_DWORD *)(BugCheckParameter2 + 704) |= 0x1000u;
      v142 = 2;
    }
    else
    {
      v71 = (unsigned __int8)v141;
      if ( (v129 & 0x40000) != 0 )
        v71 = 1;
      v141 = v71;
    }
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  v72 = *(_QWORD *)(BugCheckParameter2 + 32);
  LODWORD(v137) = 0;
  v73 = PnpIrpQueryID(v72, 1LL, &v145);
  v74 = v145;
  if ( v73 < 0 )
  {
    if ( v73 == -1073479624 )
      goto LABEL_155;
    goto LABEL_157;
  }
  LODWORD(v137) = 2 * PnpFixupID((_DWORD)v145, 1024, 1, -1, *(_QWORD *)(BugCheckParameter2 + 16) + 56LL);
  if ( !(_DWORD)v137 )
  {
    v73 = -1073479624;
    v128 = v56;
    v130 = v57;
LABEL_155:
    PipSetDevNodeProblem(BugCheckParameter2, 9LL, (unsigned int)v73);
    v75 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (*(_DWORD *)(v75 + 396) & 0x200000) == 0 )
    {
      PipSetDevNodeFlags(v75, 0x200000LL);
      PnpSetInvalidIDEvent((const void **)(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL));
    }
LABEL_157:
    if ( v74 )
    {
      ExFreePoolWithTag(v74, 0);
      v74 = 0LL;
      v145 = 0LL;
      LODWORD(v137) = 0;
    }
  }
  KseAddHardwareId((WCHAR *)v74);
  v76 = *(_QWORD *)(BugCheckParameter2 + 32);
  LODWORD(v138) = 0;
  v77 = PnpIrpQueryID(v76, 2LL, &v144);
  v78 = v144;
  if ( v77 < 0 )
  {
    if ( v77 == -1073479624 )
      goto LABEL_163;
    goto LABEL_165;
  }
  LODWORD(v138) = 2 * PnpFixupID((_DWORD)v144, 1024, 1, -1, *(_QWORD *)(BugCheckParameter2 + 16) + 56LL);
  if ( !(_DWORD)v138 )
  {
    v77 = -1073479624;
    v130 = v57;
LABEL_163:
    PipSetDevNodeProblem(BugCheckParameter2, 9LL, (unsigned int)v77);
    v79 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (*(_DWORD *)(v79 + 396) & 0x200000) == 0 )
    {
      PipSetDevNodeFlags(v79, 0x200000LL);
      PnpSetInvalidIDEvent((const void **)(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL));
    }
LABEL_165:
    if ( v78 )
    {
      ExFreePoolWithTag(v78, 0);
      v78 = 0LL;
      v144 = 0LL;
      LODWORD(v138) = 0;
    }
  }
  PnpGenerateDeviceIdsHash(v74, v78, BugCheckParameter2 + 684);
  PnpIrpQueryID(*(_QWORD *)(BugCheckParameter2 + 32), 5LL, &SourceString);
  v80 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      ExFreePoolWithTag(v80, 0);
      v80 = 0LL;
      SourceString = 0LL;
    }
  }
  if ( (int)PiQueryRemovableDeviceOverride(BugCheckParameter2, v74, v78, &v132) >= 0 )
  {
    LOBYTE(v81) = v132;
  }
  else
  {
    if ( (v157 & 0x20) != 0 || (v157 & 0x40000) != 0 || (v157 & 0x10) == 0 )
      LOBYTE(v81) = 0;
    else
      v81 = 1LL;
    if ( v80 )
    {
      v82 = v128;
      goto LABEL_178;
    }
  }
  v82 = v128;
  v93 = 0LL;
  if ( v128 != 1 )
    v93 = v136;
  if ( (int)PipGenerateContainerID(BugCheckParameter2, v93, v81, v80, &v151) >= 0 )
  {
    if ( v80 )
      ExFreePoolWithTag(v80, 0);
    v80 = (WCHAR *)v151;
    SourceString = v151;
  }
LABEL_178:
  if ( !v80
    || (RtlInitUnicodeString(&DestinationString, v80),
        RtlGUIDFromString(&DestinationString, (GUID *)(BugCheckParameter2 + 664)) < 0) )
  {
    *(_OWORD *)(BugCheckParameter2 + 664) = 0LL;
  }
  v83 = KeGetCurrentThread();
  --v83->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  PipSetDevNodeFlags(BugCheckParameter2, 32LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( Handle && SourceString )
  {
    v84 = KeGetCurrentThread();
    --v84->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    PiDcUpdateDeviceContainerMembership(*(_QWORD *)(BugCheckParameter2 + 48), Handle, SourceString);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  v85 = KeGetCurrentThread();
  --v85->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v86 = Handle;
  v87 = v144;
  v88 = v145;
  if ( Handle )
  {
    if ( (_BYTE)v127 || v82 == 1 )
    {
      v90 = BYTE1(v127);
      v91 = (int)v138;
    }
    else
    {
      LOBYTE(BugCheckParameter4) = 1;
      v89 = PnpCheckDeviceIdsChanged(
              BugCheckParameter2,
              Handle,
              v145,
              (unsigned int)v137,
              BugCheckParameter4,
              (char *)&v127 + 1);
      v90 = BYTE1(v127);
      v91 = (int)v138;
      if ( v89 < 0 )
        v90 = 0;
      BYTE1(v127) = v90;
      if ( !v90 )
      {
        LOBYTE(BugCheckParameter4a) = 0;
        v92 = PnpCheckDeviceIdsChanged(
                BugCheckParameter2,
                v86,
                v87,
                (unsigned int)v138,
                BugCheckParameter4a,
                (char *)&v127 + 1);
        v90 = BYTE1(v127);
        if ( v92 < 0 )
          v90 = 0;
      }
    }
    if ( v88 )
      CmSetDeviceRegProp(
        PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        (_DWORD)v86,
        2,
        7,
        (__int64)v88,
        (_DWORD)v137,
        v130);
    if ( v87 )
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(BugCheckParameter2 + 48), (_DWORD)v86, 3, 7, (__int64)v87, v91, v130);
    if ( v90 || (_BYTE)v141 )
    {
      if ( (_BYTE)v127 )
      {
        v95 = v129;
        v96 = v134;
      }
      else
      {
        v94 = PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(BugCheckParameter2 + 48), (__int64)v86, (unsigned int *)&v134);
        v95 = v129;
        if ( v94 < 0 )
        {
          v96 = 0;
        }
        else
        {
          v96 = v134;
          v95 = v134 | v129;
          v129 |= v134;
        }
      }
      if ( (v96 & 0x20) != 0 || (v95 & 0x40000) != 0 )
      {
        v129 = v95 & 0xFFFBFFFF;
        CmSetDeviceRegProp(
          PiPnpRtlCtx,
          *(_QWORD *)(BugCheckParameter2 + 48),
          (_DWORD)v86,
          11,
          4,
          (__int64)&v129,
          4,
          v130);
        LOBYTE(v95) = v129;
      }
      if ( (v95 & 0x20) != 0 )
      {
        LOBYTE(v127) = 1;
        PipSetDevNodeProblem(BugCheckParameter2, 18LL, 0LL);
      }
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  v98 = v147;
  if ( v86 )
  {
    v136 = 0LL;
    AlternateStringData = 0;
    LODWORD(v134) = 0;
    v100 = 0;
    if ( v147 )
    {
      v101 = -1LL;
      do
        ++v101;
      while ( *((_WORD *)v147 + v101) );
      v100 = 2 * v101 + 2;
      AlternateStringData = PnpFindAlternateStringData(v147, v100, &v136, &v134);
    }
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_BusReportedDeviceDesc,
      AlternateStringData != 0 ? 25 : 18,
      (__int64)v98,
      v100,
      v130);
    DeviceLocationStrings = PnpGetDeviceLocationStrings((PVOID *)BugCheckParameter2, &v136, &v134);
    v97 = 0LL;
    if ( DeviceLocationStrings >= 0 )
    {
      v103 = v136;
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_LocationPaths,
        8210,
        (__int64)v136,
        2 * v134,
        v130);
      ExFreePoolWithTag(v103, 0);
    }
  }
  PnpQueryBusInformation(BugCheckParameter2, v97);
  memset_0(v155, 0, sizeof(v155));
  PipDmgDestroyIommuExtension(BugCheckParameter2);
  if ( (int)PiIommuGetInterface(*(_QWORD *)(BugCheckParameter2 + 32), v155) >= 0 )
  {
    v104 = PipDmgInitializeIommuExtension(BugCheckParameter2, (__int64)v155);
    PiIommuPutInterface((__int64)v155);
    v105 = v133;
    if ( v104 < 0 )
      v105 = v104;
    v133 = v105;
  }
  if ( (v157 & 0x4000) != 0
    || (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) != 0 && *(_DWORD *)(BugCheckParameter2 + 404) == 14 )
  {
    goto LABEL_236;
  }
  if ( !(_BYTE)v127 )
  {
    if ( v86 )
      PpDevCfgProcessDeviceOperations(BugCheckParameter2, v86);
LABEL_236:
    v106 = v128;
    goto LABEL_237;
  }
  v106 = v128;
  v107 = v142;
  if ( v128 == 1 )
    v107 = v142 | 1;
  PpDevCfgProcessDevice(BugCheckParameter2, v86, v107);
LABEL_237:
  PiQueryResourceRequirements(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v109 = *(_DWORD *)(BugCheckParameter2 + 404), v109 != 22)
    && v109 != 29
    && v109 != 14
    && v109 != 9
    && v109 != 3
    && v109 != 19 )
  {
    PnpIsDeviceInstanceEnabled(v86, BugCheckParameter2 + 40, 1LL);
  }
  if ( v86 )
  {
    v110 = v106 == 1;
    LOBYTE(v108) = v110;
    PnpInitializeSessionId(BugCheckParameter2, v86, v108);
    LOBYTE(v111) = v110;
    PnpInitializeInheritedRestrictedSd(BugCheckParameter2, v86, v111);
  }
  PiQueryAndAllocateBootResources(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v112 = *(_DWORD *)(BugCheckParameter2 + 404), v112 != 9) && ((v112 - 3) & 0xFFFFFFEF) != 0 )
  {
    v113 = KeGetCurrentThread();
    --v113->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    LOBYTE(v114) = v128 == 1;
    PnpSaveDeviceCapabilities(BugCheckParameter2, v156, v114);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    PpHotSwapUpdateRemovalPolicy(BugCheckParameter2);
    LOBYTE(v115) = 1;
    v116 = PpDeviceRegistration(BugCheckParameter2 + 40, v115, BugCheckParameter2 + 56, 0LL);
    if ( v116 < 0 )
      PipSetDevNodeProblem(BugCheckParameter2, 19LL, (unsigned int)v116);
    v87 = v144;
    v98 = v147;
    v88 = v145;
    v86 = Handle;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v117 = *(_DWORD *)(BugCheckParameter2 + 404), v117 != 9) && v117 != 3 )
  {
    PnpIrpDeviceEnumerated(v6);
    if ( v86 )
      PiUpdateDevicePanel(BugCheckParameter2, v86);
    IsEnabledDeviceUsageNoInline = Feature_KernelPnP_EnumerationNotifications__private_IsEnabledDeviceUsageNoInline();
    v120 = *(_QWORD *)(BugCheckParameter2 + 48);
    if ( !IsEnabledDeviceUsageNoInline || v120 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v119, v120, 1LL);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v121, *(_QWORD *)(BugCheckParameter2 + 48), 14LL);
    }
    PnpSetPlugPlayEvent(&GUID_DEVICE_ENUMERATED, v6);
    PnpNewDeviceNodeDependencyCheck(BugCheckParameter2);
  }
  if ( v88 )
    ExFreePoolWithTag(v88, 0);
  if ( v87 )
    ExFreePoolWithTag(v87, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v86 )
    ZwClose(v86);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v150 )
    ExFreePoolWithTag(v150, 0);
  if ( v98 )
    ExFreePoolWithTag(v98, 0);
  if ( v148 )
    ExFreePoolWithTag(v148, 0);
  v122 = v152;
  if ( v152 )
    PiPnpRtlEndOperation(v152);
  if ( (byte_140EEFA6B & 0x10) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      (__int64)v122,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessNewDevice_Stop,
      0LL,
      BugCheckParameter2);
  v123 = v133;
  if ( *(_DWORD *)(BugCheckParameter2 + 568) )
    PnpTraceDockDeviceEnumeration();
  return v123;
}
