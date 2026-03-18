/*
 * XREFs of ?Release@FxRequestSystemBuffer@@UEAAKPEAXJPEBD@Z @ 0x140056700
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x140056BEC (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequestSystemBuffer::Release(FxRequestSystemBuffer *this, void *Tag, int Line, const char *File)
{
  FxRequest::ReleaseIrpReference((FxRequest *)&this[-16]);
  return 1LL;
}
