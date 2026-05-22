/*
 * XREFs of ??0WindowsMessageDeliveryProxy@@QEAA@PEAVBamoPeer@ISMBamos_AutoBamos@@@Z @ 0x18002F418
 * Callers:
 *     ?CreateWindowsMessageDeliveryProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18002F16C (-CreateWindowsMessageDeliveryProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ @ 0x18002F540 (-GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ.c)
 *     ?GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ @ 0x18002F560 (-GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
WindowsMessageDeliveryProxy *__fastcall WindowsMessageDeliveryProxy::WindowsMessageDeliveryProxy(
        WindowsMessageDeliveryProxy *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2)
{
  Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  struct IMessageSession *Session; // rdi
  void (__fastcall *v5)(struct IMessageSession *, __int64 *); // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v9[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v9[1] = (__int64)this;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = &BamoImpl::BamoWindowsMessageDeliveryProxyImpl::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = &WindowsMessageDeliveryProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &WindowsMessageDeliveryProxy::`vftable'{for `IWindowsMessageDeliveryProxy'};
  *((_DWORD *)this + 16) = 0;
  v9[0] = 0LL;
  Connection = ISMBamos_AutoBamos::BamoPeer::GetConnection(a2);
  Session = Microsoft::Bamo::BaseBamoConnection::GetSession(Connection);
  v5 = *(void (__fastcall **)(struct IMessageSession *, __int64 *))(*(_QWORD *)Session + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
  v5(Session, v9);
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9[0] + 24LL))(v9[0], &v10);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x14,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\windowsmessaged"
                    "elivery\\server\\windowsmessagedeliveryproxy.cpp",
      (const char *)(unsigned int)v6,
      v9[0]);
  *((_DWORD *)this + 16) = HIDWORD(v11);
  v7 = v9[0];
  if ( v9[0] )
  {
    v9[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return this;
}
