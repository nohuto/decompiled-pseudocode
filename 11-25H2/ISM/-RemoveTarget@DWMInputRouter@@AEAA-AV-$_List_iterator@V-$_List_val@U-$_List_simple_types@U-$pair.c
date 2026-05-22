/*
 * XREFs of ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x18003F880
 * Callers:
 *     ?UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x18003E7C0 (-UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18003E804 (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x180196F44 (--1DWMInputRouter@@MEAA@XZ.c)
 *     ?NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z @ 0x180197C70 (-NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@1@V21@@Z @ 0x180094CD0 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUtagMsgRoutingInfo@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMInputRouter::RemoveTarget(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  int v7; // eax
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  int v11; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a3 + 56);
  v14 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v3)(v3, &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f, &v14) >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(v14, 0LL, 0LL);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6D3,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v7,
        v12);
    v8 = *(_QWORD **)(a1 + 496);
    v9 = *(_QWORD **)(a1 + 504);
    while ( v8 != v9 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v8 + 24LL))(*v8, v14);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x6D7,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v11,
          v12);
      ++v8;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *(_QWORD *)(a3 + 56) = 0LL;
  std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,IInputTarget *>>>>,0>(
    a1 + 88,
    a2,
    a3);
  return a2;
}
