/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18004D758
 * Callers:
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x18004D684 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180106FD8 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180047940 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::OnWindowStyleUpdated(CTopLevelWindow *this)
{
  int v1; // eax
  __int64 v3; // rbx
  int updated; // eax
  unsigned int v5; // ebx

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 0x8000) == 0 )
  {
    v3 = *((_QWORD *)this + 3);
    *((_DWORD *)this + 22) = v1 | 0x8000;
    while ( v3 && (*(_BYTE *)(v3 + 88) & 1) == 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
      v3 = *(_QWORD *)(v3 + 24);
    }
  }
  updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(this);
  v5 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x64Fu, 0LL);
  return v5;
}
