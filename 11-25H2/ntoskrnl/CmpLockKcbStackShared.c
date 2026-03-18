/*
 * XREFs of CmpLockKcbStackShared @ 0x1408715A0
 * Callers:
 *     CmQueryLayeredKey @ 0x140462ABC (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x1407BE3E4 (CmSaveKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14083F9D0 (CmEnumerateValueFromLayeredKey.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x140878350 (CmQueryValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14088A6C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpEnumerateLayeredKey @ 0x140974D5C (CmpEnumerateLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1409EE0AC (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 */

__int64 __fastcall CmpLockKcbStackShared(__int64 a1)
{
  __int16 i; // bx
  __int64 v3; // rcx
  __int64 result; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    if ( i >= 2 )
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16);
    else
      v3 = *(_QWORD *)(a1 + 8LL * i + 8);
    result = CmpLockKcbShared(v3);
  }
  return result;
}
