/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1409287C0
 * Callers:
 *     DifRtlDuplicateUnicodeStringWrapper @ 0x1406381F0 (DifRtlDuplicateUnicodeStringWrapper.c)
 *     PipAddBindingId @ 0x14071BF24 (PipAddBindingId.c)
 *     PipAddRequestToEdge @ 0x14071BFA8 (PipAddRequestToEdge.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140735ED4 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbRegisterNode @ 0x140736338 (PiDrvDbRegisterNode.c)
 *     PpmRegisterProvSocIdentifier @ 0x140757490 (PpmRegisterProvSocIdentifier.c)
 *     MiGetAllRegisteredPatches @ 0x1407F2DDC (MiGetAllRegisteredPatches.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140928938 (DrvDbGetObjectDatabaseNode.c)
 *     PiGetServiceNameInfo @ 0x1409B595C (PiGetServiceNameInfo.c)
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A26708 (MiFindProcessImageHotPatchRecord.c)
 *     EtwpCovSampModuleGetName @ 0x140A38120 (EtwpCovSampModuleGetName.c)
 *     MiFindHotPatchRecord @ 0x140A4EF38 (MiFindHotPatchRecord.c)
 *     NtManageHotPatch @ 0x140AE9BD0 (NtManageHotPatch.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140C24B30 (PnpEarlyLaunchImageNotificationPreProcess.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x140441DB0 (RtlValidateUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlDuplicateUnicodeString(ULONG Flags, PCUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  unsigned __int16 Length; // si
  wchar_t *v6; // r13
  ULONG v7; // ebx
  ULONG v8; // r15d
  NTSTATUS result; // eax
  unsigned __int16 v10; // r14
  wchar_t *Pool2; // rax

  Length = 0;
  v6 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  if ( !StringOut )
    return -1073741811;
  v7 = Flags & 1;
  v8 = Flags & 2;
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
    return -1073741811;
  result = RtlValidateUnicodeString(0, StringIn);
  if ( result < 0 )
    return result;
  if ( StringIn )
    Length = StringIn->Length;
  if ( v7 )
  {
    if ( Length == 0xFFFE )
      return -1073741562;
    v10 = Length + 2;
  }
  else
  {
    v10 = Length;
  }
  if ( v8 || Length )
  {
    if ( !v10 )
    {
LABEL_18:
      StringOut->MaximumLength = v10;
      StringOut->Length = Length;
      StringOut->Buffer = v6;
      return 0;
    }
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v10, 0x67727453u);
    v6 = Pool2;
    if ( Pool2 )
    {
      if ( Length )
        memmove(Pool2, StringIn->Buffer, Length);
      if ( v7 )
        v6[(unsigned __int64)Length >> 1] = 0;
      goto LABEL_18;
    }
    return -1073741801;
  }
  else
  {
    StringOut->MaximumLength = 0;
    StringOut->Length = 0;
    StringOut->Buffer = 0LL;
    return 0;
  }
}
