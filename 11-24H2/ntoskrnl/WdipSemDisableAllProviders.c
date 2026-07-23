/*
 * XREFs of WdipSemDisableAllProviders @ 0x1407A32A8
 * Callers:
 *     WdipSemShutdown @ 0x1407A2294 (WdipSemShutdown.c)
 * Callees:
 *     WdipSemEnableDisableTrace @ 0x140A3E4E0 (WdipSemEnableDisableTrace.c)
 */

__int64 WdipSemDisableAllProviders()
{
  __int64 v0; // rbx
  __int32 v1; // esi
  __int32 i; // ebp
  __int64 v3; // rdi
  __int64 result; // rax

  v0 = 0LL;
  v1 = _InterlockedExchange(&WdipDiagLoggerId, WdipDiagLoggerId);
  for ( i = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
        (unsigned int)v0 < dword_140F021A0;
        v0 = (unsigned int)(v0 + 1) )
  {
    v3 = WdipSemProviderTable[v0];
    if ( *(_BYTE *)(v3 + 37) && v1 )
      result = WdipSemEnableDisableTrace((unsigned __int16)v1, v3, 0, 0, 0, 0);
    if ( *(_BYTE *)(v3 + 69) )
    {
      if ( i )
        result = WdipSemEnableDisableTrace((unsigned __int16)i, v3, 0, 0, 0, 0);
    }
  }
  return result;
}
