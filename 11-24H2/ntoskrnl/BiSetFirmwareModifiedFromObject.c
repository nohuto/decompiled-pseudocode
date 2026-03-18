/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x1404A7E48
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x1409BEB2C (BcdSetElementDataWithFlags.c)
 *     BiDeleteElement @ 0x1409BF8D0 (BiDeleteElement.c)
 *     BcdDeleteObject @ 0x1409C2520 (BcdDeleteObject.c)
 * Callees:
 *     BiOpenStoreKeyFromObject @ 0x1404A7E94 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModified @ 0x1404A7F74 (BiSetFirmwareModified.c)
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 */

__int64 __fastcall BiSetFirmwareModifiedFromObject(void *a1)
{
  __int64 v1; // rdx
  int v2; // edi

  v2 = BiOpenStoreKeyFromObject(a1);
  if ( v2 >= 0 )
  {
    LOBYTE(v1) = 1;
    BiSetFirmwareModified(0LL, v1);
  }
  return (unsigned int)v2;
}
