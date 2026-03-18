/*
 * XREFs of ?AddRefOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x1400945C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1400208E4 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140049F80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

__int64 __fastcall FxRequest::AddRefOverride(FxRequest *this, unsigned __int16 Offset, void *Tag, int Line, char *File)
{
  if ( !Offset )
    return FxObject::AddRef(this, Tag, Line, File);
  FxRequest::AddIrpReference(this);
  return 2LL;
}
