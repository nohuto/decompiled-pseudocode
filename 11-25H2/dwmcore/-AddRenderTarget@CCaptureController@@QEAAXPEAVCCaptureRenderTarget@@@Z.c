/*
 * XREFs of ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801F8F24
 * Callers:
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x18022BF34 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 * Callees:
 *     ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x180160D54 (-CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801F91D4 (--$_Emplace_reallocate@V-$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_r.c)
 *     ?SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x1801F93C0 (-SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 *     ?UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ @ 0x1801F93E8 (-UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ.c)
 *     ?SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z @ 0x1801F9484 (-SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z.c)
 *     ?SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x1801F9540 (-SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCaptureController::AddRenderTarget(CCaptureController *this, struct CCaptureRenderTarget *a2)
{
  _QWORD *v4; // rdx
  float v5; // xmm6_4
  float v6; // xmm7_4
  __int64 v7; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v8; // r8
  struct CCaptureRenderTarget *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CCaptureRenderTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = (_QWORD *)*((_QWORD *)this + 20);
  if ( v4 == *((_QWORD **)this + 21) )
  {
    std::vector<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>(
      (char *)this + 152,
      v4,
      &v9);
    if ( v9 )
      (*(void (__fastcall **)(struct CCaptureRenderTarget *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    *v4 = a2;
    *((_QWORD *)this + 20) += 8LL;
  }
  v5 = *((float *)this + 19);
  v6 = *((float *)this + 20);
  CCaptureRenderTarget::SetTargetVisual(a2, *((struct CVisual **)this + 13));
  *((_BYTE *)a2 + 2941) = *((_BYTE *)this + 72);
  *((_DWORD *)a2 + 30) = (int)v5;
  *((_DWORD *)a2 + 31) = (int)v6;
  COffScreenRenderTarget::CalcTreeBounds(a2, v7, v8);
  *((_QWORD *)a2 + 369) = *(_QWORD *)((char *)this + 92);
  CCaptureRenderTarget::SetTransform(a2, *((struct CTransform3D **)this + 14));
  *((_BYTE *)a2 + 2942) = *((_BYTE *)this + 84);
  *((_DWORD *)a2 + 737) = *((_DWORD *)this + 22);
  CCaptureRenderTarget::UpdateRenderTargetBitmapSDRBoosts(a2);
  CCaptureRenderTarget::SetReferenceVisual(a2, *((struct CVisual **)this + 15));
  *((_BYTE *)a2 + 3160) = *((_BYTE *)this + 100);
}
