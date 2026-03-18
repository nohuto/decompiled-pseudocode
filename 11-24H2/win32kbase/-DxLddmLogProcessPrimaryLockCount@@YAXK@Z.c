/*
 * XREFs of ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1401CCD44
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x140015438 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

void __fastcall DxLddmLogProcessPrimaryLockCount(ULONG a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // r14d
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  PWSTR Buffer; // rsi
  __int64 v10; // rbx
  unsigned int v11; // edx
  char *ErrorLogEntry; // rax
  char *v13; // rdi
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-40h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _WORD Src[12]; // [rsp+50h] [rbp-20h] BYREF

  *(_QWORD *)&String.Length = 1441792LL;
  String.Buffer = Src;
  if ( RtlIntegerToUnicodeString(a1, 0xAu, &String) >= 0 )
  {
    v4 = -1LL;
    v5 = -1LL;
    do
      ++v5;
    while ( Src[v5] );
    v6 = 2 * v5 + 2;
    UnicodeString = 0LL;
    DestinationString = 0LL;
    CurrentProcess = PsGetCurrentProcess(Src, v1, v2, v3);
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
    RtlInitAnsiString(&DestinationString, ProcessImageFileName);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
    {
      Buffer = UnicodeString.Buffer;
      do
        ++v4;
      while ( UnicodeString.Buffer[v4] );
      v10 = (unsigned int)(2 * v4 + 2);
      v11 = v6 + v10 + 40;
      if ( v11 <= 0xF0 )
      {
        ErrorLogEntry = (char *)IoAllocateErrorLogEntry(gpWin32kDriverObject, v11);
        v13 = ErrorLogEntry;
        if ( ErrorLogEntry )
        {
          *((_DWORD *)ErrorLogEntry + 3) = 1073742069;
          *((_DWORD *)ErrorLogEntry + 1) = 2621442;
          memmove(ErrorLogEntry + 40, Buffer, (unsigned int)v10);
          memmove(&v13[v10 + 40], Src, v6);
          IoWriteErrorLogEntry(v13);
        }
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
  }
}
