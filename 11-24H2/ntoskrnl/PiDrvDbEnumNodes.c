/*
 * XREFs of PiDrvDbEnumNodes @ 0x140736DEC
 * Callers:
 *     PpDevCfgInit @ 0x140C24F94 (PpDevCfgInit.c)
 * Callees:
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14072A318 (PiDevCfgInitDriverDatabaseCallback.c)
 */

__int64 PiDrvDbEnumNodes()
{
  __int64 *i; // rbx

  for ( i = (__int64 *)PiDrvDbNodeList; i != &PiDrvDbNodeList && PiDevCfgInitDriverDatabaseCallback(i[3]); i = (__int64 *)*i )
    ;
  return 0LL;
}
