/*
 * XREFs of SmpPagefileInitialize @ 0x140011310
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x14000F110 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpQueryDedicatedDumpSetting @ 0x1400125A0 (SmpQueryDedicatedDumpSetting.c)
 *     SmpQueryDwordFromRegistry @ 0x14001262C (SmpQueryDwordFromRegistry.c)
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 SmpPagefileInitialize()
{
  WCHAR *NtSystemRoot; // rax
  WCHAR v1; // ax
  NTSTATUS v2; // ebx
  int v3; // edx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // ecx
  char DedicatedDumpSetting; // al
  bool v9; // bl
  __int64 v10; // rcx
  __int64 v11; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D8h] BYREF
  const wchar_t *v13; // [rsp+38h] [rbp-D0h]
  _QWORD v14[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  __int128 SystemInformation; // [rsp+90h] [rbp-78h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-68h]
  _OSVERSIONINFOW VersionInformation; // [rsp+A8h] [rbp-60h] BYREF
  char v20; // [rsp+1C2h] [rbp+BAh]

  v14[0] = 11141288LL;
  v14[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  v15[0] = 8388734LL;
  v15[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl";
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  *(&ObjectAttributes.Length + 1) = 0;
  v18 = 0LL;
  qword_140032BF8 = (__int64)&SmpPagingFileDescriptorList;
  SmpPagingFileDescriptorList = &SmpPagingFileDescriptorList;
  qword_140032BD8 = (__int64)&SmpVolumeDescriptorList;
  SmpVolumeDescriptorList = (__int64)&SmpVolumeDescriptorList;
  SystemInformation = 0LL;
  NtQuerySystemInformation(SystemPrefetcherInformation|0x80, &SystemInformation, 0x18u, 0LL);
  SmpMemorySize = SystemInformation;
  SmpHighestPhysicalAddress = v18;
  NtSystemRoot = (WCHAR *)RtlGetNtSystemRoot();
  v1 = RtlUpcaseUnicodeChar(*NtSystemRoot);
  ObjectAttributes.RootDirectory = 0LL;
  SmpOsVolumeLetter = v1;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
  ObjectAttributes.Length = 48;
  v2 = NtOpenKey(&SmpMmKey, 0x2001Fu, &ObjectAttributes);
  if ( v2 < 0 )
  {
    v3 = 583;
LABEL_3:
    SmpLogFailure((__int64)"SmpPagefileInitialize", v3, v2);
    return (unsigned int)v2;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = NtOpenKey(&SmpCrashDumpKey, 0x2001Fu, &ObjectAttributes);
  if ( v2 < 0 )
  {
    v3 = 600;
    goto LABEL_3;
  }
  LODWORD(v11) = 0;
  v12 = 2228256LL;
  v13 = L"CrashDumpEnabled";
  v6 = SmpQueryDwordFromRegistry(v5, &v12, 4LL, &v11);
  v7 = v11;
  if ( v6 < 0 )
    v7 = 4;
  SmpDumpType = v7;
  DedicatedDumpSetting = SmpQueryDedicatedDumpSetting();
  LODWORD(v11) = 0;
  SmpUseDedicatedDumpFile = DedicatedDumpSetting;
  v12 = 1572886LL;
  v13 = L"FilterPages";
  v9 = 0;
  if ( (int)SmpQueryDwordFromRegistry(v10, &v12, 0LL, &v11) >= 0 )
    v9 = (_DWORD)v11 != 0;
  SmpUseFilterPagesDumpFile = v9;
  SmpForceCopyDumpFile = (SmpSystemWriteConstraintInfo & 4) != 0;
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  if ( RtlGetVersion(&VersionInformation) >= 0 && v20 == 1 )
    SmpClientSku = 1;
  return 0LL;
}
