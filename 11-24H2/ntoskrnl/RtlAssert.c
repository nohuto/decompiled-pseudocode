/*
 * XREFs of RtlAssert @ 0x1405E9340
 * Callers:
 *     KsepStringSplitMultiString @ 0x140740268 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x140740728 (KsepRegistryCreateKey.c)
 *     KsepRegistryQueryDWORD @ 0x140740A68 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryQuerySZ @ 0x140740CAC (KsepRegistryQuerySZ.c)
 *     KsepRegistryQueryValue @ 0x140740F18 (KsepRegistryQueryValue.c)
 *     KseDriverUnloadImage @ 0x140959CDC (KseDriverUnloadImage.c)
 *     KsepStringDuplicateUnicode @ 0x14095A274 (KsepStringDuplicateUnicode.c)
 *     KsepGetShimCallbacksForDriver @ 0x14095A360 (KsepGetShimCallbacksForDriver.c)
 *     KsepStringFree @ 0x14095B694 (KsepStringFree.c)
 *     KsepRegistryOpenKey @ 0x14095BE4C (KsepRegistryOpenKey.c)
 *     KsepStringConcatenate @ 0x14095BF50 (KsepStringConcatenate.c)
 *     KseShimDatabaseClose @ 0x14095C27C (KseShimDatabaseClose.c)
 *     KsepStringTransform @ 0x14095C9C8 (KsepStringTransform.c)
 *     KsepStringDuplicate @ 0x14095CB04 (KsepStringDuplicate.c)
 *     KsepEngineInitialize @ 0x140C2B2F0 (KsepEngineInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x140C2BF74 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineReadFlags @ 0x140C2C160 (KsepEngineReadFlags.c)
 * Callees:
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     RtlCaptureContext @ 0x1404FC8A0 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x1405E7670 (DbgPrompt.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwTerminateThread @ 0x1406A6E70 (ZwTerminateThread.c)
 *     RtlpTerminateCurrentProcess @ 0x140781F2C (RtlpTerminateCurrentProcess.c)
 */

void __stdcall RtlAssert(PVOID VoidFailedAssertion, PVOID VoidFileName, ULONG LineNumber, PSTR MutableMessage)
{
  bool v8; // zf
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  CHAR Response[16]; // [rsp+40h] [rbp-518h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+50h] [rbp-508h] BYREF

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
      ZwTerminateThread(-2LL, 3221225473LL);
  }
}
