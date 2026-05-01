/*
 * XREFs of ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x18052CC78
 * Callers:
 *     ?MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z @ 0x18052BFA0 (-MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z.c)
 *     ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x18052D0D0 (-ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z.c)
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x18052DC10 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_4852e8c5575c21ffaf507ee455e63cdf___ @ 0x1805299AC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_4852e8c5575c21ffaf507ee455e63cdf___.c)
 *     ?InternalAddRef@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ @ 0x18052BF50 (-InternalAddRef@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18052BF74 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall WindowArrangementView::SetPlaceModeIdleAnimationEnabled(WindowArrangementView *this, volatile int *a2)
{
  __int64 *v2; // rsi
  int v4; // ebx
  volatile int *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  char v9; // bl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowArrangementView *v11; // [rsp+40h] [rbp+18h] BYREF
  WindowArrangementView *v12; // [rsp+48h] [rbp+20h] BYREF

  v2 = (__int64 *)((char *)this + 136);
  if ( (_BYTE)a2 )
  {
    v12 = this;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef((__int64 *)&v12, a2);
    v4 = *((_DWORD *)this + 77);
    v11 = this;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalAddRef((__int64 *)&v11, v5);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
    v7 = 3000LL;
    if ( !v4 )
      v7 = 1500LL;
    v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_4852e8c5575c21ffaf507ee455e63cdf___(
           v6,
           v7,
           (__int64)v2,
           (volatile signed __int32 *)&v11);
    if ( v8 >= 0 )
    {
      v9 = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x265,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v8);
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v11);
    if ( v9 )
      *((_DWORD *)this + 74) = 1;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v12);
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
    *((_DWORD *)this + 74) = 0;
  }
}
