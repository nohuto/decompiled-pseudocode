/*
 * XREFs of ?FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801C3E4C
 * Callers:
 *     std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_7cc4ca75940c0ea695d2d6398f0fa979___ @ 0x1801C23BC (std--find_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ptr_HotKeyIn.c)
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801C3338 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 *     ?FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV?$shared_ptr@UHotKeyInfo@@@std@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801C4038 (-FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV-$shared_ptr@UHotKeyInfo@@@std@@PEAP.c)
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801C4840 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 *     ?RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z @ 0x1801C4D40 (-RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z.c)
 *     ?UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z @ 0x1801C54C0 (-UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z.c)
 *     ?UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z @ 0x1801C57C0 (-UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801975D8 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall HotKeyProcessor::FindRegisteredClient(
        HotKeyProcessor *this,
        const struct MessageObjectID *a2,
        struct HotkeyClientRegistration **a3)
{
  unsigned int v3; // edi
  _QWORD *v6; // r15
  int v7; // r12d
  __int64 v8; // r13
  _QWORD *i; // rbx
  __int64 v10; // rsi
  bool v11; // zf
  char v12; // si
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    v6 = (_QWORD *)*((_QWORD *)this + 3);
    v7 = *((_QWORD *)a2 + 1);
    v8 = *(_QWORD *)a2;
    for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
    {
      v15 = i[2];
      v10 = v15;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v15);
      if ( !*(_QWORD *)(v10 + 104) || *(_QWORD *)(v10 + 24) != v8 || (v11 = *(_DWORD *)(v10 + 32) == v7, v12 = 1, !v11) )
        v12 = 0;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      if ( v12 )
        break;
    }
    if ( i != *((_QWORD **)this + 3) )
    {
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(i + 2);
      *a3 = (struct HotkeyClientRegistration *)i[2];
    }
  }
  else
  {
    v3 = -2147024809;
    FailFastWithHR(-2147024809, retaddr, 0x40BuLL);
  }
  return v3;
}
