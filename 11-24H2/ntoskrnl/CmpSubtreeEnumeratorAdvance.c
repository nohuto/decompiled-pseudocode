/*
 * XREFs of CmpSubtreeEnumeratorAdvance @ 0x14090A1FC
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpPromoteSubtree @ 0x140908398 (CmpPromoteSubtree.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1409090E8 (CmpDoAccessCheckOnLayeredSubtree.c)
 * Callees:
 *     CmpHashCompressedComponent @ 0x14083F7D0 (CmpHashCompressedComponent.c)
 *     CmpHashUnicodeComponent @ 0x140877720 (CmpHashUnicodeComponent.c)
 *     CmpKeyEnumStackReset @ 0x14090A0F8 (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackAdvance @ 0x14090A2F8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x14090A384 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14090A728 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetKcbAtLayerHeight @ 0x14090C380 (CmpGetKcbAtLayerHeight.c)
 *     CmpFindKcbInHashEntryByName @ 0x140940C90 (CmpFindKcbInHashEntryByName.c)
 *     CmpPopulateKcbStack @ 0x140970CD0 (CmpPopulateKcbStack.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140A9F9CC (CmpFindKcbInHashEntryByCompressedName.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorAdvance(__int16 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 KcbInHashEntryByName; // rax
  __int64 v8; // rdx
  __int64 KcbAtLayerHeight; // r14
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 EntryAtLayerHeight; // rax
  bool v13; // zf
  int v14; // r12d
  int v15; // ebp
  int v16; // eax
  int v17; // eax
  __m128i v18[2]; // [rsp+30h] [rbp-28h] BYREF

  v18[0] = 0LL;
  v2 = 0;
  while ( 1 )
  {
    v3 = *a1;
    if ( (v3 & 0x8000u) != 0LL )
      return (unsigned int)-2147483622;
    v4 = *((_QWORD *)a1 + 12) + 408 * v3;
    if ( !*(_BYTE *)v4 )
    {
      CmpKeyEnumStackBeginEnumerationForKeyNodeStack(v4 + 56, *(_QWORD *)(v4 + 16), 0LL);
      *(_BYTE *)v4 = 1;
    }
    if ( (unsigned int)CmpKeyEnumStackAdvance(v4 + 56) != -2147483622 )
      break;
    CmpKeyEnumStackReset(v4 + 56);
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_BYTE *)v4 = 0;
    --*a1;
  }
  v5 = *(_QWORD *)(v4 + 8);
  if ( v5 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v5);
    v10 = 0LL;
    while ( (v8 & 0x8000u) == 0LL )
    {
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v4 + 64, v8);
      if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
      {
        v10 = *(_QWORD *)(EntryAtLayerHeight + 16);
        break;
      }
      LOWORD(v8) = v8 - 1;
    }
    v13 = (*(_BYTE *)(v10 + 2) & 0x20) == 0;
    v14 = v10 + 76;
    v15 = *(unsigned __int16 *)(v10 + 72);
    v18[0].m128i_i64[1] = v10 + 76;
    v18[0].m128i_i16[0] = v15;
    v18[0].m128i_i16[1] = v15;
    if ( v13 )
    {
      v17 = CmpHashUnicodeComponent(v18);
      KcbInHashEntryByName = CmpFindKcbInHashEntryByName(
                               *(_QWORD *)(KcbAtLayerHeight + 32),
                               (unsigned int)(v17 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16)),
                               KcbAtLayerHeight,
                               v18);
    }
    else
    {
      v16 = CmpHashCompressedComponent((unsigned __int8 *)(v10 + 76), v15);
      KcbInHashEntryByName = CmpFindKcbInHashEntryByCompressedName(
                               *(_QWORD *)(KcbAtLayerHeight + 32),
                               v16 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16),
                               KcbAtLayerHeight,
                               v14,
                               v15);
    }
  }
  else
  {
    KcbInHashEntryByName = 0LL;
  }
  *(_QWORD *)(v4 + 424) = v4 + 64;
  if ( KcbInHashEntryByName )
  {
    CmpPopulateKcbStack(v4 + 24, KcbInHashEntryByName);
    *(_QWORD *)(v4 + 416) = v11;
  }
  ++*a1;
  return v2;
}
