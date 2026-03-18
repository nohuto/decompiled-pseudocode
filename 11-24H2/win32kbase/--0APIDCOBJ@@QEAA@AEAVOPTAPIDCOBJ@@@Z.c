/*
 * XREFs of ??0APIDCOBJ@@QEAA@AEAVOPTAPIDCOBJ@@@Z @ 0x14000ED9C
 * Callers:
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14000E350 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140035AC0 (--0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ @ 0x1401C3050 (--0-$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ.c)
 */

APIDCOBJ *__fastcall APIDCOBJ::APIDCOBJ(APIDCOBJ *this, struct Gre::Base::SESSION_GLOBALS **a2)
{
  DCOBJ::DCOBJ(this, a2[2]);
  UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>((char *)this + 72);
  *((_BYTE *)this + 104) = 0;
  *(_QWORD *)this = *a2;
  return this;
}
