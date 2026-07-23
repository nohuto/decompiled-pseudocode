/*
 * XREFs of IvtLegacyUpdateScalableModeTranslationStructures @ 0x14056E48C
 * Callers:
 *     IvtLegacyUpdateTranslationStructures @ 0x14056E58C (IvtLegacyUpdateTranslationStructures.c)
 * Callees:
 *     IvtGetBlockedDomain @ 0x1404C1988 (IvtGetBlockedDomain.c)
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x1404F2C14 (IvtUpdateScalableModePasidTablesForPasid.c)
 *     IvtGetPasidGranularTranslationType @ 0x1404F8030 (IvtGetPasidGranularTranslationType.c)
 *     IvtGetScalableModePasidTables @ 0x14056BE6C (IvtGetScalableModePasidTables.c)
 *     IvtLegacyUpdateScalableModeContextEntry @ 0x14056E2C8 (IvtLegacyUpdateScalableModeContextEntry.c)
 */

__int64 __fastcall IvtLegacyUpdateScalableModeTranslationStructures(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        int a9)
{
  char v9; // bl
  __int64 *ScalableModePasidTables; // rsi
  __int64 v13; // rcx
  int v14; // edx
  int PasidGranularTranslationType; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int16 v18; // r10
  int v20; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-18h]
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0;
  ScalableModePasidTables = a4;
  if ( !a4 )
    ScalableModePasidTables = IvtGetScalableModePasidTables(a1, *a2);
  v22 = 0LL;
  v13 = 0LL;
  if ( a7 )
  {
    v14 = *(_DWORD *)(a7 + 4);
    if ( v14 == 1 )
    {
      v9 = 1;
      IvtGetBlockedDomain(a1, (unsigned int *)a2, (unsigned __int64 *)&v22);
      v13 = v22;
    }
    else if ( v14 )
    {
      v9 = 1;
      v13 = *(_QWORD *)(a7 + 40) >> 12;
    }
    else if ( *(_BYTE *)(a1 + 319) )
    {
      v9 = 1;
      v13 = *(__int64 *)(a1 + 328) >> 12;
    }
  }
  PasidGranularTranslationType = IvtGetPasidGranularTranslationType(v13, 0, v9);
  IvtUpdateScalableModePasidTablesForPasid(
    a1,
    (__int64)ScalableModePasidTables,
    v17,
    PasidGranularTranslationType,
    v18,
    v16);
  return IvtLegacyUpdateScalableModeContextEntry(a1, (unsigned int *)a2, ScalableModePasidTables, 0, a5, v20, v21, a9);
}
