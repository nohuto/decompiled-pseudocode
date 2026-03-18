/*
 * XREFs of ViIsContextIdValid @ 0x140B84944
 * Callers:
 *     VfInsertContext @ 0x1406107E0 (VfInsertContext.c)
 *     VfQueryDeviceContext @ 0x1406108C0 (VfQueryDeviceContext.c)
 *     VfQueryDriverContext @ 0x140610900 (VfQueryDriverContext.c)
 *     VfQueryIrpContext @ 0x140610940 (VfQueryIrpContext.c)
 *     VfRemoveContext @ 0x140610980 (VfRemoveContext.c)
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
