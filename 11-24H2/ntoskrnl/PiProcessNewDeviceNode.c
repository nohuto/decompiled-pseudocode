/*
 * XREFs of PiProcessNewDeviceNode @ 0x140A76864
 * Callers:
 *     PiProcessNewDeviceNodeWorker @ 0x140721BB0 (PiProcessNewDeviceNodeWorker.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140A767EC (PiProcessNewDeviceNodeAsync.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x14049E464 (PpMarkDeviceStackExtensionFlag.c)
 *     PnpIrpDeviceEnumerated @ 0x1404A76BC (PnpIrpDeviceEnumerated.c)
 *     PnpGetDeviceInstancePath @ 0x1404B9650 (PnpGetDeviceInstancePath.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1404C2604 (McTemplateK0p_EtwWriteTransfer.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     McTemplateK0pzz_EtwWriteTransfer @ 0x1405A2A98 (McTemplateK0pzz_EtwWriteTransfer.c)
 *     McTemplateK0zzzzz_EtwWriteTransfer @ 0x1405A2C50 (McTemplateK0zzzzz_EtwWriteTransfer.c)
 *     PpvUtilFailDriver @ 0x1405A6408 (PpvUtilFailDriver.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PnpDisableDevice @ 0x140720DF0 (PnpDisableDevice.c)
 *     PnpLogDuplicateDevice @ 0x140721FA4 (PnpLogDuplicateDevice.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x140727D40 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14072A490 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpProfileCancelTransitioningDock @ 0x14072B680 (PpProfileCancelTransitioningDock.c)
 *     PnpSetInvalidIDEvent @ 0x14072C00C (PnpSetInvalidIDEvent.c)
 *     PnpTraceDockDeviceEnumeration @ 0x140730768 (PnpTraceDockDeviceEnumeration.c)
 *     PnpCheckDeviceIdsChanged @ 0x14088C928 (PnpCheckDeviceIdsChanged.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B6E6C (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x1408B8F2C (PipClearDevNodeFlags.c)
 *     PpIrpQueryCapabilities @ 0x1408B94D8 (PpIrpQueryCapabilities.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     KseAddHardwareId @ 0x140942360 (KseAddHardwareId.c)
 *     PiQueryAndAllocateBootResources @ 0x140978DA8 (PiQueryAndAllocateBootResources.c)
 *     PiQueryResourceRequirements @ 0x1409795E8 (PiQueryResourceRequirements.c)
 *     PipClearDevNodeUserFlags @ 0x140979A0C (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PiUpdateDevicePanel @ 0x14097B2F8 (PiUpdateDevicePanel.c)
 *     PnpSetPlugPlayEvent @ 0x14097B3B0 (PnpSetPlugPlayEvent.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14097B874 (PiDcUpdateDeviceContainerMembership.c)
 *     PnpSaveDeviceCapabilities @ 0x14097BC44 (PnpSaveDeviceCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x14097BE58 (_CmSetDeviceRegProp.c)
 *     PipClearDevNodeProblem @ 0x14098187C (PipClearDevNodeProblem.c)
 *     PnpQueryExtendedAddress @ 0x140982270 (PnpQueryExtendedAddress.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x140982310 (PiDmaGuardProcessNewDeviceNode.c)
 *     PnpGetDeviceLocationStrings @ 0x1409824C0 (PnpGetDeviceLocationStrings.c)
 *     PnpQueryDeviceText @ 0x1409B91CC (PnpQueryDeviceText.c)
 *     PpDeviceRegistration @ 0x1409BAF3C (PpDeviceRegistration.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1409BD0AC (PnpNewDeviceNodeDependencyCheck.c)
 *     PiCreateDeviceInstanceKey @ 0x1409C3F58 (PiCreateDeviceInstanceKey.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1409C94B4 (PpDevCfgProcessDeviceOperations.c)
 *     PnpFindAlternateStringData @ 0x140A17758 (PnpFindAlternateStringData.c)
 *     PiQueryRemovableDeviceOverride @ 0x140A26B08 (PiQueryRemovableDeviceOverride.c)
 *     PnpQueryDeviceID @ 0x140A27FC0 (PnpQueryDeviceID.c)
 *     PnpQueryID @ 0x140A28110 (PnpQueryID.c)
 *     PnpIrpQueryID @ 0x140A28284 (PnpIrpQueryID.c)
 *     PnpGenerateDeviceIdsHash @ 0x140A43E5C (PnpGenerateDeviceIdsHash.c)
 *     PipMakeGloballyUniqueId @ 0x140A4FA70 (PipMakeGloballyUniqueId.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140A55FE0 (PnpIsDeviceInstanceEnabled.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140A61658 (PiBuildDeviceNodeInstancePath.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140A61D70 (PnpInitializeInheritedRestrictedSd.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x140A680CC (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x140A69ACC (PipGenerateContainerID.c)
 *     PnpQueryBusInformation @ 0x140A6CF10 (PnpQueryBusInformation.c)
 *     PnpClearDeviceTemporaryProperties @ 0x140A7173C (PnpClearDeviceTemporaryProperties.c)
 *     PnpInitializeSessionId @ 0x140A76300 (PnpInitializeSessionId.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140A80A64 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PpDevCfgProcessDevice @ 0x140A9A74C (PpDevCfgProcessDevice.c)
 *     PipSetDevNodeUserFlags @ 0x140ABF118 (PipSetDevNodeUserFlags.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessNewDeviceNode(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rcx
  HANDLE v3; // r12
  ULONG_PTR v4; // r15
  int v5; // eax
  int v6; // esi
  int v7; // ebx
  int v8; // edx
  char v9; // al
  char v10; // r13
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // eax
  int GloballyUniqueId; // ebx
  __int64 *v16; // rcx
  PVOID v17; // rsi
  WCHAR *v18; // r14
  _DWORD *v19; // rsi
  _DWORD *v20; // rcx
  bool v21; // zf
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rdx
  int v25; // ebx
  __int64 v26; // r8
  int v27; // eax
  int v28; // ebx
  int v29; // eax
  int v30; // edx
  int v31; // eax
  _QWORD *v32; // rax
  ULONG_PTR v33; // rsi
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v38; // rax
  int v39; // ebx
  int v40; // eax
  int v41; // eax
  struct _KTHREAD *v42; // rax
  __int64 v43; // rax
  int v44; // r14d
  __int64 v45; // rdx
  unsigned int v46; // eax
  int v47; // edx
  __int64 v48; // rdx
  int FailedInstallProblemStatus; // r8d
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  PVOID v53; // rsi
  WCHAR *v54; // rbx
  char v55; // r8
  __int64 v56; // rdx
  struct _KTHREAD *v57; // rax
  struct _KTHREAD *v58; // rax
  struct _KTHREAD *v59; // rax
  HANDLE v60; // rsi
  WCHAR *v61; // r12
  PVOID v62; // r13
  int v63; // r14d
  int v64; // eax
  char v65; // bl
  int v66; // eax
  int v67; // r14d
  bool v68; // sf
  unsigned int v69; // eax
  char v70; // cl
  __int64 v71; // rdx
  PVOID v72; // r14
  int AlternateStringData; // eax
  unsigned int v74; // ebx
  __int64 v75; // rax
  PVOID v76; // rbx
  int v77; // eax
  unsigned int v78; // ebx
  unsigned int v79; // eax
  int v80; // eax
  int v81; // eax
  struct _KTHREAD *v82; // rax
  __int64 v83; // rdx
  int v84; // eax
  int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  PVOID v89; // rcx
  __int64 v91; // rcx
  _WORD *v92; // rcx
  __int64 v93; // rcx
  unsigned __int16 *DeviceInstancePath; // rbx
  ULONG v95; // ecx
  _WORD *v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rcx
  _WORD *v100; // rcx
  __int64 v101; // rcx
  unsigned __int16 *v102; // rbx
  ULONG v103; // ecx
  _WORD *v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rcx
  bool v107; // [rsp+50h] [rbp-B0h]
  _BYTE v108[3]; // [rsp+51h] [rbp-AFh] BYREF
  unsigned int v109; // [rsp+54h] [rbp-ACh] BYREF
  char v110; // [rsp+58h] [rbp-A8h] BYREF
  int v111; // [rsp+5Ch] [rbp-A4h] BYREF
  int v112; // [rsp+60h] [rbp-A0h]
  unsigned int v113; // [rsp+64h] [rbp-9Ch] BYREF
  int v114; // [rsp+68h] [rbp-98h]
  int v115; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  int v117; // [rsp+78h] [rbp-88h] BYREF
  int v118; // [rsp+7Ch] [rbp-84h] BYREF
  int v119; // [rsp+80h] [rbp-80h]
  int v120; // [rsp+84h] [rbp-7Ch]
  PCWSTR SourceString; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  PVOID v123; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v124; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v125; // [rsp+A8h] [rbp-58h] BYREF
  int v126; // [rsp+B0h] [rbp-50h] BYREF
  int v127; // [rsp+B4h] [rbp-4Ch] BYREF
  PVOID v128; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v129; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v130; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v131; // [rsp+D0h] [rbp-30h] BYREF
  const wchar_t *v132; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v133; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v134; // [rsp+E8h] [rbp-18h] BYREF
  const WCHAR *v135; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v136; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp+0h] BYREF
  __int64 v138; // [rsp+110h] [rbp+10h] BYREF
  int v139; // [rsp+120h] [rbp+20h] BYREF
  int v140; // [rsp+124h] [rbp+24h]
  GUID Guid; // [rsp+160h] [rbp+60h] BYREF

  SourceString = 0LL;
  v130 = 0LL;
  memset_0(&v139, 0, 0x40uLL);
  Guid = 0LL;
  v125 = 0LL;
  DestinationString = 0LL;
  v118 = 0;
  v128 = 0LL;
  v132 = 0LL;
  v136 = 0LL;
  v129 = 0LL;
  v127 = 0;
  P = 0LL;
  LODWORD(v124) = 0;
  v134 = 0LL;
  v135 = 0LL;
  v117 = 0;
  v126 = 0;
  v110 = 0;
  v131 = 0LL;
  if ( (byte_140EEFF63 & 0x10) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v2,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessNewDevice_Start,
      0LL,
      BugCheckParameter2);
  LOBYTE(v119) = 0;
  v107 = 0;
  v120 = 0;
  v3 = 0LL;
  v115 = 0;
  v4 = *(_QWORD *)(BugCheckParameter2 + 32);
  v138 = MEMORY[0xFFFFF78000000014];
  v114 = 0;
  v111 = 0;
  v109 = 0;
  v113 = 0;
  v108[0] = 0;
  Handle = 0LL;
  v112 = 0;
  PiPnpRtlBeginOperation(&v136);
  PipClearDevNodeFlags(BugCheckParameter2, 0x2000000);
  v5 = PnpQueryDeviceID(BugCheckParameter2, (wchar_t **)&v130, &v132);
  if ( v5 < 0 )
  {
    v6 = v5;
    if ( v5 == -1073479624 )
      v6 = -1073741823;
    v115 = v6;
  }
  v7 = PpIrpQueryCapabilities(v4, &v139);
  PipClearDevNodeUserFlags(BugCheckParameter2, 2);
  v9 = v140;
  v10 = 0;
  if ( v7 >= 0 )
  {
    if ( (v140 & 0x20000) != 0 )
    {
      PipSetDevNodeUserFlags(BugCheckParameter2, 2LL);
      v9 = v140;
    }
    if ( (v9 & 0x40) != 0 )
      v10 = 1;
  }
  if ( (v9 & 0x20) != 0 )
  {
    if ( *(_DWORD *)(BugCheckParameter2 + 568) == 4 )
      PpProfileCancelTransitioningDock(BugCheckParameter2, v8);
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  *(_DWORD *)(BugCheckParameter2 + 568) = v11;
  v133 = -1LL;
  PnpQueryExtendedAddress((void *)v4, &v133);
  PnpQueryDeviceText(*(_QWORD **)(BugCheckParameter2 + 32), 0, v12, &v128);
  PnpQueryDeviceText(*(_QWORD **)(BugCheckParameter2 + 32), 1, v13, &v134);
  v14 = PnpQueryID(BugCheckParameter2, 3LL, &P, &v124);
  GloballyUniqueId = v14;
  if ( v10 )
  {
    if ( v14 == -1073741637 )
    {
      PipSetDevNodeProblem(BugCheckParameter2, 9, -1073741637);
      PipSetDevNodeFlags(*(_QWORD *)(BugCheckParameter2 + 16), 0x200000u);
      PnpSetInvalidIDEvent((const void **)(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL));
    }
  }
  else if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0 || *(_DWORD *)(BugCheckParameter2 + 404) != 9 )
  {
    v16 = *(__int64 **)(BugCheckParameter2 + 16);
    if ( v16 != IopRootDeviceNode )
    {
      v17 = P;
      GloballyUniqueId = PipMakeGloballyUniqueId(v16[4], (__int64)P, (wchar_t **)&v131);
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
      v18 = (WCHAR *)v131;
      P = v131;
      goto LABEL_27;
    }
  }
  v18 = (WCHAR *)P;
LABEL_27:
  v19 = (_DWORD *)(BugCheckParameter2 + 396);
  v20 = (_DWORD *)(BugCheckParameter2 + 396);
  v124 = (_DWORD *)(BugCheckParameter2 + 396);
  v123 = (PVOID)(BugCheckParameter2 + 396);
  while ( 1 )
  {
    if ( GloballyUniqueId < 0 )
    {
      v21 = (*v20 & 0x2000) == 0;
      v115 = GloballyUniqueId;
      if ( v21 || (v21 = *(_DWORD *)(BugCheckParameter2 + 404) == 9, v19 = v20, v124 = v20, !v21) )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v22 = 3;
          v23 = -1073741670;
        }
        else
        {
          v23 = GloballyUniqueId;
          v22 = 19;
        }
        PipSetDevNodeProblem(BugCheckParameter2, v22, v23);
        v19 = v123;
        v124 = v123;
      }
    }
    v25 = PiBuildDeviceNodeInstancePath(BugCheckParameter2, (__int64)v130, (__int64)v132, (__int64)v18);
    if ( v25 < 0 )
      goto LABEL_40;
    if ( (byte_140EEFF63 & 0x10) != 0 )
      McTemplateK0pzz_EtwWriteTransfer(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL),
        v24,
        v26,
        BugCheckParameter2,
        *(_QWORD *)(BugCheckParameter2 + 48),
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL));
    v25 = PiCreateDeviceInstanceKey(BugCheckParameter2, &Handle, &v111);
    v27 = 0;
    if ( v25 < 0 )
    {
      PipSetDevNodeProblem(BugCheckParameter2, 19, v25);
      v3 = Handle;
      v114 = v111;
LABEL_40:
      v115 = v25;
      v28 = v114;
      goto LABEL_41;
    }
    v28 = v111;
    v3 = Handle;
    v114 = v111;
    if ( v111 == 1 )
      v27 = 0x20000;
    v112 = v27;
LABEL_41:
    PpMarkDeviceStackExtensionFlag(v4, 16, 1);
    v29 = *(_DWORD *)(BugCheckParameter2 + 300);
    if ( v29 == 769 )
    {
      v30 = 772;
LABEL_48:
      PipSetDevNodeState(BugCheckParameter2, v30);
      goto LABEL_49;
    }
    if ( v29 == 770 )
    {
      v30 = 771;
      goto LABEL_48;
    }
LABEL_49:
    if ( (*v19 & 0x2000) != 0 )
    {
      v31 = *(_DWORD *)(BugCheckParameter2 + 404);
      if ( v31 == 9 || ((v31 - 3) & 0xFFFFFFEF) == 0 )
        goto LABEL_73;
    }
    if ( v28 == 1 )
      break;
    v32 = PnpDeviceObjectFromDeviceInstanceWithTag(BugCheckParameter2 + 40, 0x65706E50u);
    v33 = (ULONG_PTR)v32;
    if ( !v32 )
      goto LABEL_70;
    if ( v32 == (_QWORD *)v4 )
    {
      ObfDereferenceObjectWithTag(v32, 0x65706E50u);
      goto LABEL_70;
    }
    if ( !v10 )
    {
      PpvUtilFailDriver(0);
      IoAddTriageDumpDataBlock(v4, (PVOID)*(unsigned __int16 *)(v4 + 2));
      v91 = *(_QWORD *)(v4 + 8);
      if ( v91 )
      {
        IoAddTriageDumpDataBlock(v91, (PVOID)(unsigned int)*(__int16 *)(v91 + 2));
        v92 = (_WORD *)(*(_QWORD *)(v4 + 8) + 56LL);
        if ( *v92 )
        {
          IoAddTriageDumpDataBlock((ULONG)v92, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v4 + 8) + 56LL));
        }
      }
      v93 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
      if ( v93 )
      {
        DeviceInstancePath = (unsigned __int16 *)PnpGetDeviceInstancePath(v93);
        IoAddTriageDumpDataBlock(v95, (PVOID)0x388);
        if ( *DeviceInstancePath )
        {
          IoAddTriageDumpDataBlock((ULONG)DeviceInstancePath, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)DeviceInstancePath + 1), (PVOID)*DeviceInstancePath);
        }
        v96 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 56LL);
        if ( *v96 )
        {
          IoAddTriageDumpDataBlock((ULONG)v96, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 56LL));
        }
        v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 16LL);
        if ( v97 && *(_WORD *)(v97 + 56) )
        {
          IoAddTriageDumpDataBlock(v97 + 56, (PVOID)2);
          v98 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v98 + 64), (PVOID)*(unsigned __int16 *)(v98 + 56));
        }
      }
      IoAddTriageDumpDataBlock(v33, (PVOID)*(unsigned __int16 *)(v33 + 2));
      v99 = *(_QWORD *)(v33 + 8);
      if ( v99 )
      {
        IoAddTriageDumpDataBlock(v99, (PVOID)(unsigned int)*(__int16 *)(v99 + 2));
        v100 = (_WORD *)(*(_QWORD *)(v33 + 8) + 56LL);
        if ( *v100 )
        {
          IoAddTriageDumpDataBlock((ULONG)v100, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v33 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v33 + 8) + 56LL));
        }
      }
      v101 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
      if ( v101 )
      {
        v102 = (unsigned __int16 *)PnpGetDeviceInstancePath(v101);
        IoAddTriageDumpDataBlock(v103, (PVOID)0x388);
        if ( *v102 )
        {
          IoAddTriageDumpDataBlock((ULONG)v102, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v102 + 1), (PVOID)*v102);
        }
        v104 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL) + 56LL);
        if ( *v104 )
        {
          IoAddTriageDumpDataBlock((ULONG)v104, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL) + 56LL));
        }
        v105 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL) + 16LL);
        if ( v105 && *(_WORD *)(v105 + 56) )
        {
          IoAddTriageDumpDataBlock(v105 + 56, (PVOID)2);
          v106 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v106 + 64), (PVOID)*(unsigned __int16 *)(v106 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, v4, v33, 0LL);
    }
    ZwClose(v3);
    v140 &= ~0x40u;
    Handle = 0LL;
    v3 = 0LL;
    v10 = 0;
    PipSetDevNodeProblem(BugCheckParameter2, 42, 0);
    v34 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
    PnpLogDuplicateDevice((PCWSTR)v130, v18);
    if ( (byte_140EEFF63 & 0x40) != 0 )
      McTemplateK0zzzzz_EtwWriteTransfer(
        *(_QWORD *)(v34 + 16),
        v35,
        v36,
        (const wchar_t *)v130,
        v132,
        v18,
        *(const wchar_t **)(*(_QWORD *)(v34 + 16) + 48LL),
        *(const wchar_t **)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL));
    if ( *(_QWORD *)(v34 + 16) == *(_QWORD *)(BugCheckParameter2 + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObjectWithTag((PVOID)v33, 0x65706E50u);
    GloballyUniqueId = PipMakeGloballyUniqueId(
                         *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 32LL),
                         (__int64)v18,
                         (wchar_t **)&v131);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
    v18 = (WCHAR *)v131;
    v19 = v124;
    v20 = v123;
    P = v131;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v3 = Handle;
  if ( Handle && v128 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( *((_WORD *)v128 + v38) );
    CmSetDeviceRegProp(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      (__int64)Handle,
      1u,
      1,
      (__int64)v128,
      2 * v38 + 2,
      v112);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  v28 = v111;
  v114 = v111;
LABEL_70:
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) != 0 && *(_DWORD *)(BugCheckParameter2 + 404) == 42 )
    PipClearDevNodeProblem(BugCheckParameter2);
LABEL_73:
  if ( v3 )
  {
    if ( v28 != 1 )
      PnpClearDeviceTemporaryProperties(*(_QWORD *)(BugCheckParameter2 + 48), (__int64)v3);
    v39 = v112;
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      (__int64)v3,
      0LL,
      (__int64)DEVPKEY_Device_LastKnownParent,
      18,
      *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL),
      *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL) + 2,
      v112);
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      (__int64)v3,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v138,
      8u,
      v39);
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      (__int64)v3,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v39);
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      (__int64)v3,
      0LL,
      (__int64)DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4u,
      v39);
  }
  else
  {
    v39 = v112;
  }
  if ( (v140 & 0x4000) != 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
      || (v40 = *(_DWORD *)(BugCheckParameter2 + 404), v40 != 1) && v40 != 14 )
    {
      PnpDisableDevice(BugCheckParameter2, 0x1Du);
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) != 0
    && ((v41 = *(_DWORD *)(BugCheckParameter2 + 404), v41 == 9) || ((v41 - 3) & 0xFFFFFFEF) == 0) )
  {
    v44 = v114;
  }
  else
  {
    v42 = KeGetCurrentThread();
    --v42->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v3 = Handle;
    if ( Handle && v134 )
    {
      v43 = -1LL;
      do
        ++v43;
      while ( *((_WORD *)v134 + v43) );
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        (__int64)Handle,
        0xEu,
        1,
        (__int64)v134,
        2 * v43 + 2,
        v39);
    }
    v44 = v111;
    PnpSaveDeviceCapabilities(BugCheckParameter2, &v139, v111 == 1);
    if ( v133 != -1 )
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1,
        (__int64)v3,
        0LL,
        (__int64)&DEVPKEY_Device_ExtendedAddress,
        9,
        (__int64)&v133,
        8u,
        v39);
    v45 = *(_QWORD *)(BugCheckParameter2 + 48);
    v117 = 4;
    v107 = v44 == 1;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v45,
                (__int64)v3,
                0xBu,
                (__int64)&v126,
                (__int64)&v109,
                (__int64)&v117,
                0) < 0
      || v126 != 4
      || v117 != 4 )
    {
      v46 = 0;
      v47 = 1;
      v109 = 0;
      goto LABEL_102;
    }
    v46 = v109;
    if ( (v109 & 0x20) != 0 )
    {
      v47 = 18;
      if ( (v109 & 1) == 0 )
LABEL_102:
        v107 = 1;
LABEL_103:
      if ( (v140 & 0x100) != 0 )
      {
        v48 = *(_QWORD *)(BugCheckParameter2 + 48);
        v109 = v46 | 0x400;
        CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v48, (__int64)v3, 0xBu, 4, (__int64)&v109, 4, v39);
      }
      else
      {
        if ( v47 == 28 )
        {
          FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus(
                                         *(_QWORD *)(BugCheckParameter2 + 48),
                                         (int)v3);
          v47 = 28;
        }
        else
        {
          FailedInstallProblemStatus = 0;
        }
        PipSetDevNodeProblem(BugCheckParameter2, v47, FailedInstallProblemStatus);
      }
    }
    else if ( (v109 & 0x40) != 0 )
    {
      v47 = 28;
      goto LABEL_103;
    }
    v50 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(BugCheckParameter2 + 32), BugCheckParameter2 + 40);
    v51 = v115;
    if ( v50 < 0 )
      v51 = v50;
    v115 = v51;
    if ( PnpBootMode )
    {
      *(_DWORD *)(BugCheckParameter2 + 704) |= 0x1000u;
      v120 = 2;
    }
    else
    {
      v52 = (unsigned __int8)v119;
      if ( (v109 & 0x40000) != 0 )
        v52 = 1;
      v119 = v52;
    }
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  PnpQueryID(BugCheckParameter2, 1LL, &v129, &v127);
  v53 = v129;
  KseAddHardwareId((PCWSTR)v129);
  PnpQueryID(BugCheckParameter2, 2LL, &v125, &v118);
  PnpGenerateDeviceIdsHash((__int64)v53, (__int64)v125, (_DWORD *)(BugCheckParameter2 + 684));
  PnpIrpQueryID(*(_QWORD **)(BugCheckParameter2 + 32), 5, &SourceString);
  v54 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      ExFreePoolWithTag(v54, 0);
      v54 = 0LL;
      SourceString = 0LL;
    }
  }
  if ( (int)PiQueryRemovableDeviceOverride(BugCheckParameter2, v53, v125, (bool *)&v110) >= 0 )
  {
    v55 = v110;
    goto LABEL_130;
  }
  v55 = (v140 & 0x20) == 0 && (v140 & 0x40000) == 0 && (v140 & 0x10) != 0;
  if ( !v54 )
  {
LABEL_130:
    v56 = 0LL;
    if ( v44 != 1 )
      v56 = (__int64)v3;
    if ( (int)PipGenerateContainerID(BugCheckParameter2, v56, v55, v54, &v135) >= 0 )
    {
      if ( v54 )
        ExFreePoolWithTag(v54, 0);
      v54 = (WCHAR *)v135;
      SourceString = v135;
    }
  }
  if ( !v54
    || (RtlInitUnicodeString(&DestinationString, v54),
        RtlGUIDFromString(&DestinationString, (GUID *)(BugCheckParameter2 + 664)) < 0) )
  {
    *(_OWORD *)(BugCheckParameter2 + 664) = 0LL;
  }
  v57 = KeGetCurrentThread();
  --v57->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  PipSetDevNodeFlags(BugCheckParameter2, 0x20u);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( Handle && SourceString )
  {
    v58 = KeGetCurrentThread();
    --v58->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    PiDcUpdateDeviceContainerMembership(*(_QWORD *)(BugCheckParameter2 + 48), (__int64)Handle, SourceString);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  v59 = KeGetCurrentThread();
  --v59->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v60 = Handle;
  v61 = (WCHAR *)v125;
  v62 = v129;
  if ( Handle )
  {
    v63 = v127;
    if ( v107 || v111 == 1 )
    {
      v65 = v108[0];
    }
    else
    {
      v64 = PnpCheckDeviceIdsChanged(BugCheckParameter2, (__int64)Handle, (const WCHAR *)v129, v127, 1, v108);
      v65 = v108[0];
      if ( v64 < 0 )
        v65 = 0;
      v108[0] = v65;
      if ( !v65 )
      {
        v66 = PnpCheckDeviceIdsChanged(BugCheckParameter2, (__int64)v60, v61, v118, 0, v108);
        v65 = v108[0];
        if ( v66 < 0 )
          v65 = 0;
      }
    }
    if ( v62 )
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        (__int64)v60,
        2u,
        7,
        (__int64)v62,
        v63,
        v112);
    v67 = v112;
    if ( v61 )
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        (__int64)v60,
        3u,
        7,
        (__int64)v61,
        v118,
        v112);
    if ( v65 || (_BYTE)v119 )
    {
      if ( v107 )
      {
        v69 = v109;
        v70 = v113;
      }
      else
      {
        v68 = (int)PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(BugCheckParameter2 + 48), (__int64)v60, &v113) < 0;
        v69 = v109;
        if ( v68 )
        {
          v70 = 0;
        }
        else
        {
          v70 = v113;
          v69 = v113 | v109;
          v109 |= v113;
        }
      }
      if ( (v69 & 0x40000) != 0 || (v70 & 0x20) != 0 )
      {
        v71 = *(_QWORD *)(BugCheckParameter2 + 48);
        v109 = v69 & 0xFFFBFFFF;
        CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v71, (__int64)v60, 0xBu, 4, (__int64)&v109, 4, v67);
        LOBYTE(v69) = v109;
      }
      if ( (v69 & 0x20) != 0 )
      {
        v107 = 1;
        PipSetDevNodeProblem(BugCheckParameter2, 18, 0);
      }
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  v72 = v128;
  if ( v60 )
  {
    v123 = 0LL;
    AlternateStringData = 0;
    v113 = 0;
    v74 = 0;
    if ( v128 )
    {
      v75 = -1LL;
      do
        ++v75;
      while ( *((_WORD *)v128 + v75) );
      v74 = 2 * v75 + 2;
      AlternateStringData = PnpFindAlternateStringData(v128, v74, &v123, &v113);
    }
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      (__int64)v60,
      0LL,
      (__int64)&DEVPKEY_Device_BusReportedDeviceDesc,
      AlternateStringData != 0 ? 25 : 18,
      (__int64)v72,
      v74,
      v112);
    if ( (int)PnpGetDeviceLocationStrings(BugCheckParameter2, &v123, &v113) >= 0 )
    {
      v76 = v123;
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1,
        (__int64)v60,
        0LL,
        (__int64)&DEVPKEY_Device_LocationPaths,
        8210,
        (__int64)v123,
        2 * v113,
        v112);
      ExFreePoolWithTag(v76, 0);
    }
  }
  PnpQueryBusInformation(BugCheckParameter2);
  v77 = PiDmaGuardProcessNewDeviceNode(BugCheckParameter2);
  v78 = v115;
  if ( v77 < 0 )
    v78 = v77;
  if ( (v140 & 0x4000) == 0
    && ((*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0 || *(_DWORD *)(BugCheckParameter2 + 404) != 14) )
  {
    if ( v107 )
    {
      v79 = v120;
      if ( v111 == 1 )
        v79 = v120 | 1;
      PpDevCfgProcessDevice(BugCheckParameter2, v60, v79);
    }
    else if ( v60 )
    {
      PpDevCfgProcessDeviceOperations(BugCheckParameter2, v60);
    }
  }
  PiQueryResourceRequirements(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v80 = *(_DWORD *)(BugCheckParameter2 + 404), v80 != 22)
    && v80 != 29
    && v80 != 14
    && v80 != 9
    && v80 != 3
    && v80 != 19 )
  {
    PnpIsDeviceInstanceEnabled(v60, (unsigned __int16 *)(BugCheckParameter2 + 40), 1);
  }
  if ( v60 )
  {
    PnpInitializeSessionId(BugCheckParameter2, (__int64)v60, v111 == 1);
    PnpInitializeInheritedRestrictedSd(BugCheckParameter2, (__int64)v60, v111 == 1);
  }
  PiQueryAndAllocateBootResources(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v81 = *(_DWORD *)(BugCheckParameter2 + 404), v81 != 9) && ((v81 - 3) & 0xFFFFFFEF) != 0 )
  {
    v82 = KeGetCurrentThread();
    --v82->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    PnpSaveDeviceCapabilities(BugCheckParameter2, &v139, v111 == 1);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    PpHotSwapUpdateRemovalPolicy(BugCheckParameter2);
    LOBYTE(v83) = 1;
    v84 = PpDeviceRegistration(BugCheckParameter2 + 40, v83, BugCheckParameter2 + 56, 0);
    if ( v84 < 0 )
      PipSetDevNodeProblem(BugCheckParameter2, 19, v84);
    v60 = Handle;
    v62 = v129;
    v72 = v128;
    v61 = (WCHAR *)v125;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v85 = *(_DWORD *)(BugCheckParameter2 + 404), v85 != 9) && v85 != 3 )
  {
    PnpIrpDeviceEnumerated(v4);
    if ( v60 )
      PiUpdateDevicePanel(BugCheckParameter2, v60);
    v87 = *(_QWORD *)(BugCheckParameter2 + 48);
    if ( v87 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v86, v87, 1);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v88, *(_QWORD *)(BugCheckParameter2 + 48), 14);
    }
    PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, (_QWORD *)v4);
    PnpNewDeviceNodeDependencyCheck(BugCheckParameter2);
  }
  if ( v62 )
    ExFreePoolWithTag(v62, 0);
  if ( v61 )
    ExFreePoolWithTag(v61, 0);
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v60 )
    ZwClose(v60);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v134 )
    ExFreePoolWithTag(v134, 0);
  if ( v72 )
    ExFreePoolWithTag(v72, 0);
  if ( v130 )
    ExFreePoolWithTag(v130, 0);
  v89 = v136;
  if ( v136 )
    PiPnpRtlEndOperation((PVOID **)v136);
  if ( (byte_140EEFF63 & 0x10) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      (__int64)v89,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessNewDevice_Stop,
      0LL,
      BugCheckParameter2);
  if ( *(_DWORD *)(BugCheckParameter2 + 568) )
    PnpTraceDockDeviceEnumeration();
  return v78;
}
