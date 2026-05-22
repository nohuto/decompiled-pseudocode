/*
 * XREFs of ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x180089EA0
 * Callers:
 *     ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x180089D50 (-TraceClients@ShellGesturesProcessor@@CAXXZ.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AA20 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall InputTraceLogging::Enabled(int a1, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  const struct _tlgProvider_t *v4; // rax
  char v5; // dl

  v2 = a2;
  v3 = a1;
  v4 = InputTraceLogging::Provider();
  v5 = 0;
  if ( v2 < *(_DWORD *)v4
    && (!v3 || (v3 & *((_QWORD *)v4 + 2)) != 0 && (v3 & *((_QWORD *)v4 + 3)) == *((_QWORD *)v4 + 3)) )
  {
    return 1;
  }
  return v5;
}
