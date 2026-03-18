/*
 * XREFs of rimReleaseCursor @ 0x1401F1E00
 * Callers:
 *     RIMCmDeactivateContact @ 0x1401822F4 (RIMCmDeactivateContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimReleaseCursor(__int64 a1, int a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // edx
  __int64 v6; // r9

  if ( *(_DWORD *)(a1 + 1040) >= *(_DWORD *)(a1 + 1044) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 769);
  v4 = *(_DWORD *)(a1 + 1044);
  v5 = 0;
  if ( v4 )
  {
    v6 = *(_QWORD *)(a1 + 1032);
    while ( a2 != *(_DWORD *)(v6 + 12LL * v5 + 4) )
    {
      if ( ++v5 >= v4 )
        goto LABEL_10;
    }
    *(_DWORD *)(v6 + 12LL * v5 + 8) = 0;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 1032) + 12LL * *(unsigned int *)(a1 + 1040) + 8) )
      *(_DWORD *)(a1 + 1040) = v5;
  }
LABEL_10:
  if ( *(_DWORD *)(a1 + 1040) >= *(_DWORD *)(a1 + 1044) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 785);
}
