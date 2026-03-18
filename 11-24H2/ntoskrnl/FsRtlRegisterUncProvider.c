/*
 * XREFs of FsRtlRegisterUncProvider @ 0x14070AB60
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpRegisterUncProvider @ 0x14070ADD0 (FsRtlpRegisterUncProvider.c)
 */

NTSTATUS __stdcall FsRtlRegisterUncProvider(
        PHANDLE MupHandle,
        PCUNICODE_STRING RedirectorDeviceName,
        BOOLEAN MailslotsSupported)
{
  __int64 v4; // [rsp+48h] [rbp+20h] BYREF

  v4 = 16777224LL;
  if ( MailslotsSupported )
    HIDWORD(v4) |= 1u;
  return FsRtlpRegisterUncProvider(RedirectorDeviceName, 0LL, &v4, MupHandle);
}
