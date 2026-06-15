/*
 * XREFs of ?AddPipeToLoopbackConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400718C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_b940a4ec_8e37_4fb6_8ffb_b2b29cfdf8cb@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14003E650 (--0-$CComQIPtr@UIAudioDeviceGraphInternal@@$1-_GUID_b940a4ec_8e37_4fb6_8ffb_b2b29cfdf8cb@@3U__s_.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::AddPipeToLoopbackConnection(
        CSystemAudioDeviceSharedBase *this,
        struct CPipeInstance *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+28h] [rbp-30h]
  __int128 v8; // [rsp+38h] [rbp-20h] BYREF

  v7 = *(_OWORD *)((char *)this - 56);
  v8 = v7;
  EtwEventActivityIdControl(4LL, &v8);
  (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)this + 56LL))(this);
  ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_b940a4ec_8e37_4fb6_8ffb_b2b29cfdf8cb>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_b940a4ec_8e37_4fb6_8ffb_b2b29cfdf8cb>(
    &v6,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 3));
  if ( v6 )
    v4 = (*(__int64 (__fastcall **)(__int64, struct CPipeInstance *))(*(_QWORD *)v6 + 32LL))(v6, a2);
  else
    v4 = -2147467262;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v6);
  EtwEventActivityIdControl(4LL, &v8);
  return v4;
}
