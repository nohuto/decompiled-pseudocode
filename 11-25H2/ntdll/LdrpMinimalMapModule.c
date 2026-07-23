/*
 * XREFs of LdrpMinimalMapModule @ 0x18006D7B0
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18006D3E0 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     LdrpCheckForRetryLoading @ 0x180072F4C (LdrpCheckForRetryLoading.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlQueryImageFileKeyOption @ 0x1800B2AE0 (RtlQueryImageFileKeyOption.c)
 *     RtlEqualUnicodeString @ 0x1800B49D0 (RtlEqualUnicodeString.c)
 *     RtlAcquirePrivilege @ 0x1800EA3C0 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1800F9660 (RtlReleasePrivilege.c)
 *     Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledDeviceUsageNoInline @ 0x180162098 (Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     ZwMapViewOfSectionEx @ 0x1801655D0 (ZwMapViewOfSectionEx.c)
 *     NtRaiseHardError @ 0x1801660B0 (NtRaiseHardError.c)
 */

__int64 __fastcall LdrpMinimalMapModule(__int64 a1, void *a2)
{
  __int64 v2; // r15
  char v4; // r12
  int v5; // ebx
  wchar_t *v6; // rdx
  struct _TEB *v7; // rcx
  ULONG PageProtection; // r13d
  int v9; // ecx
  ULONG AllocationType; // r14d
  ULONG ExtendedParameterCount; // ebx
  __int64 v12; // rax
  PVOID *v13; // r8
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  NTSTATUS v16; // ebx
  __int64 v17; // r14
  _BYTE *v18; // rax
  void *v19; // rdx
  unsigned __int64 Parameters; // [rsp+58h] [rbp-39h] BYREF
  __int128 v22; // [rsp+68h] [rbp-29h] BYREF
  __int64 v23; // [rsp+78h] [rbp-19h]
  MEM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+80h] [rbp-11h] BYREF
  __int128 v25; // [rsp+90h] [rbp-1h]
  struct _TEB *Response; // [rsp+F8h] [rbp+67h] BYREF
  HANDLE SectionHandle; // [rsp+100h] [rbp+6Fh]
  PVOID ReturnedState; // [rsp+108h] [rbp+77h] BYREF
  void *ArbitraryUserPointer; // [rsp+110h] [rbp+7Fh]

  SectionHandle = a2;
  v2 = *(_QWORD *)(a1 + 56);
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 719LL, "LdrpMinimalMapModule", 3LL, "DLL name: %wZ\n", v2 + 72);
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 720LL, "LdrpMinimalMapModule", 5LL, "%wZ\n", v2 + 72);
  if ( RtlEqualUnicodeString((PUNICODE_STRING)(v2 + 88), (PUNICODE_STRING)&LdrpKernel32DllName, 1u)
    && (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) != 0 )
  {
    v4 = 1;
    ReturnedState = 0LL;
    v5 = 0x800000;
  }
  else
  {
    v4 = 0;
    ReturnedState = 0LL;
    v5 = 0x800000;
    if ( LdrpLargePageDllKeyHandle )
    {
      v6 = *(wchar_t **)(v2 + 96);
      LODWORD(Response) = 0;
      RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, v6, 4, 0LL);
      if ( (_DWORD)Response )
      {
        if ( RtlAcquirePrivilege((PULONG)&LdrpLockMemoryPrivilege, 1u, 0, &ReturnedState) >= 0 )
          v5 = 0x20000000;
      }
    }
  }
  v7 = NtCurrentTeb();
  *(_QWORD *)(a1 + 168) = 0LL;
  Response = v7;
  PageProtection = 2;
  ArbitraryUserPointer = v7->NtTib.ArbitraryUserPointer;
  v7->NtTib.ArbitraryUserPointer = *(void **)(v2 + 80);
  v9 = *(_DWORD *)(a1 + 32);
  ExtendedParameters = 0LL;
  if ( (v9 & 0x800000) == 0 )
    PageProtection = 128;
  AllocationType = v5 | 0x40000;
  v25 = 0LL;
  if ( (v9 & 0x800000) == 0 )
    AllocationType = v5;
  ExtendedParameterCount = 0;
  v23 = 0LL;
  v22 = 0LL;
  if ( (v9 & 0x800) != 0 )
  {
    ExtendedParameterCount = 1;
    *((_QWORD *)&v22 + 1) = LdrpMaximumUserModeAddress;
    ExtendedParameters.ULong64 = (DWORD64)&v22;
    *(_BYTE *)&ExtendedParameters.0 = 1;
  }
  if ( (unsigned int)Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledDeviceUsageNoInline()
    && (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
  {
    v12 = 2LL * ExtendedParameterCount++;
    *((_BYTE *)&ExtendedParameters.0 + 8 * v12) = 5;
    *(&ExtendedParameters.ULong64 + v12) = 512LL;
  }
  v13 = (PVOID *)(v2 + 48);
  if ( ExtendedParameterCount )
    v14 = ZwMapViewOfSectionEx(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            v13,
            0LL,
            (PSIZE_T)(a1 + 168),
            AllocationType,
            PageProtection,
            &ExtendedParameters,
            ExtendedParameterCount);
  else
    v14 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            v13,
            0LL,
            0LL,
            0LL,
            (PSIZE_T)(a1 + 168),
            ViewShare,
            AllocationType,
            PageProtection);
  v16 = v14;
  Response->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  if ( AllocationType == 0x20000000 )
    RtlReleasePrivilege(ReturnedState);
  if ( v16 == 1073741827 )
  {
LABEL_25:
    if ( !*(_QWORD *)(a1 + 176) && LdrpMapAndSnapWork )
    {
      LOBYTE(v15) = 1;
      if ( (unsigned __int8)LdrpCheckForRetryLoading(a1, v15) )
      {
        v16 = -1073741267;
      }
      else if ( v4 )
      {
        v16 = -1073741800;
      }
    }
    goto LABEL_42;
  }
  if ( v16 != 1073741838 )
  {
    if ( v16 != 1073741878 )
      goto LABEL_42;
    goto LABEL_25;
  }
  v17 = *(_QWORD *)(a1 + 56);
  LODWORD(Response) = 0;
  v18 = RtlImageDirectoryEntryToData(*(PVOID *)(v17 + 48), 1u, 0xEu, (PULONG)&ReturnedState);
  if ( v18 && (v18[16] & 1) != 0 )
  {
    *(_DWORD *)(a1 + 32) |= 0x200000u;
    v16 = 0;
  }
  else if ( *(_WORD *)(LdrpAppHeaders + 72) <= 3u )
  {
    Parameters = v17 + 72;
    v16 = NtRaiseHardError(1073741838, 1u, 1u, &Parameters, 2u, (PULONG)&Response);
    if ( v16 >= 0 )
    {
      if ( (_DWORD)Response == 3 )
      {
        if ( LdrInitState != 3 )
          ++LdrpFatalHardErrorCount;
        v16 = -1073741701;
      }
      else
      {
        *(_DWORD *)(v17 + 104) &= ~4u;
      }
    }
  }
  else
  {
    v16 = 1073741838;
  }
LABEL_42:
  v19 = *(void **)(v2 + 48);
  if ( v19 && (v16 < 0 || v16 == 1073741838) )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v19);
    *(_QWORD *)(v2 + 48) = 0LL;
  }
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 949LL, "LdrpMinimalMapModule", 4LL, "Status: 0x%08lx\n", v16);
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 950LL, "LdrpMinimalMapModule", 6LL, "%x\n", v16);
  return (unsigned int)v16;
}
