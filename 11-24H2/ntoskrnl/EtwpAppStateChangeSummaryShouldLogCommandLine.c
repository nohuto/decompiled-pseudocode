/*
 * XREFs of EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1408F24A8
 * Callers:
 *     EtwTraceAppStateChange @ 0x1408F057C (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x1408F11B4 (EtwTraceProcess.c)
 * Callees:
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 */

char __fastcall EtwpAppStateChangeSummaryShouldLogCommandLine(__int64 a1)
{
  unsigned __int16 *v1; // rax
  char v2; // bl
  const wchar_t *v3; // rdx
  unsigned __int64 v4; // rdi
  const wchar_t *v5; // rax
  const wchar_t *v6; // rsi
  size_t v7; // rdi

  v1 = *(unsigned __int16 **)(a1 + 848);
  v2 = 0;
  if ( v1 && *v1 )
  {
    v3 = (const wchar_t *)*((_QWORD *)v1 + 1);
    v4 = (unsigned __int64)*v1 >> 1;
    v5 = &v3[v4];
    do
    {
      v6 = v5;
      if ( v5 == v3 )
        break;
      --v5;
    }
    while ( *v5 != 92 );
    v7 = v4 - (v6 - v3);
    if ( !wcsnicmp(v6, L"svchost.exe", v7) || !wcsnicmp(v6, L"oemsvchost.exe", v7) )
      return 1;
  }
  return v2;
}
