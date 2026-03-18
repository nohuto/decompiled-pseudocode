/*
 * XREFs of PopUnicodeStringDeepCopy @ 0x140A4D10C
 * Callers:
 *     PoGetRequester @ 0x1404E911C (PoGetRequester.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A198D4 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1403DF480 (RtlUnicodeStringCopy.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall PopUnicodeStringDeepCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned __int16 v3; // bp
  unsigned int v4; // ecx
  PVOID *p_Buffer; // rbx
  wchar_t **v7; // r15
  __int64 Pool2; // r12
  wchar_t **v9; // r14
  NTSTATUS result; // eax

  v3 = -1;
  v4 = SourceString->Length + 2;
  p_Buffer = (PVOID *)&DestinationString->Buffer;
  if ( v4 > 0xFFFF )
  {
    if ( *p_Buffer )
    {
      v9 = &DestinationString->Buffer;
      goto LABEL_8;
    }
    goto LABEL_3;
  }
  v3 = SourceString->Length + 2;
  if ( !*p_Buffer )
  {
LABEL_3:
    v7 = &DestinationString->Buffer;
    goto LABEL_4;
  }
  v9 = &DestinationString->Buffer;
  if ( DestinationString->MaximumLength >= v4 )
    goto LABEL_8;
  v7 = &DestinationString->Buffer;
LABEL_4:
  Pool2 = ExAllocatePool2(0x100uLL);
  v9 = &DestinationString->Buffer;
  if ( Pool2 )
  {
    if ( *p_Buffer )
      ExFreePoolWithTag(*p_Buffer, 0);
    *p_Buffer = (PVOID)Pool2;
    v9 = v7;
    DestinationString->Length = 0;
    DestinationString->MaximumLength = v3;
  }
LABEL_8:
  result = RtlUnicodeStringCopy(DestinationString, SourceString);
  if ( result >= 0 )
    (*v9)[(unsigned __int64)DestinationString->Length >> 1] = 0;
  return result;
}
