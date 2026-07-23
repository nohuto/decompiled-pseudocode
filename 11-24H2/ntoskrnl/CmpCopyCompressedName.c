/*
 * XREFs of CmpCopyCompressedName @ 0x140882750
 * Callers:
 *     CmpLoadHiveVolatile @ 0x1407CEB00 (CmpLoadHiveVolatile.c)
 *     CmpConstructNameFromKeyNodes @ 0x1408794A0 (CmpConstructNameFromKeyNodes.c)
 *     CmpQueryKeyValueData @ 0x14087A180 (CmpQueryKeyValueData.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x14088067C (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpQueryKeyDataFromNode @ 0x140880E50 (CmpQueryKeyDataFromNode.c)
 *     CmpPopulateKeyNodeInformation @ 0x140882630 (CmpPopulateKeyNodeInformation.c)
 *     CmpAddSubKeyToList @ 0x140882878 (CmpAddSubKeyToList.c)
 *     CmpMarkIndexDirty @ 0x1408834C8 (CmpMarkIndexDirty.c)
 *     CmpInitializeValueNameString @ 0x1409F82CC (CmpInitializeValueNameString.c)
 *     CmAddLogForAction @ 0x140A01858 (CmAddLogForAction.c)
 *     CmpInitializeKeyNameString @ 0x140A6FC54 (CmpInitializeKeyNameString.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C4A598 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetNodeName @ 0x140C4E008 (CmpGetNodeName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpCopyCompressedName(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // edx
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // r11d
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned __int8 *v11; // rdx
  __int64 v12; // rcx
  _WORD *v13; // r8

  v4 = a2 >> 1;
  if ( v4 < a4 )
    a4 = v4;
  result = 0LL;
  if ( a4 )
  {
    if ( a4 < 4 )
      goto LABEL_13;
    v7 = a4 - 1;
    if ( a1 <= a3 + v7 && a1 + 2 * v7 >= a3 )
      goto LABEL_13;
    if ( a4 < 0x20 )
      goto LABEL_17;
    v8 = a4 & 0x1F;
    v9 = 16;
    do
    {
      *(__m128i *)(a1 + 2 * result) = _mm_unpacklo_epi8(_mm_loadl_epi64((const __m128i *)(result + a3)), (__m128i)0LL);
      result = (unsigned int)(result + 32);
      *(__m128i *)(a1 + 2LL * (v9 - 8)) = _mm_unpacklo_epi8(
                                            _mm_loadl_epi64((const __m128i *)(v9 - 8 + a3)),
                                            (__m128i)0LL);
      *(__m128i *)(a1 + 2LL * v9) = _mm_unpacklo_epi8(_mm_loadl_epi64((const __m128i *)(v9 + a3)), (__m128i)0LL);
      v10 = v9 + 8;
      v9 += 32;
      *(__m128i *)(a1 + 2 * v10) = _mm_unpacklo_epi8(_mm_loadl_epi64((const __m128i *)(v10 + a3)), (__m128i)0LL);
    }
    while ( (unsigned int)result < a4 - v8 );
    if ( v8 >= 4 )
    {
LABEL_17:
      do
      {
        *(_QWORD *)(a1 + 2 * result) = _mm_unpacklo_epi8(_mm_cvtsi32_si128(*(_DWORD *)(result + a3)), (__m128i)0LL).m128i_u64[0];
        result = (unsigned int)(result + 4);
      }
      while ( (unsigned int)result < (a4 & 0xFFFFFFFC) );
    }
    if ( (unsigned int)result < a4 )
    {
LABEL_13:
      v11 = (unsigned __int8 *)(result + a3);
      v12 = a4 - (unsigned int)result;
      v13 = (_WORD *)(a1 + 2 * result);
      do
      {
        result = *v11++;
        *v13++ = result;
        --v12;
      }
      while ( v12 );
    }
  }
  return result;
}
