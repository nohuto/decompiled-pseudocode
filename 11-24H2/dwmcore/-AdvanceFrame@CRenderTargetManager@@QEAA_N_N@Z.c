/*
 * XREFs of ?AdvanceFrame@CRenderTargetManager@@QEAA_N_N@Z @ 0x1800F2B5C
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x1800F1F40 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?ApplyClockBoost@CRenderTargetManager@@AEAA_NXZ @ 0x180102D10 (-ApplyClockBoost@CRenderTargetManager@@AEAA_NXZ.c)
 *     ?EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ @ 0x180221BD0 (-EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CRenderTargetManager::AdvanceFrame(HANDLE *this)
{
  CGlobalComposition *v2; // rax
  char v3; // r15
  __int64 v4; // rax
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // r8
  int (__fastcall ****v7)(__int64, GUID *, __int64 *); // rbx
  int (__fastcall ****v8)(__int64, GUID *, __int64 *); // r12
  int (__fastcall ***v9)(__int64, GUID *, __int64 *); // rsi
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  int (__fastcall **v13)(__int64, GUID *, __int64 *); // rax
  __int64 v15; // [rsp+30h] [rbp-49h] BYREF
  int (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-41h] BYREF
  __int64 v17; // [rsp+40h] [rbp-39h] BYREF
  char v18[72]; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+90h] [rbp+17h] BYREF

  CRenderTargetManager::ApplyClockBoost((CRenderTargetManager *)this);
  v2 = g_pComposition;
  v3 = *((_BYTE *)this + 745);
  *((_BYTE *)this + 745) = 0;
  if ( *((int *)v2 + 1566) >= 5 && *this )
  {
    v4 = (*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)*this + 224LL))(*this);
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      &v16,
      v4);
    v5 = v16;
    if ( v16 )
    {
      v15 = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v15);
      if ( (**v5)(v5, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v15) >= 0 )
      {
        v17 = 5LL;
        memset_0(v18, 0, 0x40uLL);
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 176LL))(v15, &v17);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_DETECT_DESKTOP_ENDOFUPDATES,
            v6,
            1u,
            &v19);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  }
  v7 = (int (__fastcall ****)(__int64, GUID *, __int64 *))this[3];
  v8 = (int (__fastcall ****)(__int64, GUID *, __int64 *))this[4];
  while ( v7 != v8 )
  {
    v9 = *v7;
    v10 = ((__int64 (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(**v7)[28])(*v7);
    v11 = v10;
    if ( v10 )
    {
      if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) < 0 )
      {
        ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*v9)[29])(v9);
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
        if ( *(_QWORD *)(v12 + 1224) != *(_QWORD *)(v12 + 1216) )
        {
          v13 = *v9;
          v15 = 0LL;
          if ( (*v13)((__int64)v9, &GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97, &v15) >= 0 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 304LL))(v15);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
        }
      }
    }
    ++v7;
  }
  if ( v3 && (int)CRenderTargetManager::EnsureDxDisplayModeChangedEvent((CRenderTargetManager *)this) >= 0 )
    SetEvent(this[87]);
  return v3;
}
