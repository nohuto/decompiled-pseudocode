/*
 * XREFs of RtlFindMessage @ 0x1409AE2A0
 * Callers:
 *     IopInitializeBootLogging @ 0x140706328 (IopInitializeBootLogging.c)
 *     PiGetDefaultMessageString @ 0x1409B00D4 (PiGetDefaultMessageString.c)
 *     ExpSystemErrorHandler2 @ 0x140B51340 (ExpSystemErrorHandler2.c)
 *     ResFwFindMessage @ 0x140BA197C (ResFwFindMessage.c)
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpFindMessageInTable @ 0x14046F384 (RtlpFindMessageInTable.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     LdrpSearchResourceSection_U @ 0x1409AE35C (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x1409AEEAC (LdrpAccessResourceData.c)
 */

NTSTATUS __cdecl RtlFindMessage(
        PVOID DllHandle,
        ULONG MessageTableId,
        ULONG MessageLanguageId,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageEntry)
{
  NTSTATUS result; // eax
  __int64 v8; // [rsp+38h] [rbp-38h] BYREF
  int *v9; // [rsp+40h] [rbp-30h]
  _QWORD v10[4]; // [rsp+48h] [rbp-28h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v10[0] = MessageTableId;
  v10[2] = MessageLanguageId;
  v10[1] = 1LL;
  v10[3] = MessageId;
  result = LdrpSearchResourceSection_U((_DWORD)DllHandle, (unsigned int)v10, 4, 64, (__int64)&v8);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData(DllHandle);
    if ( result >= 0 )
      return RtlpFindMessageInTable(v9, 0, MessageId, (unsigned __int16 **)MessageEntry);
  }
  return result;
}
