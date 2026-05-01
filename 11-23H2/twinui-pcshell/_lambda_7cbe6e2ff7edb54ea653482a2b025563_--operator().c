/*
 * XREFs of _lambda_7cbe6e2ff7edb54ea653482a2b025563_::operator() @ 0x1803D4D08
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___::Run @ 0x1803DB600 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___--Run.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18009D5A0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_ea_18009D5A0.c)
 */

void __fastcall lambda_7cbe6e2ff7edb54ea653482a2b025563_::operator()(__int64 a1)
{
  char v2; // r15
  __int64 *v3; // rdx
  __int64 v4; // rcx
  void **v5; // r14
  unsigned __int8 *v6; // rsi
  unsigned __int8 *v7; // rdi
  char v8; // al
  int v9; // eax
  const unsigned __int16 *v10; // r9
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-20h]
  __int64 *i; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = **(__int64 ***)(*(_QWORD *)a1 + 264LL);
  for ( i = v3; ; v3 = i )
  {
    if ( v3 == *(__int64 **)(*(_QWORD *)a1 + 264LL) )
    {
      v7 = (unsigned __int8 *)(a1 + 17);
      v6 = (unsigned __int8 *)(a1 + 16);
      v5 = (void **)(a1 + 8);
      goto LABEL_13;
    }
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v11,
      v3 + 5);
    v4 = v11;
    v5 = (void **)(a1 + 8);
    if ( *(_QWORD *)v11 == *(_QWORD *)(a1 + 8) )
      break;
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&i);
  }
  v6 = (unsigned __int8 *)(a1 + 16);
  v2 = 1;
  v7 = (unsigned __int8 *)(a1 + 17);
  v8 = *(_BYTE *)(a1 + 17);
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_DWORD *)(v11 + 56) &= ~0x40u;
    v9 = v8 != 0 ? 0x40 : 0;
  }
  else
  {
    *(_DWORD *)(v11 + 56) &= ~0x10u;
    v9 = v8 != 0 ? 0x10 : 0;
  }
  *(_DWORD *)(v4 + 56) |= v9;
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
LABEL_13:
  v10 = L"hWnd found";
  if ( !v2 )
    v10 = L"hWnd not found";
  GameDVRTraceProvider::BroadcastDVRComponent_SetCameraCaptureState(*v5, *v6, *v7, v10);
}
