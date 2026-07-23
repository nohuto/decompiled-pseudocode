/*
 * XREFs of AslpPathWildcardAllocMatchNode @ 0x14080B8D0
 * Callers:
 *     AslPathWildcardFindFirst @ 0x14080A7E4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x14080ADDC (AslPathWildcardFindNext.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1403D20F0 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCatString @ 0x1404105C0 (RtlUnicodeStringCatString.c)
 *     RtlUShortAdd @ 0x140463CC0 (RtlUShortAdd.c)
 *     RtlUnicodeStringCbCatStringN @ 0x140697A48 (RtlUnicodeStringCbCatStringN.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     AslpPathWildcardFreeMatchNode @ 0x14080BBC8 (AslpPathWildcardFreeMatchNode.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpPathWildcardAllocMatchNode(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        _WORD *a3,
        int a4,
        NTSTRSAFE_PCWSTR pszSrc,
        USHORT a6)
{
  NTSTATUS v8; // ebx
  const char *v9; // r9
  int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdx
  wchar_t *v13; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  USHORT pusResult; // [rsp+90h] [rbp+20h] BYREF

  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = 0LL;
  DestinationString[1].Buffer = 0LL;
  while ( 1 )
  {
    *(_QWORD *)&DestinationString[1].Length = a3;
    if ( !*a3 )
      break;
    ++a3;
  }
  *(_QWORD *)&DestinationString[1].Length = a3 + 1;
  if ( !a3[1] )
  {
    v8 = a4 != 0 ? -1073741638 : -1073741197;
LABEL_26:
    AslpPathWildcardFreeMatchNode(DestinationString);
    return (unsigned int)v8;
  }
  if ( !a4 )
  {
    v8 = -1073741565;
    goto LABEL_26;
  }
  pusResult = SourceString->Length;
  v8 = RtlUShortAdd(pusResult, a6, &pusResult);
  if ( v8 < 0 )
  {
    v9 = "RtlUShortAdd failed [%x]";
    v10 = 2886;
LABEL_25:
    AslLogCallPrintf(1, (unsigned int)"AslpPathWildcardAllocMatchNode", v10, (_DWORD)v9);
    goto LABEL_26;
  }
  v8 = RtlUShortAdd(pusResult, 4u, &pusResult);
  if ( v8 < 0 )
  {
    v9 = "RtlUShortAdd failed [%x]";
    v10 = 2892;
    goto LABEL_25;
  }
  v12 = pusResult;
  DestinationString->MaximumLength = pusResult;
  DestinationString->Length = 0;
  v13 = (wchar_t *)AslAlloc(v11, v12);
  DestinationString->Buffer = v13;
  if ( !v13 )
  {
    v8 = -1073741801;
    goto LABEL_26;
  }
  v8 = RtlUnicodeStringCopy(DestinationString, SourceString);
  if ( v8 < 0 )
  {
    v9 = "RtlUnicodeStringCopy failed [%x]";
    v10 = 2907;
    goto LABEL_25;
  }
  if ( DestinationString->Buffer[((unsigned __int64)DestinationString->Length >> 1) - 1] != 92 )
  {
    v8 = RtlUnicodeStringCatString(DestinationString, L"\\");
    if ( v8 < 0 )
    {
      v9 = "RtlUnicodeStringCatString failed [%x]";
      v10 = 2923;
      goto LABEL_25;
    }
  }
  if ( pszSrc )
  {
    if ( a6 )
    {
      v8 = RtlUnicodeStringCbCatStringN(DestinationString, pszSrc, a6);
      if ( v8 < 0 )
      {
        v9 = "RtlUnicodeStringCbCatStringN failed [%x]";
        v10 = 2931;
        goto LABEL_25;
      }
    }
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenFile((PHANDLE)&DestinationString[1].Buffer, 0x100001u, &ObjectAttributes, &IoStatusBlock, 1u, 0x21u);
  if ( v8 < 0 )
  {
    v9 = "Failed to open dir [%x]";
    v10 = 2945;
    goto LABEL_25;
  }
  return (unsigned int)v8;
}
