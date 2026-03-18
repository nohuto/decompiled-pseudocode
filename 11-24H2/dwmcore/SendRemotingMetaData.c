/*
 * XREFs of SendRemotingMetaData @ 0x18028ED10
 * Callers:
 *     ?SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z @ 0x18028EB14 (-SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z.c)
 *     ?SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z @ 0x18028EC40 (-SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SendRemotingMetaData(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v9; // [rsp+48h] [rbp+28h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+30h] BYREF
  __int64 v11; // [rsp+58h] [rbp+38h] BYREF

  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    &v11,
    **((_QWORD **)g_pComposition + 77));
  if ( v11 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 224LL))(v11);
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      &v10,
      v3);
    v4 = v10;
    if ( v10 )
    {
      v9 = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v9);
      v5 = (**v4)(v4, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v9);
      v2 = v5;
      if ( v5 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 176LL))(v9, a1);
        v2 = v5;
        if ( v5 >= 0 )
        {
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v9);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
          v2 = 0;
          goto LABEL_12;
        }
        v6 = 71LL;
      }
      else
      {
        v6 = 69LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
        (const char *)(unsigned int)v5);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v9);
    }
    else
    {
      v2 = -2003304307;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
        (const char *)0x8898008DLL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
  }
  else
  {
    v2 = -2003304442;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
      (const char *)0x88980006LL);
  }
LABEL_12:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
  return v2;
}
