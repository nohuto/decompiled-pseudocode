/*
 * XREFs of IvtLegacySetupScalableModeDefaultPasidTables @ 0x140B42624
 * Callers:
 *     IvtInitializeIommu @ 0x140B41B90 (IvtInitializeIommu.c)
 * Callees:
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x1404C901C (IvtUpdateScalableModePasidTablesForPasid.c)
 *     IvtLegacyAllocateScalableModePasidTables @ 0x14056C4A0 (IvtLegacyAllocateScalableModePasidTables.c)
 */

__int64 __fastcall IvtLegacySetupScalableModeDefaultPasidTables(__int64 a1, int a2, int a3, int a4)
{
  int ScalableModePasidTables; // esi
  __int64 v9; // r8
  __int64 v10; // rbx
  int v12; // [rsp+20h] [rbp-38h]
  __int64 v13[3]; // [rsp+40h] [rbp-18h] BYREF

  v13[0] = 0LL;
  ScalableModePasidTables = IvtLegacyAllocateScalableModePasidTables(a1, 0LL, a3, 0, 0x3Fu, 3, v13, 0LL);
  if ( ScalableModePasidTables >= 0 )
  {
    v12 = a3;
    v10 = v13[0];
    IvtUpdateScalableModePasidTablesForPasid(a1, v13[0], v9, a2, v12, a4);
    *(_QWORD *)(a1 + 104) = v10;
  }
  return (unsigned int)ScalableModePasidTables;
}
