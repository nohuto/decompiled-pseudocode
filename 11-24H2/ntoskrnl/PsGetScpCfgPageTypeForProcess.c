/*
 * XREFs of PsGetScpCfgPageTypeForProcess @ 0x140A264F8
 * Callers:
 *     MiMapImageScpCfgPages @ 0x140294080 (MiMapImageScpCfgPages.c)
 *     PspGetScpCfgFunctions @ 0x140A26450 (PspGetScpCfgFunctions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetScpCfgPageTypeForProcess(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  bool v4; // al
  int v5; // eax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 1184LL);
  v4 = qword_140E2DBC8 == v3 || !v3;
  if ( !a3 )
    return 0LL;
  if ( v4 )
  {
    v5 = *(_DWORD *)(a1 + 1872);
    if ( (v5 & 1) != 0 )
      return (unsigned int)((v5 & 2) != 0) + 1;
    return 0LL;
  }
  return 3LL;
}
