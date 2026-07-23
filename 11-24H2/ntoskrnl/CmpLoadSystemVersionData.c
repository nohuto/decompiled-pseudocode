/*
 * XREFs of CmpLoadSystemVersionData @ 0x1407D76DC
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpLoadLayerVersions @ 0x1407D74E4 (CmpLoadLayerVersions.c)
 *     CmpMergeVersionDescriptors @ 0x1407D7940 (CmpMergeVersionDescriptors.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS CmpLoadSystemVersionData()
{
  __int64 *v0; // rbx
  int v1; // edi
  NTSTATUS result; // eax
  __int64 v3; // r8
  NTSTATUS LayerVersions; // esi
  __int64 v5; // r8
  int i; // r14d
  int v7; // r15d
  __int64 v8; // rsi
  int v9; // ebx
  PVOID *v10; // rsi
  __int64 v11; // rdx
  __int64 j; // rbx
  int v13; // [rsp+38h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-51h] BYREF
  PVOID P[16]; // [rsp+48h] [rbp-49h] BYREF

  KeyHandle = 0LL;
  v0 = CmpLayerVersions;
  CmpEditionVersion = 0LL;
  memset_0(CmpLayerVersions, 0, sizeof(CmpLayerVersions));
  CmpLayerVersionCount = 0;
  memset_0(P, 0, sizeof(P));
  v1 = 0;
  v13 = 0;
  result = ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&stru_14000BE90);
  if ( result >= 0 )
  {
    LayerVersions = CmpLoadLayerVersions(
                      CmpLayerVersions,
                      &CmpLayerVersionCount,
                      v3,
                      KeyHandle,
                      (UNICODE_STRING *)&CmpBuildLayersString,
                      4088);
    if ( LayerVersions >= 0 )
    {
      CmpLoadLayerVersions(P, &v13, v5, KeyHandle, (UNICODE_STRING *)&CmpServicingLayersString, 64);
      if ( CmpLayerVersions[0] && (*(_DWORD *)(CmpLayerVersions[0] + 800) & 1) != 0 )
        CmpEditionVersion = CmpLayerVersions[0];
      v1 = v13;
      for ( i = 0; i < CmpLayerVersionCount; ++v0 )
      {
        v7 = 0;
        v8 = 0LL;
        while ( v7 < v1 )
        {
          if ( !RtlCompareUnicodeStrings(
                  *(PCWCH *)(*v0 + 24),
                  (unsigned __int64)*(unsigned __int16 *)(*v0 + 16) >> 1,
                  *((PCWCH *)P[v8] + 3),
                  (unsigned __int64)*((unsigned __int16 *)P[v8] + 8) >> 1,
                  1u) )
          {
            CmpMergeVersionDescriptors(*v0, P[v8]);
            break;
          }
          ++v7;
          ++v8;
        }
        ++i;
      }
      if ( CmpEditionVersion )
      {
        v9 = 0;
        v10 = P;
        while ( v9 < v1 )
        {
          if ( !RtlCompareUnicodeStrings(
                  *((PCWCH *)*v10 + 3),
                  (unsigned __int64)*((unsigned __int16 *)*v10 + 8) >> 1,
                  L"_EDITION_",
                  9uLL,
                  1u) )
          {
            CmpMergeVersionDescriptors(CmpEditionVersion, P[v9]);
            break;
          }
          ++v9;
          ++v10;
        }
        v11 = CmpEditionVersion;
        NtBuildNumber = *(_DWORD *)(CmpEditionVersion + 8) | 0xF0000000;
        *(_DWORD *)(MmWriteableSharedUserData + 608) = *(_DWORD *)(CmpEditionVersion + 8);
        dword_140FCFE78 = (unsigned __int16)NtBuildNumber;
        NtBuildQfe = *(_DWORD *)(v11 + 12);
      }
      LayerVersions = 0;
    }
    for ( j = v1 - 1; j >= 0; P[j--] = 0LL )
      ExFreePoolWithTag(P[j], 0x64764D43u);
    ZwClose(KeyHandle);
    return LayerVersions;
  }
  return result;
}
