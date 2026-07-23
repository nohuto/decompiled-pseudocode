/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x1404A2898
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x1409A517C (BcdSetElementDataWithFlags.c)
 *     BiDeleteElement @ 0x1409A5F20 (BiDeleteElement.c)
 *     BcdDeleteObject @ 0x1409A8B70 (BcdDeleteObject.c)
 * Callees:
 *     BiOpenStoreKeyFromObject @ 0x1404A28E4 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModified @ 0x1404A29C4 (BiSetFirmwareModified.c)
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
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
