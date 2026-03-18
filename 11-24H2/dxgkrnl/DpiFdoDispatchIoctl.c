/*
 * XREFs of DpiFdoDispatchIoctl @ 0x14023DB30
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoIsPostDevice @ 0x14004D4F0 (DpiFdoIsPostDevice.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z @ 0x1400573EC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EEE@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x14005A028 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x140062028 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ?DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x14007D03C (-DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     DpiLiveMigrationWaitForFence @ 0x14007D884 (DpiLiveMigrationWaitForFence.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkDdiVirtualGpuDriverEscape @ 0x14018615C (DxgkDdiVirtualGpuDriverEscape.c)
 *     DxgkDdiCreateVirtualGpu @ 0x14020FA0C (DxgkDdiCreateVirtualGpu.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x14020FC48 (DxgkDdiDestroyVirtualGpu.c)
 *     DxgkDdiEndLiveMigration @ 0x14020FDA4 (DxgkDdiEndLiveMigration.c)
 *     DxgkDdiGetDirtyBitplane @ 0x14020FF18 (DxgkDdiGetDirtyBitplane.c)
 *     DxgkDdiGetGpuPartitionInfo @ 0x14020FFC4 (DxgkDdiGetGpuPartitionInfo.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x140210330 (DxgkDdiGetVirtualGpuInfo.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x140210414 (DxgkDdiGetVirtualGpuProfile.c)
 *     DxgkDdiPrepareLiveMigration @ 0x140210518 (DxgkDdiPrepareLiveMigration.c)
 *     DxgkDdiQueryMitigatedRangeCount @ 0x140210684 (DxgkDdiQueryMitigatedRangeCount.c)
 *     DxgkDdiQueryMitigatedRanges @ 0x140210744 (DxgkDdiQueryMitigatedRanges.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x140210864 (DxgkDdiQueryPhysicalFunctionLuid.c)
 *     DxgkDdiRestoreImmutableMigrationData @ 0x140210CA0 (DxgkDdiRestoreImmutableMigrationData.c)
 *     DxgkDdiRestoreMutableMigrationData @ 0x140210D70 (DxgkDdiRestoreMutableMigrationData.c)
 *     DxgkDdiSaveImmutableMigrationData @ 0x140210E40 (DxgkDdiSaveImmutableMigrationData.c)
 *     DxgkDdiSaveMutableMigrationData @ 0x140210F10 (DxgkDdiSaveMutableMigrationData.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x140210FE0 (DxgkDdiSetGpuPartitionCount.c)
 *     DxgkDdiWriteVirtualizedInterrupt @ 0x1402113E0 (DxgkDdiWriteVirtualizedInterrupt.c)
 *     DxgkFillBufferWithDirty @ 0x1402114C8 (DxgkFillBufferWithDirty.c)
 *     DxgkLiveMigrationGetTransferSize @ 0x1402115C0 (DxgkLiveMigrationGetTransferSize.c)
 *     DxgkSendDirtyToVRAM @ 0x140211740 (DxgkSendDirtyToVRAM.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1402118C4 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFlexIovMitigationUpdate @ 0x140248DF4 (DpiFlexIovMitigationUpdate.c)
 *     DpiGetVirtualizationFlags @ 0x140249020 (DpiGetVirtualizationFlags.c)
 *     DpiSriovAttach @ 0x1402493B8 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x140249550 (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x140249750 (DpiSriovEventComplete.c)
 *     DpiSriovNotification @ 0x140249844 (DpiSriovNotification.c)
 *     DpiFdoGetVirtualGpuType @ 0x140405578 (DpiFdoGetVirtualGpuType.c)
 *     DpiIndirectDdiIoControl @ 0x140428580 (DpiIndirectDdiIoControl.c)
 */

NTSTATUS __fastcall DpiFdoDispatchIoctl(struct _DEVICE_OBJECT *a1, struct _IRP *a2, __int64 a3, __int64 a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  int v5; // edi
  PVOID DeviceExtension; // r13
  struct _DEVICE_OBJECT *v8; // rbx
  unsigned int Length; // edx
  unsigned int Options; // ecx
  __int64 LowPart; // r15
  NTSTATUS VirtualGpu; // ebx
  struct _IRP *MasterIrp; // rsi
  int v14; // ebx
  ADAPTER_RENDER **v15; // rcx
  __int64 v16; // r9
  int GpuPartitionInfo; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  bool IsPostDevice; // al
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // r15
  _QWORD *v26; // rcx
  unsigned int v27; // eax
  _QWORD *v28; // rcx
  __int64 v29; // xmm1_8
  NTSTATUS VirtualizationFlags; // eax
  unsigned int v31; // eax
  int v32; // ebx
  int v33; // r15d
  int v34; // r15d
  int v35; // r15d
  int v36; // r15d
  int v37; // r15d
  int v38; // r15d
  int v39; // eax
  NTSTATUS DirtyBitplane; // eax
  int v41; // eax
  int v42; // r9d
  __int64 v43; // rax
  unsigned int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned int v47; // ebx
  unsigned int v48; // eax
  __int64 v49; // rbx
  unsigned int v50; // r15d
  unsigned __int8 v51; // zf
  __int64 *v52; // r13
  char v53; // cl
  char v54; // r9
  int v55; // eax
  int v56; // eax
  int v57; // r15d
  int v58; // r15d
  int v59; // r15d
  int v60; // r15d
  int v61; // r15d
  int v62; // r15d
  int v63; // eax
  int v64; // eax
  __int64 v65; // r15
  int v66; // eax
  NTSTATUS TransferSize; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // r15d
  int v72; // r15d
  int v73; // r15d
  int v74; // r15d
  int v75; // r15d
  int v76; // r15d
  int v78; // eax
  int v79; // eax
  int VirtualGpuType; // eax
  __int64 MdlAddress; // [rsp+30h] [rbp-D0h]
  __int64 v82; // [rsp+40h] [rbp-C0h]
  __int64 v83; // [rsp+40h] [rbp-C0h]
  __int64 v84; // [rsp+40h] [rbp-C0h]
  __int64 v85; // [rsp+40h] [rbp-C0h]
  __int64 v86; // [rsp+40h] [rbp-C0h]
  __int64 v87; // [rsp+40h] [rbp-C0h]
  __int64 v88; // [rsp+40h] [rbp-C0h]
  __int64 v89; // [rsp+40h] [rbp-C0h]
  __int64 v90; // [rsp+40h] [rbp-C0h]
  __int64 v91; // [rsp+40h] [rbp-C0h]
  __int64 v92; // [rsp+40h] [rbp-C0h]
  __int64 v93; // [rsp+40h] [rbp-C0h]
  __int64 v94; // [rsp+40h] [rbp-C0h]
  __int64 v95; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v96; // [rsp+50h] [rbp-B0h] BYREF
  struct _DEVICE_OBJECT *v97; // [rsp+58h] [rbp-A8h]
  _BYTE v98[16]; // [rsp+60h] [rbp-A0h] BYREF
  void *v99; // [rsp+70h] [rbp-90h]
  int v100; // [rsp+80h] [rbp-80h]
  _QWORD v101[4]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int Type; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v103[41]; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v104[306]; // [rsp+160h] [rbp+60h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  DeviceExtension = a1->DeviceExtension;
  v8 = a1;
  v97 = a1;
  v96 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v95 = __PAIR64__(Length, Options);
  if ( *((_BYTE *)DeviceExtension + 1158) && (!*((_BYTE *)DeviceExtension + 1159) || (_DWORD)LowPart != 2345988) )
  {
    VirtualGpu = -1073741637;
    WdLogSingleEntry1(2LL, -1073741637LL);
    WdLogGlobalForLineNumber = 3901;
LABEL_287:
    a2->IoStatus.Information = v96;
    a2->IoStatus.Status = VirtualGpu;
    IofCompleteRequest(a2, 1);
    return VirtualGpu;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( (unsigned int)LowPart > 0x22646C )
  {
    if ( (unsigned int)LowPart > 0x22648C )
    {
      v71 = LowPart - 2253968;
      if ( !v71 )
      {
        if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
        {
          v94 = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1u;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
            v94,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v94,
            3,
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
          v8 = v97;
          Options = v95;
        }
        if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
        {
          VirtualGpu = -1073741637;
          WdLogSingleEntry1(2LL, -1073741637LL);
          WdLogGlobalForLineNumber = 4912;
          goto LABEL_287;
        }
        if ( Options < 0x20 || !MasterIrp )
        {
          VirtualGpu = -1073741789;
          WdLogSingleEntry1(2LL, -1073741789LL);
          WdLogGlobalForLineNumber = 4921;
          goto LABEL_287;
        }
        LOBYTE(a4) = 1;
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
        VirtualGpu = v100;
        if ( v100 < 0 )
          goto LABEL_283;
        VirtualGpuType = DpiFdoGetVirtualGpuType(a2);
        DirtyBitplane = DxgkDdiWriteVirtualizedInterrupt(
                          *((_QWORD **)DeviceExtension + 504),
                          VirtualGpuType,
                          (struct _LUID *)MasterIrp,
                          (__int16)MasterIrp->MdlAddress,
                          (__int64)&MasterIrp->Flags);
        goto LABEL_282;
      }
      v72 = v71 - 4;
      if ( v72 )
      {
        v73 = v72 - 4;
        if ( !v73 )
        {
          if ( Options < 8 || !MasterIrp || Length < 4 )
          {
            VirtualGpu = -1073741789;
            WdLogSingleEntry1(2LL, -1073741789LL);
            WdLogGlobalForLineNumber = 4949;
            goto LABEL_284;
          }
          LOBYTE(a4) = 1;
          CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
          VirtualGpu = v100;
          if ( v100 >= 0 )
          {
            v78 = DpiFdoGetVirtualGpuType(a2);
            *(_DWORD *)&MasterIrp->Type = 0;
            if ( !v78 )
              *(_DWORD *)&MasterIrp->Type = (*((_DWORD *)DeviceExtension + 1398) >> 2) & 1;
            v96 = 4LL;
          }
          goto LABEL_283;
        }
        v74 = v73 - 940;
        if ( v74 )
        {
          v75 = v74 - 4;
          if ( v75 )
          {
            v76 = v75 - 20;
            if ( v76 )
            {
              if ( v76 != 91048 )
                goto LABEL_248;
              HIDWORD(v95) = 0;
              VirtualizationFlags = DpiIndirectDdiIoControl(
                                      (_DWORD)DeviceExtension,
                                      Options,
                                      (_DWORD)MasterIrp,
                                      Length,
                                      (__int64)MasterIrp,
                                      (__int64)&v95 + 4);
            }
            else
            {
              VirtualizationFlags = DpiFlexIovMitigationUpdate(v8, a2, (__int64)MasterIrp, Length);
            }
          }
          else
          {
            VirtualizationFlags = DpiSetPartitionFlexIovVmbus(v8, a2, a2->AssociatedIrp.MasterIrp, Options);
          }
        }
        else
        {
          if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
          {
            VirtualGpu = -1073741790;
            WdLogSingleEntry1(2LL, -1073741790LL);
            WdLogGlobalForLineNumber = 4437;
            goto LABEL_287;
          }
          DpiFdoGetVirtualGpuType(a2);
          VirtualizationFlags = DpiGetVirtualizationFlags(v8, (__int64)MasterIrp, SHIDWORD(v95), (__int64)&v96);
        }
        goto LABEL_111;
      }
      if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
      {
        v93 = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1u;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
          v93,
          3LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v93,
          3,
          (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
        Length = HIDWORD(v95);
        v8 = v97;
        Options = v95;
      }
      if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
      {
        VirtualGpu = -1073741637;
        WdLogSingleEntry1(2LL, -1073741637LL);
        WdLogGlobalForLineNumber = 4701;
        goto LABEL_287;
      }
      v65 = 8LL;
      if ( Options < 8 || !MasterIrp || Length < 8 )
      {
        VirtualGpu = -1073741789;
        WdLogSingleEntry1(2LL, -1073741789LL);
        WdLogGlobalForLineNumber = 4712;
        goto LABEL_284;
      }
      LOBYTE(a4) = 1;
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
      VirtualGpu = v100;
      if ( v100 < 0 )
        goto LABEL_283;
      v79 = DpiFdoGetVirtualGpuType(a2);
      TransferSize = DxgkLiveMigrationGetTransferSize(
                       *((_QWORD **)DeviceExtension + 504),
                       v79,
                       (struct _LUID *)MasterIrp,
                       (__int64 *)&MasterIrp->Type);
    }
    else
    {
      if ( (_DWORD)LowPart == 2253964 )
      {
        if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
        {
          v92 = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1u;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
            v92,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v92,
            3,
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
          v8 = v97;
          Options = v95;
        }
        if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
        {
          VirtualGpu = -1073741637;
          WdLogSingleEntry1(2LL, -1073741637LL);
          WdLogGlobalForLineNumber = 4880;
          goto LABEL_287;
        }
        if ( Options < 8 || !MasterIrp )
        {
          VirtualGpu = -1073741789;
          WdLogSingleEntry1(2LL, -1073741789LL);
          WdLogGlobalForLineNumber = 4889;
          goto LABEL_284;
        }
        LOBYTE(a4) = 1;
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
        VirtualGpu = v100;
        if ( v100 < 0 )
          goto LABEL_283;
        v70 = DpiFdoGetVirtualGpuType(a2);
        DirtyBitplane = DxgkDdiEndLiveMigration(*((_QWORD **)DeviceExtension + 504), v70, (struct _LUID *)MasterIrp);
        goto LABEL_282;
      }
      v57 = LowPart - 2253936;
      if ( !v57 )
      {
        if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
        {
          v91 = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1u;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
            v91,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v91,
            3,
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
          Length = HIDWORD(v95);
          v8 = v97;
          Options = v95;
        }
        if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
        {
          VirtualGpu = -1073741637;
          WdLogSingleEntry1(2LL, -1073741637LL);
          WdLogGlobalForLineNumber = 4663;
          goto LABEL_287;
        }
        if ( Options < 0xC || !MasterIrp || Length < 4 )
        {
          VirtualGpu = -1073741789;
          WdLogSingleEntry1(2LL, -1073741789LL);
          WdLogGlobalForLineNumber = 4674;
          goto LABEL_284;
        }
        LOBYTE(a4) = 1;
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
        VirtualGpu = v100;
        if ( v100 < 0 )
          goto LABEL_283;
        v69 = DpiFdoGetVirtualGpuType(a2);
        DirtyBitplane = DxgkDdiGetDirtyBitplane(
                          *((_QWORD **)DeviceExtension + 504),
                          v69,
                          (struct _LUID *)MasterIrp,
                          (unsigned int)MasterIrp->MdlAddress);
        *(_DWORD *)&MasterIrp->Type = DirtyBitplane;
        v96 = 4LL;
        goto LABEL_282;
      }
      v58 = v57 - 4;
      if ( !v58 )
      {
        v65 = 16LL;
        if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
        {
          v90 = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1u;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
            v90,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v90,
            3,
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
          Length = HIDWORD(v95);
          v8 = v97;
          Options = v95;
        }
        if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
        {
          VirtualGpu = -1073741637;
          WdLogSingleEntry1(2LL, -1073741637LL);
          WdLogGlobalForLineNumber = 4741;
          goto LABEL_287;
        }
        if ( Options < 0xC || !MasterIrp || Length < 0x10 )
        {
          VirtualGpu = -1073741789;
          WdLogSingleEntry1(2LL, -1073741789LL);
          WdLogGlobalForLineNumber = 4752;
          goto LABEL_284;
        }
        LOBYTE(a4) = 1;
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
        VirtualGpu = v100;
        if ( v100 < 0 )
          goto LABEL_283;
        v68 = DpiFdoGetVirtualGpuType(a2);
        VirtualGpu = DxgkFillBufferWithDirty(
                       *((_QWORD **)DeviceExtension + 504),
                       v68,
                       (struct _LUID *)MasterIrp,
                       (unsigned int)MasterIrp->MdlAddress,
                       (__int64)MasterIrp);
        LODWORD(MasterIrp->MdlAddress) = VirtualGpu;
        goto LABEL_200;
      }
      v59 = v58 - 4;
      if ( !v59 )
      {
        if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
        {
          v89 = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1u;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
            v89,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v89,
            3,
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
          v8 = v97;
          Options = v95;
        }
        if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
        {
          VirtualGpu = -1073741637;
          WdLogSingleEntry1(2LL, -1073741637LL);
          WdLogGlobalForLineNumber = 4783;
          goto LABEL_287;
        }
        if ( Options < 0x10 || !MasterIrp )
        {
          VirtualGpu = -1073741789;
          WdLogSingleEntry1(2LL, -1073741789LL);
          WdLogGlobalForLineNumber = 4792;
          goto LABEL_284;
        }
        VirtualizationFlags = DpiLiveMigrationWaitForFence(
                                v8,
                                a2,
                                (__int64)MasterIrp,
                                (__int64)MasterIrp->MdlAddress,
                                0);
        goto LABEL_111;
      }
      v60 = v59 - 4;
      if ( v60 )
      {
        v61 = v60 - 4;
        if ( v61 )
        {
          v62 = v61 - 4;
          if ( v62 )
          {
            if ( v62 != 4 )
              goto LABEL_248;
            if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
            {
              v85 = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1u;
              wil_details_FeatureReporting_ReportUsageToService(
                (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
                v85,
                3LL);
              wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
                v85,
                3,
                (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
              v8 = v97;
              Options = v95;
            }
            if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
            {
              VirtualGpu = -1073741637;
              WdLogSingleEntry1(2LL, -1073741637LL);
              WdLogGlobalForLineNumber = 4629;
              goto LABEL_287;
            }
            if ( Options < 0x18 || !MasterIrp )
            {
              VirtualGpu = -1073741789;
              WdLogSingleEntry1(2LL, -1073741789LL);
              WdLogGlobalForLineNumber = 4638;
              goto LABEL_284;
            }
            LOBYTE(a4) = 1;
            CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
            VirtualGpu = v100;
            if ( v100 < 0 )
              goto LABEL_283;
            v63 = DpiFdoGetVirtualGpuType(a2);
            DirtyBitplane = DxgkDdiRestoreMutableMigrationData(
                              *((_QWORD **)DeviceExtension + 504),
                              v63,
                              (struct _LUID *)MasterIrp,
                              (__int64)MasterIrp->MdlAddress,
                              *(_QWORD *)&MasterIrp->Flags);
          }
          else
          {
            if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
            {
              v86 = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1u;
              wil_details_FeatureReporting_ReportUsageToService(
                (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
                v86,
                3LL);
              wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
                v86,
                3,
                (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
              v8 = v97;
              Options = v95;
            }
            if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
            {
              VirtualGpu = -1073741637;
              WdLogSingleEntry1(2LL, -1073741637LL);
              WdLogGlobalForLineNumber = 4595;
              goto LABEL_287;
            }
            if ( Options < 0x18 || !MasterIrp )
            {
              VirtualGpu = -1073741789;
              WdLogSingleEntry1(2LL, -1073741789LL);
              WdLogGlobalForLineNumber = 4604;
              goto LABEL_284;
            }
            LOBYTE(a4) = 1;
            CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
            VirtualGpu = v100;
            if ( v100 < 0 )
              goto LABEL_283;
            v64 = DpiFdoGetVirtualGpuType(a2);
            DirtyBitplane = DxgkDdiSaveMutableMigrationData(
                              *((_QWORD **)DeviceExtension + 504),
                              v64,
                              (struct _LUID *)MasterIrp,
                              (__int64)MasterIrp->MdlAddress,
                              *(_QWORD *)&MasterIrp->Flags);
          }
          goto LABEL_282;
        }
        if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
        {
          v87 = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1u;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
            v87,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v87,
            3,
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
          v8 = v97;
          Options = v95;
        }
        if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
        {
          VirtualGpu = -1073741637;
          WdLogSingleEntry1(2LL, -1073741637LL);
          WdLogGlobalForLineNumber = 4852;
          goto LABEL_287;
        }
        if ( Options < 0x10 || !MasterIrp )
        {
          VirtualGpu = -1073741789;
          WdLogSingleEntry1(2LL, -1073741789LL);
          WdLogGlobalForLineNumber = 4861;
          goto LABEL_284;
        }
        VirtualizationFlags = DpiLiveMigrationWaitForFence(
                                v8,
                                a2,
                                (__int64)MasterIrp,
                                (__int64)MasterIrp->MdlAddress,
                                1);
LABEL_111:
        VirtualGpu = VirtualizationFlags;
        goto LABEL_284;
      }
      if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
      {
        v88 = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1u;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
          v88,
          3LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v88,
          3,
          (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
        Length = HIDWORD(v95);
        v8 = v97;
        Options = v95;
      }
      if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
      {
        VirtualGpu = -1073741637;
        WdLogSingleEntry1(2LL, -1073741637LL);
        WdLogGlobalForLineNumber = 4811;
        goto LABEL_287;
      }
      if ( Options < 0xC || !MasterIrp || (v65 = 8LL, Length < 8) )
      {
        VirtualGpu = -1073741789;
        WdLogSingleEntry1(2LL, -1073741789LL);
        WdLogGlobalForLineNumber = 4822;
        goto LABEL_284;
      }
      LOBYTE(a4) = 1;
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
      VirtualGpu = v100;
      if ( v100 < 0 )
        goto LABEL_283;
      v66 = DpiFdoGetVirtualGpuType(a2);
      TransferSize = DxgkSendDirtyToVRAM(
                       *((_QWORD **)DeviceExtension + 504),
                       v66,
                       (struct _LUID *)MasterIrp,
                       (unsigned int)MasterIrp->MdlAddress,
                       (__int64)MasterIrp);
    }
    VirtualGpu = TransferSize;
LABEL_200:
    v46 = v96;
    if ( VirtualGpu >= 0 )
      v46 = v65;
    goto LABEL_108;
  }
  if ( (_DWORD)LowPart == 2253932 )
  {
    if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
    {
      v84 = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1u;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
        v84,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v84,
        3,
        (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
      v8 = v97;
      Options = v95;
    }
    if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
    {
      VirtualGpu = -1073741637;
      WdLogSingleEntry1(2LL, -1073741637LL);
      WdLogGlobalForLineNumber = 4560;
      goto LABEL_287;
    }
    if ( Options < 0x18 || !MasterIrp )
    {
      VirtualGpu = -1073741789;
      WdLogSingleEntry1(2LL, -1073741789LL);
      WdLogGlobalForLineNumber = 4569;
      goto LABEL_284;
    }
    LOBYTE(a4) = 1;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
    VirtualGpu = v100;
    if ( v100 < 0 )
      goto LABEL_283;
    v56 = DpiFdoGetVirtualGpuType(a2);
    DirtyBitplane = DxgkDdiRestoreImmutableMigrationData(
                      *((_QWORD **)DeviceExtension + 504),
                      v56,
                      (struct _LUID *)MasterIrp,
                      (__int64)MasterIrp->MdlAddress,
                      *(_QWORD *)&MasterIrp->Flags);
    goto LABEL_282;
  }
  if ( (unsigned int)LowPart > 0x226448 )
  {
    v33 = LowPart - 2253900;
    if ( !v33 )
    {
      if ( a2->RequestorMode )
      {
        if ( !DxgkpCheckProcessForVirtualMachineManagementAccess() )
        {
          VirtualGpu = -1073741790;
          WdLogSingleEntry1(2LL, -1073741790LL);
          WdLogGlobalForLineNumber = 4065;
          goto LABEL_287;
        }
        Options = v95;
      }
      if ( Options < 2 || !MasterIrp )
      {
        VirtualGpu = -1073741789;
        WdLogSingleEntry1(2LL, -1073741789LL);
        WdLogGlobalForLineNumber = 4076;
        goto LABEL_284;
      }
      LOBYTE(a4) = 1;
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
      VirtualGpu = v100;
      if ( v100 < 0 )
        goto LABEL_283;
      v55 = DpiFdoGetVirtualGpuType(a2);
      HIDWORD(v95) = (unsigned __int16)MasterIrp->Type;
      DirtyBitplane = DxgkDdiSetGpuPartitionCount(
                        *((ADAPTER_RENDER ***)DeviceExtension + 504),
                        v55,
                        (unsigned int *)&v95 + 1);
      goto LABEL_282;
    }
    v34 = v33 - 8;
    if ( !v34 )
    {
      if ( a2->RequestorMode )
      {
        if ( !DxgkpCheckProcessForVirtualMachineManagementAccess() )
        {
          VirtualGpu = -1073741790;
          WdLogSingleEntry1(2LL, -1073741790LL);
          WdLogGlobalForLineNumber = 4100;
          goto LABEL_287;
        }
        Options = v95;
        Length = HIDWORD(v95);
      }
      if ( Options < 0x78 || !MasterIrp || Length < 0x88 )
      {
        VirtualGpu = -1073741789;
        WdLogSingleEntry1(2LL, -1073741789LL);
        WdLogGlobalForLineNumber = 4113;
        goto LABEL_284;
      }
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, 0LL, 0, 1);
      VirtualGpu = v100;
      if ( v100 < 0 )
        goto LABEL_283;
      v48 = DpiFdoGetVirtualGpuType(a2);
      v49 = *(_QWORD *)&MasterIrp->Flags;
      v50 = v48;
      if ( v49 || MasterIrp->AssociatedIrp.MasterIrp || MasterIrp->ThreadListEntry.Flink )
      {
        memset(v104, 0, sizeof(v104));
        v51 = BYTE2(MasterIrp->UserBuffer) == 0;
        v52 = (__int64 *)v99;
        LODWORD(v104[0]) = (unsigned __int16)MasterIrp->Type;
        v53 = !v51;
        v51 = BYTE1(MasterIrp->UserBuffer) == 0;
        v104[2] = (__int64)MasterIrp->AssociatedIrp.MasterIrp;
        v54 = !v51;
        v51 = LOBYTE(MasterIrp->UserBuffer) == 0;
        v104[3] = (__int64)MasterIrp->ThreadListEntry.Flink;
        v104[4] = (__int64)MasterIrp->ThreadListEntry.Blink;
        v104[5] = (__int64)MasterIrp->IoStatus.Pointer;
        v104[6] = MasterIrp->IoStatus.Information;
        v104[7] = *(_QWORD *)&MasterIrp->RequestorMode;
        v104[8] = (__int64)MasterIrp->UserIosb;
        v104[9] = (__int64)MasterIrp->UserEvent;
        v104[10] = MasterIrp->Overlay.AllocationSize.QuadPart;
        v104[11] = (__int64)MasterIrp->Overlay.AsynchronousParameters.UserApcContext;
        v104[12] = (__int64)MasterIrp->CancelRoutine;
        MdlAddress = (__int64)MasterIrp->MdlAddress;
        v104[1] = v49;
        VirtualGpu = DxgkDdiCreateVirtualGpu(v99, v50, v51, v54, v53, (unsigned int *)v104, MdlAddress);
        if ( VirtualGpu >= 0 )
        {
          memset(v103, 0, 0x64uLL);
          Type = v104[0];
          VirtualGpu = DxgkDdiGetVirtualGpuInfo(
                         v52,
                         v50,
                         &Type,
                         (PMDL *)((char *)&MasterIrp->MdlAddress + 4),
                         &MasterIrp->Flags + 1);
          if ( VirtualGpu < 0 )
          {
            HIDWORD(v95) = v104[0];
            DxgkDdiDestroyVirtualGpu(v52, v50, (unsigned int *)&v95 + 1, 1);
          }
          else
          {
            LOWORD(MasterIrp->MdlAddress) = v104[0];
            MasterIrp->ThreadListEntry.Blink = *(struct _LIST_ENTRY **)&v103[1];
            MasterIrp->IoStatus.Pointer = *(PVOID *)&v103[3];
            MasterIrp->IoStatus.Information = *(_QWORD *)&v103[5];
            *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v103[7];
            MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v103[9];
            MasterIrp->UserEvent = *(PKEVENT *)&v103[11];
            MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v103[13];
            MasterIrp->Overlay.AsynchronousParameters.UserApcContext = *(PVOID *)&v103[15];
            MasterIrp->CancelRoutine = *(PDRIVER_CANCEL *)&v103[17];
            MasterIrp->UserBuffer = *(PVOID *)&v103[19];
            MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = *(struct _LIST_ENTRY **)&v103[21];
            MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = *(struct _LIST_ENTRY **)&v103[23];
            v96 = 136LL;
          }
        }
        goto LABEL_283;
      }
      HIDWORD(v95) = (unsigned __int16)MasterIrp->Type;
      DirtyBitplane = DxgkDdiDestroyVirtualGpu(v99, v48, (unsigned int *)&v95 + 1, 1);
      goto LABEL_282;
    }
    v35 = v34 - 4;
    if ( !v35 )
    {
      if ( Options < 2 || !MasterIrp || (v25 = 128LL, Length < 0x80) )
      {
        VirtualGpu = -1073741789;
        WdLogSingleEntry1(2LL, -1073741789LL);
        WdLogGlobalForLineNumber = 4222;
        goto LABEL_284;
      }
      LOBYTE(a4) = 1;
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
      VirtualGpu = v100;
      if ( v100 < 0 )
        goto LABEL_283;
      v47 = DpiFdoGetVirtualGpuType(a2);
      memset(v103, 0, 0x64uLL);
      Type = (unsigned __int16)MasterIrp->Type;
      VirtualGpu = DxgkDdiGetVirtualGpuInfo(
                     *((__int64 **)DeviceExtension + 504),
                     v47,
                     &Type,
                     &MasterIrp->Size + 1,
                     (PMDL *)((char *)&MasterIrp->MdlAddress + 4));
      if ( VirtualGpu < 0 )
        goto LABEL_283;
      MasterIrp->Type = Type;
      MasterIrp->ThreadListEntry.Flink = *(struct _LIST_ENTRY **)&v103[1];
      MasterIrp->ThreadListEntry.Blink = *(struct _LIST_ENTRY **)&v103[3];
      MasterIrp->IoStatus.Pointer = *(PVOID *)&v103[5];
      MasterIrp->IoStatus.Information = *(_QWORD *)&v103[7];
      *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v103[9];
      MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v103[11];
      MasterIrp->UserEvent = *(PKEVENT *)&v103[13];
      MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v103[15];
      MasterIrp->Overlay.AsynchronousParameters.UserApcContext = *(PVOID *)&v103[17];
      MasterIrp->CancelRoutine = *(PDRIVER_CANCEL *)&v103[19];
      MasterIrp->UserBuffer = *(PVOID *)&v103[21];
      MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = *(struct _LIST_ENTRY **)&v103[23];
LABEL_45:
      v96 = v25;
      goto LABEL_283;
    }
    v36 = v35 - 4;
    if ( !v36 )
    {
      VirtualizationFlags = DpiSetPartitionVmbus(v8, a2, a2->AssociatedIrp.MasterIrp, Options);
      goto LABEL_111;
    }
    v37 = v36 - 4;
    if ( v37 )
    {
      v38 = v37 - 4;
      if ( !v38 )
      {
        if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
        {
          v83 = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1u;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
            v83,
            3LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v83,
            3,
            (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
          Length = HIDWORD(v95);
          v8 = v97;
          Options = v95;
        }
        if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
        {
          VirtualGpu = -1073741637;
          WdLogSingleEntry1(2LL, -1073741637LL);
          WdLogGlobalForLineNumber = 4474;
          goto LABEL_287;
        }
        if ( Options < 0xC || !MasterIrp || Length < 0x20 )
        {
          VirtualGpu = -1073741789;
          WdLogSingleEntry1(2LL, -1073741789LL);
          WdLogGlobalForLineNumber = 4485;
          goto LABEL_284;
        }
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, 0LL, 0, 1);
        VirtualGpu = v100;
        if ( v100 < 0 )
          goto LABEL_283;
        v41 = DpiFdoGetVirtualGpuType(a2);
        v42 = (int)MasterIrp->MdlAddress;
        LODWORD(v95) = (HIDWORD(v95) - 8) / 0x18u;
        VirtualGpu = DxgkDdiPrepareLiveMigration(
                       v99,
                       v41,
                       (struct _LUID *)MasterIrp,
                       v42,
                       (__int64)&MasterIrp->MdlAddress,
                       (unsigned int *)&v95);
        v43 = (unsigned int)v95;
        *(_DWORD *)&MasterIrp->Type = v95;
        if ( VirtualGpu < 0 )
          goto LABEL_283;
        v22 = 24 * v43 + 8;
        goto LABEL_27;
      }
      if ( v38 != 4 )
      {
LABEL_248:
        ++a2->CurrentLocation;
        a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
        return IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), a2);
      }
      if ( (Feature_GpupLiveMigration_dxgkrnl__private_featureState & 0x10) == 0 )
      {
        v82 = Feature_GpupLiveMigration_dxgkrnl__private_featureState | 1u;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor,
          v82,
          3LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v82,
          3,
          (__int64)&Feature_GpupLiveMigration_dxgkrnl__private_descriptor);
        v8 = v97;
        Options = v95;
      }
      if ( (*((_DWORD *)DeviceExtension + 1398) & 4) == 0 )
      {
        VirtualGpu = -1073741637;
        WdLogSingleEntry1(2LL, -1073741637LL);
        WdLogGlobalForLineNumber = 4526;
        goto LABEL_287;
      }
      if ( Options < 0x18 || !MasterIrp )
      {
        VirtualGpu = -1073741789;
        WdLogSingleEntry1(2LL, -1073741789LL);
        WdLogGlobalForLineNumber = 4535;
        goto LABEL_284;
      }
      LOBYTE(a4) = 1;
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
      VirtualGpu = v100;
      if ( v100 < 0 )
        goto LABEL_283;
      v39 = DpiFdoGetVirtualGpuType(a2);
      DirtyBitplane = DxgkDdiSaveImmutableMigrationData(
                        *((_QWORD **)DeviceExtension + 504),
                        v39,
                        (struct _LUID *)MasterIrp,
                        (__int64)MasterIrp->MdlAddress,
                        *(_QWORD *)&MasterIrp->Flags);
LABEL_282:
      VirtualGpu = DirtyBitplane;
      goto LABEL_283;
    }
    if ( Options < 8 || !MasterIrp )
    {
      VirtualGpu = -1073741789;
      WdLogSingleEntry1(2LL, -1073741789LL);
      WdLogGlobalForLineNumber = 4274;
      goto LABEL_284;
    }
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, 0LL, 1, 0);
    VirtualGpu = v100;
    if ( v100 < 0 )
      goto LABEL_283;
    v44 = DpiFdoGetVirtualGpuType(a2);
    v45 = *((_QWORD *)DeviceExtension + 504);
    *(_QWORD *)((char *)v101 + 4) = v95;
    LODWORD(v101[0]) = 0;
    HIDWORD(v101[1]) = 0;
    v101[2] = MasterIrp;
    v101[3] = MasterIrp;
    VirtualGpu = DxgkDdiVirtualGpuDriverEscape(v45, v44, (__int64)MasterIrp, v101);
    if ( VirtualGpu < 0 )
      goto LABEL_283;
    v46 = LODWORD(v101[1]);
LABEL_108:
    v96 = v46;
    goto LABEL_283;
  }
  switch ( (_DWORD)LowPart )
  {
    case 0x226448:
      if ( Options < 2 || !MasterIrp || (v25 = 168LL, Length < 0xA8) )
      {
        VirtualGpu = -1073741789;
        WdLogSingleEntry1(2LL, -1073741789LL);
        WdLogGlobalForLineNumber = 4010;
        goto LABEL_284;
      }
      LOBYTE(a4) = 1;
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
      VirtualGpu = v100;
      if ( v100 < 0 )
        goto LABEL_283;
      v32 = DpiFdoGetVirtualGpuType(a2);
      memset(v103, 0, sizeof(v103));
      Type = (unsigned __int16)MasterIrp->Type;
      VirtualGpu = DxgkDdiGetVirtualGpuProfile(*((ADAPTER_RENDER ***)DeviceExtension + 504), v32, &Type);
      if ( VirtualGpu < 0 )
        goto LABEL_283;
      *(_DWORD *)&MasterIrp->Type = Type;
      *(_DWORD *)(&MasterIrp->Size + 1) = v103[0];
      MasterIrp->MdlAddress = *(PMDL *)&v103[1];
      *(_QWORD *)&MasterIrp->Flags = *(_QWORD *)&v103[3];
      MasterIrp->AssociatedIrp.MasterIrp = *(struct _IRP **)&v103[5];
      MasterIrp->ThreadListEntry.Flink = *(struct _LIST_ENTRY **)&v103[7];
      MasterIrp->ThreadListEntry.Blink = *(struct _LIST_ENTRY **)&v103[9];
      MasterIrp->IoStatus.Pointer = *(PVOID *)&v103[11];
      MasterIrp->IoStatus.Information = *(_QWORD *)&v103[13];
      *(_QWORD *)&MasterIrp->RequestorMode = *(_QWORD *)&v103[15];
      MasterIrp->UserIosb = *(PIO_STATUS_BLOCK *)&v103[17];
      MasterIrp->UserEvent = *(PKEVENT *)&v103[19];
      MasterIrp->Overlay.AllocationSize.QuadPart = *(_QWORD *)&v103[21];
      MasterIrp->Overlay.AsynchronousParameters.UserApcContext = *(PVOID *)&v103[23];
      MasterIrp->CancelRoutine = *(PDRIVER_CANCEL *)&v103[25];
      MasterIrp->UserBuffer = *(PVOID *)&v103[27];
      MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = *(struct _LIST_ENTRY **)&v103[29];
      MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = *(struct _LIST_ENTRY **)&v103[31];
      MasterIrp->Tail.Overlay.DriverContext[2] = *(PVOID *)&v103[33];
      MasterIrp->Tail.Overlay.DriverContext[3] = *(PVOID *)&v103[35];
      MasterIrp->Tail.Overlay.Thread = *(PETHREAD *)&v103[37];
      MasterIrp->Tail.Overlay.AuxiliaryBuffer = *(PCHAR *)&v103[39];
      goto LABEL_45;
    case 0x226044:
      VirtualizationFlags = DpiSriovNotification(v8, a2);
      goto LABEL_111;
    case 0x226048:
      if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      {
        VirtualGpu = -1073741790;
        WdLogSingleEntry1(2LL, -1073741790LL);
        WdLogGlobalForLineNumber = 4422;
        goto LABEL_287;
      }
      v31 = DpiFdoGetVirtualGpuType(a2);
      VirtualizationFlags = DpiSriovEventComplete(v8, v31, MasterIrp, (unsigned int)v95);
      goto LABEL_111;
    case 0x22604C:
      VirtualizationFlags = DpiSriovAttach(v8, a2);
      goto LABEL_111;
    case 0x226050:
      if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      {
        VirtualGpu = -1073741790;
        WdLogSingleEntry1(2LL, -1073741790LL);
        WdLogGlobalForLineNumber = 4407;
        goto LABEL_287;
      }
      DpiFdoGetVirtualGpuType(a2);
      VirtualizationFlags = DpiSriovDetach(v8);
      goto LABEL_111;
    case 0x226054:
      VirtualGpu = -1073741637;
      goto LABEL_287;
    case 0x226058:
      if ( a2->RequestorMode )
      {
        if ( !DxgkpCheckProcessForVirtualMachineManagementAccess() )
        {
          VirtualGpu = -1073741790;
          WdLogSingleEntry1(2LL, -1073741790LL);
          WdLogGlobalForLineNumber = 4305;
          goto LABEL_287;
        }
        Options = v95;
        Length = HIDWORD(v95);
      }
      if ( Options < 2 || !MasterIrp || Length < 0x18 )
      {
        VirtualGpu = -1073741789;
        WdLogSingleEntry1(2LL, -1073741789LL);
        WdLogGlobalForLineNumber = 4316;
        goto LABEL_284;
      }
      LOBYTE(a4) = 1;
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
      VirtualGpu = v100;
      if ( v100 < 0 )
        goto LABEL_283;
      v27 = DpiFdoGetVirtualGpuType(a2);
      LODWORD(v101[0]) = (unsigned __int16)MasterIrp->Type;
      v28 = (_QWORD *)*((_QWORD *)DeviceExtension + 504);
      memset((char *)v101 + 4, 0, 24);
      VirtualGpu = DxgkDdiQueryMitigatedRangeCount(v28, v27, (unsigned int *)v101);
      if ( VirtualGpu < 0 )
        goto LABEL_283;
      v29 = *(_QWORD *)((char *)&v101[2] + 4);
      *(_OWORD *)&MasterIrp->Type = *(_OWORD *)((char *)v101 + 4);
      *(_QWORD *)&MasterIrp->Flags = v29;
      goto LABEL_34;
    case 0x22605C:
      if ( a2->RequestorMode )
      {
        if ( !DxgkpCheckProcessForVirtualMachineManagementAccess() )
        {
          VirtualGpu = -1073741790;
          WdLogSingleEntry1(2LL, -1073741790LL);
          WdLogGlobalForLineNumber = 4347;
          goto LABEL_287;
        }
        Options = v95;
        Length = HIDWORD(v95);
      }
      if ( Options < 4 || !MasterIrp || Length < 0x10 )
      {
        VirtualGpu = -1073741789;
        WdLogSingleEntry1(2LL, -1073741789LL);
        WdLogGlobalForLineNumber = 4358;
        goto LABEL_284;
      }
      LOBYTE(a4) = 1;
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
      VirtualGpu = v100;
      if ( v100 < 0 )
        goto LABEL_283;
      v24 = DpiFdoGetVirtualGpuType(a2);
      v25 = HIDWORD(v95);
      v26 = (_QWORD *)*((_QWORD *)DeviceExtension + 504);
      LODWORD(v101[0]) = (unsigned __int16)MasterIrp->Type;
      HIDWORD(v101[0]) = LOBYTE(MasterIrp->Size);
      v101[1] = HIDWORD(v95) >> 4;
      v101[2] = MasterIrp;
      VirtualGpu = DxgkDdiQueryMitigatedRanges(v26, v24, (unsigned int *)v101);
      if ( VirtualGpu < 0 )
        goto LABEL_283;
      goto LABEL_45;
  }
  if ( (_DWORD)LowPart != 2253892 )
    goto LABEL_248;
  LOBYTE(a4) = 1;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, v8, a2, a4, 0, 0);
  VirtualGpu = v100;
  if ( v100 >= 0 )
  {
    HIDWORD(v101[0]) = 0;
    v101[2] = 0LL;
    if ( !MasterIrp || (v14 = HIDWORD(v95), HIDWORD(v95) < 0x18) )
    {
      WdLogSingleEntry1(3LL, LowPart);
      WdLogGlobalForLineNumber = 3928;
      VirtualGpu = -1073741789;
      goto LABEL_29;
    }
    LODWORD(v95) = DpiFdoGetVirtualGpuType(a2);
    v101[1] = &MasterIrp->Flags + 1;
    v15 = (ADAPTER_RENDER **)*((_QWORD *)DeviceExtension + 504);
    HIDWORD(v95) = (unsigned int)(HIDWORD(v95) - 20) >> 1;
    LODWORD(v101[0]) = (unsigned int)(v14 - 20) >> 1;
    GpuPartitionInfo = DxgkDdiGetGpuPartitionInfo(v15, v95, (struct _DXGKARG_GETGPUPARTITIONINFO *)v101, v16);
    VirtualGpu = GpuPartitionInfo;
    if ( GpuPartitionInfo >= 0 )
    {
      v18 = v101[0];
      if ( g_LimitNumberOfVfs && LODWORD(v101[0]) )
      {
        LODWORD(v101[0]) = 1;
        *(_WORD *)v101[1] = 1;
        v18 = v101[0];
        LOWORD(v101[2]) = 1;
      }
      if ( v18 <= HIDWORD(v95) && v18 )
      {
        v19 = (__int64)v97;
        *(_DWORD *)&MasterIrp->Type = v18;
        WORD2(MasterIrp->MdlAddress) = v101[2];
        IsPostDevice = DpiFdoIsPostDevice(v19);
        v21 = v95;
        LOBYTE(v5) = IsPostDevice;
        MasterIrp->Flags = MasterIrp->Flags & 0xFFFFFFFE | v5;
        DxgkDdiQueryPhysicalFunctionLuid(*((char **)DeviceExtension + 504), v21, (struct _LUID *)(&MasterIrp->Size + 1));
        v22 = (unsigned int)(2 * LODWORD(v101[0]) + 20);
LABEL_27:
        v96 = v22;
        goto LABEL_283;
      }
      WdLogSingleEntry1(3LL, LowPart);
      WdLogGlobalForLineNumber = 3953;
      VirtualGpu = -1073741811;
LABEL_29:
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v98);
      goto LABEL_287;
    }
    if ( GpuPartitionInfo != -1073741789 )
      goto LABEL_283;
    if ( !LODWORD(v101[0]) )
    {
      WdLogSingleEntry1(3LL, LowPart);
      WdLogGlobalForLineNumber = 3977;
      VirtualGpu = -1073741811;
      goto LABEL_283;
    }
    v23 = (__int64)v97;
    VirtualGpu = -2147483643;
    *(_DWORD *)&MasterIrp->Type = v101[0];
    WORD2(MasterIrp->MdlAddress) = v101[2];
    LOBYTE(v5) = DpiFdoIsPostDevice(v23);
    MasterIrp->Flags = MasterIrp->Flags & 0xFFFFFFFE | v5;
    RtlCopyLuid((PLUID)(&MasterIrp->Size + 1), (PLUID)DeviceExtension + 337);
LABEL_34:
    v96 = 24LL;
  }
LABEL_283:
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v98);
LABEL_284:
  if ( VirtualGpu != 259 )
    goto LABEL_287;
  return VirtualGpu;
}
