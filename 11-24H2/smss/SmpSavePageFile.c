/*
 * XREFs of SmpSavePageFile @ 0x140012E7C
 * Callers:
 *     SmpCheckForCrashDump @ 0x1400119EC (SmpCheckForCrashDump.c)
 *     SmpSaveOldPageFile @ 0x140012C9C (SmpSaveOldPageFile.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14000E4D4 (RtlStringCbCopyW.c)
 *     SmpCopyFile @ 0x140011D40 (SmpCopyFile.c)
 *     SmpQuerySameVolume @ 0x1400129A0 (SmpQuerySameVolume.c)
 *     SmpSetDumpSecurityAndAttributes @ 0x14001300C (SmpSetDumpSecurityAndAttributes.c)
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpSavePageFile(HANDLE FileHandle, struct _UNICODE_STRING *a2, union _LARGE_INTEGER a3, char a4)
{
  union _LARGE_INTEGER v8; // r8
  NTSTATUS result; // eax
  int Length; // r11d
  const wchar_t *Buffer; // r8
  int v12; // r11d
  bool v13; // [rsp+30h] [rbp-D0h] BYREF
  union _LARGE_INTEGER FileInformation; // [rsp+38h] [rbp-C8h] BYREF
  union _LARGE_INTEGER v15; // [rsp+40h] [rbp-C0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-B8h] BYREF
  struct _IO_STATUS_BLOCK v17; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v18[4]; // [rsp+70h] [rbp-90h] BYREF
  int v19; // [rsp+74h] [rbp-8Ch]
  __int64 v20; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+80h] [rbp-80h]
  wchar_t pszDest[246]; // [rsp+84h] [rbp-7Ch] BYREF

  v19 = 0;
  memset_0(v18, 0, 0x1FCuLL);
  v17 = 0LL;
  v13 = 0;
  if ( SmpForceCopyDumpFile )
  {
    v8 = a3;
    return SmpCopyFile(FileHandle, a2, v8);
  }
  if ( !a3.QuadPart
    || (FileInformation = a3,
        IoStatusBlock = 0LL,
        result = NtSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation),
        result >= 0)
    && (v15 = a3,
        result = NtSetInformationFile(FileHandle, &IoStatusBlock, &v15, 8u, FileAllocationInformation),
        result >= 0) )
  {
    if ( (a4 & 1) == 0 )
    {
      result = SmpQuerySameVolume(FileHandle, a2, &v13);
      if ( result < 0 )
        return result;
      if ( !v13 )
      {
        v8.QuadPart = 0LL;
        return SmpCopyFile(FileHandle, a2, v8);
      }
    }
    Length = a2->Length;
    Buffer = a2->Buffer;
    v20 = 0LL;
    v21 = Length;
    v18[0] = 1;
    result = RtlStringCbCopyW(pszDest, 0x1ECuLL, Buffer);
    if ( result >= 0 )
    {
      result = NtSetInformationFile(FileHandle, &v17, v18, v12 + 24, FileRenameInformation);
      if ( result >= 0 )
        return SmpSetDumpSecurityAndAttributes(FileHandle);
    }
  }
  return result;
}
