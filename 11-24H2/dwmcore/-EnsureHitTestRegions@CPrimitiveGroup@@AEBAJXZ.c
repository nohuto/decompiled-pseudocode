/*
 * XREFs of ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18014DD84
 * Callers:
 *     ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014CBC0 (-HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18014E034 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 */

__int64 __fastcall CPrimitiveGroup::EnsureHitTestRegions(CPrimitiveGroup *this)
{
  unsigned int v1; // ebx
  int HitTestRegions; // eax

  v1 = 0;
  if ( !*((_BYTE *)this + 104) )
  {
    HitTestRegions = CPrimitiveGroup::CreateHitTestRegions(this);
    v1 = HitTestRegions;
    if ( HitTestRegions < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, HitTestRegions, 0x319u, 0LL);
  }
  return v1;
}
