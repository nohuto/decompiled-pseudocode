/*
 * XREFs of PopDirectedDripsDiagInitialize @ 0x140C33984
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140C2E09C (PopDirectedDripsInitializePhase0.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140C2E174 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void __fastcall PopDirectedDripsDiagInitialize(int a1)
{
  if ( a1 )
  {
    if ( a1 == 3 )
      PopDirectedDripsDiagTraceHandleRegistered = (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                                                         (__int64)&dword_140FD78F0,
                                                         0LL,
                                                         0LL) >= 0;
  }
  else
  {
    RtlInitUnicodeString(&PopDirectedDripsDiagEmptyString, &word_140C69940);
    PopDirectedDripsDiagLock = 0LL;
    memset_0(&PopDirectedDripsDiagSessionContext, 0, 0x230uLL);
    qword_140F06650 = 0LL;
    qword_140F06638 = (__int64)&qword_140F06630;
    qword_140F06630 = &qword_140F06630;
    qword_140F06628 = (__int64)&PopDirectedDripsDiagSessionContext;
    PopDirectedDripsDiagSessionContext = &PopDirectedDripsDiagSessionContext;
    dword_140F06840 = 1;
    dword_140F06844 = 1;
  }
}
