/*
 * XREFs of IvtUpdateScalableModeTranslationStructures @ 0x1404C4C90
 * Callers:
 *     IvtUpdateTranslationStructures @ 0x1404F59EC (IvtUpdateTranslationStructures.c)
 * Callees:
 *     IvtGetBlockedDomain @ 0x1404C1988 (IvtGetBlockedDomain.c)
 *     IvtUpdateScalableModeContextEntry @ 0x1404C4D8C (IvtUpdateScalableModeContextEntry.c)
 *     IvtUpdateScalableModePasidTablesForPasid @ 0x1404F2C14 (IvtUpdateScalableModePasidTablesForPasid.c)
 *     IvtGetPasidGranularTranslationType @ 0x1404F8030 (IvtGetPasidGranularTranslationType.c)
 */

__int64 __fastcall IvtUpdateScalableModeTranslationStructures(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6)
{
  char v6; // bl
  unsigned int *v7; // rsi
  __int64 v9; // rbp
  __int64 BlockedDomain; // rcx
  int v12; // ecx
  int v13; // ecx
  int v14; // r10d
  int v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0;
  v7 = *(unsigned int **)(a2 + 56);
  v9 = *(_QWORD *)(a2 + 64);
  v17 = 0LL;
  BlockedDomain = 0LL;
  if ( a6 )
  {
    v12 = *(_DWORD *)(a6 + 4);
    if ( v12 == 1 )
    {
      v6 = 1;
      BlockedDomain = IvtGetBlockedDomain(a1, v7, &v17);
    }
    else
    {
      if ( v12 )
      {
        v6 = 1;
      }
      else if ( *(_BYTE *)(a1 + 319) )
      {
        v6 = 1;
        BlockedDomain = *(unsigned int *)(a1 + 264);
        goto LABEL_7;
      }
      BlockedDomain = *(unsigned int *)(a6 + 48);
    }
  }
LABEL_7:
  LOBYTE(a3) = v6;
  IvtGetPasidGranularTranslationType(BlockedDomain, 0LL, a3);
  IvtUpdateScalableModePasidTablesForPasid(a1, v13, v14);
  return IvtUpdateScalableModeContextEntry(a1, (_DWORD)v7, v9, 0, a4, v16);
}
