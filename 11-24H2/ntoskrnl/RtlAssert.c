/*
 * XREFs of RtlAssert @ 0x1405E6890
 * Callers:
 *     KsepStringSplitMultiString @ 0x14073E198 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x14073E658 (KsepRegistryCreateKey.c)
 *     KsepRegistryQueryDWORD @ 0x14073E998 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryQuerySZ @ 0x14073EBDC (KsepRegistryQuerySZ.c)
 *     KsepRegistryQueryValue @ 0x14073EE48 (KsepRegistryQueryValue.c)
 *     KseDriverUnloadImage @ 0x14094179C (KseDriverUnloadImage.c)
 *     KsepStringDuplicateUnicode @ 0x140941D34 (KsepStringDuplicateUnicode.c)
 *     KsepGetShimCallbacksForDriver @ 0x140941E20 (KsepGetShimCallbacksForDriver.c)
 *     KsepStringFree @ 0x140943154 (KsepStringFree.c)
 *     KsepRegistryOpenKey @ 0x14094390C (KsepRegistryOpenKey.c)
 *     KsepStringConcatenate @ 0x140943A10 (KsepStringConcatenate.c)
 *     KseShimDatabaseClose @ 0x140943D3C (KseShimDatabaseClose.c)
 *     KsepStringTransform @ 0x140944488 (KsepStringTransform.c)
 *     KsepStringDuplicate @ 0x1409445C4 (KsepStringDuplicate.c)
 *     KsepEngineInitialize @ 0x140C2D410 (KsepEngineInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x140C2E094 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineReadFlags @ 0x140C2E280 (KsepEngineReadFlags.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     RtlCaptureContext @ 0x1404FA160 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x1405E4C60 (DbgPrompt.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwTerminateThread @ 0x1406A7E10 (ZwTerminateThread.c)
 *     RtlpTerminateCurrentProcess @ 0x140781E5C (RtlpTerminateCurrentProcess.c)
 */

void __stdcall RtlAssert(PVOID VoidFailedAssertion, PVOID VoidFileName, ULONG LineNumber, PSTR MutableMessage)
{
  bool v8; // zf
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  CHAR Response[16]; // [rsp+40h] [rbp-518h] BYREF
  _CONTEXT ContextRecord; // [rsp+50h] [rbp-508h] BYREF

  RtlCaptureContext(&ContextRecord);
  if ( !MutableMessage )
    MutableMessage = (PSTR)&File;
  while ( 1 )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n*** Assertion failed: %s%s\n***   Source File: %s, line %ld\n\n",
      MutableMessage,
      (const char *)VoidFailedAssertion,
      (const char *)VoidFileName,
      LineNumber);
    if ( (MEMORY[0xFFFFF780000002D4] & 3) != 3 )
      break;
    if ( !DbgPrompt(
            "Break repeatedly, break Once, Ignore, terminate Process, or terminate Thread (boipt)? ",
            Response,
            2u) )
    {
      __debugbreak();
LABEL_17:
      RtlpTerminateCurrentProcess();
      return;
    }
    if ( Response[0] > 98 )
    {
      v9 = Response[0] - 105;
      v8 = Response[0] == 105;
    }
    else
    {
      if ( Response[0] == 98 || Response[0] == 66 )
        goto LABEL_15;
      v9 = Response[0] - 73;
      v8 = Response[0] == 73;
    }
    if ( v8 )
      return;
    v10 = v9 - 6;
    if ( !v10 )
    {
LABEL_15:
      DbgPrintEx(0x65u, 0, "Execute '.cxr %p' to dump context\n", &ContextRecord);
      __debugbreak();
    }
    v11 = v10 - 1;
    if ( !v11 )
      goto LABEL_17;
    if ( v11 == 4 )
      ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, -1073741823);
  }
}
