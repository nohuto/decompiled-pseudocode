/*
 * XREFs of DxgkTestEndTest @ 0x1401FBF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkTestEndTest(__int64 a1)
{
  __int64 result; // rax

  qword_14015D698 = 0LL;
  result = ExReleasePushLockExclusiveEx(&qword_14015D690, 0LL);
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
