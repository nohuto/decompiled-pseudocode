/*
 * XREFs of ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180030564
 * Callers:
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x18002D0E4 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180032058 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180055EA8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CGlobalLightSet::PositionCoordinateSpaceVisual(CGlobalLightSet *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // ebx
  int v8; // r15d
  int v9; // edi
  int v10; // r12d
  __int64 v11; // rax
  int v12; // r14d
  int v13; // eax
  int v14; // edx
  __int64 v16; // rdx
  int v17[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 *v19; // [rsp+60h] [rbp+30h] BYREF
  struct tagPOINT v20; // [rsp+68h] [rbp+38h] BYREF

  v2 = *((_QWORD *)this + 12);
  if ( !v2 )
    return 0LL;
  v19 = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 256);
  v4 = **v3;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  v5 = v4(v3, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, (__int64 *)&v19);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v5,
      v17[0]);
  }
  else
  {
    v7 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 97);
    v8 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 99);
    v9 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 98);
    v10 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 100);
    v11 = *v19;
    *(float *)v17 = (float)v7;
    *(float *)&v17[1] = (float)v9;
    v17[2] = 0;
    v12 = (*(__int64 (__fastcall **)(__int64 *, int *))(v11 + 168))(v19, v17);
    if ( v12 < 0 )
    {
      v16 = 387LL;
    }
    else
    {
      v13 = 0;
      if ( v8 >= 0 )
        v13 = v8;
      v14 = 0;
      if ( v10 >= 0 )
        v14 = v10;
      v12 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*v19 + 288))(
              v19,
              _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v13), (__m128)COERCE_UNSIGNED_INT((float)v14)).m128_u64[0]);
      if ( v12 >= 0 )
      {
        v20.x = -v7;
        v20.y = -v9;
        CVisual::SetOffset(*((CVisual **)this + 13), &v20);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
        return 0LL;
      }
      v16 = 389LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v12,
      v17[0]);
    v6 = v12;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  return v6;
}
