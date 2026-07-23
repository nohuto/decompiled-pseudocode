/*
 * XREFs of PiControlGetPropertyData @ 0x1408BAE00
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1408B93F0 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     IoGetDeviceProperty @ 0x1408BA410 (IoGetDeviceProperty.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1408CDC30 (PiControlCopyUserModeCallersBuffer.c)
 *     PnpGetDeviceDependencyList @ 0x1409BBE9C (PnpGetDeviceDependencyList.c)
 *     PiControlGetDeviceStack @ 0x140A5027C (PiControlGetDeviceStack.c)
 *     PiControlGetDevicePowerData @ 0x140A5B688 (PiControlGetDevicePowerData.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlGetPropertyData(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ecx
  unsigned int *Pool2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _DEVICE_OBJECT *v9; // r13
  __int64 v10; // rdx
  __int64 DeviceNode; // rbx
  unsigned int *v12; // rsi
  ULONG v13; // r14d
  unsigned int v14; // eax
  unsigned int v15; // eax
  DEVICE_REGISTRY_PROPERTY v16; // edx
  NTSTATUS DeviceStack; // eax
  int DeviceDependencyList; // ebx
  void *v20; // rax
  void *v21; // rcx
  int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  int v34; // edx
  unsigned int v35; // edx
  int DeviceRegProp; // eax
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  int v38; // [rsp+88h] [rbp+38h] BYREF

  v4 = *a2;
  Pool2 = 0LL;
  v38 = 0;
  *(_OWORD *)P = 0LL;
  WORD1(P[0]) = v4;
  LOWORD(P[0]) = v4;
  if ( (unsigned __int16)(v4 - 1) <= 0x18Fu && (v4 & 1) == 0 )
  {
    if ( !a4 )
    {
      P[1] = *((PVOID *)a2 + 1);
LABEL_5:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
      v9 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(P, 1131441744LL);
      PiControlFreeUserModeCallersBuffer(a4, P[1]);
      if ( !v9 || (DeviceNode = (__int64)v9->DeviceObjectExtension->DeviceNode) == 0 )
      {
        DeviceDependencyList = -1073741810;
        goto LABEL_20;
      }
      if ( (unsigned int)(*(_DWORD *)(DeviceNode + 300) - 789) <= 1 )
      {
        DeviceDependencyList = -1073741738;
        goto LABEL_20;
      }
      v12 = (unsigned int *)(a2 + 16);
      v13 = *((_DWORD *)a2 + 8);
      if ( v13 )
      {
        if ( a4 )
        {
          Pool2 = (unsigned int *)ExAllocatePool2(0x101uLL, *((unsigned int *)a2 + 8), 0x20207050u);
          if ( !Pool2 )
          {
            DeviceDependencyList = -1073741670;
            goto LABEL_20;
          }
        }
        else
        {
          Pool2 = (unsigned int *)*((_QWORD *)a2 + 3);
        }
      }
      v14 = *((_DWORD *)a2 + 4);
      if ( v14 > 8 )
      {
        v26 = v14 - 10;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( !v27 )
          {
            v16 = DevicePropertyInstallState;
            goto LABEL_15;
          }
          v28 = v27 - 2;
          if ( !v28 )
          {
            *v12 = 4;
            if ( v13 < 4 )
            {
              DeviceDependencyList = -1073741789;
              goto LABEL_20;
            }
            v29 = *(_DWORD *)(DeviceNode + 684);
            DeviceDependencyList = 0;
            *Pool2 = v29;
            goto LABEL_18;
          }
          v32 = v28 - 1;
          if ( !v32 )
          {
            DeviceStack = PiControlGetDeviceStack(DeviceNode, v13, Pool2, a2 + 16);
            goto LABEL_16;
          }
          v33 = v32 - 1;
          if ( v33 )
          {
            if ( v33 != 1 )
              goto LABEL_78;
            v34 = 1;
          }
          else
          {
            v34 = 0;
          }
          DeviceDependencyList = PnpGetDeviceDependencyList(
                                   DeviceNode,
                                   v34,
                                   (_DWORD)Pool2,
                                   v13 >> 1,
                                   (__int64)(a2 + 16));
          v35 = 2 * *v12;
          *v12 = v35;
          if ( (int)(DeviceDependencyList + 0x80000000) >= 0 && DeviceDependencyList != -1073741789 )
            goto LABEL_20;
          if ( v35 <= 2 )
          {
            *v12 = 0;
            DeviceDependencyList = -1073741772;
          }
        }
        else
        {
          if ( v13 < 4 )
          {
            DeviceDependencyList = -1073741789;
          }
          else
          {
            PpHotSwapGetDevnodeRemovalPolicy(DeviceNode, 0, Pool2);
            DeviceDependencyList = 0;
          }
          *v12 = 4;
        }
      }
      else
      {
        if ( v14 == 8 )
        {
          v16 = DevicePropertyAddress;
          goto LABEL_15;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
          v16 = DevicePropertyPhysicalDeviceObjectName;
LABEL_15:
          DeviceStack = IoGetDeviceProperty(v9, v16, v13, Pool2, (PULONG)a2 + 8);
LABEL_16:
          DeviceDependencyList = DeviceStack;
          goto LABEL_17;
        }
        v23 = v15 - 1;
        if ( !v23 )
        {
          v16 = DevicePropertyBusTypeGuid;
          goto LABEL_15;
        }
        v24 = v23 - 1;
        if ( !v24 )
        {
          v16 = DevicePropertyLegacyBusType;
          goto LABEL_15;
        }
        v25 = v24 - 1;
        if ( !v25 )
        {
          v16 = DevicePropertyBusNumber;
          goto LABEL_15;
        }
        v30 = v25 - 1;
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( !v31 )
          {
            v16 = DevicePropertyRemovalPolicy;
            goto LABEL_15;
          }
          if ( v31 == 1 )
          {
            DeviceRegProp = CmGetDeviceRegProp(
                              PiPnpRtlCtx,
                              *(_QWORD *)(DeviceNode + 48),
                              0,
                              34,
                              (__int64)&v38,
                              (__int64)Pool2,
                              (__int64)(a2 + 16),
                              0);
            DeviceDependencyList = DeviceRegProp;
            if ( DeviceRegProp < 0 )
            {
              if ( DeviceRegProp != -1073741275 )
                goto LABEL_20;
              DeviceDependencyList = -1073741772;
              goto LABEL_17;
            }
            if ( v38 != 4 )
            {
              DeviceDependencyList = -1073741584;
              goto LABEL_20;
            }
LABEL_18:
            if ( a4 )
            {
              if ( v13 )
              {
                v21 = (void *)*((_QWORD *)a2 + 3);
                if ( v21 )
                {
                  v22 = PiControlCopyUserModeCallersBuffer(v21, a4, 0);
                  if ( v22 < 0 )
                    DeviceDependencyList = v22;
                }
              }
              else
              {
                *((_QWORD *)a2 + 3) = 0LL;
              }
            }
            else
            {
              *((_QWORD *)a2 + 3) = Pool2;
            }
            goto LABEL_20;
          }
LABEL_78:
          DeviceDependencyList = -1073741811;
          goto LABEL_20;
        }
        DeviceDependencyList = PiControlGetDevicePowerData(DeviceNode, v10, v13, Pool2, a2 + 16);
        if ( DeviceDependencyList == -2147483643 )
          DeviceDependencyList = -1073741789;
      }
LABEL_17:
      if ( DeviceDependencyList >= 0 )
        goto LABEL_18;
LABEL_20:
      ExReleaseResourceLite(&IopDeviceTreeLock);
      KeLeaveCriticalRegion();
      if ( v9 )
        ObfDereferenceObjectWithTag(v9, 0x43706E50u);
      PiControlFreeUserModeCallersBuffer(a4, Pool2);
      return (unsigned int)DeviceDependencyList;
    }
    v20 = (void *)ExAllocatePool2(0x101uLL, v4, 0x20207050u);
    P[1] = v20;
    if ( v20 )
    {
      DeviceDependencyList = PiControlCopyUserModeCallersBuffer(v20, a4, 1);
      if ( DeviceDependencyList >= 0 )
        goto LABEL_5;
      ExFreePoolWithTag(P[1], 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
    return (unsigned int)DeviceDependencyList;
  }
  return 3221225485LL;
}
