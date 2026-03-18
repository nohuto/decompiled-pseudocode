/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x1404A74B8
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x14096B5A4 (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x140A24A18 (BcdDeleteObject.c)
 *     BiDeleteElement @ 0x140A26F84 (BiDeleteElement.c)
 * Callees:
 *     BiOpenStoreKeyFromObject @ 0x1404A7504 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModified @ 0x1404A75E4 (BiSetFirmwareModified.c)
 *     BiCloseKey @ 0x140966980 (BiCloseKey.c)
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
