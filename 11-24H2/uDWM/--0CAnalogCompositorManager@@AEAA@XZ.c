/*
 * XREFs of ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180085384
 * Callers:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180057D38 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 * Callees:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180085524 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 *     ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x18009566C (--0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ?CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800968A4 (-CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     ?CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x180096944 (-CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void_ @ 0x18009AB48 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_68ab246ca29dbf1f5c5163.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_1fe009015b5481886de644cd00cd9360__void_ @ 0x18009AC28 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_1fe009015b5481886de644.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A44DC (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
CAnalogCompositorManager *__fastcall CAnalogCompositorManager::CAnalogCompositorManager(CAnalogCompositorManager *this)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rax
  int AttachWatcher; // eax
  __int64 v5; // rdx
  __int64 v6; // rax
  int DetachWatcher; // eax
  int v9[34]; // [rsp+20h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  CAnalogCompositorManager *v11; // [rsp+B0h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+B8h] [rbp+10h]

  v11 = this;
  v12 = &qword_180129C90;
  qword_180129C90 = 0LL;
  Windows::Mirage::HolographicDriverDetectedWatcher::HolographicDriverDetectedWatcher((Windows::Mirage::HolographicDriverDetectedWatcher *)&unk_180129C98);
  qword_180129CC0 = 0LL;
  qword_180129CC8 = 0LL;
  qword_180129CD0 = 0LL;
  byte_180129CD8 = 0;
  qword_180129CE0 = 0LL;
  qword_180129CE8 = 0LL;
  qword_180129CF0 = 0LL;
  qword_180129CF8 = 0LL;
  qword_180129D00 = 0LL;
  qword_180129D08 = 0LL;
  qword_180129D10 = 0LL;
  dword_180129D18 = 0;
  byte_180129D1C = 0;
  word_180129D1D = 0;
  byte_180129D1F = 0;
  qword_180129D20 = 0LL;
  LODWORD(v11) = 0;
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, CAnalogCompositorManager **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                      + 9)
                                                                                   + 8LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
         L"DisableHologramCompositor",
         &v11) < 0
    || !(_DWORD)v11 )
  {
    v1 = Windows::Mirage::HolographicDriverDetectedWatcher::RegisterForCMNotifications((Windows::Mirage::HolographicDriverDetectedWatcher *)&unk_180129C98);
    if ( v1 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v1,
        v9[0]);
    LOBYTE(v2) = 0;
    v3 = wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_1fe009015b5481886de644cd00cd9360__void_(
           v9,
           v2);
    AttachWatcher = Windows::Mirage::HolographicDriverDetectedWatcher::CreateAttachWatcher(&unk_180129C98, v3);
    if ( AttachWatcher < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2C,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)AttachWatcher,
        v9[0]);
    LOBYTE(v5) = 0;
    v6 = wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void_(
           v9,
           v5);
    DetachWatcher = Windows::Mirage::HolographicDriverDetectedWatcher::CreateDetachWatcher(&unk_180129C98, v6);
    if ( DetachWatcher < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x32,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)DetachWatcher,
        v9[0]);
  }
  return (CAnalogCompositorManager *)&qword_180129C90;
}
