/*
 * XREFs of ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1C02C6870
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02C7E50 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02C8210 (NtGdiEngBitBlt.c)
 *     NtGdiEngCheckAbort @ 0x1C02C8720 (NtGdiEngCheckAbort.c)
 *     NtGdiEngCopyBits @ 0x1C02C8880 (NtGdiEngCopyBits.c)
 *     NtGdiEngEraseSurface @ 0x1C02C91C0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02C9310 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02C9520 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02C9990 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02C9D40 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02C9EF0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02CA300 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CA7D0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CADE0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CB1B0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02CB520 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02CB920 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02CCB80 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x1C02C6AA0 (-Cleanup@UMPDSURFOBJ@@SAXPEAX@Z.c)
 */

void __fastcall UMPDSURFOBJ::~UMPDSURFOBJ(UMPDSURFOBJ *this)
{
  if ( *((_DWORD *)this + 14) )
  {
    PopThreadGuardedObject((char *)this + 24);
    *((_DWORD *)this + 14) = 0;
  }
  UMPDSURFOBJ::Cleanup(this);
  if ( *((_DWORD *)this + 14) )
  {
    PopThreadGuardedObject((char *)this + 24);
    *((_DWORD *)this + 14) = 0;
  }
}
