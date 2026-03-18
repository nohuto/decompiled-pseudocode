/*
 * XREFs of CmpHashUnicodeComponent @ 0x140848190
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041D4E4 (CmDeleteLayeredKey.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407CBE24 (CmpDoBuildVirtualStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1407D4420 (CmpPartialPromoteSubkeys.c)
 *     CmpGetMappingHiveForString @ 0x14083EE7C (CmpGetMappingHiveForString.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408471B0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpGetNameControlBlock @ 0x140874CD0 (CmpGetNameControlBlock.c)
 *     CmpAddToLeaf @ 0x14087EB94 (CmpAddToLeaf.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140975494 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpCheckLeaf @ 0x140A18B3C (CmpCheckLeaf.c)
 *     CmpAddStringToMapping @ 0x140A8571C (CmpAddStringToMapping.c)
 *     CmpWaitForHiveMount @ 0x140AAE5C4 (CmpWaitForHiveMount.c)
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140C35AB8 (CmpCreateRegistryRoot.c)
 * Callees:
 *     Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline @ 0x1404F0ABC (Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlUpcaseUnicodeChar @ 0x140848120 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpHashUnicodeComponent(__int128 *a1)
{
  unsigned int v1; // ebx
  WCHAR *v2; // rdi
  unsigned __int64 v3; // rsi
  WCHAR v4; // ax
  WCHAR *v6; // rdi
  __int64 v7; // rsi
  WCHAR v8; // ax
  __int128 v9; // [rsp+20h] [rbp-18h]

  v1 = 0;
  v9 = *a1;
  if ( (unsigned int)Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (unsigned __int16)v9 >= 2u )
    {
      v2 = (WCHAR *)*((_QWORD *)&v9 + 1);
      v3 = (unsigned __int64)(unsigned __int16)v9 >> 1;
      do
      {
        v4 = *v2;
        if ( *v2 >= 0x61u )
        {
          if ( v4 > 0x7Au )
            v4 = RtlUpcaseUnicodeChar(v4);
          else
            v4 -= 32;
        }
        ++v2;
        v1 = v4 + 37 * v1;
        --v3;
      }
      while ( v3 );
    }
    return v1;
  }
  if ( !(_WORD)v9 )
    return v1;
  v6 = (WCHAR *)*((_QWORD *)&v9 + 1);
  v7 = (unsigned __int16)(((unsigned __int16)(v9 - 1) >> 1) + 1);
  do
  {
    v8 = *v6;
    if ( *v6 >= 0x61u )
    {
      if ( v8 > 0x7Au )
        v8 = RtlUpcaseUnicodeChar(v8);
      else
        v8 -= 32;
    }
    ++v6;
    v1 = v8 + 37 * v1;
    --v7;
  }
  while ( v7 );
  return v1;
}
