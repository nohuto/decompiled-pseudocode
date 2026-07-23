/*
 * XREFs of RtlFindMessage @ 0x1409B98E0
 * Callers:
 *     IopInitializeBootLogging @ 0x14070FFB8 (IopInitializeBootLogging.c)
 *     PiGetDefaultMessageString @ 0x1409B8860 (PiGetDefaultMessageString.c)
 *     ExpSystemErrorHandler2 @ 0x140B63540 (ExpSystemErrorHandler2.c)
 *     ResFwFindMessage @ 0x140BB397C (ResFwFindMessage.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpFindMessageInTable @ 0x1404687A4 (RtlpFindMessageInTable.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     LdrpSearchResourceSection_U @ 0x1409B999C (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x1409BA4DC (LdrpAccessResourceData.c)
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
