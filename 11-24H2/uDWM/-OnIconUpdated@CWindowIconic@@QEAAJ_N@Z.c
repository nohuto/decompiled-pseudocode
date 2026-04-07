/*
 * XREFs of ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800087D8
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180006834 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x1800F0748 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 * Callees:
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18000560C (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180008370 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?OnIconUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B544 (-OnIconUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x180020E90 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowIconic::OnIconUpdated(CWindowIconic *this, char a2)
{
  unsigned int v2; // ebx
  int CentralImage; // eax
  int updated; // eax
  int v7; // eax
  int v8; // eax

  v2 = 0;
  *(_QWORD *)(*((_QWORD *)this + 10) + 152LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 152LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 160LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 160LL);
  if ( !a2 || *((_DWORD *)this + 4) )
    goto LABEL_9;
  CentralImage = CWindowIconic::LoadCentralImage(this);
  v2 = CentralImage;
  if ( CentralImage < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CentralImage, 0x240u, 0LL);
    return v2;
  }
  updated = CWindowIconic::UpdateClientArea(this);
  v2 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x243u, 0LL);
    return v2;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 48LL))(*((_QWORD *)this + 13));
  v2 = v7;
  if ( v7 >= 0 )
  {
LABEL_9:
    CTopLevelWindow::OnIconUpdated(*((CTopLevelWindow **)this + 11));
    if ( a2 )
    {
      v8 = CContainerVisual::RenderRecursive(*((CContainerVisual **)this + 11));
      v2 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x24Bu, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x244u, 0LL);
  }
  return v2;
}
