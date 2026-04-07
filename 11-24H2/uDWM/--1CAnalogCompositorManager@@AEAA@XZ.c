/*
 * XREFs of ??1CAnalogCompositorManager@@AEAA@XZ @ 0x180071EF4
 * Callers:
 *     _CAnalogCompositorManager::GetInstance_::_2_::_dynamic_atexit_destructor_for__singletonAnalogCompositorManager__ @ 0x1800F9390 (_CAnalogCompositorManager--GetInstance_--_2_--_dynamic_atexit_destructor_for__singletonAnalogCom.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x180095F20 (--1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1838 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAnalogCompositorManager::~CAnalogCompositorManager(CAnalogCompositorManager *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _QWORD *v9; // rsi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 80);
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 192LL))(v3);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x39,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v4,
        v13);
    if ( *((_QWORD *)this + 11) )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v2 + 160LL))(*v2);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3D,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
          (const char *)(unsigned int)v5,
          v13);
      *((_QWORD *)this + 11) = 0LL;
    }
    if ( *((_QWORD *)this + 12) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v2 + 128LL))(*v2);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x43,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
          (const char *)(unsigned int)v6,
          v13);
      *((_QWORD *)this + 12) = 0LL;
    }
    if ( *((_QWORD *)this + 13) )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v2 + 144LL))(*v2);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x49,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
          (const char *)(unsigned int)v7,
          v13);
      *((_QWORD *)this + 13) = 0LL;
    }
    if ( *((_QWORD *)this + 14) )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v2 + 176LL))(*v2);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4F,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
          (const char *)(unsigned int)v8,
          v13);
      *((_QWORD *)this + 14) = 0LL;
    }
  }
  v9 = (_QWORD *)((char *)this + 120);
  if ( *((_BYTE *)this + 140) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v9 + 56LL))(
            *v9,
            *((_QWORD *)this + 16),
            *((unsigned int *)this + 34));
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x56,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v10,
        v13);
    *((_BYTE *)this + 140) = 0;
  }
  if ( *((_QWORD *)this + 16) )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 32LL))(*v9);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5C,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v11,
        v13);
    *((_QWORD *)this + 16) = 0LL;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
  Windows::Mirage::HolographicDriverDetectedWatcher::~HolographicDriverDetectedWatcher((CAnalogCompositorManager *)((char *)this + 8));
  v12 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
}
