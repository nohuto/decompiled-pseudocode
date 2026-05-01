/*
 * XREFs of ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAI@Z @ 0x18047096C
 * Callers:
 *     _lambda_4ce12a90e81ea4b4c570078f6f58eac4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180467E10 (_lambda_4ce12a90e81ea4b4c570078f6f58eac4_--operator()_winrt--WindowsUdk--UI--Shell-_ea_180467E10.c)
 *     ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@UEAAJIPEAIPEAE@Z @ 0x180470A60 (-GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@UEAAJIPEAIPEAE@Z.c)
 * Callees:
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800479B8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x1800ABF80 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@1@AEBI@Z @ 0x1801F5558 (--$find@X@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$al.c)
 */

char __fastcall TouchKeyboardExperienceManager::GetApplicationViewIdIfExists(
        RTL_SRWLOCK *this,
        int a2,
        unsigned int *a3)
{
  KBViewInfo **Ptr; // rbp
  KBViewInfo **v7; // rdi
  KBViewInfo *v8; // rbx
  std::_Ref_count_base *v10[2]; // [rsp+20h] [rbp-38h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  *a3 = -1;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, this + 53);
  Ptr = (KBViewInfo **)this[55].Ptr;
  v7 = (KBViewInfo **)this[54].Ptr;
  *(_OWORD *)v10 = 0LL;
  v12 = a2;
  while ( v7 != Ptr )
  {
    if ( KBViewInfo::IsValid(*v7) )
    {
      v8 = *v7;
      if ( *std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::find<void>(
              (_QWORD *)*v7 + 5,
              &v13,
              &v12) != *((_QWORD *)v8 + 6) )
        break;
    }
    v7 += 2;
  }
  if ( v7 == this[55].Ptr )
  {
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return 0;
  }
  else
  {
    std::shared_ptr<FlyoutView>::operator=(v10, v7);
    *a3 = *((_DWORD *)v10[0] + 26);
    if ( v10[1] )
      std::_Ref_count_base::_Decref(v10[1]);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return 1;
  }
}
