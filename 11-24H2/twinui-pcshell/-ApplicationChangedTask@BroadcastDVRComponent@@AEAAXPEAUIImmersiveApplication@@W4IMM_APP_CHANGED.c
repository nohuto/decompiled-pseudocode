/*
 * XREFs of ?ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@@Z @ 0x180192B18
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___::Run @ 0x180207270 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2d9789bb2175b1fa91a59323fd187f28___--Run.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800479B8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAA@XZ @ 0x18005C468 (--1-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRActiveAppInfo@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18005C784 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800A6FF0 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x18016EEF4 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$make_pair@AEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@AEAV?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@YA?AU?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@0@AEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@AEAV?$shared_ptr@UBroadcastDVRActiveAppInfo@@@0@@Z @ 0x1801CDC0C (--$make_pair@AEAV-$ComPtr@UIApplicationView@@@WRL@Microsoft@@AEAV-$shared_ptr@UBroadcastDVRActiv.c)
 *     ??$?4U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801D4A30 (--$-4U-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastD_ea_1801D4A30.c)
 *     ??$?4$$T$$T$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@$$QEAU?$pair@$$T$$T@1@@Z @ 0x1801D6BE8 (--$-4$$T$$T$0A@@-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRA.c)
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@@std@@$0A@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x1801EDA5C (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIApplicatio.c)
 *     ?AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18020CF24 (-AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z.c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x180232248 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall BroadcastDVRComponent::ApplicationChangedTask(__int64 a1, __int64 a2, int a3)
{
  struct IApplicationView *v4; // rbx
  struct IApplicationView *v5; // rdi
  __int64 v6; // rax
  char v7; // r13
  __int64 v8; // r12
  std::_Ref_count_base *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rcx
  int (__fastcall *v12)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v13; // rbx
  int (__fastcall *v14)(__int64, __int64 *); // rsi
  __int64 v15; // rsi
  int (__fastcall *v16)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int (__fastcall *v20)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 *v21; // rax
  __int64 v22; // rax
  struct BroadcastDVRActiveAppInfo *v23; // rbx
  int v24; // r10d
  char v25; // dl
  int v26; // ecx
  int v27; // r8d
  int v28; // edx
  unsigned int v29; // ecx
  __int64 v30; // r9
  __int64 v31; // rsi
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  int (__fastcall *v37)(__int64, __int64 *); // rdi
  struct BroadcastDVRActiveAppInfo *v38; // rbx
  char v39; // cl
  int v40; // r10d
  BOOL v41; // eax
  int v42; // ecx
  int v43; // edx
  int v44; // r8d
  unsigned int v45; // ecx
  __int64 v46; // r9
  __int64 v47; // [rsp+30h] [rbp-39h] BYREF
  __int64 v48; // [rsp+38h] [rbp-31h] BYREF
  __int64 v49; // [rsp+40h] [rbp-29h] BYREF
  struct IApplicationView *v50; // [rsp+48h] [rbp-21h] BYREF
  struct BroadcastDVRActiveAppInfo *v51; // [rsp+50h] [rbp-19h] BYREF
  std::_Ref_count_base *v52; // [rsp+58h] [rbp-11h]
  __int64 v53; // [rsp+60h] [rbp-9h] BYREF
  __int64 v54[11]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v55; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v56; // [rsp+D8h] [rbp+6Fh]
  int v57; // [rsp+E0h] [rbp+77h]
  int v58; // [rsp+E8h] [rbp+7Fh] BYREF

  v57 = a3;
  v56 = a2;
  v49 = 0LL;
  v47 = 0LL;
  v4 = *(struct IApplicationView **)(a1 + 304);
  v5 = v4;
  v50 = v4;
  if ( v4 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v4 + 8LL))(v4);
  v6 = *(_QWORD *)(a1 + 320);
  v7 = 1;
  if ( v6 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
    v5 = v50;
  }
  v8 = *(_QWORD *)(a1 + 312);
  v51 = (struct BroadcastDVRActiveAppInfo *)v8;
  v9 = *(std::_Ref_count_base **)(a1 + 320);
  v52 = v9;
  v58 = 0;
  if ( v4
    && (v12 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v5,
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49),
        v12(v5, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v49) >= 0)
    && (v13 = v49,
        v14 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v49 + 24LL),
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v47),
        v14(v13, &v47) >= 0)
    && (v15 = v56, (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v47 + 104LL))(v47, v56, &v58) >= 0)
    && v58 )
  {
    if ( v57 == 8 )
    {
      v53 = 0LL;
      v48 = 0LL;
      v16 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v15 + 24LL);
      v17 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v48);
      if ( v16(v15, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v17) >= 0
        && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 32LL))(v48, &v53) >= 0
        && v8
        && v53 != *(_QWORD *)v8 )
      {
        *(_QWORD *)v8 = v53;
        v20 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v15 + 24LL);
        v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v48);
        if ( v20(v15, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v21) >= 0 )
        {
          v55 = 0LL;
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 32LL))(v48, &v55);
          *(_QWORD *)(v8 + 8) = v55;
        }
        if ( *(_BYTE *)(v8 + 16) )
        {
          v22 = std::make_pair<Microsoft::WRL::ComPtr<IApplicationView> &,std::shared_ptr<BroadcastDVRActiveAppInfo> &>(
                  v54,
                  &v50,
                  &v51);
          std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>,0>(
            a1 + 280,
            v22);
          std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::~pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>(v54);
          v23 = v51;
          v24 = *((_DWORD *)v51 + 14);
          LOBYTE(v55) = (v24 & 2) != 0;
          v25 = *((_BYTE *)v51 + 16);
          if ( !v25 || (v24 & 2) != 0 )
            v7 = 0;
          v26 = (v25 != 0) | 0x40;
          if ( !*((_BYTE *)v51 + 18) )
            v26 = v25 != 0;
          v27 = v26 | 2;
          if ( (v24 & 8) == 0 )
            v27 = v26;
          v28 = v27 | 4;
          if ( (v24 & 0x10) == 0 )
            v28 = v27;
          v29 = v28 | 8;
          if ( (v24 & 0x20) == 0 )
            v29 = v28;
          v30 = v29 | 0x10;
          if ( (*((_BYTE *)v51 + 56) & 0x40) == 0 )
            v30 = v29;
          BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 2LL, v51, v30, v7, &v55);
          if ( (_BYTE)v55 )
            *((_DWORD *)v23 + 14) |= 2u;
          v5 = v50;
          BroadcastDVRComponent::EvaluateAppForGameMode((HSTRING **)a1, v50, (HWND *)v23);
          if ( (*((_DWORD *)v23 + 14) & 0x104) == 0 )
            BroadcastDVRComponent::AddGameToMruList((BroadcastDVRComponent *)a1, v23);
          v9 = v52;
        }
      }
      v18 = v48;
      if ( v48 )
      {
        v48 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
    else if ( v57 == 6 )
    {
      v31 = **(_QWORD **)(a1 + 264);
      v55 = v31;
      v32 = v56;
      while ( 1 )
      {
        if ( v31 == *(_QWORD *)(a1 + 264) )
        {
          v5 = v50;
          goto LABEL_26;
        }
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v50, (_QWORD *)(v31 + 32));
        if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v50,
                    &v49) >= 0 )
        {
          LODWORD(v48) = 0;
          v36 = v49;
          v37 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v49 + 24LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v47);
          if ( v37(v36, &v47) >= 0
            && (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v47 + 104LL))(v47, v32, &v48) >= 0
            && (_DWORD)v48 )
          {
            break;
          }
        }
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
          &v55,
          v33,
          v34,
          v35);
        v31 = v55;
      }
      std::shared_ptr<FlyoutView>::operator=(&v51, (_QWORD *)(v31 + 40));
      v38 = v51;
      if ( *(_QWORD *)v51 )
      {
        v39 = *((_BYTE *)v51 + 16);
        if ( v39 || (*((_BYTE *)v51 + 56) & 2) != 0 )
        {
          v40 = *((_DWORD *)v51 + 14);
          LOBYTE(v55) = (v40 & 2) != 0;
          v41 = v39 != 0;
          v42 = v41 | 0x40;
          if ( !*((_BYTE *)v51 + 18) )
            v42 = v41;
          v43 = v42 | 2;
          if ( (v40 & 8) == 0 )
            v43 = v42;
          v44 = v43 | 4;
          if ( (v40 & 0x10) == 0 )
            v44 = v43;
          v45 = v44 | 8;
          if ( (v40 & 0x20) == 0 )
            v45 = v44;
          v46 = v45 | 0x10;
          if ( (v40 & 0x40) == 0 )
            v46 = v45;
          BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 1LL, v51, v46, 0, &v55);
        }
      }
      v5 = v50;
      if ( v50 == *(struct IApplicationView **)(a1 + 280) )
        std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::nullptr_t,std::nullptr_t,0>(a1 + 280);
      if ( v5 == *(struct IApplicationView **)(a1 + 304) )
        std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::nullptr_t,std::nullptr_t,0>(a1 + 304);
      if ( *((_BYTE *)v38 + 20) )
        --*(_DWORD *)(a1 + 460);
      std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>,0>>::erase<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>>,0>(
        a1 + 264,
        &v53,
        v31);
      v9 = v52;
    }
LABEL_26:
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    if ( v5 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v5 + 16LL))(v5);
    v19 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  else
  {
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    if ( v5 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v5 + 16LL))(v5);
    v10 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v11 = v49;
  if ( v49 )
  {
    v49 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
}
