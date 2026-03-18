/*
 * XREFs of PopDirectedDripsDiagInitialize @ 0x140C22748
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140C1CF9C (PopDirectedDripsInitializePhase0.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140C1D074 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void __fastcall PopDirectedDripsDiagInitialize(int a1)
{
  if ( a1 )
  {
    if ( a1 == 3 )
      PopDirectedDripsDiagTraceHandleRegistered = (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                                                         (__int64)&dword_140FD7920,
                                                         0LL,
                                                         0LL) >= 0;
  }
  else
  {
    RtlInitUnicodeString(&PopDirectedDripsDiagEmptyString, &word_140C586E0);
    PopDirectedDripsDiagLock = 0LL;
    memset_0(&PopDirectedDripsDiagSessionContext, 0, 0x230uLL);
    qword_140F06090 = 0LL;
    qword_140F06078 = (__int64)&qword_140F06070;
    qword_140F06070 = &qword_140F06070;
    qword_140F06068 = (__int64)&PopDirectedDripsDiagSessionContext;
    PopDirectedDripsDiagSessionContext = &PopDirectedDripsDiagSessionContext;
    dword_140F06280 = 1;
    dword_140F06284 = 1;
  }
}
