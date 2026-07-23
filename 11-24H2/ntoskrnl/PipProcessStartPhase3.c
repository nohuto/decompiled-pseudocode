/*
 * XREFs of PipProcessStartPhase3 @ 0x14097B0A4
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     SepAuditingForSubCategory @ 0x1404683D8 (SepAuditingForSubCategory.c)
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     PnpSetDeviceInstanceStartedEvent @ 0x14049FAF4 (PnpSetDeviceInstanceStartedEvent.c)
 *     PpvUtilTestStartedPdoStack @ 0x1404AE89C (PpvUtilTestStartedPdoStack.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x1404B86A4 (McTemplateK0dz_EtwWriteTransfer.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140791F38 (SepAdtIncorporatePerUserPolicy.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     PnpCheckDeviceIdsChanged @ 0x14088C928 (PnpCheckDeviceIdsChanged.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B6E6C (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiProcessQueryDeviceState @ 0x1408B91C4 (PiProcessQueryDeviceState.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14097B294 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiUpdateDevicePanel @ 0x14097B2F8 (PiUpdateDevicePanel.c)
 *     PnpSetPlugPlayEvent @ 0x14097B3B0 (PnpSetPlugPlayEvent.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     PiAuditDeviceStart @ 0x14097B680 (PiAuditDeviceStart.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14097B724 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PiCreateDriverSwDevices @ 0x14097B774 (PiCreateDriverSwDevices.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14097B874 (PiDcUpdateDeviceContainerMembership.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14097BDFC (PnpDeviceObjectToDeviceInstance.c)
 *     _CmSetDeviceRegProp @ 0x14097BE58 (_CmSetDeviceRegProp.c)
 *     PnpQueryID @ 0x140A28110 (PnpQueryID.c)
 *     PnpGenerateDeviceIdsHash @ 0x140A43E5C (PnpGenerateDeviceIdsHash.c)
 *     PpDevCfgProcessDevice @ 0x140A9A74C (PpDevCfgProcessDevice.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipProcessStartPhase3(__int64 a1, int a2, __int64 a3)
{
  int v3; // r14d
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r15
  _DWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  int DeviceState; // eax
  char v12; // al
  PVOID v13; // rcx
  PACCESS_TOKEN PrimaryToken; // r9
  PVOID v16; // r14
  PVOID v17; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // rdx
  bool v20; // r14
  WCHAR *v21; // rbx
  int v22; // r13d
  PVOID v23; // rsi
  int v24; // r12d
  int v25; // eax
  struct _KTHREAD *v26; // rax
  __int64 v27; // rcx
  int v28; // [rsp+50h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-31h] BYREF
  int v30; // [rsp+60h] [rbp-29h] BYREF
  int v31; // [rsp+64h] [rbp-25h] BYREF
  int v32; // [rsp+68h] [rbp-21h] BYREF
  int v33; // [rsp+6Ch] [rbp-1Dh] BYREF
  PVOID v34; // [rsp+70h] [rbp-19h] BYREF
  PVOID P; // [rsp+78h] [rbp-11h] BYREF
  PVOID v36; // [rsp+80h] [rbp-9h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-1h] BYREF
  char v39; // [rsp+100h] [rbp+77h] BYREF
  char v40; // [rsp+108h] [rbp+7Fh]

  v3 = a2;
  Handle = 0LL;
  v36 = 0LL;
  if ( (byte_140EEFF63 & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Start,
      a3,
      3,
      *(const wchar_t **)(a1 + 48));
  v5 = PiPnpRtlBeginOperation(&v36);
  if ( v5 >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    v8 = (_DWORD *)(a1 + 396);
    if ( (*(_DWORD *)(a1 + 396) & 0x20) == 0 )
    {
      v34 = 0LL;
      v32 = 0;
      P = 0LL;
      v33 = 0;
      *(_OWORD *)&SubjectContext.ClientToken = 0LL;
      if ( (int)PnpDeviceObjectToDeviceInstance(v7, &Handle, 131097LL) >= 0 )
      {
        PnpQueryID(a1, 1LL, &P, &v33);
        PnpQueryID(a1, 2LL, &v34, &v32);
        v16 = v34;
        v17 = P;
        PnpGenerateDeviceIdsHash(P, v34, a1 + 684);
        if ( v17 || v16 )
        {
          v28 = 0;
          v30 = 0;
          CurrentThread = KeGetCurrentThread();
          v39 = 0;
          v40 = 0;
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
          v19 = *(_QWORD *)(a1 + 48);
          v31 = 4;
          if ( (int)CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      v19,
                      (__int64)Handle,
                      0xBu,
                      (__int64)&v30,
                      (__int64)&v28,
                      (__int64)&v31,
                      0) >= 0
            && v30 == 4
            && v31 == 4 )
          {
            v20 = (v28 & 0x21) == 32;
          }
          else
          {
            v28 = 0;
            v20 = 1;
          }
          v21 = (WCHAR *)v34;
          v22 = v32;
          v23 = P;
          v24 = v33;
          if ( (v28 & 0x400) == 0 )
          {
            v25 = 0;
            if ( !P || (v25 = PnpCheckDeviceIdsChanged(a1, (__int64)Handle, (const WCHAR *)P, v33, 1, &v39), !v39) )
            {
              if ( v21 )
                v25 = PnpCheckDeviceIdsChanged(a1, (__int64)Handle, v21, v22, 0, &v39);
            }
            if ( v25 >= 0 && v39 )
            {
              v28 |= 0x400u;
              v20 = 1;
              v40 = 1;
            }
          }
          if ( v23 )
          {
            CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 2, 7, (__int64)v23, v24, 0);
            ExFreePoolWithTag(v23, 0);
          }
          if ( v21 )
          {
            CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 3, 7, (__int64)v21, v22, 0);
            ExFreePoolWithTag(v21, 0);
          }
          if ( v40 )
            CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 11, 4, (__int64)&v28, 4, 0);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          if ( v20 )
            PpDevCfgProcessDevice(a1, Handle, 0LL);
        }
        PnpSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          *(_QWORD *)(a1 + 48),
          1,
          (__int64)Handle,
          0LL,
          (__int64)DEVPKEY_Device_HardwareConfigurationIndex,
          7,
          (__int64)&PnpCurrentHardwareConfigurationIndex,
          4u,
          0);
        RtlInitUnicodeString((PUNICODE_STRING)&SubjectContext, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
        RtlGUIDFromString((PCUNICODE_STRING)&SubjectContext, (GUID *)(a1 + 664));
        PipSetDevNodeFlags(a1, 32LL);
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        PiDcUpdateDeviceContainerMembership(*(_QWORD *)(a1 + 48), Handle, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        PiUpdateDevicePanel(a1, Handle);
        ZwClose(Handle);
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v27, *(_QWORD *)(a1 + 48), 1);
        PnpSetPlugPlayEvent(&GUID_DEVICE_ENUMERATED, *(_QWORD *)(a1 + 32));
        v3 = a2;
        v8 = (_DWORD *)(a1 + 396);
      }
    }
    if ( (*v8 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9 )
    {
      v5 = -1073741823;
    }
    else
    {
      if ( v3 )
        PipSetDevNodeFlags(a1, 8LL);
      PnpQueryAndSaveDeviceNodeCapabilities(a1);
      DeviceState = PiProcessQueryDeviceState(v7, v9, v10);
      *(_DWORD *)(a1 + 704) |= 0x20000u;
      v5 = DeviceState;
      PiUpdateDevicePanel(a1, 0LL);
      PnpSetPlugPlayEvent(&GUID_DEVICE_ARRIVAL, *(_QWORD *)(a1 + 32));
      PnpSetDeviceInstanceStartedEvent(a1);
      if ( v5 >= 0 )
      {
        PpvUtilTestStartedPdoStack();
        PipSetDevNodeState(a1, 778);
        PnpStartedDeviceNodeDependencyCheck(a1);
        PiCreateDriverSwDevices(a1);
        v12 = SepAuditingForSubCategory(138, 1);
        v39 = v12;
        if ( dword_140F049F8 )
        {
          memset(&SubjectContext, 0, sizeof(SubjectContext));
          SeCaptureSubjectContext(&SubjectContext);
          PrimaryToken = SubjectContext.PrimaryToken;
          if ( SubjectContext.ClientToken )
            PrimaryToken = SubjectContext.ClientToken;
          SepAdtIncorporatePerUserPolicy(0x26u, 1, 0, (__int64)PrimaryToken, &v39);
          SeReleaseSubjectContext(&SubjectContext);
          v12 = v39;
        }
        if ( v12 )
          PiAuditDeviceStart(a1 + 40);
        v5 = 0;
      }
    }
  }
  v13 = v36;
  if ( v36 )
    PiPnpRtlEndOperation((PVOID **)v36);
  if ( (byte_140EEFF63 & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      (__int64)v13,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Stop,
      v6,
      3,
      *(const wchar_t **)(a1 + 48));
  return (unsigned int)v5;
}
