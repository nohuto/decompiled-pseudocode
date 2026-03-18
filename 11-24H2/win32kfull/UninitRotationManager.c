/*
 * XREFs of UninitRotationManager @ 0x140270FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UninitRotationManager(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  void *v3; // rcx
  __int64 result; // rax

  v3 = *(void **)(W32GetUserSessionState(a1, a2) + 66112);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x6D747255u);
  result = W32GetUserSessionState(v3, v2);
  *(_QWORD *)(result + 66112) = 0LL;
  return result;
}
