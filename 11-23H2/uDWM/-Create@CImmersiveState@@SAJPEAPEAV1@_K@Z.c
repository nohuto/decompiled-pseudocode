/*
 * XREFs of ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x180004190
 * Callers:
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x180003B44 (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180003BA4 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C65F8 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800DB110 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ @ 0x1800DB390 (-OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ.c)
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x1800DD49C (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x180004298 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveState::Create(struct CImmersiveState **a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  *a1 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         88LL);
  v5 = (volatile signed __int32 *)v4;
  if ( !v4 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x18u, 0LL);
    return v7;
  }
  *(_DWORD *)(v4 + 8) = 1;
  *(_QWORD *)v4 = &CImmersiveState::`vftable';
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 24) = 0LL;
  *(_DWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 36) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 64) = 0LL;
  *(_BYTE *)(v4 + 56) = 0;
  *(_OWORD *)(v4 + 72) = 0LL;
  v6 = CImmersiveState::Initialize((CImmersiveState *)v4, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1Au, 0LL);
    goto LABEL_5;
  }
  *a1 = (struct CImmersiveState *)v5;
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
LABEL_5:
    CBaseObject::Release((CBaseObject *)v5);
  }
  return v7;
}
