/*
 * XREFs of LdrpPrepareImportAddressTableForSnap @ 0x180022070
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 *     AVrfpSnapDllImports @ 0x1800ED2D4 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180022E20 (LdrImageDirectoryEntryToLoadConfig.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpPrepareImportAddressTableForSnap(__int64 a1)
{
  __int64 v1; // rdi
  ULONG *v2; // r9
  unsigned int v3; // ebp
  void *v5; // rcx
  PVOID v6; // rax
  bool v7; // zf
  __int64 Config; // rax
  PIMAGE_NT_HEADERS v9; // rcx
  _QWORD *v10; // rax
  void *v11; // rcx
  NTSTATUS result; // eax
  char *v13; // rax
  char *v14; // rdx
  unsigned int VirtualAddress; // edx
  unsigned int *v16; // r8
  unsigned int v17; // r9d
  __int64 v18; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = (ULONG *)(a1 + 120);
  v3 = 0;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  v5 = *(void **)(v1 + 48);
  OutHeaders = 0LL;
  v6 = RtlImageDirectoryEntryToData(v5, 1u, 0xCu, v2);
  v7 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  *(_QWORD *)(a1 + 112) = v6;
  if ( !v7 )
    return 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(v1 + 48), 0LL, &OutHeaders);
  Config = LdrImageDirectoryEntryToLoadConfig(*(_QWORD *)(v1 + 48));
  if ( !Config || *(_DWORD *)Config < 0x94u )
    goto LABEL_8;
  v9 = OutHeaders;
  if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) != 0 && (*(_DWORD *)(Config + 144) & 0x100) != 0 )
  {
    v10 = *(_QWORD **)(Config + 112);
    *(_QWORD *)(a1 + 160) = v10;
    if ( v10 )
    {
      *(_QWORD *)(a1 + 152) = *v10;
LABEL_8:
      v9 = OutHeaders;
    }
  }
  if ( !*(_QWORD *)(a1 + 112) )
  {
    VirtualAddress = v9->OptionalHeader.DataDirectory[1].VirtualAddress;
    v16 = (unsigned int *)((char *)&v9->OptionalHeader.Magic + v9->FileHeader.SizeOfOptionalHeader);
    if ( VirtualAddress )
    {
      while ( v3 < v9->FileHeader.NumberOfSections )
      {
        v17 = v16[3];
        if ( VirtualAddress >= v17 && VirtualAddress < v17 + v16[4] )
        {
          *(_QWORD *)(a1 + 112) = *(_QWORD *)(v1 + 48) + v17;
          v18 = v16[2];
          *(_QWORD *)(a1 + 120) = v18;
          if ( !v18 )
            *(_QWORD *)(a1 + 120) = v16[4];
          break;
        }
        ++v3;
        v16 += 10;
      }
    }
  }
  v11 = *(void **)(a1 + 112);
  if ( v11 && *(_QWORD *)(a1 + 120) )
  {
    RegionSize = *(_QWORD *)(a1 + 120);
    BaseAddress = v11;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, (PULONG)(a1 + 144));
    if ( result < 0 )
      return result;
    v13 = (char *)BaseAddress;
    v14 = (char *)BaseAddress + RegionSize;
    do
    {
      *(_QWORD *)v13 = *(_QWORD *)v13;
      v13 += 4096;
    }
    while ( v13 < v14 );
  }
  return 0;
}
