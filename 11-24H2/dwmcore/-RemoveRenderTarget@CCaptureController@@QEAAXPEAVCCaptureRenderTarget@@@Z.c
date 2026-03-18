/*
 * XREFs of ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801EC680
 * Callers:
 *     ??1CCaptureController@@EEAA@XZ @ 0x1801EC5EC (--1CCaptureController@@EEAA@XZ.c)
 *     ?DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18021F7E0 (-DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x180220DD4 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 * Callees:
 *     ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x180096F3C (-CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?erase@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801EC868 (-erase@-$vector@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 *     ?SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x1801EC920 (-SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 *     ?UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ @ 0x1801EC948 (-UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ.c)
 *     ?SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z @ 0x1801EC9E4 (-SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z.c)
 *     ?SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x1801ECAA0 (-SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 */

void __fastcall CCaptureController::RemoveRenderTarget(CCaptureController *this, struct CCaptureRenderTarget *a2)
{
  char *v2; // rdi
  CCaptureRenderTarget **i; // rbx
  CCaptureRenderTarget *v4; // rcx
  __int64 v5; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v6; // r8
  CCaptureRenderTarget *v7; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 152;
  for ( i = (CCaptureRenderTarget **)*((_QWORD *)this + 19); i != *((CCaptureRenderTarget ***)this + 20); ++i )
  {
    if ( *i == a2 )
    {
      CCaptureRenderTarget::SetTargetVisual(*i, 0LL);
      *((_BYTE *)*i + 2941) = 0;
      v4 = *i;
      *((_DWORD *)v4 + 30) = 0;
      *((_DWORD *)v4 + 31) = 0;
      COffScreenRenderTarget::CalcTreeBounds(v4, v5, v6);
      CCaptureRenderTarget::SetTransform(*i, 0LL);
      *((_BYTE *)*i + 2942) = 0;
      v7 = *i;
      *((_DWORD *)v7 + 737) = 0x40000000;
      CCaptureRenderTarget::UpdateRenderTargetBitmapSDRBoosts(v7);
      CCaptureRenderTarget::SetReferenceVisual(*i, 0LL);
      *((_BYTE *)*i + 3160) = 0;
      std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::erase(v2, &v8, i);
      return;
    }
  }
}
