/*
 * XREFs of ?bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z @ 0x1401C0748
 * Callers:
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D875C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1401C0320 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?UMPDDrvDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x140332DA0 (-UMPDDrvDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UMPDOBJ::bNeedThunk(UMPDOBJ *this, PVOID a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *((_BYTE *)this + 456) || a2 >= MmSystemRangeStart )
    return 1;
  return v2;
}
