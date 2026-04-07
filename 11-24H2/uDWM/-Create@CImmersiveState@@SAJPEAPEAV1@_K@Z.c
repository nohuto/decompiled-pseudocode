/*
 * XREFs of ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18004087C
 * Callers:
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x18000321C (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18004232C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x180045584 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x180051E68 (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800D2DE0 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ @ 0x1800D3100 (-OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ.c)
 * Callees:
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x18001C4E8 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CImmersiveState@@AEAA@XZ @ 0x18004093C (--0CImmersiveState@@AEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CImmersiveState::Create(struct CImmersiveState **a1, const struct std::nothrow_t *a2)
{
  CImmersiveState *v4; // rax
  unsigned int v5; // edi
  CImmersiveState *v6; // rax
  struct CImmersiveState *v7; // rbx
  int v8; // eax

  *a1 = 0LL;
  v4 = (CImmersiveState *)operator new[](0x58uLL, a2);
  if ( v4 && (v6 = CImmersiveState::CImmersiveState(v4), (v7 = v6) != 0LL) )
  {
    v8 = CImmersiveState::Initialize(v6, (unsigned __int64)a2);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x19u, 0LL);
    }
    else
    {
      *a1 = v7;
      CMILRefCountBase::AddRef(v7);
    }
    CBaseObject::Release(v7);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x17u, 0LL);
  }
  return v5;
}
