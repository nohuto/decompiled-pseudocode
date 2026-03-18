/*
 * XREFs of ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C02B6B78
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00CD6B0 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C02B6E90 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C007E2D4 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00CA424 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vDestroyFont(struct _FONTOBJ **this, int a2)
{
  SIZE sizLogResPpi; // rdi
  __int64 *pvProducer; // [rsp+30h] [rbp+8h] BYREF
  SIZE v6; // [rsp+40h] [rbp+18h] BYREF

  sizLogResPpi = (*this)[1].sizLogResPpi;
  pvProducer = (__int64 *)(*this)[1].pvProducer;
  v6 = sizLogResPpi;
  PFEOBJ::vFreepfdg(&pvProducer);
  if ( a2 )
  {
    if ( *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3008LL) )
      PDEVOBJ::DestroyFont((PDEVOBJ *)&v6, *this);
  }
}
