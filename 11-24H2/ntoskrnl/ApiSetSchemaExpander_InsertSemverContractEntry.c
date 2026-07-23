/*
 * XREFs of ApiSetSchemaExpander_InsertSemverContractEntry @ 0x1406617A4
 * Callers:
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x14066031C (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x140661BC4 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     ApiSetpGetSemverKeyVersions @ 0x140660F98 (ApiSetpGetSemverKeyVersions.c)
 *     ApiSetpInsertHashEntry @ 0x140662154 (ApiSetpInsertHashEntry.c)
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
