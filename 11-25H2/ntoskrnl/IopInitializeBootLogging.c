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

void __fastcall IopInitializeBootLogging(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax
  PUNICODE_STRING v6; // r8
  unsigned __int16 v7; // ax
  PUNICODE_STRING v8; // r8
  unsigned __int16 Length; // ax
  unsigned __int16 v10; // ax
  STRING SourceString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF

  v12 = 0LL;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  if ( !DestinationString )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    DestinationString = (PUNICODE_STRING)Pool2;
    if ( Pool2 )
    {
      ExInitializeResourceLite((PERESOURCE)(Pool2 + 64));
      ExAcquireResourceExclusiveLite((PERESOURCE)&DestinationString[4], 1u);
      v3 = *(_QWORD *)(a1 + 16);
      v4 = -1LL;
      if ( (int)RtlFindMessage(*(_QWORD *)(v3 + 48), 11, 0, 181, (__int64)&v12) >= 0 )
      {
        v5 = -1LL;
        SourceString.Buffer = (char *)(v12 + 4);
        do
          ++v5;
        while ( *(_BYTE *)(v12 + 4 + v5) );
        SourceString.Length = v5;
        SourceString.MaximumLength = v5 + 1;
        RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 1u);
        v6 = DestinationString;
        if ( DestinationString->Length > 4u )
        {
          v7 = DestinationString->Length - 4;
          DestinationString->Length = v7;
          v6->Buffer[(unsigned __int64)v7 >> 1] = 0;
        }
      }
      if ( (int)RtlFindMessage(*(_QWORD *)(v3 + 48), 11, 0, 182, (__int64)&v12) < 0 )
      {
        v8 = DestinationString;
      }
      else
      {
        SourceString.Buffer = (char *)(v12 + 4);
        do
          ++v4;
        while ( *(_BYTE *)(v12 + 4 + v4) );
        SourceString.Length = v4;
        SourceString.MaximumLength = v4 + 1;
        RtlAnsiStringToUnicodeString(DestinationString + 1, &SourceString, 1u);
        v8 = DestinationString;
        Length = DestinationString[1].Length;
        if ( Length > 4u )
        {
          v10 = Length - 4;
          DestinationString[1].Length = v10;
          v8[1].Buffer[(unsigned __int64)v10 >> 1] = 0;
        }
      }
      RtlCreateUnicodeStringFromAsciiz(v8 + 3);
      MmEnumerateSystemImages((__int64)IopBootLogDriver, 0LL);
      ExReleaseResourceLite((PERESOURCE)&DestinationString[4]);
    }
  }
}
