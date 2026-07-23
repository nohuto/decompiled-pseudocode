/*
 * XREFs of PopDirectedDripsDiagInitialize @ 0x140C35AC4
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140C301BC (PopDirectedDripsInitializePhase0.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140C30294 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void __fastcall PopDirectedDripsDiagInitialize(int a1)
{
  if ( a1 )
  {
    if ( a1 == 3 )
      PopDirectedDripsDiagTraceHandleRegistered = (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                                                         (__int64)&dword_140FD8900,
                                                         0LL,
                                                         0LL) >= 0;
  }
  else
  {
    RtlInitUnicodeString(&PopDirectedDripsDiagEmptyString, &word_140C6BAA0);
    PopDirectedDripsDiagLock = 0LL;
    memset_0(&PopDirectedDripsDiagSessionContext, 0, 0x230uLL);
    qword_140F06950 = 0LL;
    qword_140F06938 = (__int64)&qword_140F06930;
    qword_140F06930 = &qword_140F06930;
    qword_140F06928 = (__int64)&PopDirectedDripsDiagSessionContext;
    PopDirectedDripsDiagSessionContext = &PopDirectedDripsDiagSessionContext;
    dword_140F06B40 = 1;
    dword_140F06B44 = 1;
  }
}
