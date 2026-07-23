/*
 * XREFs of IopInitializeBootLogging @ 0x140706328
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExInitializeResourceLite @ 0x1402D6540 (ExInitializeResourceLite.c)
 *     MmEnumerateSystemImages @ 0x1404F8690 (MmEnumerateSystemImages.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14076F0B0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 *     RtlFindMessage @ 0x1409AE2A0 (RtlFindMessage.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void __fastcall IopInitializeBootLogging(__int64 a1, __int64 a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  PUNICODE_STRING v8; // r8
  unsigned __int16 v9; // ax
  PUNICODE_STRING v10; // r8
  unsigned __int16 Length; // ax
  unsigned __int16 v12; // ax
  ANSI_STRING SourceString; // [rsp+30h] [rbp-10h] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+70h] [rbp+30h] BYREF

  MessageEntry = 0LL;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  if ( !DestinationString )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    DestinationString = (PUNICODE_STRING)Pool2;
    if ( Pool2 )
    {
      ExInitializeResourceLite((PERESOURCE)(Pool2 + 64));
      ExAcquireResourceExclusiveLite((PERESOURCE)&DestinationString[4], 1u);
      v5 = *(_QWORD *)(a1 + 16);
      v6 = -1LL;
      if ( RtlFindMessage(*(PVOID *)(v5 + 48), 0xBu, 0, 0xB5u, &MessageEntry) >= 0 )
      {
        v7 = -1LL;
        SourceString.Buffer = (char *)MessageEntry->Text;
        do
          ++v7;
        while ( MessageEntry->Text[v7] );
        SourceString.Length = v7;
        SourceString.MaximumLength = v7 + 1;
        RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 1u);
        v8 = DestinationString;
        if ( DestinationString->Length > 4u )
        {
          v9 = DestinationString->Length - 4;
          DestinationString->Length = v9;
          v8->Buffer[(unsigned __int64)v9 >> 1] = 0;
        }
      }
      if ( RtlFindMessage(*(PVOID *)(v5 + 48), 0xBu, 0, 0xB6u, &MessageEntry) < 0 )
      {
        v10 = DestinationString;
      }
      else
      {
        SourceString.Buffer = (char *)MessageEntry->Text;
        do
          ++v6;
        while ( MessageEntry->Text[v6] );
        SourceString.Length = v6;
        SourceString.MaximumLength = v6 + 1;
        RtlAnsiStringToUnicodeString(DestinationString + 1, &SourceString, 1u);
        v10 = DestinationString;
        Length = DestinationString[1].Length;
        if ( Length > 4u )
        {
          v12 = Length - 4;
          DestinationString[1].Length = v12;
          v10[1].Buffer[(unsigned __int64)v12 >> 1] = 0;
        }
      }
      RtlCreateUnicodeStringFromAsciiz(v10 + 3, (PCSTR)(a2 + 1));
      MmEnumerateSystemImages((__int64)IopBootLogDriver, 0LL);
      ExReleaseResourceLite((PERESOURCE)&DestinationString[4]);
    }
  }
}
