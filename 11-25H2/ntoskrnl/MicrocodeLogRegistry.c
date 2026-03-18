/*
 * XREFs of MicrocodeLogRegistry @ 0x140658518
 * Callers:
 *     PrExtLogToRegistry @ 0x1404DA1F8 (PrExtLogToRegistry.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PrpWriteLogsToRegistry @ 0x1404C1DC4 (PrpWriteLogsToRegistry.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 MicrocodeLogRegistry()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  NTSTATUS v2; // eax
  UNICODE_STRING v4; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  char v6; // [rsp+40h] [rbp-C0h] BYREF

  *(_QWORD *)&v4.Length = 0x1000000LL;
  v0 = 0;
  v4.Buffer = (wchar_t *)&v6;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\HARDWARE\\DESCRIPTION\\SYSTEM\\CENTRALPROCESSOR\\0");
  RtlCopyUnicodeString(&v4, &DestinationString);
  DestinationString = v4;
  v2 = PrpWriteLogsToRegistry(v1, &DestinationString);
  if ( v2 < 0 )
    return (unsigned int)v2;
  return v0;
}
