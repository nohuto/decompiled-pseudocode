/*
 * XREFs of DpiAppendStringToString @ 0x1402499F0
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1403D9970 (DpiPdoHandleQueryId.c)
 *     DpiGdoSetupGdiParameters @ 0x1403F1F5C (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x140054770 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DpiAppendStringToString(PCWSTR Source, unsigned __int16 *a2, PUNICODE_STRING UnicodeString)
{
  int v6; // eax
  unsigned __int64 v7; // r11
  unsigned int v8; // ebx
  int v9; // eax
  unsigned __int16 v10; // bx
  wchar_t *Pool2; // rax
  NTSTATUS appended; // eax
  NTSTATUS v13; // eax
  unsigned __int64 v15[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0LL;
  v15[0] = 0LL;
  v6 = RtlStringCbLengthW(Source, 0x208uLL, &v16);
  v8 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 380;
LABEL_11:
    RtlFreeUnicodeString(UnicodeString);
    return v8;
  }
  v9 = RtlStringCbLengthW(a2, v7, v15);
  v8 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(2LL, v9);
    WdLogGlobalForLineNumber = 391;
    goto LABEL_11;
  }
  v10 = LOWORD(v15[0]) + v16 + 2;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v10, 1953656900LL);
  UnicodeString->Buffer = Pool2;
  if ( !Pool2 )
  {
    v8 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 408;
    goto LABEL_11;
  }
  UnicodeString->Length = 0;
  UnicodeString->MaximumLength = v10;
  memset(Pool2, 0, v10);
  appended = RtlAppendUnicodeToString(UnicodeString, Source);
  v8 = appended;
  if ( appended < 0 )
  {
    WdLogSingleEntry1(2LL, appended);
    WdLogGlobalForLineNumber = 427;
    goto LABEL_11;
  }
  v13 = RtlAppendUnicodeToString(UnicodeString, a2);
  v8 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(2LL, v13);
    WdLogGlobalForLineNumber = 438;
    goto LABEL_11;
  }
  return v8;
}
