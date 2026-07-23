/*
 * XREFs of LdrpLogRelativePathWithAlteredSearchError @ 0x1800AC7B4
 * Callers:
 *     LdrpGetDllPath @ 0x1800AC280 (LdrpGetDllPath.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1801155A0 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180173498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

ULONG __fastcall LdrpLogRelativePathWithAlteredSearchError(__int64 a1)
{
  struct _PEB *v1; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  const WCHAR *Buffer; // rbx
  ULONG result; // eax
  __int64 v6; // r8
  _EVENT_DATA_DESCRIPTOR v7[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v8[16]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v9[16]; // [rsp+60h] [rbp-28h] BYREF

  v1 = NtCurrentPeb();
  if ( v1 && (ProcessParameters = v1->ProcessParameters) != 0LL )
    Buffer = ProcessParameters->ImagePathName.Buffer;
  else
    Buffer = &word_18017D3FC;
  result = _InterlockedCompareExchange(&CentennialIssueTracker_InitializedState, 1, 0);
  if ( !result )
  {
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CE9F0);
    result = _InterlockedExchange(&CentennialIssueTracker_InitializedState, 2);
  }
  if ( (unsigned int)dword_1801CE9F0 > 5 && CentennialIssueTracker_InitializedState == 2 )
  {
    tlgCreate1Sz_wchar_t(v8, a1);
    tlgCreate1Sz_wchar_t(v9, Buffer);
    return tlgWriteTransfer_EtwEventWriteTransfer(
             (__int64)&dword_1801CE9F0,
             (unsigned __int8 *)dword_1801A4DA1,
             v6,
             (__int64)v7,
             4u,
             v7);
  }
  return result;
}
