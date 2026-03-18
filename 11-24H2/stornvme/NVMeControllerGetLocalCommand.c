/*
 * XREFs of NVMeControllerGetLocalCommand @ 0x140022280
 * Callers:
 *     NVMeSetNonOperationalPowerStatePermissiveMode2 @ 0x14002C3B8 (NVMeSetNonOperationalPowerStatePermissiveMode2.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode3 @ 0x14002C4AC (NVMeSetNonOperationalPowerStatePermissiveMode3.c)
 * Callees:
 *     NVMeControllerAllocateLocalCommand @ 0x140021FDC (NVMeControllerAllocateLocalCommand.c)
 */

_BYTE *__fastcall NVMeControllerGetLocalCommand(__int64 a1)
{
  _BYTE *result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( a1 == -4320 || (unsigned int)StorPortExtendedFunction(37LL, a1, a1 + 4320, &v3) || !v3 )
    result = (_BYTE *)NVMeControllerAllocateLocalCommand(a1);
  else
    result = (_BYTE *)(v3 - 112);
  if ( result )
    *result = 1;
  return result;
}
