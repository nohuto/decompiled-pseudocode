/*
 * XREFs of IvtLegacyBuildScalableModeContextEntry @ 0x14056D2A8
 * Callers:
 *     IvtLegacyUpdateScalableModeContextEntry @ 0x14056E2C8 (IvtLegacyUpdateScalableModeContextEntry.c)
 *     IvtInitializeIommu @ 0x140B53BE0 (IvtInitializeIommu.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 */

unsigned __int64 __fastcall IvtLegacyBuildScalableModeContextEntry(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        int a5,
        unsigned __int64 *a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  a6[1] = 0LL;
  a6[2] = 0LL;
  a6[3] = 0LL;
  *a6 = 0LL;
  if ( a2 )
  {
    *a6 = 1LL;
    v10 = *a6 ^ (MmGetPhysicalAddress(*(PVOID *)(a2 + 56)).QuadPart ^ *a6) & 0xFFFFFFFFFFFFF000uLL;
    *a6 = v10;
    v11 = (*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF;
    if ( v11 < 0x200 )
      v11 = 512;
    a6[1] &= 0xFFFFFFFFFFF00000uLL;
    _BitScanReverse(&v12, v11);
    result = ((unsigned __int64)(v12 + 1) << 9) ^ (v10 ^ ((unsigned __int64)(v12 + 1) << 9)) & 0xFFFFFFFFFFFFF1FFuLL;
    *a6 = result;
    if ( a4 )
    {
      result |= 0x1CuLL;
    }
    else
    {
      if ( !a3 )
        return result;
      result |= 4uLL;
    }
    *a6 = result;
  }
  return result;
}
