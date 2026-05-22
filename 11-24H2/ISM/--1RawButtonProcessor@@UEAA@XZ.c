/*
 * XREFs of ??1RawButtonProcessor@@UEAA@XZ @ 0x1801B2368
 * Callers:
 *     ??_ERawButtonProcessor@@UEAAPEAXI@Z @ 0x1801B23C0 (--_ERawButtonProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18000BE08 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1PrivateMessageSession@RawButtonProcessor@@QEAA@XZ @ 0x1801B22C0 (--1PrivateMessageSession@RawButtonProcessor@@QEAA@XZ.c)
 */

void __fastcall RawButtonProcessor::~RawButtonProcessor(RawButtonProcessor *this)
{
  unsigned __int64 v2; // r8

  RawButtonProcessor::PrivateMessageSession::~PrivateMessageSession((RawButtonProcessor *)((char *)this + 400));
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 4,
    0LL,
    v2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
