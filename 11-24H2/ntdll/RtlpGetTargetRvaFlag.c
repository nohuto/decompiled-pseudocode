/*
 * XREFs of RtlpGetTargetRvaFlag @ 0x1800E7AD8
 * Callers:
 *     RtlpGuardIsSuppressedAddress @ 0x1800E7950 (RtlpGuardIsSuppressedAddress.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x1800E7AA0 (RtlGuardIsExportSuppressedAddress.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180036000 (LdrImageDirectoryEntryToLoadConfig.c)
 *     bsearch_s @ 0x180122070 (bsearch_s.c)
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

char __fastcall RtlpGetTargetRvaFlag(PVOID BaseAddress, _BYTE *a2)
{
  int v4; // ebx
  __int64 Config; // rax
  unsigned int v6; // ecx
  rsize_t v7; // r8
  const void *v8; // rdx
  unsigned int v9; // ecx
  _BYTE *v10; // rax
  char v11; // cl
  char result; // al
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h]
  __int128 Key; // [rsp+48h] [rbp-20h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  Key = 0LL;
  if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryImageInformation, &v13, 0x18uLL, 0LL) < 0 )
    return 0;
  v4 = v13;
  if ( !(_QWORD)v13 )
    return 0;
  if ( (v14 & 2) != 0 )
    return 0;
  if ( (v14 & 1) != 0 )
    return 0;
  if ( (unsigned __int64)BaseAddress < (unsigned __int64)v13 )
    return 0;
  Config = LdrImageDirectoryEntryToLoadConfig((void *)v13);
  if ( !Config )
    return 0;
  if ( *(_DWORD *)Config < 0x94u )
    return 0;
  v6 = *(_DWORD *)(Config + 144);
  v7 = *(unsigned int *)(Config + 136);
  if ( (v6 & 0x400) == 0 )
    return 0;
  v8 = *(const void **)(Config + 128);
  if ( !v8 )
    return 0;
  v9 = (v6 >> 28) + 4;
  if ( v9 <= 4 )
    return 0;
  LODWORD(Key) = (_DWORD)BaseAddress - v4;
  v10 = bsearch_s(&Key, v8, v7, v9, (_CoreCrtSecureSearchSortCompareFunction)RtlpTargetCompare, 0LL);
  if ( !v10 )
    return 0;
  v11 = v10[4];
  result = 1;
  *a2 = v11;
  return result;
}
