/*
 * XREFs of ?CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ @ 0x180014A64
 * Callers:
 *     ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x18001499C (-ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18000BE08 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IMessageSessionCloseEndpointFunction@details@wil@@YAXPEAUIMessageSession@@_K@Z @ 0x1800AD52C (-IMessageSessionCloseEndpointFunction@details@wil@@YAXPEAUIMessageSession@@_K@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C1B84 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall CursorNotificationProcessor::CheckAndEnsureCursorManagerClient(CursorNotificationProcessor *this)
{
  wil::details *v2; // rcx
  int v3; // eax
  unsigned __int64 v4; // r8
  struct IMessageSession **v5; // r14
  bool v6; // zf
  bool v7; // bl
  wil::details *v8; // rcx
  _QWORD *v9; // rcx
  __int64 (*v11)(void); // rbx
  int v12; // eax
  unsigned __int64 v13; // r8
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, const wchar_t *, __int64, struct IMessageSession **); // rdi
  int v16; // eax
  unsigned __int64 v17; // r8
  struct IMessageSession *v18; // rbx
  const char *v19; // r9
  int v20; // [rsp+20h] [rbp-28h]
  wil::details *v21; // [rsp+30h] [rbp-18h] BYREF
  struct IMessageSession *v22; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v24; // [rsp+50h] [rbp+8h] BYREF
  struct IMessageSession **v25; // [rsp+58h] [rbp+10h]

  v24 = 0LL;
  v2 = (wil::details *)*((_QWORD *)this + 2);
  v21 = 0LL;
  v22 = 0LL;
  if ( v2 )
  {
    v21 = v2;
    (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 64LL))(*(_QWORD *)this);
  v5 = (struct IMessageSession **)((char *)this + 24);
  v25 = (struct IMessageSession **)((char *)this + 24);
  v6 = *((_QWORD *)this + 3) == 0LL;
  if ( !*((_QWORD *)this + 3) )
  {
    if ( v3 )
    {
      v11 = *(__int64 (**)(void))(**((_QWORD **)this + 2) + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
      try
      {
        v12 = v11();
        if ( v12 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0xE3,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cu"
                          "rsornotificationprocessor.cpp",
            (const char *)(unsigned int)v12,
            v20);
        v14 = (__int64)v24;
        v15 = *(__int64 (__fastcall **)(__int64, const wchar_t *, __int64, struct IMessageSession **))(*v24 + 24LL);
        wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
          &v21,
          v21,
          v13);
        v16 = v15(v14, L"System\\Input\\CursorManagerEndpoint", 1LL, &v22);
        if ( v16 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0xE8,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cu"
                          "rsornotificationprocessor.cpp",
            (const char *)(unsigned int)v16,
            v20);
        v18 = v22;
        v22 = 0LL;
        wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
          &v21,
          0LL,
          v17);
        *v5 = v18;
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0xEC,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\curs"
                        "ornotificationprocessor.cpp",
          v19);
        v5 = v25;
      }
    }
    v6 = *v5 == 0LL;
  }
  v7 = !v6;
  if ( v22 )
    wil::details::IMessageSessionCloseEndpointFunction(v21, v22, v4);
  v22 = 0LL;
  v8 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v9 + 16LL))(v9, *v9);
  }
  return v7;
}
