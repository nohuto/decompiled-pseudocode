/*
 * XREFs of PdcInitializeETW @ 0x14060506C
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x14078D88C (Pdcv2ActivationClientRegister.c)
 * Callees:
 *     McGenEventRegister_EtwRegister @ 0x14057ABE4 (McGenEventRegister_EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
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
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E088A8, 0LL, 0LL);
  }
  return result;
}
