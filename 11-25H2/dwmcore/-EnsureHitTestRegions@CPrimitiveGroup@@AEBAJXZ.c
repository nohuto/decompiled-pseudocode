/*
 * XREFs of ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18007A230
 * Callers:
 *     ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007BAB0 (-HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180079314 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::EnsureHitTestRegions(CResource **this, __int64 a2, double a3)
{
  unsigned int v3; // ebx
  int HitTestRegions; // eax

  v3 = 0;
  if ( !*((_BYTE *)this + 104) )
  {
    HitTestRegions = CPrimitiveGroup::CreateHitTestRegions(this, a2, a3);
    v3 = HitTestRegions;
    if ( HitTestRegions < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, HitTestRegions, 0x319u, 0LL);
  }
  return v3;
}
