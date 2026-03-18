/*
 * XREFs of ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00EDB04
 * Callers:
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x1C0015414 (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1C002366C (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C0041350 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x1C005D564 (-EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z.c)
 *     CreateVisRgnTracker @ 0x1C00ABD58 (CreateVisRgnTracker.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x1C00EBFF8 (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C021BB58 (UserSetWindowedSwapChain.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C021F838 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 * Callees:
 *     UserGetGlobalAtomTableOfWindow @ 0x1C003C084 (UserGetGlobalAtomTableOfWindow.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C003C1E4 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122A54 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowProp::SetProp(CWindowProp *this, __int64 a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rdi
  __int64 v6; // r15
  CWindowProp *v7; // rdi
  unsigned __int16 v8; // ax
  __int64 v9; // rdi
  __int64 v10; // r15
  unsigned int v11; // edi
  __int64 result; // rax
  __int64 GlobalAtomTableOfWindow; // rax
  int v14; // esi
  tagObjLock **v15; // rdi
  int v16; // esi
  tagObjLock **v17; // rdi
  __int128 v18; // [rsp+48h] [rbp-28h] BYREF
  char v19; // [rsp+58h] [rbp-18h]
  char v20; // [rsp+60h] [rbp-10h]

  v4 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  v5 = *(_QWORD *)(a2 + 144);
  v18 = 0LL;
  v19 = 0;
  v6 = v4;
  v20 = 0;
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v20 = 1;
    if ( v5 == gObjDummyLock )
      v5 = 0LL;
    *(_QWORD *)&v18 = v5;
    v14 = 0;
    v15 = (tagObjLock **)&v18;
    do
    {
      if ( *v15 )
        tagObjLock::LockExclusive(*v15);
      ++v14;
      ++v15;
    }
    while ( !v14 );
    v19 = 1;
  }
  if ( (_WORD)v6 == word_1C035E338 )
  {
    LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a2 + 144));
    *(_QWORD *)(*(_QWORD *)(a2 + 40) + 312LL) = 0LL;
  }
  v7 = (CWindowProp *)RealInternalRemoveProp(*(_QWORD *)(a2 + 144), v6, 1LL);
  if ( v20 && v19 )
  {
    if ( (_QWORD)v18 )
      tagObjLock::UnLockExclusive((tagObjLock *)v18);
    v19 = 0;
  }
  if ( v7 && v7 != this )
    (**(void (__fastcall ***)(CWindowProp *))v7)(v7);
  v8 = (*(__int64 (__fastcall **)(CWindowProp *))(*(_QWORD *)this + 8LL))(this);
  v9 = *(_QWORD *)(a2 + 144);
  v18 = 0LL;
  v19 = 0;
  v10 = v8;
  v20 = 0;
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v20 = 1;
    if ( v9 == gObjDummyLock )
      v9 = 0LL;
    *(_QWORD *)&v18 = v9;
    if ( !v19 )
    {
      v16 = 0;
      v17 = (tagObjLock **)&v18;
      do
      {
        if ( *v17 )
          tagObjLock::LockExclusive(*v17);
        ++v16;
        ++v17;
      }
      while ( !v16 );
      v19 = 1;
    }
  }
  if ( !word_1C035E338 )
  {
    GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a2);
    if ( GlobalAtomTableOfWindow )
      word_1C035E338 = UserFindAtomFromAtomTable(GlobalAtomTableOfWindow, L"Microsoft.Windows.WindowFactory.ViewId");
  }
  v11 = RealInternalSetProp(*(_QWORD *)(a2 + 144), v10, this, 32769LL);
  if ( v20 && v19 && (_QWORD)v18 )
    tagObjLock::UnLockExclusive((tagObjLock *)v18);
  result = v11;
  *((_QWORD *)this + 2) = a2 & -(__int64)(v11 != 0);
  return result;
}
