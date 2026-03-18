/*
 * XREFs of ApiSetSchemaExpander_InsertSemverContractEntry @ 0x140662EC0
 * Callers:
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x140661B20 (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x1406632E0 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     ApiSetpGetSemverKeyVersions @ 0x1406626B4 (ApiSetpGetSemverKeyVersions.c)
 *     ApiSetpInsertHashEntry @ 0x140663870 (ApiSetpInsertHashEntry.c)
 */

__int64 __fastcall ApiSetSchemaExpander_InsertSemverContractEntry(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v5; // r8
  __int64 result; // rax
  unsigned __int64 v8; // r9

  v5 = *(unsigned __int16 *)(a1 + 196);
  *a3 = v5;
  *(_WORD *)(a1 + 196) = v5 + 1;
  result = ApiSetpInsertHashEntry(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32) + 68LL, v5, a2);
  if ( (int)result >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 32)
       + (unsigned __int16)*a3 * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 76LL)
       - *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 18LL)
       + *(unsigned int *)(*(_QWORD *)(a1 + 32) + 68LL);
    *(_QWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 0;
    if ( ApiSetpGetSemverKeyVersions(a2, (_BYTE *)(v8 + 8), (_BYTE *)(v8 + 9)) )
    {
      ++*(_WORD *)(*(_QWORD *)(a1 + 32) + 72LL);
      return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
