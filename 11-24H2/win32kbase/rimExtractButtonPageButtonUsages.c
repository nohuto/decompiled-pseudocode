/*
 * XREFs of rimExtractButtonPageButtonUsages @ 0x1401810DC
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1400571D4 (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14023F500 (memset.c)
 */

NTSTATUS __fastcall rimExtractButtonPageButtonUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        CHAR *a3,
        ULONG a4,
        _DWORD *a5)
{
  _WORD *v5; // rdi
  ULONG v6; // eax
  _DWORD *v10; // rbx
  NTSTATUS result; // eax
  __int64 v12; // r8
  ULONG UsageLength; // [rsp+80h] [rbp+8h] BYREF

  v5 = *(_WORD **)(a1 + 824);
  v6 = *(_DWORD *)(a1 + 1048);
  UsageLength = v6;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3033LL);
    v6 = UsageLength;
  }
  v10 = a5;
  *a5 = 0;
  memset(v5, 0, 2LL * v6);
  result = HidP_GetUsages(HidP_Input, 9u, 0, v5, &UsageLength, a2, a3, a4);
  if ( result >= 0 && UsageLength )
  {
    v12 = UsageLength;
    do
    {
      switch ( *v5 )
      {
        case 1:
          *v10 |= 0x16u;
          break;
        case 2:
          *v10 |= 0x26u;
          break;
        case 3:
          *v10 |= 0x46u;
          break;
      }
      ++v5;
      --v12;
    }
    while ( v12 );
  }
  return result;
}
