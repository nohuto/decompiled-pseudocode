/*
 * XREFs of AslStringAnsiToUnicode @ 0x18009E0C0
 * Callers:
 *     AslpFileGet16BitDescription @ 0x18009FDD4 (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x18009FEB8 (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x1800A04B0 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x1800A0CAC (AslpFileGetExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 */

__int64 __fastcall AslStringAnsiToUnicode(PWSTR *a1, const char *a2)
{
  ULONG v3; // eax
  USHORT v4; // di
  NTSTATUS v5; // ebx
  struct _UNICODE_STRING v7; // [rsp+30h] [rbp-20h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  DestinationString = 0LL;
  RtlInitString(&DestinationString, a2);
  v3 = RtlxAnsiStringToUnicodeSize(&DestinationString);
  v4 = v3;
  *a1 = 0LL;
  v7 = 0LL;
  if ( v3 <= 0xFFFF )
  {
    v7.Buffer = (PWSTR)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v3);
    if ( !v7.Buffer )
    {
      v5 = -1073741801;
      AslLogCallPrintf(1LL);
      goto LABEL_8;
    }
    v7.MaximumLength = v4;
    v7.Length = 0;
    v5 = RtlAnsiStringToUnicodeString(&v7, &DestinationString, 0);
    if ( v5 >= 0 )
    {
      v5 = 0;
      *a1 = v7.Buffer;
      v7.Buffer = 0LL;
      goto LABEL_8;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  AslLogCallPrintf(1LL);
LABEL_8:
  AslFree(NtCurrentPeb()->ProcessHeap, v7.Buffer);
  return (unsigned int)v5;
}
