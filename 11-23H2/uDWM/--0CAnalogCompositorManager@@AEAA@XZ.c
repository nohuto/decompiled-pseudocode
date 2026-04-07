/*
 * XREFs of ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180025430
 * Callers:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002EA28 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 * Callees:
 *     ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x1800255C4 (--0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ?CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x180025940 (-CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     ?CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800259B4 (-CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180025B94 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A13B4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
CAnalogCompositorManager *__fastcall CAnalogCompositorManager::CAnalogCompositorManager(CAnalogCompositorManager *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v6[13]; // [rsp+28h] [rbp-21h] BYREF
  _QWORD *v7; // [rsp+90h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  CAnalogCompositorManager *v9; // [rsp+B0h] [rbp+67h] BYREF
  void *v10; // [rsp+B8h] [rbp+6Fh]

  v9 = this;
  v10 = &qword_180148650;
  qword_180148650 = 0LL;
  Windows::Mirage::HolographicDriverDetectedWatcher::HolographicDriverDetectedWatcher((Windows::Mirage::HolographicDriverDetectedWatcher *)&unk_180148658);
  qword_180148680 = 0LL;
  qword_180148688 = 0LL;
  qword_180148690 = 0LL;
  byte_180148698 = 0;
  xmmword_1801486A0 = 0LL;
  xmmword_1801486B0 = 0LL;
  qword_1801486C0 = 0LL;
  qword_1801486C8 = 0LL;
  qword_1801486D0 = 0LL;
  dword_1801486D8 = 0;
  byte_1801486DC = 0;
  qword_1801486E0 = 0LL;
  LODWORD(v9) = 0;
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, CAnalogCompositorManager **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                      + 9)
                                                                                   + 8LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9),
         L"DisableHologramCompositor",
         &v9) < 0
    || !(_DWORD)v9 )
  {
    v1 = Windows::Mirage::HolographicDriverDetectedWatcher::RegisterForCMNotifications((Windows::Mirage::HolographicDriverDetectedWatcher *)&unk_180148658);
    if ( v1 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v1,
        v5);
    v6[0] = off_180113290;
    v7 = v6;
    v2 = Windows::Mirage::HolographicDriverDetectedWatcher::CreateAttachWatcher(&unk_180148658, &v5);
    if ( v2 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2C,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v2,
        v5);
    v6[0] = off_1801132B8;
    v7 = v6;
    v3 = Windows::Mirage::HolographicDriverDetectedWatcher::CreateDetachWatcher(&unk_180148658, &v5);
    if ( v3 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x32,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v3,
        v5);
  }
  return (CAnalogCompositorManager *)&qword_180148650;
}
