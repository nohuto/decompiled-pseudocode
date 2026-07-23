/*
 * XREFs of CmpHashUnicodeComponent @ 0x140877720
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407DBB34 (CmpDoBuildVirtualStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1407E4250 (CmpPartialPromoteSubkeys.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14083F9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpComputeComponentHashes @ 0x140872190 (CmpComputeComponentHashes.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpGetNameControlBlock @ 0x140875450 (CmpGetNameControlBlock.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408764B0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmpAddToLeaf @ 0x140887458 (CmpAddToLeaf.c)
 *     CmpGetMappingHiveForString @ 0x1408E232C (CmpGetMappingHiveForString.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14090A1FC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpAddStringToMapping @ 0x140A8649C (CmpAddStringToMapping.c)
 *     CmpWaitForHiveMount @ 0x140AAE520 (CmpWaitForHiveMount.c)
 *     CmpCheckLeaf @ 0x140AE4F1C (CmpCheckLeaf.c)
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140C48EC4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
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
