/*
 * XREFs of LdrpMinimalMapModule @ 0x18008F820
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18008F450 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180035400 (RtlImageDirectoryEntryToData.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     LdrpCheckForRetryLoading @ 0x18008EC2C (LdrpCheckForRetryLoading.c)
 *     RtlQueryImageFileKeyOption @ 0x1800A5610 (RtlQueryImageFileKeyOption.c)
 *     RtlEqualUnicodeString @ 0x1800A7500 (RtlEqualUnicodeString.c)
 *     RtlAcquirePrivilege @ 0x1800E4740 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1800F2570 (RtlReleasePrivilege.c)
 *     ZwMapViewOfSection @ 0x180160550 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 *     ZwMapViewOfSectionEx @ 0x180162400 (ZwMapViewOfSectionEx.c)
 *     NtRaiseHardError @ 0x180162EE0 (NtRaiseHardError.c)
 */

__int64 __fastcall LdrpMinimalMapModule(__int64 a1, void *a2)
{
  __int64 v2; // r15
  char v4; // r12
  int v5; // ebx
  wchar_t *v6; // rdx
  struct _TEB *v7; // r13
  ULONG PageProtection; // r8d
  bool v9; // zf
  int v10; // edx
  ULONG AllocationType; // r14d
  ULONG ExtendedParameterCount; // ecx
  __int64 v13; // rax
  NTSTATUS v14; // eax
  NTSTATUS v15; // ebx
  __int64 v16; // r14
  _BYTE *v17; // rax
  void *v18; // rdx
  unsigned __int64 Parameters; // [rsp+58h] [rbp-29h] BYREF
  __int128 v21; // [rsp+68h] [rbp-19h] BYREF
  __int64 v22; // [rsp+78h] [rbp-9h]
  MEM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+80h] [rbp-1h] BYREF
  __int128 v24; // [rsp+90h] [rbp+Fh]
  void *Response; // [rsp+E8h] [rbp+67h] BYREF
  HANDLE SectionHandle; // [rsp+F0h] [rbp+6Fh]
  PVOID ReturnedState; // [rsp+F8h] [rbp+77h] BYREF

  SectionHandle = a2;
  v2 = *(_QWORD *)(a1 + 56);
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 712, (__int64)"LdrpMinimalMapModule", 3, "DLL name: %wZ\n", v2 + 72);
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 713, (__int64)"LdrpMinimalMapModule", 5, "%wZ\n", v2 + 72);
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
  PageProtection = 2;
  Response = v7->NtTib.ArbitraryUserPointer;
  v7->NtTib.ArbitraryUserPointer = *(void **)(v2 + 80);
  v9 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  v10 = *(_DWORD *)(a1 + 32) & 0x800000;
  ExtendedParameters = 0LL;
  if ( v9 )
    PageProtection = 128;
  AllocationType = v5 | 0x40000;
  ExtendedParameterCount = 0;
  v24 = 0LL;
  if ( !v10 )
    AllocationType = v5;
  v9 = (*(_DWORD *)(a1 + 32) & 0x800) == 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( !v9 )
  {
    ExtendedParameterCount = 1;
    *((_QWORD *)&v21 + 1) = LdrpMaximumUserModeAddress;
    ExtendedParameters.ULong64 = (DWORD64)&v21;
    *(_BYTE *)&ExtendedParameters.0 = 1;
  }
  if ( v10 )
  {
    v13 = 2LL * ExtendedParameterCount++;
    *((_BYTE *)&ExtendedParameters.0 + 8 * v13) = 5;
    *(&ExtendedParameters.ULong64 + v13) = 512LL;
  }
  if ( ExtendedParameterCount )
    v14 = ZwMapViewOfSectionEx(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            (PVOID *)(v2 + 48),
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
            (PVOID *)(v2 + 48),
            0LL,
            0LL,
            0LL,
            (PSIZE_T)(a1 + 168),
            ViewShare,
            AllocationType,
            PageProtection);
  v15 = v14;
  v7->NtTib.ArbitraryUserPointer = Response;
  if ( AllocationType == 0x20000000 )
    RtlReleasePrivilege(ReturnedState);
  if ( v15 == 1073741827 )
  {
LABEL_24:
    if ( !*(_QWORD *)(a1 + 176) && LdrpMapAndSnapWork )
    {
      if ( LdrpCheckForRetryLoading(a1, 1) )
      {
        v15 = -1073741267;
      }
      else if ( v4 )
      {
        v15 = -1073741800;
      }
    }
    goto LABEL_41;
  }
  if ( v15 != 1073741838 )
  {
    if ( v15 != 1073741878 )
      goto LABEL_41;
    goto LABEL_24;
  }
  v16 = *(_QWORD *)(a1 + 56);
  LODWORD(Response) = 0;
  v17 = RtlImageDirectoryEntryToData(*(PVOID *)(v16 + 48), 1u, 0xEu, (PULONG)&ReturnedState);
  if ( v17 && (v17[16] & 1) != 0 )
  {
    *(_DWORD *)(a1 + 32) |= 0x200000u;
    v15 = 0;
  }
  else if ( *(_WORD *)(LdrpAppHeaders + 72) <= 3u )
  {
    Parameters = v16 + 72;
    v15 = NtRaiseHardError(1073741838, 1u, 1u, &Parameters, 2u, (PULONG)&Response);
    if ( v15 >= 0 )
    {
      if ( (_DWORD)Response == 3 )
      {
        if ( LdrInitState != 3 )
          ++LdrpFatalHardErrorCount;
        v15 = -1073741701;
      }
      else
      {
        *(_DWORD *)(v16 + 104) &= ~4u;
      }
    }
  }
  else
  {
    v15 = 1073741838;
  }
LABEL_41:
  v18 = *(void **)(v2 + 48);
  if ( v18 && (v15 < 0 || v15 == 1073741838) )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v18);
    *(_QWORD *)(v2 + 48) = 0LL;
  }
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 939, (__int64)"LdrpMinimalMapModule", 4, "Status: 0x%08lx\n", v15);
  LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 940, (__int64)"LdrpMinimalMapModule", 6, "%x\n", v15);
  return (unsigned int)v15;
}
