/*
 * XREFs of LdrpLogRelativePathWithAlteredSearchError @ 0x180084424
 * Callers:
 *     LdrpGetDllPath @ 0x180083EF0 (LdrpGetDllPath.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180051AD4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1801124A0 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180171498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
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
    Buffer = (wchar_t *)&unk_18017EEFC;
  result = (unsigned int)_InterlockedCompareExchange(&CentennialIssueTracker_InitializedState, 1, 0);
  if ( !(_DWORD)result )
  {
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CC9B8);
    result = (unsigned int)_InterlockedExchange(&CentennialIssueTracker_InitializedState, 2);
  }
  if ( (unsigned int)dword_1801CC9B8 > 5 && CentennialIssueTracker_InitializedState == 2 )
  {
    tlgCreate1Sz_wchar_t(v8, a1);
    tlgCreate1Sz_wchar_t(v9, Buffer);
    return tlgWriteTransfer_EtwEventWriteTransfer(
             (__int64)&dword_1801CC9B8,
             byte_1801A2D59,
             v6,
             (__int64)v7,
             4,
             (__int64)v7);
  }
  return result;
}
