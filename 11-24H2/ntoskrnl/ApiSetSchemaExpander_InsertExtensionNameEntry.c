/*
 * XREFs of ApiSetSchemaExpander_InsertExtensionNameEntry @ 0x1406615FC
 * Callers:
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x14066031C (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x140661BC4 (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     ApiSetpInsertHashEntry @ 0x140662154 (ApiSetpInsertHashEntry.c)
 */

__int64 __fastcall ApiSetSchemaExpander_InsertExtensionNameEntry(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(unsigned __int16 *)(a1 + 220);
  *(_WORD *)(a1 + 220) = v2 + 1;
  result = ApiSetpInsertHashEntry(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32) + 80LL, (unsigned __int16)v2, a2);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32)
              + v2 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 88LL)
              - *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 18LL)
              + *(unsigned int *)(*(_QWORD *)(a1 + 32) + 80LL)) = 0;
    ++*(_WORD *)(*(_QWORD *)(a1 + 32) + 84LL);
    return 0LL;
  }
  return result;
}
