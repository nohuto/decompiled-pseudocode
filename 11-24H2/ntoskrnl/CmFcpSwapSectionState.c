/*
 * XREFs of CmFcpSwapSectionState @ 0x1406F3934
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140C4F31C (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmFcpSwapSectionState(__int64 *a1, __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rdx

  v3 = *a1;
  *a1 = *a2;
  *a2 = v3;
  v4 = a1[1];
  a1[1] = a2[1];
  a2[1] = v4;
  result = a2[2];
  v6 = a1[2];
  a1[2] = result;
  a2[2] = v6;
  return result;
}
