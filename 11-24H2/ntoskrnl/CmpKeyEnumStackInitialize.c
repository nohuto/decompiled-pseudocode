/*
 * XREFs of CmpKeyEnumStackInitialize @ 0x140916F34
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1407E3D00 (CmpPartialPromoteSubkeys.c)
 *     CmpSubtreeEnumeratorStart @ 0x140915340 (CmpSubtreeEnumeratorStart.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140915814 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpEnumerateLayeredKey @ 0x140916054 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpInitializeKeyNodeStack @ 0x140916A00 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x140916F84 (CmpKeyEnumStackEntryInitialize.c)
 */

__int64 __fastcall CmpKeyEnumStackInitialize(char *a1)
{
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  memset_0(a1, 0, 0x160uLL);
  CmpInitializeKeyNodeStack(a1 + 8);
  v2 = a1 + 88;
  v3 = 2LL;
  do
  {
    result = CmpKeyEnumStackEntryInitialize(v2);
    v2 += 128;
    --v3;
  }
  while ( v3 );
  return result;
}
