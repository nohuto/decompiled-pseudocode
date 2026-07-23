/*
 * XREFs of IopCreateIoRingObjectType @ 0x140C200E4
 * Callers:
 *     IoCreateObjectTypes @ 0x140C1C664 (IoCreateObjectTypes.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 */

__int64 IopCreateIoRingObjectType()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-49h] BYREF
  __int16 v2; // [rsp+30h] [rbp-39h] BYREF
  char v3; // [rsp+32h] [rbp-37h]
  int v4; // [rsp+38h] [rbp-31h]
  int v5; // [rsp+54h] [rbp-15h]
  int v6; // [rsp+5Ch] [rbp-Dh]
  __int64 (__fastcall *v7)(int); // [rsp+68h] [rbp-1h]
  __int64 (__fastcall *v8)(struct _KPROCESS *, __int64, __int64, __int64); // [rsp+70h] [rbp+7h]
  void (__fastcall *v9)(__int64); // [rsp+78h] [rbp+Fh]

  memset_0(&v2, 0, 0x78uLL);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"IoRing");
  v3 |= 6u;
  v7 = IopOpenIoRing;
  v2 = 120;
  v8 = IopCloseIoRing;
  v4 = 7634;
  v9 = IopDeleteIoRing;
  v5 = 512;
  v6 = 208;
  return ObCreateObjectType(&DestinationString, &v2, 0LL, (__int64)&IoRingObjectType);
}
