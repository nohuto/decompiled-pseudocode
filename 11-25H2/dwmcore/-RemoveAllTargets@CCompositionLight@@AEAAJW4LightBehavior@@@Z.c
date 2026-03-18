/*
 * XREFs of ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x1801FAC04
 * Callers:
 *     ??1CCompositionLight@@MEAA@XZ @ 0x1801FAB7C (--1CCompositionLight@@MEAA@XZ.c)
 *     ?ProcessClearTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_CLEARTARGETS@@@Z @ 0x18023440C (-ProcessClearTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_.c)
 *     ?ProcessClearExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_CLEAREXCLUSIONS@@@Z @ 0x18029BDC8 (-ProcessClearExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIG.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1801348B0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x1801FACB0 (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 */

__int64 __fastcall CCompositionLight::RemoveAllTargets(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned int v7; // ebp
  int v8; // eax

  v2 = 0;
  v5 = a1 + (a2 != 0 ? 128LL : 88LL);
  v6 = 0LL;
  v7 = *(_DWORD *)(v5 + 24);
  while ( (unsigned int)v6 < v7 )
  {
    v8 = CVisual::RemoveLight(*(_QWORD *)(*(_QWORD *)v5 + 8 * v6), a1, a2);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x184u, 0LL);
      return v2;
    }
    v6 = (unsigned int)(v6 + 1);
  }
  *(_DWORD *)(v5 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(v5, 8u);
  return v2;
}
