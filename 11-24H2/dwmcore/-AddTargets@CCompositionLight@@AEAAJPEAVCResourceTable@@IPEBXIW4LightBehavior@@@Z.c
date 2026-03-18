/*
 * XREFs of ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x1800E9958
 * Callers:
 *     ?ProcessAddTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@PEBXI@Z @ 0x1800E8E04 (-ProcessAddTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_AD.c)
 *     ?ProcessAddExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@PEBXI@Z @ 0x18028F644 (-ProcessAddExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800E9B3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z @ 0x1800E9B70 (-AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionLight::AddTargets(
        __int64 a1,
        CResourceTable *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  __int64 i; // rdi
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v13; // rbx
  int v14; // eax

  v6 = 0;
  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *(_DWORD *)(a4 + 4 * i));
    v13 = ResourceWithoutType;
    if ( !ResourceWithoutType
      || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 64LL))(
            ResourceWithoutType,
            184LL) )
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x9Fu, 0LL);
      return v6;
    }
    v14 = CCompositionLight::AddTarget(a1, v13, a6, 0LL);
    v6 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xA3u, 0LL);
      return v6;
    }
  }
  return v6;
}
