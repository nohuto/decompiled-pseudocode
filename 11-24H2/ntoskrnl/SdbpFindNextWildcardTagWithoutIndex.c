/*
 * XREFs of SdbpFindNextWildcardTagWithoutIndex @ 0x140804500
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14095D42C (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     SdbpFindNextNamedTagHelper @ 0x140805968 (SdbpFindNextNamedTagHelper.c)
 *     SdbFindFirstTag @ 0x14096003C (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpFindNextWildcardTagWithoutIndex(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 result; // rax

  v3 = a1;
  if ( (unsigned int)SdbFindFirstTag(a1, 0LL, 28673LL) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpFindNextWildcardTagWithoutIndex",
      5450,
      (unsigned int)"No DATABASE tag found");
    return 0LL;
  }
  else
  {
    result = SdbpFindNextNamedTagHelper(
               v3,
               0,
               *(_DWORD *)(a2 + 4),
               *(unsigned __int16 *)(a2 + 12),
               *(wchar_t **)(a2 + 32),
               1);
    *(_DWORD *)(a2 + 4) = result;
  }
  return result;
}
