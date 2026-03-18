/*
 * XREFs of DpiAppendStringToString @ 0x140242BF0
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1403E2E00 (DpiPdoHandleQueryId.c)
 *     DpiGdoSetupGdiParameters @ 0x1403F816C (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x140054B24 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DpiAppendStringToString(PCWSTR Source, unsigned __int16 *a2, PUNICODE_STRING UnicodeString)
{
  int v6; // eax
  unsigned __int64 v7; // r11
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // r9
  unsigned __int16 v11; // bx
  wchar_t *Pool2; // rax
  NTSTATUS appended; // eax
  NTSTATUS v14; // eax
  unsigned __int64 v16[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  v16[0] = 0LL;
  v6 = RtlStringCbLengthW(Source, 0x208uLL, &v17);
  v8 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 380;
LABEL_11:
    RtlFreeUnicodeString(UnicodeString);
    return v8;
  }
  v9 = RtlStringCbLengthW(a2, v7, v16);
  v8 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(2LL, v9);
    WdLogGlobalForLineNumber = 391;
    goto LABEL_11;
  }
  v11 = LOWORD(v16[0]) + v17 + 2;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v11, 1953656900LL, v10);
  UnicodeString->Buffer = Pool2;
  if ( !Pool2 )
  {
    v8 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 408;
    goto LABEL_11;
  }
  UnicodeString->Length = 0;
  UnicodeString->MaximumLength = v11;
  memset(Pool2, 0, v11);
  appended = RtlAppendUnicodeToString(UnicodeString, Source);
  v8 = appended;
  if ( appended < 0 )
  {
    WdLogSingleEntry1(2LL, appended);
    WdLogGlobalForLineNumber = 427;
    goto LABEL_11;
  }
  v14 = RtlAppendUnicodeToString(UnicodeString, a2);
  v8 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 438;
    goto LABEL_11;
  }
  return v8;
}
