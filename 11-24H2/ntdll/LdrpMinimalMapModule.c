/*
 * XREFs of LdrpMinimalMapModule @ 0x180072F40
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180072B70 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180008A00 (RtlImageDirectoryEntryToData.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpCheckForRetryLoading @ 0x18007234C (LdrpCheckForRetryLoading.c)
 *     RtlQueryImageFileKeyOption @ 0x180089B50 (RtlQueryImageFileKeyOption.c)
 *     RtlEqualUnicodeString @ 0x18008BA40 (RtlEqualUnicodeString.c)
 *     RtlAcquirePrivilege @ 0x1800E9050 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1800F7A00 (RtlReleasePrivilege.c)
 *     ZwMapViewOfSection @ 0x180162190 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 *     ZwMapViewOfSectionEx @ 0x180164040 (ZwMapViewOfSectionEx.c)
 *     NtRaiseHardError @ 0x180164B20 (NtRaiseHardError.c)
 */

__int64 __fastcall LdrpMinimalMapModule(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r15
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // r12
  int v7; // ebx
  __int64 v8; // rdx
  struct _TEB *v9; // r13
  int v10; // r8d
  bool v11; // zf
  int v12; // edx
  int v13; // r14d
  unsigned int v14; // ecx
  __int64 v15; // rax
  int v16; // eax
  int v17; // ebx
  __int64 v18; // r14
  __int64 v19; // rax
  char *Format; // [rsp+28h] [rbp-59h]
  __int64 v22; // [rsp+38h] [rbp-49h]
  __int64 v23; // [rsp+58h] [rbp-29h] BYREF
  __int128 v24; // [rsp+68h] [rbp-19h] BYREF
  __int64 v25; // [rsp+78h] [rbp-9h]
  _OWORD v26[2]; // [rsp+80h] [rbp-1h]
  void *ArbitraryUserPointer; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v28; // [rsp+F0h] [rbp+6Fh]
  __int64 v29; // [rsp+F8h] [rbp+77h] BYREF

  v28 = a2;
  v2 = *(_QWORD **)(a1 + 56);
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrmap.c",
    712,
    (__int64)"LdrpMinimalMapModule",
    3,
    "DLL name: %wZ\n",
    (_BYTE)v2 + 72);
  LdrpLogInternal((__int64)"minkernel\\ldr\\ldrmap.c", 713, (__int64)"LdrpMinimalMapModule", 5, "%wZ\n", (_BYTE)v2 + 72);
  LOBYTE(v4) = 1;
  if ( (unsigned __int8)RtlEqualUnicodeString(v2 + 11, &LdrpKernel32DllName, v4, v5, Format)
    && (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) != 0 )
  {
    v6 = 1;
    v29 = 0LL;
    v7 = 0x800000;
  }
  else
  {
    v6 = 0;
    v29 = 0LL;
    v7 = 0x800000;
    if ( LdrpLargePageDllKeyHandle )
    {
      v8 = v2[12];
      LODWORD(ArbitraryUserPointer) = 0;
      RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, v8, 4LL, &ArbitraryUserPointer, 4, 0LL);
      if ( (_DWORD)ArbitraryUserPointer )
      {
        if ( (int)RtlAcquirePrivilege(&LdrpLockMemoryPrivilege, 1LL, 0LL, &v29) >= 0 )
          v7 = 0x20000000;
      }
    }
  }
  v9 = NtCurrentTeb();
  *(_QWORD *)(a1 + 168) = 0LL;
  v10 = 2;
  ArbitraryUserPointer = v9->NtTib.ArbitraryUserPointer;
  v9->NtTib.ArbitraryUserPointer = (void *)v2[10];
  v11 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  v12 = *(_DWORD *)(a1 + 32) & 0x800000;
  v26[0] = 0LL;
  if ( v11 )
    v10 = 128;
  v13 = v7 | 0x40000;
  v14 = 0;
  v26[1] = 0LL;
  if ( !v12 )
    v13 = v7;
  v11 = (*(_DWORD *)(a1 + 32) & 0x800) == 0;
  v24 = 0LL;
  v25 = 0LL;
  if ( !v11 )
  {
    v14 = 1;
    *((_QWORD *)&v24 + 1) = LdrpMaximumUserModeAddress;
    *((_QWORD *)&v26[0] + 1) = &v24;
    LOBYTE(v26[0]) = 1;
  }
  if ( v12 )
  {
    v15 = v14++;
    LOBYTE(v26[v15]) = 5;
    *((_QWORD *)&v26[v15] + 1) = 512LL;
  }
  if ( v14 )
  {
    LODWORD(v22) = v10;
    v16 = ZwMapViewOfSectionEx(v28, -1LL, v2 + 6);
  }
  else
  {
    v16 = ZwMapViewOfSection(v28, -1LL, v2 + 6, 0LL, 0LL, 0LL, a1 + 168, 1, v13, v10, v23);
  }
  v17 = v16;
  v9->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  if ( v13 == 0x20000000 )
    RtlReleasePrivilege(v29);
  if ( v17 == 1073741827 )
  {
LABEL_24:
    if ( !*(_QWORD *)(a1 + 176) && LdrpMapAndSnapWork )
    {
      if ( LdrpCheckForRetryLoading(a1, 1) )
      {
        v17 = -1073741267;
      }
      else if ( v6 )
      {
        v17 = -1073741800;
      }
    }
    goto LABEL_41;
  }
  if ( v17 != 1073741838 )
  {
    if ( v17 != 1073741878 )
      goto LABEL_41;
    goto LABEL_24;
  }
  v18 = *(_QWORD *)(a1 + 56);
  LODWORD(ArbitraryUserPointer) = 0;
  v19 = RtlImageDirectoryEntryToData(*(_QWORD *)(v18 + 48), 1, 0xEu, &v29);
  if ( v19 && (*(_BYTE *)(v19 + 16) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 32) |= 0x200000u;
    v17 = 0;
  }
  else if ( *(_WORD *)(LdrpAppHeaders + 72) <= 3u )
  {
    v23 = v18 + 72;
    v17 = NtRaiseHardError(1073741838LL, 1LL, 1LL, &v23, 2, &ArbitraryUserPointer, v22);
    if ( v17 >= 0 )
    {
      if ( (_DWORD)ArbitraryUserPointer == 3 )
      {
        if ( LdrInitState != 3 )
          ++LdrpFatalHardErrorCount;
        v17 = -1073741701;
      }
      else
      {
        *(_DWORD *)(v18 + 104) &= ~4u;
      }
    }
  }
  else
  {
    v17 = 1073741838;
  }
LABEL_41:
  if ( v2[6] && (v17 < 0 || v17 == 1073741838) )
  {
    NtUnmapViewOfSection(-1LL);
    v2[6] = 0LL;
  }
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrmap.c",
    939,
    (__int64)"LdrpMinimalMapModule",
    4,
    "Status: 0x%08lx\n",
    v17);
  LdrpLogInternal((__int64)"minkernel\\ldr\\ldrmap.c", 940, (__int64)"LdrpMinimalMapModule", 6, "%x\n", v17);
  return (unsigned int)v17;
}
