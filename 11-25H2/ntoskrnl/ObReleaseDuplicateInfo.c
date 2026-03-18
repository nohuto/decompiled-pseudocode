/*
 * XREFs of ObReleaseDuplicateInfo @ 0x140A0BBB8
 * Callers:
 *     AlpcHandleDataDestroyProcedure @ 0x140A0BB50 (AlpcHandleDataDestroyProcedure.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObpDecrementHandleCount @ 0x140844E00 (ObpDecrementHandleCount.c)
 */

LONG_PTR __fastcall ObReleaseDuplicateInfo(__int64 a1)
{
  __int64 v1; // rdx
  LONG_PTR result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    ObpDecrementHandleCount(*(PRKPROCESS *)a1, v1 - 48);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 16), 0x7544624Fu);
    result = ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x7544624Fu);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
