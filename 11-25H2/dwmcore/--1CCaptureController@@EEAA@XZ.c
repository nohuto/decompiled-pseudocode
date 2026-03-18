/*
 * XREFs of ??1CCaptureController@@EEAA@XZ @ 0x1801F908C
 * Callers:
 *     ??_ECCaptureController@@EEAAPEAXI@Z @ 0x1801F9040 (--_ECCaptureController@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18003082C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801F9120 (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 */

void __fastcall CCaptureController::~CCaptureController(CCaptureController *this)
{
  __int64 *v2; // rcx
  __int64 *v3; // rdx
  struct CCaptureRenderTarget *v4; // rdx
  CCaptureController *v5; // rcx

  *(_QWORD *)this = &CCaptureController::`vftable';
  while ( 1 )
  {
    v2 = (__int64 *)*((_QWORD *)this + 19);
    v3 = (__int64 *)*((_QWORD *)this + 20);
    if ( v2 == v3 )
      break;
    v4 = (struct CCaptureRenderTarget *)*v2;
    v5 = *(CCaptureController **)(*v2 + 2760);
    *((_QWORD *)v4 + 345) = 0LL;
    if ( v5 )
      CCaptureController::RemoveRenderTarget(v5, v4);
  }
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      v2,
      v3);
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 19),
      (*((_QWORD *)this + 21) - *((_QWORD *)this + 19)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
  }
  CCaptureControllerGeneratedT<CCaptureController,CResource>::~CCaptureControllerGeneratedT<CCaptureController,CResource>(this);
}
