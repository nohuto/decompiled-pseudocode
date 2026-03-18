/*
 * XREFs of ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x18008D640
 * Callers:
 *     ?ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETPROPERTYSET@@@Z @ 0x18008D3B0 (-ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETPROPE.c)
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x18008D544 (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CEffectBrush::HasValidTemplate(CEffectBrush *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 14);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 80) != 0LL;
  return result;
}
