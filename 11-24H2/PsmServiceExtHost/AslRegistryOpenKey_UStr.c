/*
 * XREFs of AslRegistryOpenKey_UStr @ 0x18009E058
 * Callers:
 *     SdbResolveDatabaseEx @ 0x18009602C (SdbResolveDatabaseEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall AslRegistryOpenKey_UStr(void **a1, struct _UNICODE_STRING *a2)
{
  struct _OBJECT_ATTRIBUTES v3; // [rsp+20h] [rbp-38h] BYREF

  v3.ObjectName = a2;
  v3.RootDirectory = 0LL;
  *(_QWORD *)&v3.Length = 48LL;
  *(_QWORD *)&v3.Attributes = 64LL;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  *a1 = 0LL;
  return ZwOpenKey(a1, 0x80000100, &v3);
}
