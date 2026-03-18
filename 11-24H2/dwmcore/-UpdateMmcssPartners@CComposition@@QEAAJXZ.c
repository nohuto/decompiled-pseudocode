/*
 * XREFs of ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x1801587D0
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x1801586E4 (-Partition_SetCurrentMmTask@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagM.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1801588CC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::UpdateMmcssPartners(CComposition *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // edi
  __int64 v9; // rax
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v12[72]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+20h] BYREF
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+28h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+30h] BYREF

  if ( *((_DWORD *)this + 1566) == 7 )
  {
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      &v15,
      **((_QWORD **)this + 77));
    if ( v15 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 224LL))(v15);
      wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
        &v14,
        v9);
      v10 = v14;
      if ( v14 )
      {
        v13 = 0LL;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v13);
        if ( (**v10)(v10, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v13) >= 0 )
        {
          v11 = 11LL;
          memset_0(v12, 0, 0x40uLL);
          v12[8] = *((_BYTE *)this + 816);
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 176LL))(v13, &v11);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 79) + 56LL))(*((_QWORD *)this + 79));
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x2F9u, 0LL);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 80) + 48LL))(*((_QWORD *)this + 80));
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x2FBu, 0LL);
  if ( !v3 || v3 >= 0 && v5 < 0 )
    v3 = v5;
  v6 = CSurfaceManager::ResetTokenThread(*((CSurfaceManager **)this + 78));
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x2FDu, 0LL);
  if ( !v3 || v3 >= 0 && v7 < 0 )
    return (unsigned int)v7;
  return (unsigned int)v3;
}
