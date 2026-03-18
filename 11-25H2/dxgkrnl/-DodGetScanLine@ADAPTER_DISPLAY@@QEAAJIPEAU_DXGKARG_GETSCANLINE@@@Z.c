/*
 * XREFs of ?DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1401969D0
 * Callers:
 *     DxgkGetScanLine @ 0x140342C80 (DxgkGetScanLine.c)
 * Callees:
 *     ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x14027B6C8 (-GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x14034373C (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodGetScanLine(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct _DXGKARG_GETSCANLINE *a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx

  v3 = *((_QWORD *)this + 57);
  v4 = 0;
  if ( !v3 )
    return 3221225485LL;
  if ( *(_BYTE *)(v3 + 96) )
    return (unsigned int)ADAPTER_DISPLAY::DdiGetScanLine(*(ADAPTER_DISPLAY **)(v3 + 88), a3);
  else
    BLTQUEUE::GetScanLineEmulation((BLTQUEUE *)(*(_QWORD *)(v3 + 8) + 2968LL * a2), &a3->ScanLine, &a3->InVerticalBlank);
  return v4;
}
