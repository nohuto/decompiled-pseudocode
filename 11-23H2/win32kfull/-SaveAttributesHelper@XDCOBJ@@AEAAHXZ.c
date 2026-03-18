/*
 * XREFs of ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C013DDEC
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0002200 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00F5020 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0103430 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C011D140 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C01364A0 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0277124 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::SaveAttributesHelper(XDCOBJ *this)
{
  unsigned int v1; // ebx
  struct _DC_ATTR *UserAttr; // rax

  v1 = 0;
  if ( *((_DWORD *)this + 3) )
    return 1LL;
  UserAttr = XDCOBJ::GetUserAttr(this);
  if ( !UserAttr )
    return 1LL;
  LOBYTE(v1) = DC::SaveAttributes(*(DC **)this, UserAttr) != 0;
  return v1;
}
