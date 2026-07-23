/*
 * XREFs of IopLoadCrashdumpDriver @ 0x1404D1D14
 * Callers:
 *     IopInitializeCrashDump @ 0x14070EAE0 (IopInitializeCrashDump.c)
 *     IoGetDumpStack @ 0x140ABB79C (IoGetDumpStack.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     IopGetPhysicalMemoryBlock @ 0x140591760 (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 */

__int64 IopLoadCrashdumpDriver()
{
  int SystemImage; // eax
  int v1; // ecx
  __int64 result; // rax
  PVOID v3; // rbx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING *v5; // [rsp+50h] [rbp+7h] BYREF
  __int64 (__fastcall *v7)(int, int, int, int, __int64, __int64); // [rsp+60h] [rbp+17h]
  __int64 (__fastcall *v8)(ULONG_PTR); // [rsp+68h] [rbp+1Fh]
  __int64 (__fastcall *v9)(int, int, int, int, __int64); // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  int v11; // [rsp+80h] [rbp+37h]
  int v12; // [rsp+84h] [rbp+3Bh]
  UNICODE_STRING *v13; // [rsp+88h] [rbp+3Fh]
  PVOID BaseOfImage; // [rsp+B0h] [rbp+67h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+C0h] [rbp+77h] BYREF

  v16 = 0LL;
  v12 = 0;
  BaseOfImage = 0LL;
  DestinationString = 0LL;
  if ( CrashdmpImageEntry )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Drivers\\crashdmp.sys");
  SystemImage = MmLoadSystemImageEx((unsigned int)&DestinationString, 0, 0, 0, 0, (__int64)&v16, (__int64)&BaseOfImage);
  v1 = 0;
  if ( SystemImage != -1073741554 )
    v1 = SystemImage;
  if ( v1 < 0 )
    return (unsigned int)v1;
  v3 = BaseOfImage;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  if ( !OutHeaders )
    return 3221225473LL;
  v5 = &IoArcBootDeviceName;
  v13 = &PoHiberFileRoot;
  if ( !IopGetPhysicalMemoryBlock() )
    return 3221225626LL;
  v7 = IopLoadCrashdmpImage;
  v8 = MmUnloadSystemImage;
  v10 = IopReportBugCheckProgress;
  v9 = HvlGetEncryptedData;
  if ( VslVsmEnabled )
    v11 = ((HvlpFlags & 2) != 0) + 1;
  else
    v11 = 0;
  CrashdmpCallTable = 1;
  qword_140E66088 = (__int64)IopWheaSelLogCheckPoint;
  dword_140E66014 = 13;
  qword_140E66080 = (__int64)IopWheaSelLogError;
  result = guard_dispatch_icall_no_overrides(&v5, &CrashdmpCallTable);
  if ( (int)result >= 0 )
  {
    CrashdmpImageEntry = v16;
    CrashdmpImageBase = v3;
    return 0LL;
  }
  return result;
}
