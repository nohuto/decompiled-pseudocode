/*
 * XREFs of IvtBuildScalableModePasidDirectoryEntry @ 0x1404D95FC
 * Callers:
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x1404C901C (IvtUpdateScalableModePasidTablesForPasid.c)
 *     IvtInitializeScalableModePasidTables @ 0x14056C0A8 (IvtInitializeScalableModePasidTables.c)
 *     IvtLegacyInitializeScalableModePasidTables @ 0x14056D764 (IvtLegacyInitializeScalableModePasidTables.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __fastcall IvtBuildScalableModePasidDirectoryEntry(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5)
{
  PHYSICAL_ADDRESS result; // rax

  *a5 = 1LL;
  result = MmGetPhysicalAddress(*(PVOID *)(a2 + 8LL * ((a3 >> 6) & 0x3FFF) + 64));
  *a5 ^= (result.QuadPart ^ *a5) & 0xFFFFFFFFFFFFF000uLL;
  return result;
}
