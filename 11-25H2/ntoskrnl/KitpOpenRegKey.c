/*
 * XREFs of KitpOpenRegKey @ 0x1407B19FC
 * Callers:
 *     KitpInitAitSampleRate @ 0x140C32184 (KitpInitAitSampleRate.c)
 * Callees:
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 */

NTSTATUS __fastcall KitpOpenRegKey(__int64 a1, __int64 a2, HANDLE *a3)
{
  OBJECT_ATTRIBUTES v4; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&v4.Length = 48LL;
  v4.RootDirectory = 0LL;
  *(_QWORD *)&v4.Attributes = 576LL;
  v4.ObjectName = (PUNICODE_STRING)&SbtRateKeyPath;
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 1u, &v4);
}
