/*
 * XREFs of IvtUpdateScalableModePasidTablesForPasid @ 0x1404F2C14
 * Callers:
 *     IvtUpdateScalableModeTranslationStructures @ 0x1404C4C90 (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtLegacyUpdateScalableModeTranslationStructures @ 0x14056E48C (IvtLegacyUpdateScalableModeTranslationStructures.c)
 *     IvtLegacySetupScalableModeDefaultPasidTables @ 0x140B54674 (IvtLegacySetupScalableModeDefaultPasidTables.c)
 *     IvtSetupScalableModeDefaultPasidTables @ 0x140B54A88 (IvtSetupScalableModeDefaultPasidTables.c)
 * Callees:
 *     IvtBuildScalableModePasidTableS2Entry @ 0x1404CDEEC (IvtBuildScalableModePasidTableS2Entry.c)
 *     IvtLegacySetScalableModePasidTableEntry @ 0x1404CE494 (IvtLegacySetScalableModePasidTableEntry.c)
 *     IvtBuildScalableModePasidDirectoryEntry @ 0x1404D1ACC (IvtBuildScalableModePasidDirectoryEntry.c)
 *     IvtBuildScalableModePasidTableS1Entry @ 0x1404F322C (IvtBuildScalableModePasidTableS1Entry.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall IvtUpdateScalableModePasidTablesForPasid(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int16 a5,
        __int64 a6)
{
  int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-88h]
  __int64 v15; // [rsp+40h] [rbp-68h] BYREF
  signed __int64 v16[8]; // [rsp+50h] [rbp-58h] BYREF

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
    IvtLegacySetScalableModePasidTableEntry(v10, a2, 0, v16);
  }
  IvtBuildScalableModePasidDirectoryEntry(v10, a2, 0, v11, &v15);
  result = v15;
  **(_QWORD **)(a2 + 56) = v15;
  return result;
}
