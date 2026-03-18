/*
 * XREFs of ?pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z @ 0x140206A4C
 * Callers:
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1401C0320 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1403345F0 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 * Callees:
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D8D1C (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 */

__int64 __fastcall UMPDOBJ::pxo(UMPDOBJ *this, struct _XFORMOBJ **a2)
{
  int v3; // [rsp+48h] [rbp+10h] BYREF

  if ( !*a2 )
    return 1LL;
  v3 = 0;
  return UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 288), (const void **)a2, 4u, &v3);
}
