/*
 * XREFs of CmFcpInitializeSectionState @ 0x140ABB91C
 * Callers:
 *     CmFcManagerInitialize @ 0x140C3BB50 (CmFcManagerInitialize.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C3BE84 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmFcpInitializeSectionState(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
