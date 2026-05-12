/*
 * XREFs of FindNvmeAuthKeyById @ 0x14006DE08
 * Callers:
 *     AddNvmeAuthKey @ 0x14006D86C (AddNvmeAuthKey.c)
 *     NvmeAdapterConnectController @ 0x140193CD8 (NvmeAdapterConnectController.c)
 * Callees:
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

PVOID __fastcall FindNvmeAuthKeyById(int a1)
{
  _BYTE Buffer[4]; // [rsp+20h] [rbp-338h] BYREF
  int v4; // [rsp+24h] [rbp-334h]

  memset_0(Buffer, 0, 0x314uLL);
  v4 = a1;
  return RtlLookupElementGenericTable(&NvmeAuthKeyTable, Buffer);
}
