/*
 * XREFs of UpdatesLockedForDwm @ 0x1400E2400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatesLockedForDwm(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // edi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  v2 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1) + 70820) )
  {
    v4 = *(_QWORD *)(W32GetUserSessionState(v1) + 70808);
    return PsGetCurrentProcess(v6, v5, v7, v8) != v4;
  }
  return v2;
}
