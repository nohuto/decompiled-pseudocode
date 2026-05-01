/*
 * XREFs of ?OnCommand@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18039F260
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleScaleOrMonitorChange@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18039E970 (-HandleScaleOrMonitorChange@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18039EA58 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::OnCommand(
        CVirtualTouchpadExperienceManager *this,
        struct IApplicationFrame *a2,
        const struct _GUID *a3)
{
  __int64 v4; // rax
  _QWORD *v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  HWND v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)&a3->Data1 - ApplicationFrameCloseCommand;
  if ( *(_QWORD *)&a3->Data1 == ApplicationFrameCloseCommand )
    v4 = *(_QWORD *)a3->Data4 - 0x575B26E93947F081LL;
  v7 = (_QWORD *)((char *)this + 328);
  if ( !v4 && *v7 && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 24LL))(*v7) )
  {
    v8 = CVirtualTouchpadExperienceManager::HideInternal((CVirtualTouchpadExperienceManager *)((char *)this - 16));
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F9,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
  else
  {
    v11 = *(_QWORD *)&a3->Data1 - ApplicationFrameEnteredSizeMoveCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameEnteredSizeMoveCommand )
      v11 = *(_QWORD *)a3->Data4 + 0x1834CA5B01340D52LL;
    if ( !v11
      && *v7
      && (*(unsigned int (__fastcall **)(_QWORD, struct IApplicationFrame *))(*(_QWORD *)*v7 + 24LL))(*v7, a2) )
    {
      *((_BYTE *)this + 301) = 1;
    }
    else
    {
      v12 = *(_QWORD *)&a3->Data1 - ApplicationFrameExitedSizeMoveCommand;
      if ( *(_QWORD *)&a3->Data1 == ApplicationFrameExitedSizeMoveCommand )
        v12 = *(_QWORD *)a3->Data4 - 0x789E03E893229A8ALL;
      if ( !v12
        && *v7
        && (*(unsigned int (__fastcall **)(_QWORD, struct IApplicationFrame *))(*(_QWORD *)*v7 + 24LL))(*v7, a2) )
      {
        v13 = (HWND)*((_QWORD *)this + 42);
        *((_BYTE *)this + 301) = 0;
        if ( MonitorFromWindow(v13, 2u) != *((HMONITOR *)this + 43) )
          CVirtualTouchpadExperienceManager::HandleScaleOrMonitorChange((CVirtualTouchpadExperienceManager *)((char *)this - 16));
      }
    }
  }
  return 0LL;
}
