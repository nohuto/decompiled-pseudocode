/*
 * XREFs of ObReleaseDuplicateInfo @ 0x140A0E008
 * Callers:
 *     AlpcHandleDataDestroyProcedure @ 0x140A0DFA0 (AlpcHandleDataDestroyProcedure.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObpDecrementHandleCount @ 0x14083D360 (ObpDecrementHandleCount.c)
 */

LONG_PTR __fastcall ObReleaseDuplicateInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  LONG_PTR result; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    ObpDecrementHandleCount(*(PRKPROCESS *)a1, v4 - 48, a3, a4);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 16), 0x7544624Fu);
    result = ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x7544624Fu);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
