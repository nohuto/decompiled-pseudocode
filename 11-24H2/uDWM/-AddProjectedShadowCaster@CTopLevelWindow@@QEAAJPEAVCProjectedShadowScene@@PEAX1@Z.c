/*
 * XREFs of ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x180054388
 * Callers:
 *     ??1CTopLevelWindow@@EEAA@XZ @ 0x18002D450 (--1CTopLevelWindow@@EEAA@XZ.c)
 *     ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x1800EDDD8 (-AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z @ 0x180054404 (-AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z.c)
 *     ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z @ 0x1800CB14C (-RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::AddProjectedShadowCaster(
        CTopLevelWindow *this,
        struct CProjectedShadowScene *a2,
        void *a3,
        void *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  if ( a3 )
  {
    v4 = CProjectedShadowScene::AddCasterFromSharedHandle(a2, a3, a4, this);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x136Fu, 0LL);
  }
  else
  {
    v6 = CProjectedShadowScene::RemoveCaster(a2, this);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1373u, 0LL);
  }
  return v5;
}
