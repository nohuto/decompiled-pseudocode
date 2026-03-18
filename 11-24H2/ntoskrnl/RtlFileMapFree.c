/*
 * XREFs of RtlFileMapFree @ 0x1404B5148
 * Callers:
 *     AslpFileGetChecksumAttributes @ 0x14080CCA0 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetVersionBlock @ 0x14080E580 (AslpFileGetVersionBlock.c)
 *     AslFileMappingDelete @ 0x14095CDD8 (AslFileMappingDelete.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x1406A6950 (ZwUnmapViewOfSection.c)
 *     MmUnsecureVirtualMemory @ 0x1408E51C0 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall RtlFileMapFree(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax
  void *v4; // rcx
  void *v5; // rdx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 40);
    if ( v2 )
      MmUnsecureVirtualMemory(v2);
    if ( *(_BYTE *)(a1 + 48) && *(_QWORD *)a1 )
      ZwClose(*(HANDLE *)a1);
    if ( *(_BYTE *)(a1 + 49) )
    {
      v4 = *(void **)(a1 + 8);
      if ( v4 )
        ZwClose(v4);
    }
    if ( *(_BYTE *)(a1 + 50) )
    {
      v5 = *(void **)(a1 + 24);
      if ( v5 )
        ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v5);
    }
    result = 0LL;
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
