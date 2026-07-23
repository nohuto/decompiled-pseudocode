/*
 * XREFs of IvtBuildScalableModePasidDirectoryEntry @ 0x1404D1ACC
 * Callers:
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x1404F2C14 (IvtUpdateScalableModePasidTablesForPasid.c)
 *     IvtInitializeScalableModePasidTables @ 0x14056C838 (IvtInitializeScalableModePasidTables.c)
 *     IvtLegacyInitializeScalableModePasidTables @ 0x14056DEF4 (IvtLegacyInitializeScalableModePasidTables.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
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
