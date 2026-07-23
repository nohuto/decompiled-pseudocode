/*
 * XREFs of IopQueryDeviceResources @ 0x140978EDC
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x140978BD8 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x140978DA8 (PiQueryAndAllocateBootResources.c)
 *     IopReleaseDeviceResources @ 0x1409BF108 (IopReleaseDeviceResources.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PnpCmResourcesToIoResources @ 0x140731264 (PnpCmResourcesToIoResources.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x140731630 (PnpMergeFilteredResourceRequirementsList.c)
 *     IopSynchronousCall @ 0x1408B9564 (IopSynchronousCall.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     PnpFilterResourceRequirementsList @ 0x140978308 (PnpFilterResourceRequirementsList.c)
 *     PnpDetermineResourceListSize @ 0x140979290 (PnpDetermineResourceListSize.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1409792B8 (PnpGetDeviceResourcesFromRegistry.c)
 *     IopFilterResourceRequirementsCall @ 0x1409794B8 (IopFilterResourceRequirementsCall.c)
 *     PpIrpQueryResourceRequirements @ 0x140979720 (PpIrpQueryResourceRequirements.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryDeviceResources(void *a1, int a2, PVOID *a3, unsigned int *a4)
{
  unsigned int v4; // edi
  _QWORD *v7; // r13
  unsigned int *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int *v12; // rax
  __int64 result; // rax
  int v14; // eax
  unsigned int v15; // ebx
  int DeviceResourcesFromRegistry; // eax
  PVOID v17; // rbx
  PVOID v18; // rbx
  ULONG_PTR v19; // rdx
  void *Pool2; // rax
  unsigned int v21; // eax
  int v22; // r13d
  unsigned int *v23; // rax
  PVOID Data; // [rsp+20h] [rbp-79h]
  ULONG DataSize; // [rsp+28h] [rbp-71h]
  PVOID Src; // [rsp+40h] [rbp-59h] BYREF
  __int64 v27; // [rsp+48h] [rbp-51h]
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-49h] BYREF
  PVOID v29; // [rsp+60h] [rbp-39h] BYREF
  PVOID P; // [rsp+68h] [rbp-31h] BYREF
  _WORD v31[64]; // [rsp+70h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+100h] [rbp+67h] BYREF
  char v33; // [rsp+108h] [rbp+6Fh] BYREF
  int v34; // [rsp+110h] [rbp+77h] BYREF
  unsigned int *v35; // [rsp+118h] [rbp+7Fh] BYREF

  KeyHandle = a1;
  v4 = 0;
  *a3 = 0LL;
  v7 = a1;
  v35 = 0LL;
  P = 0LL;
  v29 = 0LL;
  Src = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  v9 = 0LL;
  v34 = 0;
  *a4 = 0;
  memset_0(v31, 0, 0x48uLL);
  v10 = *(_QWORD *)(v7[39] + 40LL);
  v27 = v10;
  if ( a2 )
  {
    if ( (unsigned int)PnpGetDeviceResourcesFromRegistry((_DWORD)v7, 0, 2, (_DWORD)a3, (__int64)&v33) != -1073741772 )
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
    if ( (unsigned int)PnpGetDeviceResourcesFromRegistry((_DWORD)v7, 1, 1, (unsigned int)&v35, (__int64)&v33) != -1073741772 )
    {
      v9 = v35;
LABEL_15:
      DeviceResourcesFromRegistry = PnpGetDeviceResourcesFromRegistry(
                                      (_DWORD)v7,
                                      0,
                                      4,
                                      (unsigned int)&v29,
                                      (__int64)&v33);
      v17 = v29;
      if ( DeviceResourcesFromRegistry >= 0 && (!v29 || !*(_DWORD *)v29 || *((_DWORD *)v29 + 1) != 5) )
      {
        v22 = PnpFilterResourceRequirementsList(v9, (unsigned int *)v29, (__int64 *)&Src, &v34);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        if ( v22 < 0 )
        {
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          return (unsigned int)v22;
        }
        if ( (*(_DWORD *)(v27 + 396) & 1) != 0 || v34 && v9[7] <= 1 )
        {
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          v9 = (unsigned int *)Src;
          goto LABEL_66;
        }
        v15 = PnpMergeFilteredResourceRequirementsList(Src, v9, (unsigned int **)&ValueName);
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        if ( Src )
        {
          ExFreePoolWithTag(Src, 0);
          Src = 0LL;
        }
        if ( (v15 & 0x80000000) == 0 )
        {
          v9 = *(unsigned int **)&ValueName.Length;
LABEL_66:
          v7 = KeyHandle;
          goto LABEL_18;
        }
        return v15;
      }
      if ( v29 )
        ExFreePoolWithTag(v29, 0);
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
      v18 = P;
      *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
      KeyHandle = 0LL;
      if ( P )
      {
        v19 = *(unsigned int *)P;
        *a4 = *(_DWORD *)P;
        Pool2 = (void *)ExAllocatePool2(0x100uLL, v19, 0x20207050u);
        *a3 = Pool2;
        if ( !Pool2 )
        {
          ExFreePoolWithTag(v18, 0);
          return 3221225626LL;
        }
        memmove(Pool2, v18, *a4);
        ExFreePoolWithTag(v18, 0);
      }
      else
      {
        *a4 = 0;
        *a3 = 0LL;
      }
      if ( (int)CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(v27 + 48),
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
    if ( (*(_DWORD *)(v27 + 396) & 1) != 0 )
    {
      result = PnpGetDeviceResourcesFromRegistry((_DWORD)v7, 1, 2, (unsigned int)&v35, (__int64)&v33);
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
      v12 = *(unsigned int **)(v27 + 440);
      if ( v12 )
      {
        v23 = (unsigned int *)ExAllocatePool2(0x100uLL, *v12, 0x20207050u);
        v9 = v23;
        if ( !v23 )
          return 3221225495LL;
        memmove(v23, *(const void **)(v27 + 440), **(unsigned int **)(v27 + 440));
        goto LABEL_15;
      }
      result = PpIrpQueryResourceRequirements(v7, &v35);
      if ( (_DWORD)result == -1073741637 )
      {
        v9 = 0LL;
        goto LABEL_15;
      }
    }
    v9 = v35;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(v10 + 396) & 1) == 0 )
  {
    v31[0] = 2587;
    v14 = IopSynchronousCall(v7, (__int64)v31, -1073741637, 0LL, a3);
    v15 = v14;
    if ( v14 == -1073741637 )
    {
      *a3 = 0LL;
      v15 = 0;
    }
    else if ( v14 < 0 )
    {
      return v15;
    }
    *a4 = PnpDetermineResourceListSize(*a3);
    return v15;
  }
  v21 = PnpGetDeviceResourcesFromRegistry((_DWORD)v7, 0, 7, (_DWORD)a3, (__int64)a4);
  if ( v21 != -1073741772 )
    return v21;
  return v4;
}
