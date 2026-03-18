/*
 * XREFs of IopQueryDeviceResources @ 0x14098DEA4
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x14098DBA0 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x14098DD70 (PiQueryAndAllocateBootResources.c)
 *     IopReleaseDeviceResources @ 0x140A10CF8 (IopReleaseDeviceResources.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PnpCmResourcesToIoResources @ 0x140733330 (PnpCmResourcesToIoResources.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x1407336FC (PnpMergeFilteredResourceRequirementsList.c)
 *     IopSynchronousCall @ 0x1408BBC08 (IopSynchronousCall.c)
 *     _CmOpenDeviceRegKey @ 0x1408C6880 (_CmOpenDeviceRegKey.c)
 *     PnpFilterResourceRequirementsList @ 0x14098D2D0 (PnpFilterResourceRequirementsList.c)
 *     PnpDetermineResourceListSize @ 0x14098E258 (PnpDetermineResourceListSize.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14098E280 (PnpGetDeviceResourcesFromRegistry.c)
 *     IopFilterResourceRequirementsCall @ 0x14098E480 (IopFilterResourceRequirementsCall.c)
 *     PpIrpQueryResourceRequirements @ 0x14098E6E8 (PpIrpQueryResourceRequirements.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryDeviceResources(void *a1, int a2, PVOID *a3, unsigned int *a4)
{
  unsigned int v4; // edi
  _QWORD *v7; // r13
  unsigned int *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // eax
  unsigned int v14; // ebx
  int DeviceResourcesFromRegistry; // eax
  PVOID v16; // rbx
  PVOID v17; // rbx
  void *Pool2; // rax
  unsigned int v19; // eax
  int v20; // r13d
  unsigned int *v21; // rax
  PVOID Data; // [rsp+20h] [rbp-79h]
  ULONG DataSize; // [rsp+28h] [rbp-71h]
  PVOID Src; // [rsp+40h] [rbp-59h] BYREF
  __int64 v25; // [rsp+48h] [rbp-51h]
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-49h] BYREF
  PVOID v27; // [rsp+60h] [rbp-39h] BYREF
  PVOID P; // [rsp+68h] [rbp-31h] BYREF
  _WORD v29[64]; // [rsp+70h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+100h] [rbp+67h] BYREF
  char v31; // [rsp+108h] [rbp+6Fh] BYREF
  int v32; // [rsp+110h] [rbp+77h] BYREF
  unsigned int *v33; // [rsp+118h] [rbp+7Fh] BYREF

  KeyHandle = a1;
  v4 = 0;
  *a3 = 0LL;
  v7 = a1;
  v33 = 0LL;
  P = 0LL;
  v27 = 0LL;
  Src = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  v9 = 0LL;
  v32 = 0;
  *a4 = 0;
  memset_0(v29, 0, 0x48uLL);
  v10 = *(_QWORD *)(v7[39] + 40LL);
  v25 = v10;
  if ( a2 )
  {
    if ( (unsigned int)PnpGetDeviceResourcesFromRegistry((_DWORD)v7, 0, 2, (_DWORD)a3, (__int64)&v31) != -1073741772 )
    {
      if ( *a3 )
      {
        v9 = (unsigned int *)PnpCmResourcesToIoResources(v11, *a3, 0);
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
    if ( (unsigned int)PnpGetDeviceResourcesFromRegistry((_DWORD)v7, 1, 1, (unsigned int)&v33, (__int64)&v31) != -1073741772 )
    {
      v9 = v33;
LABEL_15:
      DeviceResourcesFromRegistry = PnpGetDeviceResourcesFromRegistry(
                                      (_DWORD)v7,
                                      0,
                                      4,
                                      (unsigned int)&v27,
                                      (__int64)&v31);
      v16 = v27;
      if ( DeviceResourcesFromRegistry >= 0 && (!v27 || !*(_DWORD *)v27 || *((_DWORD *)v27 + 1) != 5) )
      {
        v20 = PnpFilterResourceRequirementsList(v9, (unsigned int *)v27, (__int64 *)&Src, &v32);
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
        if ( v20 < 0 )
        {
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          return (unsigned int)v20;
        }
        if ( (*(_DWORD *)(v25 + 396) & 1) != 0 || v32 && v9[7] <= 1 )
        {
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          v9 = (unsigned int *)Src;
          goto LABEL_66;
        }
        v14 = PnpMergeFilteredResourceRequirementsList(Src, v9, (int **)&ValueName);
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        if ( Src )
        {
          ExFreePoolWithTag(Src, 0);
          Src = 0LL;
        }
        if ( (v14 & 0x80000000) == 0 )
        {
          v9 = *(unsigned int **)&ValueName.Length;
LABEL_66:
          v7 = KeyHandle;
          goto LABEL_18;
        }
        return v14;
      }
      if ( v27 )
        ExFreePoolWithTag(v27, 0);
LABEL_18:
      if ( (int)IopFilterResourceRequirementsCall(v7, v9, &P) < 0 )
      {
        *a3 = v9;
        if ( v9 )
          *a4 = *v9;
        else
          *a4 = 0;
        return 0LL;
      }
      v17 = P;
      *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
      KeyHandle = 0LL;
      if ( P )
      {
        *a4 = *(_DWORD *)P;
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        *a3 = Pool2;
        if ( !Pool2 )
        {
          ExFreePoolWithTag(v17, 0);
          return 3221225626LL;
        }
        memmove(Pool2, v17, *a4);
        ExFreePoolWithTag(v17, 0);
      }
      else
      {
        *a4 = 0;
        *a3 = 0LL;
      }
      if ( (int)CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(v25 + 48),
                  19,
                  0,
                  131097,
                  1,
                  (__int64)&KeyHandle,
                  0LL) >= 0 )
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
    if ( (*(_DWORD *)(v25 + 396) & 1) != 0 )
    {
      result = PnpGetDeviceResourcesFromRegistry((_DWORD)v7, 1, 2, (unsigned int)&v33, (__int64)&v31);
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
      if ( *(_QWORD *)(v25 + 440) )
      {
        v21 = (unsigned int *)ExAllocatePool2(0x100uLL);
        v9 = v21;
        if ( !v21 )
          return 3221225495LL;
        memmove(v21, *(const void **)(v25 + 440), **(unsigned int **)(v25 + 440));
        goto LABEL_15;
      }
      result = PpIrpQueryResourceRequirements(v7, &v33);
      if ( (_DWORD)result == -1073741637 )
      {
        v9 = 0LL;
        goto LABEL_15;
      }
    }
    v9 = v33;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(v10 + 396) & 1) == 0 )
  {
    v29[0] = 2587;
    v13 = IopSynchronousCall(v7, (__int64)v29, -1073741637, 0LL, a3);
    v14 = v13;
    if ( v13 == -1073741637 )
    {
      *a3 = 0LL;
      v14 = 0;
    }
    else if ( v13 < 0 )
    {
      return v14;
    }
    *a4 = PnpDetermineResourceListSize(*a3);
    return v14;
  }
  v19 = PnpGetDeviceResourcesFromRegistry((_DWORD)v7, 0, 7, (_DWORD)a3, (__int64)a4);
  if ( v19 != -1073741772 )
    return v19;
  return v4;
}
