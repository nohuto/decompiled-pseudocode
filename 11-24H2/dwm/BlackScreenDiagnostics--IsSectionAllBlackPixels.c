/*
 * XREFs of BlackScreenDiagnostics::IsSectionAllBlackPixels @ 0x140003730
 * Callers:
 *     BlackScreenDiagnostics::GetDwmFrontBufferBitsColor @ 0x14000DB00 (BlackScreenDiagnostics--GetDwmFrontBufferBitsColor.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000EB1C (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall BlackScreenDiagnostics::IsSectionAllBlackPixels(void *a1)
{
  int v1; // edi
  char *v2; // rax
  const void *v3; // rcx
  _BYTE *i; // rax
  int v5; // ebx
  __int64 v6; // rcx
  DWORD LastError; // eax
  __int64 v9; // rcx

  v1 = 120000;
  v2 = (char *)MapViewOfFile(a1, 2u, 0, 0, 0x75300uLL);
  v3 = v2;
  if ( v2 )
  {
    for ( i = v2 + 2; ; i += 4 )
    {
      v5 = 0;
      if ( !v1 )
        break;
      if ( *(i - 2) || *(i - 1) || *i )
      {
        v5 = 1;
        break;
      }
      --v1;
    }
    if ( !UnmapViewOfFile(v3) )
      MicrosoftTelemetryAssertTriggeredArgs(v6, 0LL, 0LL);
    return (unsigned int)(v5 + 1);
  }
  else
  {
    LastError = GetLastError();
    MicrosoftTelemetryAssertTriggeredArgs(v9, LastError, 0LL);
    return 5LL;
  }
}
