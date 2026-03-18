/*
 * XREFs of IopInitializeDeviceInstanceKey @ 0x140A626D8
 * Callers:
 *     IopGetRootDevices @ 0x140A624B8 (IopGetRootDevices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     IoDeleteDevice @ 0x1403F1B00 (IoDeleteDevice.c)
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
 *     PipSetDevNodeState @ 0x140492B28 (PipSetDevNodeState.c)
 *     PpDevNodeInsertIntoTree @ 0x1404BE9A4 (PpDevNodeInsertIntoTree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     PnpAllocateDeviceInstancePath @ 0x140724790 (PnpAllocateDeviceInstancePath.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14072A0E4 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x14072D9EC (IopCreateRootEnumeratedDeviceObject.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BDDF0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1408C5BB0 (_CmGetDeviceRegProp.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14098E280 (PnpGetDeviceResourcesFromRegistry.c)
 *     PipAllocateDeviceNode @ 0x14098EACC (PipAllocateDeviceNode.c)
 *     PipSetDevNodeProblem @ 0x14098FC24 (PipSetDevNodeProblem.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14099025C (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PipSetDevNodeFlags @ 0x1409905B8 (PipSetDevNodeFlags.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140996D60 (PpDevCfgProcessDeviceOperations.c)
 *     PipClearDevNodeProblem @ 0x1409C5678 (PipClearDevNodeProblem.c)
 *     IopGetRegistryValue @ 0x1409CAD5C (IopGetRegistryValue.c)
 *     PpDeviceRegistration @ 0x140A0CB38 (PpDeviceRegistration.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140A5DBC0 (PnpIsDeviceInstanceEnabled.c)
 *     PnpClearDeviceTemporaryProperties @ 0x140A7761C (PnpClearDeviceTemporaryProperties.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140A85F24 (PnpMapDeviceObjectToDeviceInstance.c)
 *     IopIsRootEnumeratedDeviceObjectActive @ 0x140A9E648 (IopIsRootEnumeratedDeviceObjectActive.c)
 *     PpDevCfgProcessDevice @ 0x140A9F37C (PpDevCfgProcessDevice.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopInitializeDeviceInstanceKey(HANDLE KeyHandle, PCUNICODE_STRING SourceString, __int64 a3)
{
  int v6; // ebx
  unsigned int v7; // ebx
  void *Pool2; // rax
  void *v9; // r14
  int v11; // ebx
  struct _DEVICE_OBJECT *v12; // rax
  __int64 v13; // rdx
  void *v14; // rcx
  int DeviceInstancePath; // r14d
  struct _DEVICE_OBJECT *v16; // r15
  PDEVICE_OBJECT v17; // rcx
  char *v18; // rbx
  int DeviceRegProp; // eax
  __int16 v20; // ax
  int FailedInstallProblemStatus; // r8d
  int v22; // edx
  PVOID v23; // r12
  int v24; // r12d
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // r9
  PVOID v28; // r12
  int v29; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-1Ch] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-10h] BYREF
  PVOID v33; // [rsp+58h] [rbp-8h] BYREF
  int v34; // [rsp+B0h] [rbp+50h] BYREF
  int v35; // [rsp+B8h] [rbp+58h] BYREF

  P = 0LL;
  v35 = 0;
  v30 = 0;
  v33 = 0LL;
  if ( IopGetRegistryValue(KeyHandle, L"Phantom", 0, &P) >= 0 )
  {
    v11 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) : 0;
    ExFreePoolWithTag(P, 0);
    if ( v11 )
      return 1LL;
  }
  v6 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 + 8) == v6 )
  {
    v7 = 8 * v6 + 1024;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v9 = Pool2;
    if ( !Pool2 )
    {
      *(_DWORD *)a3 = -1073741670;
      return 0LL;
    }
    memmove(Pool2, *(const void **)(a3 + 16), 8LL * *(unsigned int *)(a3 + 8));
    ExFreePoolWithTag(*(PVOID *)(a3 + 16), 0);
    *(_DWORD *)(a3 + 4) = v7 >> 3;
    *(_QWORD *)(a3 + 16) = v9;
  }
  v12 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)SourceString, 0x746C6644u);
  DeviceObject = v12;
  if ( !v12 )
  {
    DeviceInstancePath = IopCreateRootEnumeratedDeviceObject(&DeviceObject);
    if ( DeviceInstancePath >= 0 )
    {
      v16 = DeviceObject;
      v17 = DeviceObject;
      DeviceObject->Flags |= 0x1000u;
      v17->DeviceObjectExtension->ExtensionFlags |= 0x10u;
      if ( (unsigned int)PipAllocateDeviceNode((__int64)v17, (__int64)&v33) == -1073740946 || (v18 = (char *)v33) == 0LL )
      {
        IoDeleteDevice(v16);
        DeviceInstancePath = -1073741670;
      }
      else
      {
        DeviceInstancePath = PnpAllocateDeviceInstancePath((__int64)v33, SourceString->Length + 2);
        if ( DeviceInstancePath >= 0 )
        {
          RtlCopyUnicodeString((PUNICODE_STRING)(v18 + 40), SourceString);
          PipSetDevNodeFlags((__int64)v18, 0x11u);
          PipSetDevNodeState((__int64)v18, 772);
          PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, (__int64)v18);
          PsReferenceSiloContext(v16);
          v34 = 0;
          v29 = 4;
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            *((_QWORD *)v18 + 6),
                            (__int64)KeyHandle,
                            0xBu,
                            (__int64)&v35,
                            (__int64)&v34,
                            (__int64)&v29,
                            0);
          if ( DeviceRegProp < 0 )
          {
            FailedInstallProblemStatus = -1073741275;
            if ( DeviceRegProp == -1073741275 )
            {
              v22 = 1;
              goto LABEL_38;
            }
          }
          else
          {
            if ( v35 == 4 && v29 == 4 )
            {
              v20 = v34;
            }
            else
            {
              v20 = 0;
              v34 = 0;
            }
            if ( (v20 & 0x20) != 0 )
            {
              FailedInstallProblemStatus = 0;
              v22 = 18;
LABEL_38:
              PipSetDevNodeProblem((__int64)v18, v22, FailedInstallProblemStatus);
              goto LABEL_39;
            }
            if ( (v20 & 0x2000) != 0 )
            {
              FailedInstallProblemStatus = 0;
              v22 = 16;
              goto LABEL_38;
            }
            if ( (v20 & 0x40) != 0 )
            {
              FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus(*((_QWORD *)v18 + 6), (int)KeyHandle);
              v22 = 28;
              goto LABEL_38;
            }
          }
LABEL_39:
          if ( IopGetRegistryValue(KeyHandle, L"NoResourceAtInitTime", 0, &P) >= 0 )
          {
            v23 = P;
            if ( *((_DWORD *)P + 1) == 4
              && *((_DWORD *)P + 3) >= 4u
              && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            {
              PipSetDevNodeFlags((__int64)v18, 0x100u);
            }
            ExFreePoolWithTag(v23, 0);
          }
          PnpQueryAndSaveDeviceNodeCapabilities((__int64)v18);
          if ( (*((_DWORD *)v18 + 140) & 0x4000) != 0
            && ((*((_DWORD *)v18 + 99) & 0x2000) == 0 || *((_DWORD *)v18 + 101) != 1) )
          {
            PipClearDevNodeProblem((__int64)v18);
            PipSetDevNodeProblem((__int64)v18, 29, 0);
          }
          v24 = *((_DWORD *)v18 + 99) & 0x6000;
          if ( PnpBootMode )
          {
            *((_DWORD *)v18 + 176) |= 0x1000u;
            v30 = 2;
          }
          PnpClearDeviceTemporaryProperties(*((_QWORD *)v18 + 6), KeyHandle);
          if ( (*((_DWORD *)v18 + 140) & 0x4000) == 0 && (v34 & 1) == 0 )
          {
            if ( v24 )
              PpDevCfgProcessDevice(v18, KeyHandle, v30);
            else
              PpDevCfgProcessDeviceOperations((__int64)v18, KeyHandle);
          }
          if ( (*((_DWORD *)v18 + 99) & 0x2000) == 0 || (v26 = *((_DWORD *)v18 + 101), v26 != 22) && v26 != 29 )
          {
            if ( !(unsigned int)PnpIsDeviceInstanceEnabled(KeyHandle, (unsigned __int16 *)v18 + 20, 1) )
            {
              PipClearDevNodeProblem((__int64)v18);
              PipSetDevNodeProblem((__int64)v18, 22, 0);
            }
          }
          LOBYTE(v25) = 1;
          PpDeviceRegistration((__int64)(v18 + 40), v25, (__int64)(v18 + 56), 0);
          PnpMapDeviceObjectToDeviceInstance(*((_QWORD *)v18 + 4), v18 + 40);
          v33 = 0LL;
          if ( (int)PnpGetDeviceResourcesFromRegistry((__int64)v16, 0, 4, &v33, &v30) >= 0 )
          {
            v28 = v33;
            if ( v33 )
            {
              if ( (int)guard_dispatch_icall_no_overrides(4LL, *((_QWORD *)v18 + 4), v33, v27) >= 0 )
                PipSetDevNodeFlags((__int64)v18, 0x40u);
              ExFreePoolWithTag(v28, 0);
            }
          }
          PsReferenceSiloContext(v16);
          *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v16;
          goto LABEL_20;
        }
        IoDeleteDevice(v16);
      }
    }
    *(_DWORD *)a3 = DeviceInstancePath;
    return 0LL;
  }
  if ( !(unsigned __int8)IopIsRootEnumeratedDeviceObjectActive(v12, v12) )
  {
    ObfDereferenceObject(v14);
    return 1LL;
  }
  *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v13;
LABEL_20:
  ++*(_DWORD *)(a3 + 8);
  return 1LL;
}
