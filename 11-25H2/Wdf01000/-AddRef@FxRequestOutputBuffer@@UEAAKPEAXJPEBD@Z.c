/*
 * XREFs of ?AddRef@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z @ 0x140008200
 * Callers:
 *     <none>
 * Callees:
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x140008224 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequestOutputBuffer::AddRef(FxRequestOutputBuffer *this, void *Tag, int Line, const char *File)
{
  FxRequest::AddIrpReference((FxRequest *)&this[-17]);
  return 2LL;
}
