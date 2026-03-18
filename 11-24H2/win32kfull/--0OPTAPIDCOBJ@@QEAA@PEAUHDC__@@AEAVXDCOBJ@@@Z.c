/*
 * XREFs of ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z @ 0x14001A56C
 * Callers:
 *     GreAlphaBlend @ 0x140010F88 (GreAlphaBlend.c)
 *     NtGdiBitBlt @ 0x1400193E0 (NtGdiBitBlt.c)
 *     ??0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z @ 0x1400196D0 (--0MAPIDCOBJ@@QEAA@PEAUHDC__@@0@Z.c)
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     BltIcon @ 0x140079FFC (BltIcon.c)
 *     NtGdiMaskBlt @ 0x1400C3730 (NtGdiMaskBlt.c)
 *     NtGdiStretchBlt @ 0x1400D0D00 (NtGdiStretchBlt.c)
 *     NtGdiTransparentBlt @ 0x1401A36C0 (NtGdiTransparentBlt.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1402590A0 (--0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ @ 0x1402FED20 (--0-$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ.c)
 */

OPTAPIDCOBJ *__fastcall OPTAPIDCOBJ::OPTAPIDCOBJ(OPTAPIDCOBJ *this, HDC a2, struct Gre::Base::SESSION_GLOBALS **a3)
{
  DCOBJ::DCOBJ(this, a3[2]);
  UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>((char *)this + 72);
  *((_QWORD *)this + 13) = a2;
  *((_WORD *)this + 56) = 1;
  if ( *a3 && a2 == *(HDC *)*a3 )
  {
    *((_WORD *)this + 56) = 256;
    *(_QWORD *)this = *a3;
  }
  return this;
}
