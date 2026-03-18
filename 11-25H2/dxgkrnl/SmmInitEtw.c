/*
 * XREFs of SmmInitEtw @ 0x1403FBAAC
 * Callers:
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x14027FF1C (-SysMmInitializeGlobal@@YAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     McGenEventRegister_EtwRegister @ 0x140064940 (McGenEventRegister_EtwRegister.c)
 */

int __fastcall SmmInitEtw(__int64 a1, __int64 a2)
{
  int result; // eax

  result = McGenEventRegister_EtwRegister(&SysMmControlGuid, a2, SysMmControlGuid_Context, SysMmControlGuid_Context);
  if ( result < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 33;
    result = DxgkLogInternalTriageEvent(
               0LL,
               262146,
               0xFFFFFFFFLL,
               L"(((NTSTATUS)(Status)) >= 0)",
               33LL,
               0LL,
               0LL,
               0LL,
               0LL);
  }
  if ( !SysMmControlGuid_Context[0] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 34;
    return DxgkLogInternalTriageEvent(
             0LL,
             262146,
             0xFFFFFFFFLL,
             L"(SysMmControlGuid_Context.RegistrationHandle) != 0",
             34LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
