/*
 * XREFs of RtlDuplicateUnicodeString @ 0x140932190
 * Callers:
 *     DifRtlDuplicateUnicodeStringWrapper @ 0x14062DC70 (DifRtlDuplicateUnicodeStringWrapper.c)
 *     PipAddBindingId @ 0x140712294 (PipAddBindingId.c)
 *     PipAddRequestToEdge @ 0x140712318 (PipAddRequestToEdge.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14072BD14 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbRegisterNode @ 0x14072C178 (PiDrvDbRegisterNode.c)
 *     PpmRegisterProvSocIdentifier @ 0x14074CDB0 (PpmRegisterProvSocIdentifier.c)
 *     MiGetAllRegisteredPatches @ 0x1407E296C (MiGetAllRegisteredPatches.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140930228 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbOpenObjectRegKey @ 0x140931000 (DrvDbOpenObjectRegKey.c)
 *     PiGetServiceNameInfo @ 0x1409B2394 (PiGetServiceNameInfo.c)
 *     MiResolveImageReferences @ 0x140A1286C (MiResolveImageReferences.c)
 *     NtManageHotPatch @ 0x140A1D5D0 (NtManageHotPatch.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A1DD10 (MiFindProcessImageHotPatchRecord.c)
 *     EtwpCovSampModuleGetName @ 0x140A3DCA4 (EtwpCovSampModuleGetName.c)
 *     MiFindHotPatchRecord @ 0x140A5618C (MiFindHotPatchRecord.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140C11A20 (PnpEarlyLaunchImageNotificationPreProcess.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x14044BA00 (RtlValidateUnicodeString.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlDuplicateUnicodeString(ULONG Flags, PCUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  char v5; // r15
  unsigned __int16 Length; // di
  wchar_t *v7; // r12
  NTSTATUS result; // eax
  unsigned __int16 v9; // r13
  wchar_t *Pool2; // rax

  v5 = Flags;
  Length = 0;
  v7 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || !StringOut || (Flags & 3) == 2 )
    return -1073741811;
  result = RtlValidateUnicodeString(0, StringIn);
  if ( result < 0 )
    return result;
  if ( StringIn )
    Length = StringIn->Length;
  if ( (v5 & 1) != 0 && Length == 0xFFFE )
    return -1073741562;
  if ( (v5 & 1) != 0 )
    v9 = Length + 2;
  else
    v9 = Length;
  if ( (v5 & 2) != 0 || Length )
  {
    if ( !v9 )
      goto LABEL_25;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v7 = Pool2;
    if ( Pool2 )
    {
      if ( Length )
        memmove(Pool2, StringIn->Buffer, Length);
      if ( (v5 & 1) != 0 )
      {
        result = 0;
        v7[(unsigned __int64)Length >> 1] = 0;
LABEL_19:
        StringOut->MaximumLength = v9;
        StringOut->Length = Length;
        StringOut->Buffer = v7;
        return result;
      }
LABEL_25:
      result = 0;
      goto LABEL_19;
    }
    return -1073741801;
  }
  else
  {
    result = 0;
    StringOut->MaximumLength = 0;
    StringOut->Length = 0;
    StringOut->Buffer = 0LL;
  }
  return result;
}
