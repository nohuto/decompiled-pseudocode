/*
 * XREFs of SessionIsInteractive @ 0x140426478
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x140425C44 (PopPowerRequestCreateCommon.c)
 *     NtSetThreadExecutionState @ 0x140962C60 (NtSetThreadExecutionState.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PsGetSiloBySessionId @ 0x1409BB1E4 (PsGetSiloBySessionId.c)
 */

char __fastcall SessionIsInteractive(__int64 a1)
{
  char v1; // bl
  int v2; // edi
  __int64 v3; // rdx
  int v5; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = a1;
  v6 = 0LL;
  if ( (_DWORD)a1 == -1 || (int)PsGetSiloBySessionId(a1, &v6) < 0 )
    return 0;
  if ( v2 != **((_DWORD **)PsGetServerSiloGlobals(v6) + 161) )
    return 1;
  v5 = v3 ? *(_DWORD *)(*((_QWORD *)PsGetServerSiloGlobals(v3) + 161) + 4LL) : MEMORY[0xFFFFF780000002D8];
  if ( v2 == v5 )
    return 1;
  return v1;
}
