/*
 * XREFs of IvtSetupScalableModeDefaultPasidTables @ 0x140B42A38
 * Callers:
 *     IvtInitializeIommu @ 0x140B41B90 (IvtInitializeIommu.c)
 * Callees:
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x1404C901C (IvtUpdateScalableModePasidTablesForPasid.c)
 *     IvtAllocateScalableModePasidTables @ 0x14056A25C (IvtAllocateScalableModePasidTables.c)
 */

__int64 __fastcall IvtSetupScalableModeDefaultPasidTables(__int64 a1, int a2, int a3, int a4)
{
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // rbx
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF

  v13 = 0LL;
  v8 = IvtAllocateScalableModePasidTables(a1, 0LL, a3, 0, 0x3Fu, 3, a2, &v13, 0LL);
  if ( v8 >= 0 )
  {
    v12 = a3;
    v10 = v13;
    IvtUpdateScalableModePasidTablesForPasid(a1, v13, v9, a2, v12, a4);
    *(_QWORD *)(a1 + 104) = v10;
  }
  return (unsigned int)v8;
}
