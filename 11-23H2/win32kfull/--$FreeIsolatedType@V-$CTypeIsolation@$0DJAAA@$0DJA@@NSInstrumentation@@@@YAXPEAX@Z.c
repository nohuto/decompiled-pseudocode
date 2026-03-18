/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C007E1D0
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C007DDA8 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00CD6B0 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C02B6E90 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C008D4AC (-Free@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

struct Gre::Base::SESSION_GLOBALS *__fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(
        Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *result; // rax
  __int64 v3; // rcx

  result = Gre::Base::Globals(a1);
  v3 = *(_QWORD *)(*((_QWORD *)result + 813) + 40LL);
  if ( v3 )
    return (struct Gre::Base::SESSION_GLOBALS *)NSInstrumentation::CTypeIsolation<233472,912>::Free(v3, a1);
  return result;
}
