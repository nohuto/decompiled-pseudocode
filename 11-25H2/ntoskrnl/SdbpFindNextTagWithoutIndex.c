/*
 * XREFs of SdbpFindNextTagWithoutIndex @ 0x1407F4830
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14082AEDC (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     SdbpFindNextNamedTagHelper @ 0x1407F5DF8 (SdbpFindNextNamedTagHelper.c)
 *     SdbFindFirstTag @ 0x1408258C0 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpFindNextTagWithoutIndex(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 result; // rax

  v3 = a1;
  if ( (unsigned int)SdbFindFirstTag(a1, 0LL, 28673LL) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpFindNextTagWithoutIndex", 5407, (unsigned int)"No DATABASE tag found");
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
               0);
    *(_DWORD *)(a2 + 4) = result;
  }
  return result;
}
