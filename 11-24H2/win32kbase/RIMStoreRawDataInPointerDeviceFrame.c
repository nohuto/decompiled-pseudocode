/*
 * XREFs of RIMStoreRawDataInPointerDeviceFrame @ 0x1400577FC
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x140057884 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6DC8 (rimDoProcessAnyPointerDeviceInput.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x140180484 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1401EE1CC (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1400563E0 (rimFindHoldingFrame.c)
 *     rimStoreRawDataBlock @ 0x14017F78C (rimStoreRawDataBlock.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_QWORD *__fastcall RIMStoreRawDataInPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  _QWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  _QWORD *v11; // rbx

  *a5 = 0;
  result = rimFindHoldingFrame(a1, a2);
  v11 = result;
  if ( result )
  {
    if ( *((_DWORD *)result + 4) == v10 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 837LL);
    return (_QWORD *)rimStoreRawDataBlock(v9, v8, a3, a4, v11, a5);
  }
  return result;
}
