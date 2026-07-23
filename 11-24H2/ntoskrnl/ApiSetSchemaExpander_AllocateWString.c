/*
 * XREFs of ApiSetSchemaExpander_AllocateWString @ 0x1406611CC
 * Callers:
 *     ApiSetSchemaExpander_InsertHostEntry @ 0x1406616F8 (ApiSetSchemaExpander_InsertHostEntry.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall ApiSetSchemaExpander_AllocateWString(__int64 a1, const void *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v6; // rdi
  size_t v8; // r8
  __int64 result; // rax

  *a4 = 0;
  v6 = *(unsigned int *)(a1 + 88);
  v8 = 2LL * a3;
  if ( v8 > (unsigned int)(*(_DWORD *)(a1 + 240) - v6) )
    return 2147483653LL;
  memmove(
    (void *)(v6
           + *(_QWORD *)(a1 + 32)
           + *(unsigned int *)(*(_QWORD *)(a1 + 32) + 36LL)
           - (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 18LL)),
    a2,
    v8);
  *(_DWORD *)(a1 + 88) += 2 * a3;
  result = 0LL;
  *a4 = v6;
  return result;
}
