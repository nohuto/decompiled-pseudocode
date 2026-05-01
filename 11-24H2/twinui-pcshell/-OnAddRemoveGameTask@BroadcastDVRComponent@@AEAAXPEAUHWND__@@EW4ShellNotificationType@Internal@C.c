/*
 * XREFs of ?OnAddRemoveGameTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@EW4ShellNotificationType@Internal@Capture@Media@Windows@@E@Z @ 0x180317BB0
 * Callers:
 *     ?RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z @ 0x1803189B4 (-RefreshGameListsTask@BroadcastDVRComponent@@AEAAX_N@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___::Run @ 0x180318F30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7___--Run.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800479B8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAA@XZ @ 0x18005C468 (--1-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRActiveAppInfo@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18005C784 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ??$make_pair@AEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@AEAV?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@YA?AU?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@0@AEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@AEAV?$shared_ptr@UBroadcastDVRActiveAppInfo@@@0@@Z @ 0x1801CDC0C (--$make_pair@AEAV-$ComPtr@UIApplicationView@@@WRL@Microsoft@@AEAV-$shared_ptr@UBroadcastDVRActiv.c)
 *     ??$?4U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801D4A30 (--$-4U-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastD_ea_1801D4A30.c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x180232248 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 *     ?BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z @ 0x180315F5C (-BroadcastDVRComponent_OnAddRemoveGameTask@GameDVRTraceProvider@@SAXPEAXK@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::OnAddRemoveGameTask(__int64 a1, void *a2, char a3, int a4, char a5)
{
  int v9; // r9d
  __int64 v10; // rax
  _QWORD *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  std::_Ref_count_base *v15; // rsi
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  unsigned int v24; // esi
  __int64 *v25; // rax
  std::_Ref_count_base *v26; // rdi
  __int64 v27; // [rsp+30h] [rbp-40h] BYREF
  std::_Ref_count_base *v28[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v29; // [rsp+48h] [rbp-28h] BYREF
  std::_Ref_count_base *v30; // [rsp+50h] [rbp-20h]
  __int64 v31[3]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+30h] BYREF

  *(_OWORD *)v28 = 0LL;
  v27 = 0LL;
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v29, (_QWORD *)(a1 + 312));
  GameDVRTraceProvider::BroadcastDVRComponent_OnAddRemoveGameTask(a2, v9);
  v10 = **(_QWORD **)(a1 + 264);
  v32 = v10;
  while ( v10 != *(_QWORD *)(a1 + 264) )
  {
    v11 = (_QWORD *)(v10 + 32);
    std::shared_ptr<FlyoutView>::operator=(v28, (_QWORD *)(v10 + 40));
    v15 = v28[0];
    if ( *(void **)v28[0] == a2 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v27, v11);
      *((_BYTE *)v15 + 16) = a3 != 0;
      v16 = *((_DWORD *)v15 + 14) ^ (*((_DWORD *)v15 + 14) ^ (32 * *(unsigned __int8 *)(a1 + 451))) & 0x20;
      *((_DWORD *)v15 + 14) = v16;
      v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(*(_BYTE *)(a1 + 452) << 6)) & 0x40;
      *((_DWORD *)v15 + 14) = v17;
      v18 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(8 * *(_BYTE *)(a1 + 449))) & 8;
      *((_DWORD *)v15 + 14) = v18;
      v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(16 * *(_BYTE *)(a1 + 450))) & 0x10;
      *((_DWORD *)v15 + 14) = v19;
      *((_DWORD *)v15 + 15) = 0;
      LOBYTE(v32) = (v19 & 2) != 0;
      v20 = (*((_BYTE *)v15 + 16) != 0) | 0x40;
      if ( !*((_BYTE *)v15 + 18) )
        v20 = *((_BYTE *)v15 + 16) != 0;
      v21 = v20 | 2;
      if ( (v19 & 8) == 0 )
        v21 = v20;
      v22 = v21 | 4;
      if ( (v19 & 0x10) == 0 )
        v22 = v21;
      v23 = v22 | 8;
      if ( (v19 & 0x20) == 0 )
        v23 = v22;
      v24 = v23 | 0x10;
      if ( (v19 & 0x40) == 0 )
        v24 = v23;
      if ( a3 )
      {
        v25 = std::make_pair<Microsoft::WRL::ComPtr<IApplicationView> &,std::shared_ptr<BroadcastDVRActiveAppInfo> &>(
                v31,
                &v27,
                (__int64 *)v28);
        std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>,0>(
          (__int64 *)(a1 + 280),
          v25);
        std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::~pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>(v31);
        v26 = v28[0];
        if ( *(_BYTE *)(a1 + 433) )
        {
          BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 2, v28[0], v24, 0, &v32);
          if ( (_BYTE)v32 )
            *((_DWORD *)v26 + 14) ^= (*((_DWORD *)v26 + 14) ^ (2 * (unsigned __int8)v32)) & 2;
        }
        if ( a5 )
        {
          BroadcastDVRComponent::SendShellNotificationToDVR2(a1, a4, v26, v24, 0, &v32);
          if ( (_BYTE)v32 )
            *((_DWORD *)v26 + 14) ^= (*((_DWORD *)v26 + 14) ^ (2 * (unsigned __int8)v32)) & 2;
        }
      }
      break;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
      &v32,
      v12,
      v13,
      v14);
    v10 = v32;
  }
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
  if ( v28[1] )
    std::_Ref_count_base::_Decref(v28[1]);
}
