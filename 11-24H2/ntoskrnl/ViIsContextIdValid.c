/*
 * XREFs of ViIsContextIdValid @ 0x140B86944
 * Callers:
 *     VfInsertContext @ 0x14060EDA0 (VfInsertContext.c)
 *     VfQueryDeviceContext @ 0x14060EE80 (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x14060EEC0 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x14060EF00 (VfQueryIrpContext.c)
 *     VfRemoveContext @ 0x14060EF40 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall ViIsContextIdValid(int a1, int a2)
{
  bool result; // al

  result = 0;
  if ( !a1 || (unsigned int)(a1 - 1) <= 1 )
    return a2 < 1;
  return result;
}
