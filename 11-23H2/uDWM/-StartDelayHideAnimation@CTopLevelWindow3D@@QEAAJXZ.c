/*
 * XREFs of ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E73A0
 * Callers:
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18004BD84 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18004F364 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180037364 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18004C100 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18004C860 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartDelayHideAnimation(CTopLevelWindow3D *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int v5; // ebx
  int v6; // eax
  int started; // eax

  v2 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(*((_QWORD *)this + 42) + 440LL), 0);
  v5 = v2;
  if ( v2 >= 0 )
  {
    if ( *((_DWORD *)this + 96) != 8 )
    {
      v6 = CTopLevelWindow3D::StopAnimation(this, v3, v4);
      v5 = v6;
      if ( v6 >= 0 )
      {
        started = CTopLevelWindow3D::StartAnimation((__int64)this, 8);
        v5 = started;
        if ( started < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x1C8u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1C7u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x1C3u);
  }
  return v5;
}
