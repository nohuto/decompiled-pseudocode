/*
 * XREFs of ?EnsureWorkAreaChangeTransitionRemoved@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x1800E6DE0
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180024708 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18008C524 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND.c)
 * Callees:
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004BFEC (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@UITransition@Transitions@Udwm@winrt@@@std@@@std@@@std@@@1@AEBQEAUHWND__@@@Z @ 0x180080E88 (--$find@X@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransition@Transitions@Udwm@winrt@@V-$_Uhash_com.c)
 *     ??$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z @ 0x180080EEC (--$_Hash_representation@PEAUHWND__@@@std@@YA_KAEBQEAUHWND__@@@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E6970 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::Udwm::Transitions::TransitionManager::EnsureWorkAreaChangeTransitionRemoved(
        winrt::Udwm::Transitions::TransitionManager *this,
        HWND a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // [rsp+30h] [rbp+8h] BYREF
  HWND v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransition,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransition>>,0>>::find<void>(
    (__int64)this + 64,
    (__int64)&v10,
    &v11);
  v3 = v10;
  if ( v10 != *((__int64 **)this + 9) )
  {
    v4 = (__int64 *)v10[3];
    v10 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64 *))(*v4 + 8))(v4);
    v5 = std::_Hash_representation<HWND__ *>((__int64)(v3 + 2));
    v6 = *((_QWORD *)this + 11);
    v7 = 2 * (*((_QWORD *)this + 14) & v5);
    if ( *(__int64 **)(v6 + 16 * (*((_QWORD *)this + 14) & v5) + 8) == v3 )
    {
      if ( *(__int64 **)(v6 + 16 * (*((_QWORD *)this + 14) & v5)) == v3 )
      {
        v8 = *((_QWORD *)this + 9);
        *(_QWORD *)(v6 + 8 * v7) = v8;
      }
      else
      {
        v8 = v3[1];
      }
      *(_QWORD *)(v6 + 8 * v7 + 8) = v8;
    }
    else if ( *(__int64 **)(v6 + 16 * (*((_QWORD *)this + 14) & v5)) == v3 )
    {
      *(_QWORD *)(v6 + 16 * (*((_QWORD *)this + 14) & v5)) = *v3;
    }
    v9 = *v3;
    --*((_QWORD *)this + 10);
    *(_QWORD *)v3[1] = v9;
    *(_QWORD *)(v9 + 8) = v3[1];
    std::_List_node<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>,void *>>>(
      v9,
      (__int64)v3);
    winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v10);
  }
}
