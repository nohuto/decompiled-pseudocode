/*
 * XREFs of KasaniBuildPc @ 0x1405A6EB0
 * Callers:
 *     KasaniSendReport @ 0x1405A7250 (KasaniSendReport.c)
 *     KcsaniSendReport @ 0x1405AB8F0 (KcsaniSendReport.c)
 * Callees:
 *     KasaniGetModuleFromAddress @ 0x1405A6F40 (KasaniGetModuleFromAddress.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

bool __fastcall KasaniBuildPc(__int64 a1, char *a2)
{
  _DWORD v5[2]; // [rsp+30h] [rbp-18h] BYREF
  char *v6; // [rsp+38h] [rbp-10h]

  v5[1] = 0;
  memset_0(a2, 0, 0x8CuLL);
  if ( !a1 )
    return 1;
  v5[0] = 0x800000;
  v6 = a2;
  return (int)KasaniGetModuleFromAddress(a1, v5, a2 + 128, a2 + 132, a2 + 136) >= 0;
}
