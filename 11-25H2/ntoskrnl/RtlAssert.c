/*
 * XREFs of RtlAssert @ 0x1405DD1F0
 * Callers:
 *     KsepStringSplitMultiString @ 0x140734248 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x140734708 (KsepRegistryCreateKey.c)
 *     KsepRegistryQueryDWORD @ 0x140734A48 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryQuerySZ @ 0x140734C8C (KsepRegistryQuerySZ.c)
 *     KsepRegistryQueryValue @ 0x140734EF8 (KsepRegistryQueryValue.c)
 *     KsepRegistryOpenKey @ 0x140829E68 (KsepRegistryOpenKey.c)
 *     KsepStringConcatenate @ 0x140829F6C (KsepStringConcatenate.c)
 *     KseShimDatabaseClose @ 0x14082A294 (KseShimDatabaseClose.c)
 *     KsepStringTransform @ 0x14082A9D8 (KsepStringTransform.c)
 *     KsepStringDuplicate @ 0x14082AB14 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x14082BBBC (KsepStringFree.c)
 *     KseDriverUnloadImage @ 0x140A4FCB0 (KseDriverUnloadImage.c)
 *     KsepStringDuplicateUnicode @ 0x140A50248 (KsepStringDuplicateUnicode.c)
 *     KsepGetShimCallbacksForDriver @ 0x140A50334 (KsepGetShimCallbacksForDriver.c)
 *     KsepEngineInitialize @ 0x140C1A1F0 (KsepEngineInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x140C1AE74 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineReadFlags @ 0x140C1B060 (KsepEngineReadFlags.c)
 * Callees:
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     RtlCaptureContext @ 0x1404FA120 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x1405DB5C0 (DbgPrompt.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwTerminateThread @ 0x14069BBA0 (ZwTerminateThread.c)
 *     RtlpTerminateCurrentProcess @ 0x140772C84 (RtlpTerminateCurrentProcess.c)
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
