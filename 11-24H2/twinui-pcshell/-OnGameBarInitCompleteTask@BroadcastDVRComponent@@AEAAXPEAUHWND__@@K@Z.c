/*
 * XREFs of ?OnGameBarInitCompleteTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@K@Z @ 0x180317F08
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___::Run @ 0x180319020 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fcece59bd6baefde14bdaf7e6ba3f6c6___--Run.c)
 * Callees:
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800479B8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18005C784 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?BroadcastDVRComponent_OnGameBarInitCompleteTask@GameDVRTraceProvider@@SAXPEAXI@Z @ 0x180316074 (-BroadcastDVRComponent_OnGameBarInitCompleteTask@GameDVRTraceProvider@@SAXPEAXI@Z.c)
 */

void __fastcall BroadcastDVRComponent::OnGameBarInitCompleteTask(BroadcastDVRComponent *this, HWND a2, int a3)
{
  int v6; // r8d
  HWND *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  HWND *v12; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-10h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v12, (_QWORD *)this + 39);
  GameDVRTraceProvider::BroadcastDVRComponent_OnGameBarInitCompleteTask(a2, v6);
  v7 = v12;
  if ( v12 )
  {
    if ( *v12 == a2 )
    {
      if ( a3 )
LABEL_4:
        *((_DWORD *)v7 + 15) = a3;
    }
    else
    {
      v8 = **((_QWORD **)this + 33);
      v14 = v8;
      while ( v8 != *((_QWORD *)this + 33) )
      {
        std::shared_ptr<FlyoutView>::operator=(&v12, (_QWORD *)(v8 + 40));
        v7 = v12;
        if ( *v12 == a2 )
          goto LABEL_4;
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
          &v14,
          v9,
          v10,
          v11);
        v8 = v14;
      }
    }
  }
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
}
