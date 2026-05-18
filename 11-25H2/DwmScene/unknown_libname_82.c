/*
 * XREFs of unknown_libname_82 @ 0x1800132D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_82(__int64 a1)
{
  __int64 result; // rax

  result = a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
  return result;
}
