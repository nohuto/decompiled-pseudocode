/*
 * XREFs of IoIsValidNameGraftingBuffer @ 0x140713360
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x1406A9AB0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x1406AA110 (ZwQuerySymbolicLinkObject.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall IoIsValidNameGraftingBuffer(PIRP Irp, PREPARSE_DATA_BUFFER ReparseBuffer)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Length; // r8d
  USHORT SubstituteNameLength; // ax
  WCHAR v6; // cx
  wchar_t *Pool2; // rax
  wchar_t *v9; // r14
  NTSTATUS v10; // ebx
  USHORT v11; // cx
  WCHAR v12; // dx
  __int16 v13; // ax
  HANDLE LinkHandle; // [rsp+28h] [rbp-39h] BYREF
  UNICODE_STRING LinkTarget; // [rsp+30h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-11h] BYREF
  WCHAR SourceString[16]; // [rsp+80h] [rbp+1Fh] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DestinationString = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length
    && Length < ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength
              + (unsigned int)ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength
              + 20 )
  {
    return 0;
  }
  SubstituteNameLength = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength;
  if ( SubstituteNameLength > 6u
    && ReparseBuffer->MountPointReparseBuffer.PathBuffer[0] == 92
    && *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 5) == 92 )
  {
    v6 = ReparseBuffer->SymbolicLinkReparseBuffer.PathBuffer[0];
    if ( v6 != 46 && v6 != 63 )
      return 0;
  }
  if ( SubstituteNameLength <= 0x10u )
  {
    if ( SubstituteNameLength <= 0xCu
      || ReparseBuffer->MountPointReparseBuffer.PathBuffer[0] != 92
      || *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 5) != 63
      || ReparseBuffer->SymbolicLinkReparseBuffer.PathBuffer[0] != 63
      || *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 7) != 92 )
    {
      goto LABEL_47;
    }
  }
  else
  {
    if ( ReparseBuffer->MountPointReparseBuffer.PathBuffer[0] != 92
      || *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 5) != 63
      || ReparseBuffer->SymbolicLinkReparseBuffer.PathBuffer[0] != 63
      || *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 7) != 92 )
    {
      goto LABEL_47;
    }
    if ( LOWORD(ReparseBuffer[1].ReparseTag) == 85
      && HIWORD(ReparseBuffer[1].ReparseTag) == 78
      && ReparseBuffer[1].ReparseDataLength == 67
      && ReparseBuffer[1].Reserved == 92 )
    {
      return 0;
    }
  }
  if ( HIWORD(ReparseBuffer[1].ReparseTag) == 58 )
  {
    *(_DWORD *)(&LinkTarget.MaximumLength + 1) = 0;
    *(&ObjectAttributes.Length + 1) = 0;
    *(_OWORD *)SourceString = *(_OWORD *)L"\\??\\C:";
    *(&ObjectAttributes.Attributes + 1) = 0;
    LinkHandle = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    DestinationString.Buffer[4] = ReparseBuffer[1].ReparseTag;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) >= 0 )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL, 0x208uLL, 0x20206F49u);
      v9 = Pool2;
      if ( !Pool2 )
      {
        ZwClose(LinkHandle);
        return 0;
      }
      LinkTarget.Buffer = Pool2;
      *(_DWORD *)&LinkTarget.Length = 34078720;
      v10 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
      ZwClose(LinkHandle);
      if ( v10 >= 0
        && *LinkTarget.Buffer == 92
        && LinkTarget.Buffer[1] == 68
        && LinkTarget.Buffer[2] == 101
        && LinkTarget.Buffer[3] == 118
        && LinkTarget.Buffer[4] == 105
        && LinkTarget.Buffer[5] == 99
        && LinkTarget.Buffer[6] == 101
        && LinkTarget.Buffer[7] == 92
        && LinkTarget.Buffer[8] == 76
        && LinkTarget.Buffer[9] == 97
        && LinkTarget.Buffer[10] == 110
        && LinkTarget.Buffer[14] == 82
        && LinkTarget.Buffer[15] == 101
        && LinkTarget.Buffer[16] == 100
        && LinkTarget.Buffer[17] == 105
        && LinkTarget.Buffer[18] == 114
        && LinkTarget.Buffer[23] == 114
        && LinkTarget.Buffer[24] == 92 )
      {
        ExFreePoolWithTag(v9, 0);
        return 0;
      }
      ExFreePoolWithTag(v9, 0);
    }
  }
LABEL_47:
  v11 = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength;
  if ( v11 < 0xCu )
    return 0;
  v12 = ReparseBuffer->MountPointReparseBuffer.PathBuffer[0];
  if ( v12 == 92
    && *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 5) == 63
    && ReparseBuffer->SymbolicLinkReparseBuffer.PathBuffer[0] == 63
    && *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 7) == 92
    && HIWORD(ReparseBuffer[1].ReparseTag) == 58 )
  {
    return 1;
  }
  if ( v11 != 96 && (v11 != 98 || ReparseBuffer[4].MountPointReparseBuffer.PathBuffer[0] != 92) )
    return 0;
  if ( v12 != 92 )
    return 0;
  v13 = *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 5);
  if ( v13 != 63 && v13 != 92 )
    return 0;
  if ( ReparseBuffer->SymbolicLinkReparseBuffer.PathBuffer[0] != 63
    || *((_WORD *)&ReparseBuffer->GenericReparseBuffer + 7) != 92
    || LOWORD(ReparseBuffer[1].ReparseTag) != 86
    || HIWORD(ReparseBuffer[1].ReparseTag) != 111
    || ReparseBuffer[1].ReparseDataLength != 108
    || ReparseBuffer[1].Reserved != 117
    || ReparseBuffer[1].SymbolicLinkReparseBuffer.SubstituteNameOffset != 109
    || ReparseBuffer[1].SymbolicLinkReparseBuffer.SubstituteNameLength != 101
    || ReparseBuffer[1].SymbolicLinkReparseBuffer.PrintNameOffset != 123
    || ReparseBuffer[2].Reserved != 45
    || ReparseBuffer[2].MountPointReparseBuffer.PathBuffer[0] != 45
    || HIWORD(ReparseBuffer[3].ReparseTag) != 45
    || ReparseBuffer[3].SymbolicLinkReparseBuffer.PrintNameOffset != 45 )
  {
    return 0;
  }
  return ReparseBuffer[4].SymbolicLinkReparseBuffer.PrintNameLength == 125;
}
