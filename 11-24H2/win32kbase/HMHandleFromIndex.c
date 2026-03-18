/*
 * XREFs of HMHandleFromIndex @ 0x1400631A0
 * Callers:
 *     HMCreateHandleForObject @ 0x140062FB0 (HMCreateHandleForObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMHandleFromIndex(__int64 a1)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // ecx

  UserSessionState = W32GetUserSessionState(a1);
  v4 = *(unsigned int *)(W32GetUserSessionState(v3) + 19952);
  v5 = *(_QWORD *)(UserSessionState + 19944);
  v6 = a1 * v4;
  v7 = a1 | (*(unsigned __int16 *)(v6 + v5 + 26) << 16) | 0x80000000;
  if ( *(char *)(v6 + v5 + 25) >= 0 )
    return (int)(a1 | (*(unsigned __int16 *)(v6 + v5 + 26) << 16));
  return v7;
}
