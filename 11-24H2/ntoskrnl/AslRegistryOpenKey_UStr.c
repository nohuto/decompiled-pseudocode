/*
 * XREFs of AslRegistryOpenKey_UStr @ 0x140808F08
 * Callers:
 *     SdbResolveDatabaseEx @ 0x1408065C4 (SdbResolveDatabaseEx.c)
 * Callees:
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 */

NTSTATUS __fastcall AslRegistryOpenKey_UStr(HANDLE *a1, UNICODE_STRING *a2)
{
  OBJECT_ATTRIBUTES v3; // [rsp+20h] [rbp-38h] BYREF

  v3.ObjectName = a2;
  v3.RootDirectory = 0LL;
  *(_QWORD *)&v3.Length = 48LL;
  *(_QWORD *)&v3.Attributes = 576LL;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  *a1 = 0LL;
  return ZwOpenKey(a1, 0x80000100, &v3);
}
