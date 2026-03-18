/*
 * XREFs of IvtUpdateScalableModePasidTablesForPasid @ 0x1404C901C
 * Callers:
 *     IvtUpdateScalableModeTranslationStructures @ 0x1404C8F20 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtLegacyUpdateScalableModeTranslationStructures @ 0x14056DCFC (IvtLegacyUpdateScalableModeTranslationStructures.c)
 *     IvtLegacySetupScalableModeDefaultPasidTables @ 0x140B42624 (IvtLegacySetupScalableModeDefaultPasidTables.c)
 *     IvtSetupScalableModeDefaultPasidTables @ 0x140B42A38 (IvtSetupScalableModeDefaultPasidTables.c)
 * Callees:
 *     IvtBuildScalableModePasidTableS2Entry @ 0x1404D5438 (IvtBuildScalableModePasidTableS2Entry.c)
 *     IvtBuildScalableModePasidDirectoryEntry @ 0x1404D95FC (IvtBuildScalableModePasidDirectoryEntry.c)
 *     IvtLegacySetScalableModePasidTableEntry @ 0x1404F2A20 (IvtLegacySetScalableModePasidTableEntry.c)
 *     IvtBuildScalableModePasidTableS1Entry @ 0x1404F3028 (IvtBuildScalableModePasidTableS1Entry.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053997C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall IvtUpdateScalableModePasidTablesForPasid(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int v9; // r9d
  __int64 v10; // rcx
  int v11; // r9d
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-88h]
  __int64 v15; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v16[64]; // [rsp+50h] [rbp-58h] BYREF

  v15 = 0LL;
  memset_0(v16, 0, sizeof(v16));
  if ( a4 == 1 )
    IvtBuildScalableModePasidTableS1Entry(a1, 1, 0, v9, 0, a5, v16);
  else
    IvtBuildScalableModePasidTableS2Entry(a1, a4, a5, a6, v14, v16);
  if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
  {
    _RAX = *(_QWORD *)(a2 + 64);
    __asm { movdir64b rax, zmmword ptr [rsp+0A8h+var_58] }
  }
  else
  {
    IvtLegacySetScalableModePasidTableEntry(v10, a2, 0LL, v16);
  }
  IvtBuildScalableModePasidDirectoryEntry(v10, a2, 0, v11, (__int64)&v15);
  result = v15;
  **(_QWORD **)(a2 + 56) = v15;
  return result;
}
