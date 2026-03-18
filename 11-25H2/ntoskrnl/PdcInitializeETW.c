/*
 * XREFs of PdcInitializeETW @ 0x1405FB724
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x14077E6A8 (Pdcv2ActivationClientRegister.c)
 * Callees:
 *     McGenEventRegister_EtwRegister @ 0x14057A434 (McGenEventRegister_EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall PdcInitializeETW(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement(&g_RegistrationCount);
  if ( (_DWORD)result == 1 )
  {
    McGenEventRegister_EtwRegister(
      (const GUID *)PDC_EVENT_PROVIDER,
      a2,
      PDC_EVENT_PROVIDER_Context,
      PDC_EVENT_PROVIDER_Context);
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E08758, 0LL, 0LL);
  }
  return result;
}
