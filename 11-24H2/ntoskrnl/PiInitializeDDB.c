/*
 * XREFs of PiInitializeDDB @ 0x1409B8DD4
 * Callers:
 *     PiLookupInDDB @ 0x1409B8CAC (PiLookupInDDB.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1406A78B0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1406A78F0 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1406A7CF0 (ZwCreateSection.c)
 *     PnpLogEvent @ 0x140720FF0 (PnpLogEvent.c)
 *     SdbInitDatabaseInMemory @ 0x140944DCC (SdbInitDatabaseInMemory.c)
 */

__int64 __fastcall PiInitializeDDB(PCWSTR SourceString, char a2, __int64 a3)
{
  NTSTATUS v5; // ebx
  int v7; // eax
  const WCHAR *v8; // rdx
  __int64 inited; // rax
  HANDLE SectionHandle; // [rsp+50h] [rbp-39h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-31h] BYREF
  UNICODE_STRING v12; // [rsp+60h] [rbp-29h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp+1Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp+2Fh] BYREF
  PVOID BaseAddress; // [rsp+108h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_OWORD *)a3 = 0LL;
  ViewSize = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  FileHandle = 0LL;
  DestinationString = 0LL;
  SectionHandle = 0LL;
  IoStatusBlock = 0LL;
  BaseAddress = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( v5 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
    if ( v5 < 0 )
    {
      if ( (PiLoggedErrorEventsMask & 0x20) != 0 )
        goto LABEL_3;
      v7 = PiLoggedErrorEventsMask | 0x20;
      v8 = L"DATABASE SECTION FAILED";
      goto LABEL_16;
    }
    v5 = ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           0LL,
           0LL,
           &ViewSize,
           ViewShare,
           0,
           2u);
    if ( v5 >= 0 )
    {
      inited = SdbInitDatabaseInMemory((__int64)BaseAddress, ViewSize);
      if ( inited )
      {
        *(_QWORD *)a3 = inited;
        *(_QWORD *)(a3 + 24) = FileHandle;
        *(_QWORD *)(a3 + 16) = SectionHandle;
        *(_QWORD *)(a3 + 8) = BaseAddress;
        BaseAddress = 0LL;
        SectionHandle = 0LL;
        FileHandle = 0LL;
      }
      else
      {
        v5 = -1073741823;
        if ( (PiLoggedErrorEventsMask & 0x80u) == 0 )
        {
          v7 = PiLoggedErrorEventsMask | 0x80;
          v8 = L"INIT DATABASE FAILED";
          goto LABEL_16;
        }
      }
    }
    else if ( (PiLoggedErrorEventsMask & 0x40) == 0 )
    {
      v7 = PiLoggedErrorEventsMask | 0x40;
      v8 = L"DATABASE MAPPING FAILED";
      goto LABEL_16;
    }
  }
  else if ( !InitIsWinPEMode && !a2 && (PiLoggedErrorEventsMask & 0x10) == 0 )
  {
    v7 = PiLoggedErrorEventsMask | 0x10;
    v8 = L"DATABASE OPEN FAILED";
LABEL_16:
    PiLoggedErrorEventsMask = v7;
    v12 = 0LL;
    RtlInitUnicodeString(&v12, v8);
    PnpLogEvent((const void **)&v12, 0LL, -1073740947, 0LL, 0);
  }
LABEL_3:
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v5;
}
