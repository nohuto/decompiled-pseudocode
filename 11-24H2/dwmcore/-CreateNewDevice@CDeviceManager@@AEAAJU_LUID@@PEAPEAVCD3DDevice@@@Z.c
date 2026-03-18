/*
 * XREFs of ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180061400
 * Callers:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetAdapter@CDisplayManager@@QEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x180157560 (-GetAdapter@CDisplayManager@@QEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x18015A840 (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1801DEA48 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@AEAAPEAVDeviceInfo@CDeviceManager@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x1802295EC (--$_Emplace_reallocate@AEAPEAVCD3DDevice@@@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceManager::CreateNewDevice(CDeviceManager *this, struct _LUID a2, struct CD3DDevice **a3)
{
  int Adapter; // eax
  struct IDXGIAdapter *v6; // rbx
  unsigned int v7; // esi
  int v9; // eax
  __int64 v10; // rdx
  struct CD3DDevice *v11; // rcx
  struct IDXGIAdapter *v12; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v12 = 0LL;
  Adapter = CDisplayManager::GetAdapter(this, a2, (struct IDXGIAdapter1 **)&v12);
  v6 = v12;
  v7 = Adapter;
  if ( Adapter >= 0 )
  {
    v9 = CD3DDevice::Create(v12, a3);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18032AFF8, 2u, v9, 0x1AEu, 0LL);
    }
    else
    {
      v10 = *((_QWORD *)this + 8);
      if ( v10 == *((_QWORD *)this + 9) )
      {
        std::vector<CDeviceManager::DeviceInfo>::_Emplace_reallocate<CD3DDevice * &>((char *)this + 56, v10, a3);
      }
      else
      {
        v11 = *a3;
        *(_BYTE *)(v10 + 8) = 0;
        *(_QWORD *)v10 = v11;
        if ( v11 )
          CMILRefCountImpl::AddReference((struct CD3DDevice *)((char *)v11 + 8));
        *((_QWORD *)this + 8) += 16LL;
      }
      CComposition::ResetTokenThread(v11);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18032AFF8, 2u, Adapter, 0x1ACu, 0LL);
  }
  if ( v6 )
    ((void (__fastcall *)(struct IDXGIAdapter *))v6->lpVtbl->Release)(v6);
  return v7;
}
