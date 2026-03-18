/*
 * XREFs of ??1CHolographicFrameProcessor@@MEAA@XZ @ 0x1802D5D4C
 * Callers:
 *     ??_ECHolographicFrameProcessor@@MEAAPEAXI@Z @ 0x1802D5E10 (--_ECHolographicFrameProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180110290 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CHolographicFrameProcessor::~CHolographicFrameProcessor(CHolographicFrameProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CHolographicFrameProcessor::`vftable'{for `IHolographicFrameProcessor'};
  *((_QWORD *)this + 1) = &CHolographicFrameProcessor::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 3) = &CHolographicFrameProcessor::`vftable'{for `IFlipPresentCallback'};
  *((_QWORD *)this + 4) = &CHolographicFrameProcessor::`vftable'{for `IFlipContentCallback'};
  *((_QWORD *)this + 5) = &CHolographicFrameProcessor::`vftable'{for `IHolographicWin32kInteropTexture'};
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 12);
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    *((_QWORD *)this + 6) = 0LL;
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((CDrawListCache *)(v3 + 8));
  }
}
