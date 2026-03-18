/*
 * XREFs of ?AddRef@FxRequestSystemBuffer@@UEAAKPEAXJPEBD@Z @ 0x1400746A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x140008224 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequestSystemBuffer::AddRef(FxRequestSystemBuffer *this, void *Tag, int Line, const char *File)
{
  FxRequest::AddIrpReference((FxRequest *)&this[-16]);
  return 2LL;
}
