/*
 * XREFs of IopLoadCrashdumpDriver @ 0x1404D88C4
 * Callers:
 *     IopInitializeCrashDump @ 0x140710F50 (IopInitializeCrashDump.c)
 *     IoGetDumpStack @ 0x140AC06BC (IoGetDumpStack.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14041E7E0 (RtlImageNtHeaderEx.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     IopGetPhysicalMemoryBlock @ 0x14059473C (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 */

__int64 IopLoadCrashdumpDriver()
{
  int SystemImage; // eax
  int v1; // ecx
  __int64 result; // rax
  void *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING *v7; // [rsp+50h] [rbp+7h] BYREF
  __int64 (__fastcall *v9)(int, int, int, int, __int64, __int64); // [rsp+60h] [rbp+17h]
  __int64 (__fastcall *v10)(ULONG_PTR); // [rsp+68h] [rbp+1Fh]
  __int64 (__fastcall *v11)(int, int, int, int, __int64); // [rsp+70h] [rbp+27h]
  __int64 v12; // [rsp+78h] [rbp+2Fh]
  int v13; // [rsp+80h] [rbp+37h]
  int v14; // [rsp+84h] [rbp+3Bh]
  UNICODE_STRING *v15; // [rsp+88h] [rbp+3Fh]
  void *v16; // [rsp+B0h] [rbp+67h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v18; // [rsp+C0h] [rbp+77h] BYREF

  v18 = 0LL;
  v14 = 0;
  v16 = 0LL;
  DestinationString = 0LL;
  if ( CrashdmpImageEntry )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Drivers\\crashdmp.sys");
  SystemImage = MmLoadSystemImageEx((unsigned int)&DestinationString, 0, 0, 0, 0, (__int64)&v18, (__int64)&v16);
  v1 = 0;
  if ( SystemImage != -1073741554 )
    v1 = SystemImage;
  if ( v1 < 0 )
    return (unsigned int)v1;
  v3 = v16;
  v17 = 0LL;
  RtlImageNtHeaderEx(1, (unsigned __int64)v16, 0LL, &v17);
  if ( !v17 )
    return 3221225473LL;
  v7 = &IoArcBootDeviceName;
  v15 = &PoHiberFileRoot;
  if ( !IopGetPhysicalMemoryBlock() )
    return 3221225626LL;
  v9 = IopLoadCrashdmpImage;
  v10 = MmUnloadSystemImage;
  v12 = IopReportBugCheckProgress;
  v11 = HvlGetEncryptedData;
  if ( VslVsmEnabled )
    v13 = ((HvlpFlags & 2) != 0) + 1;
  else
    v13 = 0;
  CrashdmpCallTable = 1;
  qword_140E65F48 = (__int64)IopWheaSelLogCheckPoint;
  dword_140E65ED4 = 13;
  qword_140E65F40 = (__int64)IopWheaSelLogError;
  result = guard_dispatch_icall_no_overrides(&v7, &CrashdmpCallTable, v4, v5);
  if ( (int)result >= 0 )
  {
    CrashdmpImageEntry = v18;
    CrashdmpImageBase = v3;
    return 0LL;
  }
  return result;
}
