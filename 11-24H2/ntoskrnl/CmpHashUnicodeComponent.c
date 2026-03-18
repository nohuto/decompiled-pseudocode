/*
 * XREFs of CmpHashUnicodeComponent @ 0x1408733F0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041AAA8 (CmDeleteLayeredKey.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407DB5E4 (CmpDoBuildVirtualStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1407E3D00 (CmpPartialPromoteSubkeys.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140843700 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpComputeComponentHashes @ 0x14086DE60 (CmpComputeComponentHashes.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpGetNameControlBlock @ 0x140871120 (CmpGetNameControlBlock.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x140872180 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpWalkOneLevel @ 0x140872560 (CmpWalkOneLevel.c)
 *     CmpAddToLeaf @ 0x1408835A8 (CmpAddToLeaf.c)
 *     CmpGetMappingHiveForString @ 0x14090AC0C (CmpGetMappingHiveForString.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14091678C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpAddStringToMapping @ 0x140A8A09C (CmpAddStringToMapping.c)
 *     CmpWaitForHiveMount @ 0x140AB35B0 (CmpWaitForHiveMount.c)
 *     CmpCheckLeaf @ 0x140AE363C (CmpCheckLeaf.c)
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140C46D74 (CmpCreateRegistryRoot.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CmpHashUnicodeComponent(__m128i *a1)
{
  unsigned int v1; // r9d
  unsigned __int16 v2; // ax
  unsigned __int16 *v3; // r10
  unsigned __int64 v4; // rbx
  unsigned int v5; // edx
  struct _LIST_ENTRY *Flink; // r11

  v1 = 0;
  v2 = _mm_cvtsi128_si32(*a1);
  if ( v2 >= 2u )
  {
    v3 = (unsigned __int16 *)a1->m128i_i64[1];
    v4 = (unsigned __int64)v2 >> 1;
    do
    {
      v5 = *v3;
      if ( v5 >= 0x61 )
      {
        if ( v5 <= 0x7A )
        {
          LOWORD(v5) = v5 - 32;
        }
        else
        {
          Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
          if ( Flink && (unsigned __int16)v5 >= 0xC0u )
            LOWORD(v5) = *((_WORD *)&Flink->Flink
                         + (v5 & 0xF)
                         + *((unsigned __int16 *)&Flink->Flink
                           + ((unsigned __int8)v5 >> 4)
                           + (unsigned int)*((unsigned __int16 *)&Flink->Flink + ((unsigned __int64)v5 >> 8))))
                       + v5;
        }
      }
      ++v3;
      v1 = (unsigned __int16)v5 + 37 * v1;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
