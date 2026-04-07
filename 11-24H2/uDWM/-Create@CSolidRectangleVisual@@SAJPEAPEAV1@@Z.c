/*
 * XREFs of ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x1800851C4
 * Callers:
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E16EC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E1BA0 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180027CBC (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSolidRectangleVisual::Create(struct CSolidRectangleVisual **a1)
{
  int v2; // edi
  CRenderDataVisual *v3; // rax
  CRenderDataVisual *v4; // rbx

  if ( a1 )
  {
    v3 = (CRenderDataVisual *)DefaultHeap::AllocClear(0x110uLL);
    v4 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0x110uLL);
      CRenderDataVisual::CRenderDataVisual(v4);
      *(_QWORD *)v4 = &CSolidRectangleVisual::`vftable';
      v2 = ((__int64 (__fastcall *)(CRenderDataVisual *))*(&CSolidRectangleVisual::`vftable' + 1))(v4);
      if ( v2 >= 0 )
      {
        *a1 = v4;
        return 0;
      }
    }
    else
    {
      v4 = 0LL;
      v2 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 9u, 0LL);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 9u, 0LL);
  }
  return (unsigned int)v2;
}
