/*
 * XREFs of PopCloneUnicodeString @ 0x140A88654
 * Callers:
 *     PopQueryMostRecentWakeSourceInfo @ 0x14074F810 (PopQueryMostRecentWakeSourceInfo.c)
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x140763B64 (PopDirectedDripsDiagCreateDeviceDescription.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1403D20F0 (RtlUnicodeStringCopy.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopCloneUnicodeString(PCUNICODE_STRING SourceString, PUNICODE_STRING DestinationString)
{
  unsigned int v2; // ebx
  wchar_t *Buffer; // r8
  unsigned int Length; // eax
  unsigned int v8; // eax
  unsigned int v9; // r14d
  wchar_t *Pool2; // rax
  wchar_t *v11; // rbp
  NTSTATUS v12; // edi

  v2 = 0;
  *DestinationString = 0LL;
  Buffer = SourceString->Buffer;
  if ( Buffer )
  {
    Length = SourceString->Length;
    if ( Length >= 2 )
    {
      v8 = Length >> 1;
      v9 = 2 * v8 + 2;
      if ( !Buffer[v8 - 1] )
        v9 = 2 * v8;
      if ( v9 < 0xFFFF )
      {
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v9, 0x67696450u);
        v11 = Pool2;
        if ( Pool2 )
        {
          DestinationString->Buffer = Pool2;
          DestinationString->Length = 0;
          DestinationString->MaximumLength = v9;
          v12 = RtlUnicodeStringCopy(DestinationString, SourceString);
          if ( v12 < 0 )
          {
            ExFreePoolWithTag(v11, 0x67696450u);
            return (unsigned int)v12;
          }
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-2147483643;
      }
    }
  }
  return v2;
}
