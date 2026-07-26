/*
 * XREFs of ?IsOidRequestDirectOid@@YAEK@Z @ 0x140007920
 * Callers:
 *     ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x140007790 (-ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IsOidRequestDirectOid(int a1)
{
  __int64 i; // rax

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x19 )
      return 0;
    if ( a1 == ndisDirectOidRequestPathOids[i] )
      break;
  }
  return 1;
}
