/*
 * XREFs of KiLogSingleDpcSoftTimeoutEvent @ 0x1405B1C40
 * Callers:
 *     <none>
 * Callees:
 *     RtlPcToFileName @ 0x1403F9FF0 (RtlPcToFileName.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     EtwTraceSingleDpcSoftTimeout @ 0x14064C628 (EtwTraceSingleDpcSoftTimeout.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KiLogSingleDpcSoftTimeoutEvent(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rax
  int v8; // ebp
  unsigned __int64 v9; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-138h] BYREF
  char v12; // [rsp+40h] [rbp-128h] BYREF

  v4 = *(_QWORD *)(a2 + 14544);
  v8 = *(_DWORD *)(v4 + 72);
  v9 = *(_QWORD *)(v4 + 64);
  *(_QWORD *)&DestinationString.Length = 0LL;
  *(_DWORD *)(v4 + 72) = 0;
  DestinationString.MaximumLength = 256;
  DestinationString.Buffer = (wchar_t *)&v12;
  if ( (int)RtlPcToFileName(v9, &DestinationString) < 0 )
    RtlInitUnicodeString(&DestinationString, L"unknown_module");
  return EtwTraceSingleDpcSoftTimeout(a3, a4, a2, v8, *(_DWORD *)(a2 + 14540), (__int64)&DestinationString);
}
