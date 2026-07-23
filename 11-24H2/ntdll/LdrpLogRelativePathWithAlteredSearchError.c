/*
 * XREFs of LdrpLogRelativePathWithAlteredSearchError @ 0x1800062D4
 * Callers:
 *     LdrpGetDllPath @ 0x180005DA0 (LdrpGetDllPath.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800676B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x18010D910 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180170498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall LdrpLogRelativePathWithAlteredSearchError(__int64 a1)
{
  struct _PEB *v1; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  const WCHAR *Buffer; // rbx
  __int64 result; // rax
  int v6; // r8d
  __int64 v7[4]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v8[16]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v9[16]; // [rsp+60h] [rbp-28h] BYREF

  v1 = NtCurrentPeb();
  if ( v1 && (ProcessParameters = v1->ProcessParameters) != 0LL )
    Buffer = ProcessParameters->ImagePathName.Buffer;
  else
    Buffer = &SourceString;
  result = (unsigned int)_InterlockedCompareExchange(&CentennialIssueTracker_InitializedState, 1, 0);
  if ( !(_DWORD)result )
  {
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CB9F0);
    result = (unsigned int)_InterlockedExchange(&CentennialIssueTracker_InitializedState, 2);
  }
  if ( (unsigned int)dword_1801CB9F0 > 5 && CentennialIssueTracker_InitializedState == 2 )
  {
    tlgCreate1Sz_wchar_t(v8, a1);
    tlgCreate1Sz_wchar_t(v9, Buffer);
    return tlgWriteTransfer_EtwEventWriteTransfer(
             (int)&dword_1801CB9F0,
             (int)&dword_1801A1EF9,
             v6,
             (int)v7,
             4u,
             (__int64)v7);
  }
  return result;
}
