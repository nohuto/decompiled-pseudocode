/*
 * XREFs of ?prgnVis@DC@@QEAAPEAVREGION@@PEAV2@@Z @ 0x1C0302BE8
 * Callers:
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1C011C144 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 * Callees:
 *     <none>
 */

struct REGION *__fastcall DC::prgnVis(DC *this, struct REGION *a2)
{
  *((_QWORD *)this + 142) = a2;
  return a2;
}
