/*
 * XREFs of IopQueryDeviceResources @ 0x140832B48
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x1408311EC (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x140831F94 (PiQueryAndAllocateBootResources.c)
 *     IopReleaseDeviceResources @ 0x1409A0C90 (IopReleaseDeviceResources.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PnpCmResourcesToIoResources @ 0x140727098 (PnpCmResourcesToIoResources.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x140727464 (PnpMergeFilteredResourceRequirementsList.c)
 *     IopFilterResourceRequirementsCall @ 0x14083168C (IopFilterResourceRequirementsCall.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1408317BC (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpDetermineResourceListSize @ 0x140832EFC (PnpDetermineResourceListSize.c)
 *     IopSynchronousCall @ 0x140834D44 (IopSynchronousCall.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     PpIrpQueryResourceRequirements @ 0x140A643AC (PpIrpQueryResourceRequirements.c)
 *     PnpFilterResourceRequirementsList @ 0x140AB35EC (PnpFilterResourceRequirementsList.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryDeviceResources(struct _DEVICE_OBJECT *a1, int a2, PVOID *a3, ULONG *a4)
{
  unsigned int v4; // edi
  struct _DEVICE_OBJECT *v7; // r13
  _DWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // eax
  unsigned int v13; // ebx
  int DeviceResourcesFromRegistry; // eax
  PVOID v15; // rbx
  PVOID v16; // rbx
  void *Pool2; // rax
  unsigned int v18; // eax
  int v19; // r13d
  _DWORD *v20; // rax
  PVOID Data; // [rsp+20h] [rbp-79h]
  ULONG DataSize; // [rsp+28h] [rbp-71h]
  unsigned int **DeviceNode; // [rsp+48h] [rbp-51h]
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-49h] BYREF
  PVOID v25; // [rsp+60h] [rbp-39h] BYREF
  PVOID P; // [rsp+68h] [rbp-31h] BYREF
  _WORD v27[64]; // [rsp+70h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+100h] [rbp+67h] BYREF
  int v29; // [rsp+108h] [rbp+6Fh] BYREF
  int v30; // [rsp+110h] [rbp+77h]
  _DWORD *v31; // [rsp+118h] [rbp+7Fh] BYREF

  KeyHandle = a1;
  v4 = 0;
  *a3 = 0LL;
  v7 = a1;
  v31 = 0LL;
  P = 0LL;
  v25 = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  v9 = 0LL;
  v30 = 0;
  *a4 = 0;
  memset_0(v27, 0, 0x48uLL);
  DeviceNode = (unsigned int **)v7->DeviceObjectExtension->DeviceNode;
  if ( a2 )
  {
    if ( (unsigned int)PnpGetDeviceResourcesFromRegistry((__int64)v7, 0, 2, a3, &v29) != -1073741772 )
    {
      if ( *a3 )
      {
        v9 = (_DWORD *)PnpCmResourcesToIoResources(v10, *a3, 0);
        ExFreePoolWithTag(*a3, 0);
        if ( !v9 )
        {
          *a3 = 0LL;
          *a4 = 0;
          return 3221225626LL;
        }
        *a3 = v9;
        *a4 = *v9;
      }
      goto LABEL_18;
    }
    if ( (unsigned int)PnpGetDeviceResourcesFromRegistry((__int64)v7, 1, 1, (void **)&v31, &v29) != -1073741772 )
    {
      v9 = v31;
LABEL_15:
      DeviceResourcesFromRegistry = PnpGetDeviceResourcesFromRegistry((__int64)v7, 0, 4, &v25, &v29);
      v15 = v25;
      if ( DeviceResourcesFromRegistry >= 0 && (!v25 || !*(_DWORD *)v25 || *((_DWORD *)v25 + 1) != 5) )
      {
        v19 = PnpFilterResourceRequirementsList(v9);
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        if ( v19 < 0 )
        {
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          return (unsigned int)v19;
        }
        if ( (*((_DWORD *)DeviceNode + 99) & 1) != 0 || v30 && v9[7] <= 1u )
        {
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          v9 = 0LL;
          goto LABEL_64;
        }
        v13 = PnpMergeFilteredResourceRequirementsList(0LL, v9, (int **)&ValueName);
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        if ( (v13 & 0x80000000) == 0 )
        {
          v9 = *(_DWORD **)&ValueName.Length;
LABEL_64:
          v7 = (struct _DEVICE_OBJECT *)KeyHandle;
          goto LABEL_18;
        }
        return v13;
      }
      if ( v25 )
        ExFreePoolWithTag(v25, 0);
LABEL_18:
      if ( (int)IopFilterResourceRequirementsCall(v7, (ULONG_PTR)v9, &P) < 0 )
      {
        *a3 = v9;
        if ( v9 )
          *a4 = *v9;
        else
          *a4 = 0;
        return 0LL;
      }
      v16 = P;
      *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
      KeyHandle = 0LL;
      if ( P )
      {
        *a4 = *(_DWORD *)P;
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        *a3 = Pool2;
        if ( !Pool2 )
        {
          ExFreePoolWithTag(v16, 0);
          return 3221225626LL;
        }
        memmove(Pool2, v16, *a4);
        ExFreePoolWithTag(v16, 0);
      }
      else
      {
        *a4 = 0;
        *a3 = 0LL;
      }
      if ( (int)CmOpenDeviceRegKey(PiPnpRtlCtx, 131097, 1, (__int64)&KeyHandle, 0LL) >= 0 )
      {
        ValueName.Buffer = L"FilteredConfigVector";
        DataSize = *a4;
        Data = *a3;
        *(_DWORD *)&ValueName.Length = 2752552;
        ZwSetValueKey(KeyHandle, &ValueName, 0, 0xAu, Data, DataSize);
        ZwClose(KeyHandle);
      }
      return 0LL;
    }
    if ( (*((_DWORD *)DeviceNode + 99) & 1) != 0 )
    {
      result = PnpGetDeviceResourcesFromRegistry((__int64)v7, 1, 2, (void **)&v31, &v29);
      if ( (_DWORD)result == -1073741772 )
      {
        result = 0LL;
LABEL_28:
        if ( (int)result < 0 )
          return result;
        goto LABEL_15;
      }
    }
    else
    {
      if ( DeviceNode[55] )
      {
        v20 = (_DWORD *)ExAllocatePool2(0x100uLL);
        v9 = v20;
        if ( !v20 )
          return 3221225495LL;
        memmove(v20, DeviceNode[55], *DeviceNode[55]);
        goto LABEL_15;
      }
      result = PpIrpQueryResourceRequirements(v7, &v31);
      if ( (_DWORD)result == -1073741637 )
      {
        v9 = 0LL;
        goto LABEL_15;
      }
    }
    v9 = v31;
    goto LABEL_28;
  }
  if ( (*((_DWORD *)v7->DeviceObjectExtension->DeviceNode + 99) & 1) == 0 )
  {
    v27[0] = 2587;
    v12 = IopSynchronousCall((_DWORD)v7, (unsigned int)v27, -1073741637, 0, (__int64)a3);
    v13 = v12;
    if ( v12 == -1073741637 )
    {
      *a3 = 0LL;
      v13 = 0;
    }
    else if ( v12 < 0 )
    {
      return v13;
    }
    *a4 = PnpDetermineResourceListSize(*a3);
    return v13;
  }
  v18 = PnpGetDeviceResourcesFromRegistry((__int64)v7, 0, 7, a3, a4);
  if ( v18 != -1073741772 )
    return v18;
  return v4;
}
