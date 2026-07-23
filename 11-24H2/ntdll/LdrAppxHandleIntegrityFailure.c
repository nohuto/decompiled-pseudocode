/*
 * XREFs of LdrAppxHandleIntegrityFailure @ 0x1801111B0
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18008DF20 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x180008FD0 (RtlQueryPackageClaims.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlReportException @ 0x18010B4F0 (RtlReportException.c)
 *     RtlCaptureContext @ 0x18011EE30 (RtlCaptureContext.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x18012F8C8 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x18012F970 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x18012FA90 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x18012FBE0 (LdrpAppxGetRemediationRegistryKey.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     ZwTerminateProcess @ 0x1801605D0 (ZwTerminateProcess.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrAppxHandleIntegrityFailure(unsigned int a1)
{
  NTSTATUS RemediationRegistryKey; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v6; // [rsp+50h] [rbp-B0h]
  PVOID BaseAddress; // [rsp+58h] [rbp-A8h]
  _UNICODE_STRING ValueName; // [rsp+60h] [rbp-A0h] BYREF
  _PS_PKG_CLAIM PkgClaim; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR PackageSize; // [rsp+78h] [rbp-88h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+120h] [rbp+20h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+5F0h] [rbp+4F0h] BYREF
  int v14; // [rsp+5F4h] [rbp+4F4h]
  int v15; // [rsp+5F8h] [rbp+4F8h]
  WCHAR PackageFullName[128]; // [rsp+640h] [rbp+540h] BYREF

  KeyHandle = 0LL;
  v6 = 0LL;
  ResultLength = 0;
  BaseAddress = 0LL;
  PkgClaim = 0LL;
  ValueName.Buffer = L"BinaryHash";
  PackageSize = 256LL;
  *(_QWORD *)&ValueName.Length = 1441812LL;
  RemediationRegistryKey = RtlQueryPackageClaims(
                             (HANDLE)0xFFFFFFFFFFFFFFFCLL,
                             PackageFullName,
                             &PackageSize,
                             0LL,
                             0LL,
                             0LL,
                             &PkgClaim,
                             0LL);
  if ( RemediationRegistryKey < 0 )
    goto LABEL_11;
  RemediationRegistryKey = LdrpAppxGetRemediationRegistryKey(a1, PackageFullName, &KeyHandle);
  if ( RemediationRegistryKey < 0 )
    goto LABEL_11;
  RemediationRegistryKey = LdrpAppxGetBinaryNameKeyInformation(KeyHandle);
  if ( RemediationRegistryKey >= 0 )
  {
    memset_thunk_772440563353939046(KeyValueInformation, 0, 0x50uLL);
    RemediationRegistryKey = NtQueryValueKey(
                               KeyHandle,
                               &ValueName,
                               KeyValuePartialInformation,
                               KeyValueInformation,
                               0x50u,
                               &ResultLength);
    if ( RemediationRegistryKey >= 0 )
    {
      if ( v14 == 3 && v15 )
        LdrpAppxEtwIntegrityFailure(a1, PackageFullName, v6);
      else
        RemediationRegistryKey = -1073739509;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  NtClose(KeyHandle);
  if ( RemediationRegistryKey < 0 )
LABEL_11:
    LdrpAppxEtwGenericIntegrityFailure((unsigned int)RemediationRegistryKey);
  if ( a1 != -1073740673 )
  {
    memset_thunk_772440563353939046(&ExceptionRecord, 0, 0x98uLL);
    ExceptionRecord.ExceptionCode = 101457950;
    ExceptionRecord.ExceptionAddress = LdrAppxHandleIntegrityFailure;
    ExceptionRecord.ExceptionFlags = 1;
    memset_thunk_772440563353939046(&ContextRecord, 0, 0x4D0uLL);
    RtlCaptureContext(&ContextRecord);
    RtlReportException(&ExceptionRecord, &ContextRecord, 2u);
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord.ExceptionCode);
  }
  return 3221225781LL;
}
