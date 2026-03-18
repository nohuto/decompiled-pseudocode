/*
 * XREFs of ?CitpIsInteractiveSession@@YAEXZ @ 0x1400B64F8
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1400B5F6C (-CitpStart@@YAJXZ.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1400B6354 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 */

unsigned __int8 CitpIsInteractiveSession(void)
{
  int CurrentServiceSessionId; // ebx
  char v1; // cl
  char IsMultiSessionSku; // al

  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  if ( (unsigned int)W32GetCurrentWin32kSessionId() != CurrentServiceSessionId )
    return 1;
  IsMultiSessionSku = RtlIsMultiSessionSku();
  v1 = 0;
  if ( !IsMultiSessionSku )
    return 1;
  return v1;
}
