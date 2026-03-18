/*
 * XREFs of ?ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x140094600
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x14004A2C0 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x140052BFC (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::ReleaseOverride(
        FxRequest *this,
        unsigned __int16 Offset,
        void *Tag,
        unsigned int Line,
        char *File)
{
  if ( !Offset )
    return FxObject::Release(this, Tag, Line, File);
  FxRequest::ReleaseIrpReference(this);
  return 1LL;
}
