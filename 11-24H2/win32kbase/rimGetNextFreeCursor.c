/*
 * XREFs of rimGetNextFreeCursor @ 0x1401F1D20
 * Callers:
 *     RIMCmActivateContact @ 0x1401F1828 (RIMCmActivateContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimGetNextFreeCursor(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // ecx
  int v4; // r8d
  unsigned int v5; // eax
  __int64 v6; // r9
  __int64 v7; // rdx

  v2 = 0;
  if ( *(_DWORD *)(a1 + 1040) >= *(_DWORD *)(a1 + 1044) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 743);
  v3 = *(_DWORD *)(a1 + 1044);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 1040);
  if ( v3 )
  {
    v6 = *(_QWORD *)(a1 + 1032);
    while ( 1 )
    {
      v7 = v5 % v3;
      v5 = v5 % v3 + 1;
      if ( !*(_DWORD *)(v6 + 12LL * (unsigned int)v7 + 8) )
        break;
      if ( ++v4 >= v3 )
        goto LABEL_9;
    }
    v2 = *(_DWORD *)(v6 + 12 * v7 + 4);
    *(_DWORD *)(a1 + 1040) = v5 % v3;
    *(_DWORD *)(v6 + 12 * v7 + 8) = 1;
  }
LABEL_9:
  if ( *(_DWORD *)(a1 + 1040) >= *(_DWORD *)(a1 + 1044) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 758);
  return v2;
}
