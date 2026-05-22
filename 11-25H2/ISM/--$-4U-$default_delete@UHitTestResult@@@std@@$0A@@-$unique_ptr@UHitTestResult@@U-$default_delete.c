/*
 * XREFs of ??$?4U?$default_delete@UHitTestResult@@@std@@$0A@@?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005A868
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801978A0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ??R?$default_delete@UHitTestResult@@@std@@QEBAXPEAUHitTestResult@@@Z @ 0x18004EB60 (--R-$default_delete@UHitTestResult@@@std@@QEBAXPEAUHitTestResult@@@Z.c)
 */

_QWORD *__fastcall std::unique_ptr<HitTestResult>::operator=<std::default_delete<HitTestResult>,0>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = (_QWORD *)*a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<HitTestResult>::operator()((__int64)a1, v4);
  return a1;
}
