/*
 * XREFs of RtlDuplicateUnicodeString @ 0x140926680
 * Callers:
 *     DifRtlDuplicateUnicodeStringWrapper @ 0x140639C30 (DifRtlDuplicateUnicodeStringWrapper.c)
 *     PipAddBindingId @ 0x14071E394 (PipAddBindingId.c)
 *     PipAddRequestToEdge @ 0x14071E418 (PipAddRequestToEdge.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140737FA4 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbRegisterNode @ 0x140738408 (PiDrvDbRegisterNode.c)
 *     PpmRegisterProvSocIdentifier @ 0x140759010 (PpmRegisterProvSocIdentifier.c)
 *     MiGetAllRegisteredPatches @ 0x1407F280C (MiGetAllRegisteredPatches.c)
 *     DrvDbOpenObjectRegKey @ 0x1409254F0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1409267F8 (DrvDbGetObjectDatabaseNode.c)
 *     PiGetServiceNameInfo @ 0x1409CA714 (PiGetServiceNameInfo.c)
 *     MiResolveImageReferences @ 0x140A17C94 (MiResolveImageReferences.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A326F0 (MiFindProcessImageHotPatchRecord.c)
 *     EtwpCovSampModuleGetName @ 0x140A428E0 (EtwpCovSampModuleGetName.c)
 *     MiFindHotPatchRecord @ 0x140A570A8 (MiFindHotPatchRecord.c)
 *     NtManageHotPatch @ 0x140AE7000 (NtManageHotPatch.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140C22B00 (PnpEarlyLaunchImageNotificationPreProcess.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x14044ACF0 (RtlValidateUnicodeString.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
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
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
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
