/*
 * XREFs of ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180076030
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D5B40 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Scale2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4
  bool v3; // zf

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 179) != v2
    || *((float *)this + 180) != *((float *)a2 + 6)
    || *((float *)this + 182) != *((float *)a2 + 9)
    || *((float *)this + 183) != *((float *)a2 + 10) )
  {
    v3 = *((_BYTE *)this + 926) == 0;
    *((float *)this + 179) = v2;
    *((_DWORD *)this + 180) = *((_DWORD *)a2 + 6);
    *((_DWORD *)this + 181) = 1065353216;
    if ( v3 )
    {
      *((_DWORD *)this + 182) = *((_DWORD *)a2 + 9);
      *(_QWORD *)((char *)this + 732) = *((unsigned int *)a2 + 10);
    }
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
  }
  return 0LL;
}
