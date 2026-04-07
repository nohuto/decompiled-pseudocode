/*
 * XREFs of ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180017DA0
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180082D10 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x180013630 (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800136A4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x1800187EC (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x18001B208 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180098420 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::BeginDestroySprite(CTopLevelWindow3D *this, bool *a2)
{
  unsigned int v4; // edi
  bool v5; // si
  __int64 result; // rax
  int v7; // eax
  int started; // eax

  v4 = 0;
  v5 = 1;
  if ( CTopLevelWindow3D::ShouldDelayTransition(this, 0) )
  {
    started = CTopLevelWindow3D::StartDelayHideAnimation(this);
    v4 = started;
    if ( started < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x174u, 0LL);
      goto LABEL_3;
    }
    goto LABEL_8;
  }
  if ( CTopLevelWindow3D::ShouldShowTransition(this)
    && (*(_DWORD *)(*((_QWORD *)this + 36) + 116LL) & 0x20000000) == 0
    && !CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
  {
    if ( !*((_QWORD *)this + 40) || *((_DWORD *)this + 84) != 3 )
    {
      v7 = CTopLevelWindow3D::StartAnimation((__int64)this, 6u);
      v4 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x17Fu, 0LL);
        goto LABEL_3;
      }
    }
LABEL_8:
    v5 = 0;
  }
LABEL_3:
  result = v4;
  *a2 = v5;
  return result;
}
