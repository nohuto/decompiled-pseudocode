/*
 * XREFs of ?SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z @ 0x1800A4210
 * Callers:
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x1800A41B4 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureExclusiveMode@CAnalogCompositorManager@@AEAAJXZ @ 0x1800A3244 (-EnsureExclusiveMode@CAnalogCompositorManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnalogCompositorManager::SetExclusiveViewImpl(CAnalogCompositorManager *this, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = CAnalogCompositorManager::EnsureExclusiveMode(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x85u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this, a2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL)
                                   + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                      + 32LL));
  }
  return v5;
}
