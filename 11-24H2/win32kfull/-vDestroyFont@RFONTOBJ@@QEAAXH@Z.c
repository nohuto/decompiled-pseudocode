/*
 * XREFs of ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x140215BC8
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14025A468 (-bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x14030E760 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1400FF8C8 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1401B19A4 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 */

void __fastcall RFONTOBJ::vDestroyFont(struct _FONTOBJ **this, __int64 a2)
{
  __int64 v2; // r8
  int v4; // ebx
  SIZE sizLogResPpi; // rdi
  __int64 *pvProducer; // [rsp+30h] [rbp+8h] BYREF
  SIZE v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = (__int64)*this;
  v4 = a2;
  sizLogResPpi = (*this)[1].sizLogResPpi;
  pvProducer = (__int64 *)(*this)[1].pvProducer;
  v7 = sizLogResPpi;
  PFEOBJ::vFreepfdg(&pvProducer, a2, v2);
  if ( v4 )
  {
    if ( *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3024LL) )
      PDEVOBJ::DestroyFont((PDEVOBJ *)&v7, *this);
  }
}
