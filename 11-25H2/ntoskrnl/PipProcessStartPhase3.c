/*
 * XREFs of PipProcessStartPhase3 @ 0x1408333C4
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x140423408 (McTemplateK0dz_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     SepAuditingForSubCategory @ 0x14046EFD4 (SepAuditingForSubCategory.c)
 *     PipSetDevNodeState @ 0x140493D48 (PipSetDevNodeState.c)
 *     PnpSetDeviceInstanceStartedEvent @ 0x1404A4834 (PnpSetDeviceInstanceStartedEvent.c)
 *     PpvUtilTestStartedPdoStack @ 0x1404B476C (PpvUtilTestStartedPdoStack.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140782CA8 (SepAdtIncorporatePerUserPolicy.c)
 *     PiAuditDeviceStart @ 0x1408320C8 (PiAuditDeviceStart.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14083216C (PnpStartedDeviceNodeDependencyCheck.c)
 *     PipSetDevNodeFlags @ 0x1408331E8 (PipSetDevNodeFlags.c)
 *     PnpSetPlugPlayEvent @ 0x14083327C (PnpSetPlugPlayEvent.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1408335B4 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiUpdateDevicePanel @ 0x140833618 (PiUpdateDevicePanel.c)
 *     PnpQueryID @ 0x1408336D0 (PnpQueryID.c)
 *     PiProcessQueryDeviceState @ 0x140833E34 (PiProcessQueryDeviceState.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     PnpCheckDeviceIdsChanged @ 0x140868014 (PnpCheckDeviceIdsChanged.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     PiCreateDriverSwDevices @ 0x140950828 (PiCreateDriverSwDevices.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140950AE0 (PnpDeviceObjectToDeviceInstance.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140950B3C (PiDcUpdateDeviceContainerMembership.c)
 *     _CmSetDeviceRegProp @ 0x140950F0C (_CmSetDeviceRegProp.c)
 *     _PnpSetObjectProperty @ 0x1409558B8 (_PnpSetObjectProperty.c)
 *     RtlGUIDFromString @ 0x140959130 (RtlGUIDFromString.c)
 *     PnpGenerateDeviceIdsHash @ 0x140A4ACDC (PnpGenerateDeviceIdsHash.c)
 *     PpDevCfgProcessDevice @ 0x140A9A1A4 (PpDevCfgProcessDevice.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipProcessStartPhase3(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r15
  _DWORD *v8; // rbx
  int DeviceState; // eax
  char v10; // al
  PVOID v11; // rcx
  PACCESS_TOKEN PrimaryToken; // r9
  PVOID v14; // r14
  PVOID v15; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rdx
  bool v18; // r14
  PVOID v19; // rbx
  unsigned int v20; // r13d
  PVOID v21; // rsi
  unsigned int v22; // r12d
  int v23; // eax
  struct _KTHREAD *v24; // rax
  __int64 v25; // rcx
  int v26; // [rsp+20h] [rbp-69h]
  int v27; // [rsp+50h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-31h] BYREF
  int v29; // [rsp+60h] [rbp-29h] BYREF
  int v30; // [rsp+64h] [rbp-25h] BYREF
  unsigned int v31; // [rsp+68h] [rbp-21h] BYREF
  unsigned int v32; // [rsp+6Ch] [rbp-1Dh] BYREF
  PVOID v33; // [rsp+70h] [rbp-19h] BYREF
  PVOID P; // [rsp+78h] [rbp-11h] BYREF
  PVOID v35; // [rsp+80h] [rbp-9h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-1h] BYREF
  int v37; // [rsp+F8h] [rbp+6Fh]
  char v38; // [rsp+100h] [rbp+77h] BYREF
  char v39; // [rsp+108h] [rbp+7Fh]

  v37 = a2;
  v3 = a2;
  Handle = 0LL;
  v35 = 0LL;
  if ( (byte_140EEFA6B & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(a1, (__int64)KMPnPEvt_ProcessDeviceStart_Start, a3, 3, *(const wchar_t **)(a1 + 48));
  v5 = PiPnpRtlBeginOperation(&v35, a2, a3);
  if ( v5 >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    v8 = (_DWORD *)(a1 + 396);
    if ( (*(_DWORD *)(a1 + 396) & 0x20) == 0 )
    {
      v33 = 0LL;
      v31 = 0;
      P = 0LL;
      v32 = 0;
      *(_OWORD *)&SubjectContext.ClientToken = 0LL;
      if ( (int)PnpDeviceObjectToDeviceInstance(v7, &Handle, 131097LL) >= 0 )
      {
        PnpQueryID(a1, 1LL, &P, &v32);
        PnpQueryID(a1, 2LL, &v33, &v31);
        v14 = v33;
        v15 = P;
        PnpGenerateDeviceIdsHash(P, v33, a1 + 684);
        if ( v15 || v14 )
        {
          v27 = 0;
          v29 = 0;
          CurrentThread = KeGetCurrentThread();
          v38 = 0;
          v39 = 0;
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
          v17 = *(_QWORD *)(a1 + 48);
          v30 = 4;
          if ( (int)CmGetDeviceRegProp(
                      PiPnpRtlCtx,
                      v17,
                      (_DWORD)Handle,
                      11,
                      (__int64)&v29,
                      (__int64)&v27,
                      (__int64)&v30,
                      0) >= 0
            && v29 == 4
            && v30 == 4 )
          {
            v18 = (v27 & 0x21) == 32;
          }
          else
          {
            v27 = 0;
            v18 = 1;
          }
          v19 = v33;
          v20 = v31;
          v21 = P;
          v22 = v32;
          if ( (v27 & 0x400) == 0 )
          {
            v23 = 0;
            if ( !P || (LOBYTE(v26) = 1, v23 = PnpCheckDeviceIdsChanged(a1, Handle, P, v32, v26, &v38), !v38) )
            {
              if ( v19 )
              {
                LOBYTE(v26) = 0;
                v23 = PnpCheckDeviceIdsChanged(a1, Handle, v19, v20, v26, &v38);
              }
            }
            if ( v23 >= 0 && v38 )
            {
              v27 |= 0x400u;
              v18 = 1;
              v39 = 1;
            }
          }
          if ( v21 )
          {
            CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 2, 7, (__int64)v21, v22, 0);
            ExFreePoolWithTag(v21, 0);
          }
          if ( v19 )
          {
            CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 3, 7, (__int64)v19, v20, 0);
            ExFreePoolWithTag(v19, 0);
          }
          if ( v39 )
            CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 11, 4, (__int64)&v27, 4, 0);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          if ( v18 )
            PpDevCfgProcessDevice(a1, Handle, 0LL);
        }
        PnpSetObjectProperty(
          PiPnpRtlCtx,
          *(_QWORD *)(a1 + 48),
          1,
          0LL,
          (__int64)&DEVPKEY_Device_HardwareConfigurationIndex,
          7,
          (__int64)&PnpCurrentHardwareConfigurationIndex,
          4,
          0);
        RtlInitUnicodeString((PUNICODE_STRING)&SubjectContext, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
        RtlGUIDFromString((PCUNICODE_STRING)&SubjectContext, (GUID *)(a1 + 664));
        PipSetDevNodeFlags(a1, 0x20u);
        v24 = KeGetCurrentThread();
        --v24->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        PiDcUpdateDeviceContainerMembership(*(_QWORD *)(a1 + 48), Handle, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegion();
        PiUpdateDevicePanel(a1, Handle);
        ZwClose(Handle);
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v25, *(_QWORD *)(a1 + 48), 1LL);
        PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, *(_QWORD **)(a1 + 32));
        v3 = v37;
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
        PipSetDevNodeFlags(a1, 8u);
      PnpQueryAndSaveDeviceNodeCapabilities(a1);
      DeviceState = PiProcessQueryDeviceState(v7);
      *(_DWORD *)(a1 + 704) |= 0x20000u;
      v5 = DeviceState;
      PiUpdateDevicePanel(a1, 0LL);
      PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ARRIVAL, *(_QWORD **)(a1 + 32));
      PnpSetDeviceInstanceStartedEvent(a1);
      if ( v5 >= 0 )
      {
        PpvUtilTestStartedPdoStack();
        PipSetDevNodeState(a1, 778);
        PnpStartedDeviceNodeDependencyCheck(a1);
        PiCreateDriverSwDevices(a1);
        v10 = SepAuditingForSubCategory(138, 1);
        v38 = v10;
        if ( dword_140F04378 )
        {
          memset(&SubjectContext, 0, sizeof(SubjectContext));
          SeCaptureSubjectContext(&SubjectContext);
          PrimaryToken = SubjectContext.PrimaryToken;
          if ( SubjectContext.ClientToken )
            PrimaryToken = SubjectContext.ClientToken;
          SepAdtIncorporatePerUserPolicy(0x26u, 1, 0, (__int64)PrimaryToken, &v38);
          SeReleaseSubjectContext(&SubjectContext);
          v10 = v38;
        }
        if ( v10 )
          PiAuditDeviceStart(a1 + 40);
        v5 = 0;
      }
    }
  }
  v11 = v35;
  if ( v35 )
    PiPnpRtlEndOperation(v35);
  if ( (byte_140EEFA6B & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      (__int64)v11,
      (__int64)KMPnPEvt_ProcessDeviceStart_Stop,
      v6,
      3,
      *(const wchar_t **)(a1 + 48));
  return (unsigned int)v5;
}
