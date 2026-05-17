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

__int64 __fastcall LdrpMinimalMapModule(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r15
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // r12
  int v7; // ebx
  __int64 v8; // rdx
  struct _TEB *v9; // rcx
  int v10; // r13d
  int v11; // ecx
  int v12; // r14d
  unsigned int v13; // ebx
  __int64 v14; // rax
  _QWORD *v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  int v18; // ebx
  __int64 v19; // r14
  __int64 v20; // rax
  char *Format; // [rsp+28h] [rbp-69h]
  __int64 v23; // [rsp+38h] [rbp-59h]
  _OWORD *v24; // [rsp+40h] [rbp-51h]
  __int64 v25; // [rsp+48h] [rbp-49h]
  __int64 v26; // [rsp+58h] [rbp-39h] BYREF
  __int128 v27; // [rsp+68h] [rbp-29h] BYREF
  __int64 v28; // [rsp+78h] [rbp-19h]
  _OWORD v29[2]; // [rsp+80h] [rbp-11h] BYREF
  struct _TEB *v30; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v31; // [rsp+100h] [rbp+6Fh]
  __int64 v32; // [rsp+108h] [rbp+77h] BYREF
  void *ArbitraryUserPointer; // [rsp+110h] [rbp+7Fh]

  v31 = a2;
  v2 = *(_QWORD **)(a1 + 56);
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrmap.c",
    719,
    (int)"LdrpMinimalMapModule",
    3,
    "DLL name: %wZ\n",
    (_BYTE)v2 + 72);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 720, (int)"LdrpMinimalMapModule", 5, "%wZ\n", (_BYTE)v2 + 72);
  LOBYTE(v4) = 1;
  if ( (unsigned __int8)RtlEqualUnicodeString(v2 + 11, &LdrpKernel32DllName, v4, v5, Format)
    && (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) != 0 )
  {
    v6 = 1;
    v32 = 0LL;
    v7 = 0x800000;
  }
  else
  {
    v6 = 0;
    v32 = 0LL;
    v7 = 0x800000;
    if ( LdrpLargePageDllKeyHandle )
    {
      v8 = v2[12];
      LODWORD(v30) = 0;
      RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, v8, 4LL, &v30, 4, 0LL);
      if ( (_DWORD)v30 )
      {
        if ( (int)RtlAcquirePrivilege(&LdrpLockMemoryPrivilege, 1LL, 0LL, &v32) >= 0 )
          v7 = 0x20000000;
      }
    }
  }
  v9 = NtCurrentTeb();
  *(_QWORD *)(a1 + 168) = 0LL;
  v30 = v9;
  v10 = 2;
  ArbitraryUserPointer = v9->NtTib.ArbitraryUserPointer;
  v9->NtTib.ArbitraryUserPointer = (void *)v2[10];
  v11 = *(_DWORD *)(a1 + 32);
  v29[0] = 0LL;
  if ( (v11 & 0x800000) == 0 )
    v10 = 128;
  v12 = v7 | 0x40000;
  v29[1] = 0LL;
  if ( (v11 & 0x800000) == 0 )
    v12 = v7;
  v13 = 0;
  v28 = 0LL;
  v27 = 0LL;
  if ( (v11 & 0x800) != 0 )
  {
    v13 = 1;
    *((_QWORD *)&v27 + 1) = LdrpMaximumUserModeAddress;
    *((_QWORD *)&v29[0] + 1) = &v27;
    LOBYTE(v29[0]) = 1;
  }
  if ( (unsigned int)Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledDeviceUsageNoInline()
    && (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
  {
    v14 = v13++;
    LOBYTE(v29[v14]) = 5;
    *((_QWORD *)&v29[v14] + 1) = 512LL;
  }
  v15 = v2 + 6;
  if ( v13 )
  {
    LODWORD(v25) = v13;
    v24 = v29;
    LODWORD(v23) = v10;
    v16 = ZwMapViewOfSectionEx(v31, -1LL, v15);
  }
  else
  {
    v16 = ZwMapViewOfSection(v31, -1LL, v15, 0LL, 0LL, 0LL, a1 + 168, 1, v12, v10);
  }
  v18 = v16;
  v30->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  if ( v12 == 0x20000000 )
    RtlReleasePrivilege(v32);
  if ( v18 == 1073741827 )
  {
LABEL_25:
    if ( !*(_QWORD *)(a1 + 176) && LdrpMapAndSnapWork )
    {
      LOBYTE(v17) = 1;
      if ( (unsigned __int8)LdrpCheckForRetryLoading(a1, v17) )
      {
        v18 = -1073741267;
      }
      else if ( v6 )
      {
        v18 = -1073741800;
      }
    }
    goto LABEL_42;
  }
  if ( v18 != 1073741838 )
  {
    if ( v18 != 1073741878 )
      goto LABEL_42;
    goto LABEL_25;
  }
  v19 = *(_QWORD *)(a1 + 56);
  LODWORD(v30) = 0;
  v20 = RtlImageDirectoryEntryToData(*(_QWORD *)(v19 + 48), 1, 0xEu, &v32);
  if ( v20 && (*(_BYTE *)(v20 + 16) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 32) |= 0x200000u;
    v18 = 0;
  }
  else if ( *(_WORD *)(LdrpAppHeaders + 72) <= 3u )
  {
    v26 = v19 + 72;
    v18 = NtRaiseHardError(1073741838LL, 1LL, 1LL, &v26, 2, &v30, v23, (_DWORD)v24, v25);
    if ( v18 >= 0 )
    {
      if ( (_DWORD)v30 == 3 )
      {
        if ( LdrInitState != 3 )
          ++LdrpFatalHardErrorCount;
        v18 = -1073741701;
      }
      else
      {
        *(_DWORD *)(v19 + 104) &= ~4u;
      }
    }
  }
  else
  {
    v18 = 1073741838;
  }
LABEL_42:
  if ( v2[6] && (v18 < 0 || v18 == 1073741838) )
  {
    NtUnmapViewOfSection(-1LL);
    v2[6] = 0LL;
  }
  LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 949, (int)"LdrpMinimalMapModule", 4, "Status: 0x%08lx\n", v18);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 950, (int)"LdrpMinimalMapModule", 6, "%x\n", v18);
  return (unsigned int)v18;
}
