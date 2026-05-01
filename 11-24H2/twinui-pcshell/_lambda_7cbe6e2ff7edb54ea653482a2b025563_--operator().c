/*
 * XREFs of _lambda_7cbe6e2ff7edb54ea653482a2b025563_::operator() @ 0x18031559C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___::Run @ 0x180318F90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7cbe6e2ff7edb54ea653482a2b025563___--Run.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18005C784 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 */

void __fastcall lambda_7cbe6e2ff7edb54ea653482a2b025563_::operator()(__int64 a1)
{
  char v2; // r15
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  void **v8; // r14
  unsigned __int8 *v9; // rsi
  unsigned __int8 *v10; // rdi
  char v11; // al
  int v12; // eax
  const unsigned __int16 *v13; // r9
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-20h]
  __int64 i; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = **(_QWORD **)(*(_QWORD *)a1 + 264LL);
  for ( i = v3; ; v3 = i )
  {
    if ( v3 == *(_QWORD *)(*(_QWORD *)a1 + 264LL) )
    {
      v10 = (unsigned __int8 *)(a1 + 17);
      v9 = (unsigned __int8 *)(a1 + 16);
      v8 = (void **)(a1 + 8);
      goto LABEL_13;
    }
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v14, (_QWORD *)(v3 + 40));
    v7 = v14;
    v8 = (void **)(a1 + 8);
    if ( *(_QWORD *)v14 == *(_QWORD *)(a1 + 8) )
      break;
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
      &i,
      v4,
      v5,
      v6);
  }
  v9 = (unsigned __int8 *)(a1 + 16);
  v2 = 1;
  v10 = (unsigned __int8 *)(a1 + 17);
  v11 = *(_BYTE *)(a1 + 17);
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_DWORD *)(v14 + 56) &= ~0x40u;
    v12 = v11 != 0 ? 0x40 : 0;
  }
  else
  {
    *(_DWORD *)(v14 + 56) &= ~0x10u;
    v12 = v11 != 0 ? 0x10 : 0;
  }
  *(_DWORD *)(v7 + 56) |= v12;
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
LABEL_13:
  v13 = L"hWnd found";
  if ( !v2 )
    v13 = L"hWnd not found";
  GameDVRTraceProvider::BroadcastDVRComponent_SetCameraCaptureState(*v8, *v9, *v10, v13);
}
