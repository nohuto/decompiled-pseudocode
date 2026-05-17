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

__int64 __fastcall LdrpLogRelativePathWithAlteredSearchError(__int64 a1)
{
  struct _PEB *v1; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  wchar_t *Buffer; // rbx
  __int64 result; // rax
  __int64 v6; // r8
  _BYTE v7[32]; // [rsp+30h] [rbp-58h] BYREF
  char v8[16]; // [rsp+50h] [rbp-38h] BYREF
  char v9[16]; // [rsp+60h] [rbp-28h] BYREF

  v1 = NtCurrentPeb();
  if ( v1 && (ProcessParameters = v1->ProcessParameters) != 0LL )
    Buffer = ProcessParameters->ImagePathName.Buffer;
  else
    Buffer = (wchar_t *)&unk_18017D3FC;
  result = (unsigned int)_InterlockedCompareExchange(&CentennialIssueTracker_InitializedState, 1, 0);
  if ( !(_DWORD)result )
  {
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CE9F0);
    result = (unsigned int)_InterlockedExchange(&CentennialIssueTracker_InitializedState, 2);
  }
  if ( (unsigned int)dword_1801CE9F0 > 5 && CentennialIssueTracker_InitializedState == 2 )
  {
    tlgCreate1Sz_wchar_t(v8, a1);
    tlgCreate1Sz_wchar_t(v9, Buffer);
    return tlgWriteTransfer_EtwEventWriteTransfer(
             (__int64)&dword_1801CE9F0,
             byte_1801A4DA1,
             v6,
             (__int64)v7,
             4,
             (__int64)v7);
  }
  return result;
}
