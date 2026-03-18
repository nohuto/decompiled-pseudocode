/*
 * XREFs of ?AddRetryDeviceBitmap@CLegacySurfaceManager@@QEAAXPEAVCGdiSpriteBitmap@@@Z @ 0x1802462BC
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18002699C (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 * Callees:
 *     ?GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z @ 0x180095B30 (-GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801EC734 (--$_Emplace_reallocate@V-$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_r.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacySurfaceManager::AddRetryDeviceBitmap(CLegacySurfaceManager *this, struct CGdiSpriteBitmap *a2)
{
  int WeakReference; // eax
  __int64 *v4; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknownWeakRef *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  WeakReference = CResource::GetWeakReference(a2, &v6);
  if ( WeakReference < 0 )
    ModuleFailFastForHRESULT(WeakReference, retaddr);
  v4 = (__int64 *)*((_QWORD *)this + 30);
  if ( v4 == *((__int64 **)this + 31) )
  {
    std::vector<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>(
      (__int64 **)this + 29,
      v4,
      (__int64 *)&v6);
    if ( v6 )
      (*(void (__fastcall **)(struct IUnknownWeakRef *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    *v4 = (__int64)v6;
    *((_QWORD *)this + 30) += 8LL;
  }
}
