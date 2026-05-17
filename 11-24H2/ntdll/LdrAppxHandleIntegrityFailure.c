/*
 * XREFs of LdrAppxHandleIntegrityFailure @ 0x180115D20
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180071640 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlReportException @ 0x180001490 (RtlReportException.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlQueryPackageClaims @ 0x180087120 (RtlQueryPackageClaims.c)
 *     RtlCaptureContext @ 0x180120C00 (RtlCaptureContext.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x180131698 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x180131740 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x180131860 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1801319B0 (LdrpAppxGetRemediationRegistryKey.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     ZwTerminateProcess @ 0x180162210 (ZwTerminateProcess.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrAppxHandleIntegrityFailure(unsigned int a1)
{
  int RemediationRegistryKey; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  int v5; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v6; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v8[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v9; // [rsp+70h] [rbp-90h] BYREF
  __int64 v10; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v11[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 (__fastcall *v12)(_QWORD); // [rsp+90h] [rbp-70h]
  struct _CONTEXT ContextRecord; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v14[4]; // [rsp+5F0h] [rbp+4F0h] BYREF
  int v15; // [rsp+5F4h] [rbp+4F4h]
  int v16; // [rsp+5F8h] [rbp+4F8h]
  wchar_t v17[128]; // [rsp+640h] [rbp+540h] BYREF

  Handle = 0LL;
  v6 = 0LL;
  v5 = 0;
  v7 = 0LL;
  v9 = 0LL;
  v8[1] = L"BinaryHash";
  v10 = 256LL;
  v8[0] = 1441812LL;
  RemediationRegistryKey = RtlQueryPackageClaims(-4LL, v17, &v10, 0LL, 0LL, 0LL, &v9, 0LL);
  if ( RemediationRegistryKey < 0 )
    goto LABEL_11;
  RemediationRegistryKey = LdrpAppxGetRemediationRegistryKey(a1, v17, &Handle);
  if ( RemediationRegistryKey < 0 )
    goto LABEL_11;
  RemediationRegistryKey = LdrpAppxGetBinaryNameKeyInformation(Handle, &v6, &v7);
  if ( RemediationRegistryKey >= 0 )
  {
    memset_thunk_772440563353939046(v14, 0, 0x50uLL);
    RemediationRegistryKey = NtQueryValueKey(Handle, v8, 2LL, v14, 80, &v5);
    if ( RemediationRegistryKey >= 0 )
    {
      if ( v15 == 3 && v16 )
        LdrpAppxEtwIntegrityFailure(a1, v17, v6);
      else
        RemediationRegistryKey = -1073739509;
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
  }
  NtClose(Handle);
  if ( RemediationRegistryKey < 0 )
LABEL_11:
    LdrpAppxEtwGenericIntegrityFailure((unsigned int)RemediationRegistryKey);
  if ( a1 != -1073740673 )
  {
    memset_thunk_772440563353939046(v11, 0, 0x98uLL);
    v11[0] = 101457950;
    v12 = LdrAppxHandleIntegrityFailure;
    v11[1] = 1;
    memset_thunk_772440563353939046(&ContextRecord, 0, 0x4D0uLL);
    RtlCaptureContext(&ContextRecord);
    RtlReportException((__int64)v11, (__int64)&ContextRecord, 2u);
    ZwTerminateProcess(-1LL, v11[0]);
  }
  return 3221225781LL;
}
