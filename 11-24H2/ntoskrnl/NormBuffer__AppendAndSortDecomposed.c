/*
 * XREFs of NormBuffer__AppendAndSortDecomposed @ 0x1405EF61C
 * Callers:
 *     NormBuffer__ReplaceLastStartBase @ 0x1405EFADC (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1405EFB5C (NormBuffer__ReplaceLastStartBasePair.c)
 * Callees:
 *     NormBuffer__InsertAtBlockedLocation @ 0x1405EF870 (NormBuffer__InsertAtBlockedLocation.c)
 *     NormBuffer__SortBeforeSameClass @ 0x1405EFC18 (NormBuffer__SortBeforeSameClass.c)
 *     Normalization__GetCharacterInfo @ 0x140785920 (Normalization__GetCharacterInfo.c)
 */

__int64 __fastcall NormBuffer__AppendAndSortDecomposed(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r8
  char v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v3 = *(_QWORD *)(a1 + 112);
  v10 = 0;
  v4 = a2;
  Normalization__GetCharacterInfo(v3, a2, &v9, &v10);
  LOBYTE(v5) = v9;
  NormBuffer__SortBeforeSameClass(a1, v5);
  LOBYTE(v6) = v10;
  LOBYTE(v7) = v9;
  return NormBuffer__InsertAtBlockedLocation(a1, v4, v7, v6);
}
