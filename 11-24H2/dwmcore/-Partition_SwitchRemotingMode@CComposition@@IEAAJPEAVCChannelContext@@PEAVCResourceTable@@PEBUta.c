/*
 * XREFs of ?Partition_SwitchRemotingMode@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x180217B00
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x1801C7768 (McTemplateU0qqq_EventWriteTransfer.c)
 *     ?ForceFullDirty@CRenderTargetManager@@QEAAXXZ @ 0x18020ED1C (-ForceFullDirty@CRenderTargetManager@@QEAAXXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::Partition_SwitchRemotingMode(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SWITCHREMOTINGMODE *a4)
{
  bool v5; // di
  __int64 v6; // rcx
  int v8; // eax
  __int64 v10; // rax
  struct CChannelContext *v11; // rbx
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  char v13[72]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+30h] BYREF
  struct CChannelContext *v15; // [rsp+B8h] [rbp+38h] BYREF
  struct CResourceTable *v16; // [rsp+C0h] [rbp+40h] BYREF

  v16 = a3;
  v15 = a2;
  v5 = 0;
  v6 = *((unsigned int *)a4 + 1);
  if ( *((_DWORD *)this + 1566) != (_DWORD)v6 )
  {
    *((_DWORD *)this + 1566) = v6;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qqq_EventWriteTransfer(v6, &EVTDESC_DETECT_REMOTEAPPMODE_SWITCH, 0LL, (int)v6 >= 3, (_DWORD)v6 == 1);
    if ( *((_DWORD *)this + 1566) == 7 )
    {
      wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
        &v14,
        **((_QWORD **)g_pComposition + 77));
      if ( v14 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 224LL))(v14);
        wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
          &v15,
          v10);
        v11 = v15;
        if ( v15 )
        {
          v16 = 0LL;
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v16);
          if ( (**(int (__fastcall ***)(struct CChannelContext *, GUID *, struct CResourceTable **))v11)(
                 v11,
                 &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c,
                 &v16) >= 0 )
          {
            v12 = 7LL;
            memset_0(v13, 0, 0x40uLL);
            (*(void (__fastcall **)(struct CResourceTable *, __int64 *))(*(_QWORD *)v16 + 176LL))(v16, &v12);
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
        }
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
    }
  }
  v8 = *((_DWORD *)this + 1566);
  if ( v8 )
    v5 = *((_DWORD *)a4 + 2) != 0;
  *((_BYTE *)this + 6467) = v5;
  if ( v8 >= 5 )
    CRenderTargetManager::ForceFullDirty(*((CRenderTargetManager **)this + 77));
  return 0LL;
}
