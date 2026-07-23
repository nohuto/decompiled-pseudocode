/*
 * XREFs of ApiSetSchemaExpander_InsertHostEntry @ 0x1406616F8
 * Callers:
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x14066031C (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x140661BC4 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     ApiSetSchemaExpander_AllocateWString @ 0x1406611CC (ApiSetSchemaExpander_AllocateWString.c)
 *     ApiSetpInsertHashEntry @ 0x140662154 (ApiSetpInsertHashEntry.c)
 */

__int64 __fastcall ApiSetSchemaExpander_InsertHostEntry(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rax
  const void *v12; // rdx
  __int64 v13; // r9

  v5 = *(unsigned __int16 *)(a1 + 208);
  *a3 = v5;
  *(_WORD *)(a1 + 208) = v5 + 1;
  result = ApiSetpInsertHashEntry(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32) + 92LL, v5, a2);
  if ( (int)result >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    v9 = *(unsigned __int16 *)(a2 + 18);
    v10 = *(unsigned int *)(v8 + 92);
    v11 = v8 + (unsigned __int16)*a3 * (unsigned __int64)*(unsigned __int8 *)(v8 + 100) - *(unsigned __int16 *)(v8 + 18);
    v12 = *(const void **)a2;
    v13 = v11 + v10;
    *(_QWORD *)v13 = 0LL;
    *(_DWORD *)(v13 + 8) = 0;
    *(_WORD *)(v13 + 8) = v9;
    result = ApiSetSchemaExpander_AllocateWString(a1, v12, v9, (_DWORD *)(v13 + 4));
    if ( (int)result >= 0 )
    {
      ++*(_WORD *)(*(_QWORD *)(a1 + 32) + 96LL);
      return 0LL;
    }
  }
  return result;
}
