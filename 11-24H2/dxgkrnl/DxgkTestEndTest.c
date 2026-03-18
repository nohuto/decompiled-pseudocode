/*
 * XREFs of DxgkTestEndTest @ 0x140202680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkTestEndTest(__int64 a1)
{
  __int64 result; // rax

  qword_1401606B8 = 0LL;
  result = ExReleasePushLockExclusiveEx(&qword_1401606B0, 0LL);
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
