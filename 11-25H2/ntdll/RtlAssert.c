/*
 * XREFs of RtlAssert @ 0x1800F4450
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180016E20 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180019210 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800F42FC (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 * Callees:
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800F4578 (RtlIsAnyDebuggerPresent.c)
 *     RtlCaptureContext @ 0x1801226E0 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x180138080 (DbgPrompt.c)
 *     ZwTerminateProcess @ 0x1801637A0 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x180163C80 (NtTerminateThread.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlAssert(const char *a1, const char *a2, int a3, const char *a4)
{
  __int64 v8; // rcx
  __int64 result; // rax
  bool v10; // zf
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  char v14[16]; // [rsp+40h] [rbp-518h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+50h] [rbp-508h] BYREF

  RtlCaptureContext(&ContextRecord);
  if ( !a4 )
    a4 = (const char *)&unk_18017BF30;
  while ( 1 )
  {
    DbgPrintEx(101, 0, "\n*** Assertion failed: %s%s\n***   Source File: %s, line %ld\n\n", a4, a1, a2, a3);
    result = RtlIsAnyDebuggerPresent(v8);
    if ( !(_BYTE)result )
      return result;
    result = DbgPrompt(
               "Break repeatedly, break Once, Ignore, terminate Process, or terminate Thread (boipt)? ",
               v14,
               2LL);
    if ( !(_DWORD)result )
    {
      __debugbreak();
      return ZwTerminateProcess(-1LL, 3221225473LL);
    }
    if ( v14[0] > 98 )
    {
      v11 = v14[0] - 105;
      v10 = v14[0] == 105;
    }
    else
    {
      if ( v14[0] == 98 || v14[0] == 66 )
        goto LABEL_15;
      v11 = v14[0] - 73;
      v10 = v14[0] == 73;
    }
    if ( v10 )
      return result;
    v12 = v11 - 6;
    if ( !v12 )
    {
LABEL_15:
      DbgPrintEx(101, 0, "Execute '.cxr %p' to dump context\n", &ContextRecord);
      __debugbreak();
    }
    v13 = v12 - 1;
    if ( !v13 )
      return ZwTerminateProcess(-1LL, 3221225473LL);
    if ( v13 == 4 )
      NtTerminateThread(-2LL, 3221225473LL);
  }
}
