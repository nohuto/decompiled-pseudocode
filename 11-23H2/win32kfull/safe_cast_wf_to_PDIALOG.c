/*
 * XREFs of safe_cast_wf_to_PDIALOG @ 0x1C00AA404
 * Callers:
 *     xxxSetWindowLong @ 0x1C00A76E4 (xxxSetWindowLong.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00A7D28 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall safe_cast_wf_to_PDIALOG(__int64 a1)
{
  __int64 v2; // rcx

  if ( !a1 )
    return 0LL;
  if ( _bittest16((const signed __int16 *)(*(_QWORD *)(a1 + 40) + 42LL), 0xCu) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 879LL);
  v2 = *(_QWORD *)(a1 + 40);
  if ( _bittest16((const signed __int16 *)(v2 + 42), 0xCu) || (*(_BYTE *)(v2 + 18) & 1) == 0 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 248) )
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v2 + 296);
}
