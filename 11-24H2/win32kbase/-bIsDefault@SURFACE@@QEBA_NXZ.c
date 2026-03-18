/*
 * XREFs of ?bIsDefault@SURFACE@@QEBA_NXZ @ 0x1400C632C
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140036B00 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SURFACE::bIsDefault(SURFACE *this)
{
  return this == *(SURFACE **)(*(_QWORD *)(W32GetSessionState(this) + 88) + 4264LL);
}
