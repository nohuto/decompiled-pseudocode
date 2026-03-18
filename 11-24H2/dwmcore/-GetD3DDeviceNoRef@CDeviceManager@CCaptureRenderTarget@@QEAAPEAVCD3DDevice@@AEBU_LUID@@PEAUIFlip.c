/*
 * XREFs of ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDevice@@AEBU_LUID@@PEAUIFlipProducer@@@Z @ 0x1801FE410
 * Callers:
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x180158D0C (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800612A4 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CD3DDevice *__fastcall CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
        struct CD3DDevice **this,
        const struct _LUID *a2,
        struct IFlipProducer *a3)
{
  volatile signed __int32 *v5; // rcx

  v5 = (volatile signed __int32 *)*this;
  if ( !v5 || *((_QWORD *)v5 + 117) != *a2 || *((_DWORD *)v5 + 278) )
  {
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)this);
    if ( a2->LowPart || a2->HighPart )
    {
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)this);
      if ( (int)CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *a2, this) >= 0
        && ((*((_BYTE *)*this + 944) & 0x18) == 0
         || (*(int (__fastcall **)(struct IFlipProducer *, _QWORD))(*(_QWORD *)a3 + 40LL))(a3, *((_QWORD *)*this + 69)) < 0) )
      {
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)this);
      }
    }
  }
  return *this;
}
