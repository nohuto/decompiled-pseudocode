/*
 * XREFs of PiGetDefaultMessageString @ 0x1409B8860
 * Callers:
 *     PiNormalizeDeviceText @ 0x1409B8420 (PiNormalizeDeviceText.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlInitUTF8String @ 0x14045BB80 (RtlInitUTF8String.c)
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlUTF8StringToUnicodeString @ 0x140787260 (RtlUTF8StringToUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B6410 (IopGetDriverNameFromKeyNode.c)
 *     RtlFindMessage @ 0x1409B98E0 (RtlFindMessage.c)
 *     IopReferenceDriverObjectByName @ 0x1409BA838 (IopReferenceDriverObjectByName.c)
 *     RtlCreateUnicodeString @ 0x1409D2A00 (RtlCreateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

__int64 __fastcall PiGetDefaultMessageString(HANDLE KeyHandle, ULONG MessageId, _QWORD *a3)
{
  void *v6; // rsi
  NTSTATUS DriverNameFromKeyNode; // ebx
  __int64 v8; // rax
  wchar_t *Buffer; // rdi
  WORD Flags; // ax
  BYTE *Text; // rdx
  NTSTATUS v13; // eax
  unsigned __int16 Length; // ax
  size_t v15; // rbx
  _WORD *Pool2; // rax
  _WORD *v17; // r14
  UNICODE_STRING v18; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  STRING SourceString; // [rsp+50h] [rbp-10h] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+A8h] [rbp+48h] BYREF

  MessageEntry = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  v18 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v18, 0LL);
  v6 = 0LL;
  DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &DestinationString);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_4;
  v8 = IopReferenceDriverObjectByName(&DestinationString);
  v6 = (void *)v8;
  if ( !v8 )
  {
    DriverNameFromKeyNode = -1073741823;
    goto LABEL_4;
  }
  DriverNameFromKeyNode = RtlFindMessage(*(PVOID *)(v8 + 24), 0xBu, 0, MessageId, &MessageEntry);
  if ( DriverNameFromKeyNode < 0 )
  {
LABEL_4:
    Buffer = v18.Buffer;
    goto LABEL_5;
  }
  Flags = MessageEntry->Flags;
  Text = MessageEntry->Text;
  if ( (Flags & 1) != 0 )
  {
    if ( !RtlCreateUnicodeString(&v18, (PCWSTR)Text) )
    {
      DriverNameFromKeyNode = -1073741670;
      goto LABEL_4;
    }
  }
  else
  {
    if ( (Flags & 2) != 0 )
    {
      SourceString = 0LL;
      RtlInitUTF8String(&SourceString, (PCSZ)Text);
      v13 = RtlUTF8StringToUnicodeString(&v18, &SourceString, 1u);
    }
    else
    {
      RtlInitAnsiString(&SourceString, (PCSZ)Text);
      v13 = RtlAnsiStringToUnicodeString(&v18, &SourceString, 1u);
    }
    DriverNameFromKeyNode = v13;
    if ( v13 < 0 )
      goto LABEL_4;
  }
  Length = v18.Length;
  Buffer = v18.Buffer;
  if ( v18.Length >= 4u && *(wchar_t *)((char *)v18.Buffer + v18.Length - 4) == 13 )
  {
    *(wchar_t *)((char *)v18.Buffer + v18.Length - 4) = 0;
    Length -= 4;
  }
  v15 = Length;
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, Length + 2LL, 0x20207050u);
  v17 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, Buffer, v15);
    *a3 = v17;
    v17[v15 >> 1] = 0;
    DriverNameFromKeyNode = 0;
  }
  else
  {
    DriverNameFromKeyNode = -1073741670;
  }
LABEL_5:
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    DestinationString = 0LL;
  }
  if ( Buffer )
    ExFreePool(Buffer);
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)DriverNameFromKeyNode;
}
