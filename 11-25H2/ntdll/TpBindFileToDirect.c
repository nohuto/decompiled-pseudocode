/*
 * XREFs of TpBindFileToDirect @ 0x18003B4F0
 * Callers:
 *     TpAllocIoCompletion @ 0x18003B2C0 (TpAllocIoCompletion.c)
 *     RtlpTpIoLookup @ 0x1800C3DFC (RtlpTpIoLookup.c)
 *     RtlpTpIoAlloc @ 0x1800C4B54 (RtlpTpIoAlloc.c)
 * Callees:
 *     TpAdjustBindingCount @ 0x18003B580 (TpAdjustBindingCount.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     ZwSetInformationFile @ 0x180163700 (ZwSetInformationFile.c)
 */

NTSTATUS __fastcall TpBindFileToDirect(_PEB_LDR_DATA *FileHandle, __int64 a2, __int64 a3)
{
  _PEB_LDR_DATA *v4; // r10
  __int64 v5; // rax
  NTSTATUS result; // eax
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  _IO_STATUS_BLOCK v8; // [rsp+40h] [rbp-18h] BYREF

  v4 = FileHandle;
  v8 = 0LL;
  if ( FileHandle && a2 && a3 && (FileHandle = NtCurrentPeb()->Ldr, !FileHandle->ShutdownInProgress) )
  {
    v5 = *(_QWORD *)(a3 + 64);
    v7[1] = a2;
    v7[0] = v5;
    result = ZwSetInformationFile(v4, &v8, v7, 0x10u, FileCompletionInformation);
    if ( result >= 0 )
    {
      TpAdjustBindingCount(a3, 1LL);
      return 0;
    }
  }
  else
  {
    TppRaiseInvalidParameter(FileHandle, a2, a3);
    return -1073741811;
  }
  return result;
}
