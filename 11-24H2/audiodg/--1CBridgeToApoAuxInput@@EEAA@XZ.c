/*
 * XREFs of ??1CBridgeToApoAuxInput@@EEAA@XZ @ 0x14005ECA8
 * Callers:
 *     ??_GCBridgeToApoAuxInput@@EEAAPEAXI@Z @ 0x14005ED10 (--_GCBridgeToApoAuxInput@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027718 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBridgeToApoAuxInput::~CBridgeToApoAuxInput(CBridgeToApoAuxInput *this)
{
  *(_QWORD *)this = &CBridgeToApoAuxInput::`vftable';
  if ( *((_DWORD *)this + 10) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3));
    *((_DWORD *)this + 10) = 0;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 4);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 3);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)this + 2,
    0LL);
  *((_DWORD *)this + 3) = -1073741823;
}
