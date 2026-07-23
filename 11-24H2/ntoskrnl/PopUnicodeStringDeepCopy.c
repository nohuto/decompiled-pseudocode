/*
 * XREFs of PopUnicodeStringDeepCopy @ 0x140A473D8
 * Callers:
 *     PoGetRequester @ 0x1404E12D0 (PoGetRequester.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A18BD4 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1403D20F0 (RtlUnicodeStringCopy.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall PopUnicodeStringDeepCopy(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        __int64 a3,
        ULONG a4)
{
  unsigned int v5; // ebp
  unsigned int v6; // ecx
  PVOID *p_Buffer; // rbx
  wchar_t **v9; // r15
  __int64 Pool2; // r12
  wchar_t **v11; // r14
  NTSTATUS result; // eax

  v5 = 0xFFFF;
  v6 = SourceString->Length + 2;
  p_Buffer = (PVOID *)&DestinationString->Buffer;
  if ( v6 > 0xFFFF )
  {
    if ( *p_Buffer )
    {
      v11 = &DestinationString->Buffer;
      goto LABEL_8;
    }
    goto LABEL_3;
  }
  v5 = SourceString->Length + 2;
  if ( !*p_Buffer )
  {
LABEL_3:
    v9 = &DestinationString->Buffer;
    goto LABEL_4;
  }
  v11 = &DestinationString->Buffer;
  if ( DestinationString->MaximumLength >= v6 )
    goto LABEL_8;
  v9 = &DestinationString->Buffer;
LABEL_4:
  Pool2 = ExAllocatePool2(0x100uLL, v5, a4);
  v11 = &DestinationString->Buffer;
  if ( Pool2 )
  {
    if ( *p_Buffer )
      ExFreePoolWithTag(*p_Buffer, 0);
    *p_Buffer = (PVOID)Pool2;
    v11 = v9;
    DestinationString->Length = 0;
    DestinationString->MaximumLength = v5;
  }
LABEL_8:
  result = RtlUnicodeStringCopy(DestinationString, SourceString);
  if ( result >= 0 )
    (*v11)[(unsigned __int64)DestinationString->Length >> 1] = 0;
  return result;
}
