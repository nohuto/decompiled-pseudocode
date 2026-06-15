/*
 * XREFs of ?OnPropertyChanged@CAudioSystemEffectsPropertyChangeNotificationsHandler@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@U_tagpropertykey@@@Z @ 0x1400081C0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140008474 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400089AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::shared_ptr_APO_NOTIFICATION_::shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_85047e2bad8138a68b398125f6a33026__0_ @ 0x140008BC0 (std--shared_ptr_APO_NOTIFICATION_--shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_85047e2.c)
 *     ?GetPropertyStore@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0008_0002@@PEAPEAUIPropertyStore@@@Z @ 0x140008C40 (-GetPropertyStore@CAudioSystemEffectsPropertyChangeNotificationsHandler@@AEAAJW4__MIDL___MIDL_it.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSystemEffectsPropertyChangeNotificationsHandler::OnPropertyChanged(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  void *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rcx
  int PropertyStore; // eax
  unsigned int v10; // edi
  int v11; // eax
  _QWORD *i; // rbx
  void *v14; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  std::shared_ptr_APO_NOTIFICATION_::shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_85047e2bad8138a68b398125f6a33026__0_(
    &v14,
    v6,
    0LL);
  v7 = v14;
  if ( v14 )
  {
    memset_0(v14, 0, 0x48uLL);
    *v7 = 3;
    v7[8] = a2;
    v8 = *(_QWORD *)(a1 + 80);
    *((_QWORD *)v7 + 1) = v8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    PropertyStore = CAudioSystemEffectsPropertyChangeNotificationsHandler::GetPropertyStore(a1 - 8, a2, v7 + 10);
    v10 = PropertyStore;
    if ( PropertyStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
        (const char *)(unsigned int)PropertyStore,
        (int)v14);
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
      return v10;
    }
    else
    {
      v11 = *(_DWORD *)(a3 + 16);
      *((_OWORD *)v7 + 1) = *(_OWORD *)(a1 + 32);
      *((_OWORD *)v7 + 3) = *(_OWORD *)a3;
      v7[16] = v11;
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 88));
      for ( i = *(_QWORD **)(a1 + 168); i; i = (_QWORD *)*i )
        CAPOProcessingHostObject::QueueNotification(i[1], &v14);
      if ( a1 != -88 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 88));
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
      (const char *)0x8007000ELL,
      0);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    return 2147942414LL;
  }
}
