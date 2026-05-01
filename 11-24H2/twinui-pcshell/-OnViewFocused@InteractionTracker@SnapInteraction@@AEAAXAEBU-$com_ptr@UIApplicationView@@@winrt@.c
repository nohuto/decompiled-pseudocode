/*
 * XREFs of ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800473FC
 * Callers:
 *     ?OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180046F10 (-OnApplicationViewChanged@InteractionTracker@SnapInteraction@@UEAAJPEAUIApplicationView@@W4APPLI.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800479B8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180048BC0 (-IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?HasInteraction@InteractionRecord@SnapInteraction@@QEAA_NXZ @ 0x180048CC8 (-HasInteraction@InteractionRecord@SnapInteraction@@QEAA_NXZ.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180048D98 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU-$com_ptr@UIApplicationView@@@winrt.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x1801AEA80 (-IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 *     ?EnsureUpdateTimer@InteractionTracker@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1802022EC (-EnsureUpdateTimer@InteractionTracker@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180319DF4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ?EndInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805A9548 (-EndInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$.c)
 *     ?StartInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805A96F4 (-StartInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall SnapInteraction::InteractionTracker::OnViewFocused(RTL_SRWLOCK *a1, SnapLayoutHelpers **a2)
{
  _QWORD *Ptr; // rcx
  _QWORD *v5; // r8
  _QWORD *v6; // rdx
  SnapLayoutHelpers *v7; // rax
  __int64 v8; // rax
  RTL_SRWLOCK *v9; // rsi
  volatile signed __int32 *v10; // r14
  char *v11; // rbx
  std::_Ref_count_base *v12; // rcx
  char v13; // al
  _QWORD *v14; // r13
  __int64 *v15; // rax
  _QWORD *v16; // rcx
  SnapLayoutHelpers *v17; // rdx
  __int64 v18; // rdi
  volatile signed __int32 *v19; // rax
  SnapInteraction::InteractionRecord *v20; // r12
  SnapInteraction::InteractionRecord *v21; // rdi
  std::_Ref_count_base *v22; // rbx
  std::_Ref_count_base *v23; // rcx
  char *v24; // rcx
  __int128 v25; // [rsp+20h] [rbp-49h] BYREF
  SnapInteraction::InteractionRecord *v26; // [rsp+30h] [rbp-39h]
  std::_Ref_count_base *v27; // [rsp+38h] [rbp-31h]
  RTL_SRWLOCK *v28; // [rsp+40h] [rbp-29h]
  __int64 v29; // [rsp+48h] [rbp-21h]
  __int128 v30; // [rsp+50h] [rbp-19h] BYREF
  __int128 v31; // [rsp+60h] [rbp-9h]
  _QWORD *v32; // [rsp+70h] [rbp+7h]
  _QWORD *v33; // [rsp+78h] [rbp+Fh]
  int v34; // [rsp+84h] [rbp+1Bh]
  _QWORD *v35; // [rsp+88h] [rbp+1Fh]
  char *v36; // [rsp+D0h] [rbp+67h] BYREF
  char *v37; // [rsp+D8h] [rbp+6Fh] BYREF
  RTL_SRWLOCK *v38; // [rsp+E0h] [rbp+77h]

  LOBYTE(v36) = SnapLayoutHelpers::IsSnappedWindow(*a2, (struct IApplicationView *)a2);
  AcquireSRWLockExclusive(a1 + 13);
  v38 = a1 + 13;
  Ptr = a1[11].Ptr;
  v5 = (_QWORD *)Ptr[1];
  v33 = v5;
  v34 = 0;
  v6 = Ptr;
  v35 = Ptr;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( v5[4] >= (unsigned __int64)v7 )
      {
        v6 = v5;
        v35 = v5;
        v5 = (_QWORD *)*v5;
      }
      else
      {
        v5 = (_QWORD *)v5[2];
      }
    }
    while ( !*((_BYTE *)v5 + 25) );
  }
  if ( *((_BYTE *)v6 + 25) || (unsigned __int64)*a2 < v6[4] )
    v6 = Ptr;
  if ( v6 == Ptr )
  {
    v25 = 0LL;
    v10 = (volatile signed __int32 *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v9 = 0LL;
  }
  else
  {
    v8 = v6[6];
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v9 = (RTL_SRWLOCK *)v6[5];
    *(_QWORD *)&v25 = v9;
    v10 = (volatile signed __int32 *)v6[6];
    *((_QWORD *)&v25 + 1) = v10;
  }
  if ( !v9 )
  {
    v11 = (char *)operator new(0x40uLL);
    v37 = v11;
    *(_OWORD *)v11 = 0LL;
    *((_DWORD *)v11 + 2) = 1;
    *((_DWORD *)v11 + 3) = 1;
    *(_QWORD *)v11 = &std::_Ref_count_obj2<SnapInteraction::InteractionRecord>::`vftable';
    v9 = (RTL_SRWLOCK *)(v11 + 16);
    *((_QWORD *)v11 + 2) = *a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v11 + 2);
    *((_WORD *)v11 + 12) = 0;
    v11[40] = 0;
    *((_QWORD *)v11 + 6) = 0LL;
    *((_QWORD *)v11 + 7) = 0LL;
    *(_QWORD *)&v25 = v11 + 16;
    v12 = (std::_Ref_count_base *)v10;
    v10 = (volatile signed __int32 *)v11;
    *((_QWORD *)&v25 + 1) = v11;
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    AcquireSRWLockExclusive((PSRWLOCK)v11 + 7);
    v37 = v11 + 56;
    v13 = (char)v36;
    if ( (_BYTE)v36 == v11[24] )
    {
      if ( v11 != (char *)-56LL )
        ReleaseSRWLockExclusive((PSRWLOCK)v11 + 7);
    }
    else
    {
      v11[24] = (char)v36;
      if ( v11[25] )
      {
        v24 = v11 + 16;
        if ( v13 )
          SnapInteraction::InteractionRecord::StartInteraction(v24);
        else
          SnapInteraction::InteractionRecord::EndInteraction(v24);
      }
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)&v37);
    }
    v14 = a1[11].Ptr;
    v15 = (__int64 *)v14[1];
    v31 = (unsigned __int64)v15;
    v16 = v14;
    v32 = v14;
    if ( !*((_BYTE *)v15 + 25) )
    {
      v17 = *a2;
      do
      {
        *(_QWORD *)&v31 = v15;
        if ( v15[4] >= (unsigned __int64)v17 )
        {
          DWORD2(v31) = 1;
          v16 = v15;
          v15 = (__int64 *)*v15;
        }
        else
        {
          DWORD2(v31) = 0;
          v15 = (__int64 *)v15[2];
        }
      }
      while ( !*((_BYTE *)v15 + 25) );
      v32 = v16;
    }
    if ( *((_BYTE *)v16 + 25) || (unsigned __int64)*a2 < v16[4] )
    {
      if ( a1[12].Ptr == (PVOID)0x492492492492492LL )
        std::_Throw_tree_length_error();
      v28 = a1 + 11;
      v18 = std::_Allocate<16,std::_Default_allocate_traits,0>(56LL);
      v29 = v18;
      *(_QWORD *)(v18 + 32) = *a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v18 + 32));
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v18 + 40, &v25);
      *(_QWORD *)v18 = v14;
      *(_QWORD *)(v18 + 8) = v14;
      *(_QWORD *)(v18 + 16) = v14;
      *(_WORD *)(v18 + 24) = 0;
      v30 = v31;
      std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>>::_Insert_node(
        &a1[11],
        &v30,
        v18);
    }
    else
    {
      std::shared_ptr<FlyoutView>::operator=(v16 + 5, &v25);
    }
  }
  AcquireSRWLockExclusive(v9 + 5);
  v36 = (char *)&v9[5];
  if ( BYTE1(v9[1].Ptr) == 1 )
  {
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)&v36);
  }
  else
  {
    BYTE1(v9[1].Ptr) = 1;
    if ( LOBYTE(v9[1].Ptr) )
      SnapInteraction::InteractionRecord::StartInteraction(v9);
    if ( v9 != (RTL_SRWLOCK *)-40LL )
      ReleaseSRWLockExclusive(v9 + 5);
  }
  if ( SnapInteraction::InteractionRecord::HasInteraction((SnapInteraction::InteractionRecord *)v9) )
    SnapInteraction::InteractionTracker::EnsureUpdateTimer(a1);
  v19 = (volatile signed __int32 *)a1[10].Ptr;
  if ( v19 )
  {
    _InterlockedIncrement(v19 + 2);
    v10 = (volatile signed __int32 *)*((_QWORD *)&v25 + 1);
    v9 = (RTL_SRWLOCK *)v25;
  }
  v20 = (SnapInteraction::InteractionRecord *)a1[9].Ptr;
  v21 = v20;
  v26 = v20;
  v22 = (std::_Ref_count_base *)a1[10].Ptr;
  v27 = v22;
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 2);
    v10 = (volatile signed __int32 *)*((_QWORD *)&v25 + 1);
    v9 = (RTL_SRWLOCK *)v25;
    v22 = v27;
    v21 = v26;
  }
  a1[9].Ptr = v9;
  v23 = (std::_Ref_count_base *)a1[10].Ptr;
  a1[10].Ptr = (PVOID)v10;
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
  if ( v20 && v21 != (SnapInteraction::InteractionRecord *)v9 )
    SnapInteraction::InteractionRecord::IsActive(v21, 0);
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
  if ( v10 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v10);
  if ( a1 != (RTL_SRWLOCK *)-104LL )
    ReleaseSRWLockExclusive(a1 + 13);
}
