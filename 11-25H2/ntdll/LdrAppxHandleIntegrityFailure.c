/*
 * XREFs of LdrAppxHandleIntegrityFailure @ 0x180118F10
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180072240 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlQueryPackageClaims @ 0x1800AF4B0 (RtlQueryPackageClaims.c)
 *     RtlReportException @ 0x1800CF050 (RtlReportException.c)
 *     RtlCaptureContext @ 0x1801226E0 (RtlCaptureContext.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x180133178 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x180133220 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x180133340 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x180133490 (LdrpAppxGetRemediationRegistryKey.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     ZwTerminateProcess @ 0x1801637A0 (ZwTerminateProcess.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrAppxHandleIntegrityFailure(unsigned int a1)
{
  int RemediationRegistryKey; // ebx
  __int64 v3; // r9
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v8; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v9[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+70h] [rbp-90h] BYREF
  __int64 v11; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v12[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 (__fastcall *v13)(_QWORD); // [rsp+90h] [rbp-70h]
  struct _CONTEXT ContextRecord; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v15[4]; // [rsp+5F0h] [rbp+4F0h] BYREF
  int v16; // [rsp+5F4h] [rbp+4F4h]
  int v17; // [rsp+5F8h] [rbp+4F8h]
  wchar_t v18[128]; // [rsp+640h] [rbp+540h] BYREF

  Handle = 0LL;
  v7 = 0LL;
  v6 = 0;
  v8 = 0LL;
  v10 = 0LL;
  v9[1] = L"BinaryHash";
  v11 = 256LL;
  v9[0] = 1441812LL;
  RemediationRegistryKey = RtlQueryPackageClaims(-4LL, v18, &v11, 0LL, 0LL, 0LL, &v10, 0LL);
  if ( RemediationRegistryKey < 0 )
    goto LABEL_11;
  RemediationRegistryKey = LdrpAppxGetRemediationRegistryKey(a1, v18, &Handle);
  if ( RemediationRegistryKey < 0 )
    goto LABEL_11;
  RemediationRegistryKey = LdrpAppxGetBinaryNameKeyInformation(Handle, &v7, &v8);
  if ( RemediationRegistryKey >= 0 )
  {
    memset_thunk_772440563353939046(v15, 0, 0x50uLL);
    RemediationRegistryKey = NtQueryValueKey(Handle, v9, 2LL, v15, 80, &v6);
    if ( RemediationRegistryKey >= 0 )
    {
      if ( v16 == 3 && v17 )
        LdrpAppxEtwIntegrityFailure(a1, v18, v7);
      else
        RemediationRegistryKey = -1073739509;
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8, v3);
  }
  NtClose(Handle);
  if ( RemediationRegistryKey < 0 )
LABEL_11:
    LdrpAppxEtwGenericIntegrityFailure((unsigned int)RemediationRegistryKey);
  if ( a1 != -1073740673 )
  {
    memset_thunk_772440563353939046(v12, 0, 0x98uLL);
    v12[0] = 101457950;
    v13 = LdrAppxHandleIntegrityFailure;
    v12[1] = 1;
    memset_thunk_772440563353939046(&ContextRecord, 0, 0x4D0uLL);
    RtlCaptureContext(&ContextRecord);
    RtlReportException(v12, &ContextRecord, 2LL);
    ZwTerminateProcess(-1LL, v12[0]);
  }
  return 3221225781LL;
}
