/*
 * XREFs of TpBindFileToDirect @ 0x1800B7690
 * Callers:
 *     RtlpTpIoAlloc @ 0x1800B6A04 (RtlpTpIoAlloc.c)
 *     RtlpTpIoLookup @ 0x1800B6CDC (RtlpTpIoLookup.c)
 *     TpAllocIoCompletion @ 0x1800B7460 (TpAllocIoCompletion.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     TpAdjustBindingCount @ 0x1800B7720 (TpAdjustBindingCount.c)
 *     ZwSetInformationFile @ 0x180160530 (ZwSetInformationFile.c)
 */

NTSTATUS __fastcall TpBindFileToDirect(HANDLE FileHandle, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  NTSTATUS result; // eax
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  _IO_STATUS_BLOCK v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  if ( FileHandle && a2 && a3 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    v4 = *(_QWORD *)(a3 + 64);
    v6[1] = a2;
    v6[0] = v4;
    result = ZwSetInformationFile(FileHandle, &v7, v6, 0x10u, FileCompletionInformation);
    if ( result >= 0 )
    {
      TpAdjustBindingCount(a3, 1LL);
      return 0;
    }
  }
  else
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
  return result;
}
