/*
 * XREFs of ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01389E0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00AE784 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     CalcForegroundInsertAfter @ 0x1C00E96C0 (CalcForegroundInsertAfter.c)
 */

struct tagWND *__fastcall CalcForegroundInsertAfterComponentUIAware(struct tagWND *a1)
{
  struct tagWND *result; // rax

  result = CalcForegroundInsertAfter(a1);
  if ( !*((_QWORD *)a1 + 15) )
    return CoreWindowProp::GetCompositeAppFrameWindowOrSelf(result);
  return result;
}
