/*
 * XREFs of ObReleaseDuplicateInfo @ 0x140A151E8
 * Callers:
 *     AlpcHandleDataDestroyProcedure @ 0x140A15180 (AlpcHandleDataDestroyProcedure.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObpDecrementHandleCount @ 0x1408410A0 (ObpDecrementHandleCount.c)
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
