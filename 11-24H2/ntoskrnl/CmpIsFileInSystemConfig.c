/*
 * XREFs of CmpIsFileInSystemConfig @ 0x1407E2160
 * Callers:
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x140AE7164 (CmpStartRMLog.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x1403DA240 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x1404105C0 (RtlUnicodeStringCatString.c)
 *     RtlUShortAdd @ 0x140463CC0 (RtlUShortAdd.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateFile @ 0x1406A7E50 (ZwCreateFile.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     CmpQueryNameString @ 0x14096C1C4 (CmpQueryNameString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpIsFileInSystemConfig(PCUNICODE_STRING String2, BOOLEAN *a2)
{
  unsigned __int64 v4; // rdi
  NTSTATUS v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 Length; // cx
  wchar_t *Buffer; // rsi
  UNICODE_STRING v10; // xmm1
  __m128i v11; // xmm0
  UNICODE_STRING SourceString; // [rsp+60h] [rbp-39h] BYREF
  USHORT pusResult[8]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v15[2]; // [rsp+80h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+108h] [rbp+6Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *a2 = 0;
  v15[1] = L"\\SystemRoot\\System32\\Config\\";
  FileHandle = 0LL;
  v4 = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  memset(pusResult, 0, sizeof(pusResult));
  v15[0] = 3801144LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwCreateFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 7u, 1u, 1u, 0LL, 0);
  if ( v5 < 0 )
    goto LABEL_20;
  v5 = CmpQueryNameString(FileHandle, &SourceString, v6, v7);
  if ( v5 < 0 || (Length = SourceString.Length) == 0 )
  {
    Buffer = SourceString.Buffer;
    goto LABEL_16;
  }
  Buffer = SourceString.Buffer;
  if ( SourceString.Buffer[((unsigned __int64)SourceString.Length >> 1) - 1] == 92 )
  {
LABEL_11:
    if ( String2->Length > Length )
      *a2 = RtlPrefixUnicodeString(&SourceString, String2, 1u);
    else
      *a2 = 0;
    goto LABEL_16;
  }
  pusResult[0] = 0;
  v5 = RtlUShortAdd(SourceString.MaximumLength, 2u, &pusResult[1]);
  if ( v5 < 0 )
  {
LABEL_13:
    v4 = *(_QWORD *)&pusResult[4];
    goto LABEL_16;
  }
  *(_QWORD *)&pusResult[4] = ExAllocatePool2(0x100uLL, pusResult[1], 0x67727453u);
  v4 = *(_QWORD *)&pusResult[4];
  if ( *(_QWORD *)&pusResult[4] )
  {
    v5 = RtlUnicodeStringCat((PUNICODE_STRING)pusResult, &SourceString);
    if ( v5 >= 0 )
    {
      v5 = RtlUnicodeStringCatString((PUNICODE_STRING)pusResult, L"\\");
      if ( v5 >= 0 )
      {
        RtlFreeAnsiString(&SourceString);
        v10 = *(UNICODE_STRING *)pusResult;
        v11 = *(__m128i *)pusResult;
        *(_OWORD *)pusResult = 0LL;
        Buffer = (wchar_t *)_mm_srli_si128(v11, 8).m128i_u64[0];
        SourceString = v10;
        v4 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
        Length = _mm_cvtsi128_si32((__m128i)v10);
        goto LABEL_11;
      }
    }
    goto LABEL_13;
  }
  v5 = -1073741801;
LABEL_16:
  if ( Buffer )
    RtlFreeAnsiString(&SourceString);
  if ( v4 )
    RtlFreeAnsiString((PUNICODE_STRING)pusResult);
LABEL_20:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v5;
}
