/*
 * XREFs of _CcdOpenRegistrySubkey_0 @ 0x1403CA300
 * Callers:
 *     _CcdOpenRegistrySubkey @ 0x1403CA298 (_CcdOpenRegistrySubkey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CcdOpenRegistrySubkey_0(
        void **a1,
        ACCESS_MASK a2,
        void *a3,
        struct _UNICODE_STRING *a4,
        PULONG Disposition)
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  ObjectAttributes.RootDirectory = a3;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = a4;
  if ( Disposition )
    return ZwCreateKey(a1, a2, &ObjectAttributes, 0, 0LL, 0, Disposition);
  else
    return ZwOpenKey(a1, a2, &ObjectAttributes);
}
