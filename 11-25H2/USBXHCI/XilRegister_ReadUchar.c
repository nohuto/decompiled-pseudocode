/*
 * XREFs of XilRegister_ReadUchar @ 0x14000CC84
 * Callers:
 *     Register_BiosHandoff @ 0x14000C998 (Register_BiosHandoff.c)
 * Callees:
 *     Register_ReadSecureMmio @ 0x140009A08 (Register_ReadSecureMmio.c)
 */

char __fastcall XilRegister_ReadUchar(__int64 a1, __int64 a2)
{
  char v3; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 1001LL) )
    return *(_BYTE *)a2;
  v3 = 0;
  Register_ReadSecureMmio(a1, a2, 0, 1u, &v3);
  return v3;
}
