/*
 * XREFs of RtlAssert @ 0x1800F28E0
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18005B1C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18005D5B0 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800F278C (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 * Callees:
 *     DbgPrintEx @ 0x18005EA90 (DbgPrintEx.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800F2A08 (RtlIsAnyDebuggerPresent.c)
 *     RtlCaptureContext @ 0x180120C00 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x180136910 (DbgPrompt.c)
 *     ZwTerminateProcess @ 0x180162210 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x1801626F0 (NtTerminateThread.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
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
    a4 = (const char *)&unk_180178AE6;
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
