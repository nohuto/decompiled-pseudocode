/*
 * XREFs of ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x1800358C8
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180035880 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800353D8 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z @ 0x180035A40 (-_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800375FC (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180037894 (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180037AAC (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180037C8C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     WPP_SF_Sdql @ 0x1801F8084 (WPP_SF_Sdql.c)
 *     ?CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180302358 (-CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180304EAC (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::CImmersiveWindowCollection::OnViewReadinessChanged(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2,
        char a3)
{
  int TaskWindow; // ebx
  int v7; // edx
  int v8; // r8d
  int v9; // ebx
  bool v10; // dl
  HWND v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h] BYREF
  char v13; // [rsp+50h] [rbp-18h]
  unsigned __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  if ( a3 )
  {
    v14 = 0LL;
    if ( *((_QWORD *)this + 21) )
    {
      if ( !a2 )
        goto LABEL_7;
      v11 = a2;
      v12 = 0LL;
      v13 = 0;
      TaskWindow = CImmersiveApp::CImmersiveWindowCollection::_FindTaskWindow(
                     this,
                     (const struct CTaskWindowFinder *)&v11,
                     &v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
      if ( TaskWindow < 0 )
        return;
      if ( !v14 )
      {
LABEL_7:
        v9 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 20) + 216LL))(**((_QWORD **)this + 20));
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 32LL))(
          *((_QWORD *)this + 18),
          **((_QWORD **)this + 20));
        if ( v9 == 3 )
          CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation(this);
      }
      if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_Sdql(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          v7,
          v8,
          *(_QWORD *)(*((_QWORD *)this + 19) + 576LL),
          *(_DWORD *)(*((_QWORD *)this + 19) + 584LL),
          (char)a2,
          a3);
      }
      if ( *((_QWORD *)this + 16) && CImmersiveApp::CImmersiveWindowCollection::CanShowPendingApplicationWindow(this) )
      {
        CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(this, a2);
      }
      else
      {
        if ( !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this)
          || !CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(this) )
        {
          return;
        }
        CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this, v10);
      }
      CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged(this);
    }
  }
}
