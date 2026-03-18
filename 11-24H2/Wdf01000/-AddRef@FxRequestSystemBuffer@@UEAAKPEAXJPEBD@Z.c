/*
 * XREFs of ?AddRef@FxRequestSystemBuffer@@UEAAKPEAXJPEBD@Z @ 0x140074140
 * Callers:
 *     <none>
 * Callees:
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1400208E4 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequestSystemBuffer::AddRef(FxRequestSystemBuffer *this, void *Tag, int Line, const char *File)
{
  FxRequest::AddIrpReference((FxRequest *)&this[-16]);
  return 2LL;
}
