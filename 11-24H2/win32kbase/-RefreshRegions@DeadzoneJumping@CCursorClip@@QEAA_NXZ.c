/*
 * XREFs of ?RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ @ 0x1400552E0
 * Callers:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x140054FA0 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ @ 0x1400D0AF4 (-Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ.c)
 *     ?CreatePortal@DeadzoneJumping@CCursorClip@@AEAAJPEAURegionInfo@12@0PEAPEAURegionPortal@12@@Z @ 0x1401440BC (-CreatePortal@DeadzoneJumping@CCursorClip@@AEAAJPEAURegionInfo@12@0PEAPEAURegionPortal@12@@Z.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F39BC (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

char __fastcall CCursorClip::DeadzoneJumping::RefreshRegions(CCursorClip::DeadzoneJumping *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // r15
  _QWORD **v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  _QWORD *v13; // rdi
  __int64 v14; // rax
  CCursorClip::DeadzoneJumping *v15; // rcx
  struct CCursorClip::DeadzoneJumping::RegionInfo *v16; // rdi
  struct CCursorClip::DeadzoneJumping::RegionInfo *v17; // rsi
  tagDomLock *v19; // [rsp+28h] [rbp-40h] BYREF
  tagDomLock *v20; // [rsp+30h] [rbp-38h] BYREF
  struct CCursorClip::DeadzoneJumping::RegionPortal *v21; // [rsp+78h] [rbp+10h] BYREF

  CCursorClip::DeadzoneJumping::Cleanup(this);
  v2 = 0;
  UserSessionState = W32GetUserSessionState(v3);
  CEResourceLockShared::CEResourceLockShared(
    (CEResourceLockShared *)&v19,
    (struct CEResourceLock *)(UserSessionState + 18696));
  v6 = *(_QWORD *)(W32GetUserSessionState(v5) + 18688);
  v7 = *(_QWORD *)(v6 + 24);
  if ( !v7 )
    v7 = v6 + 32;
  v8 = 0LL;
  v9 = (_QWORD **)(v7 + 1456);
  v10 = W32GetUserSessionState(v6);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v20, (struct CEResourceLock *)(v10 + 18696));
  v12 = *v9;
  while ( 1 )
  {
    v13 = 0LL;
    if ( v12 != v9 )
      v13 = v12 + 2;
    if ( !v13 )
      break;
    v14 = Win32AllocPoolWithQuotaZInitImpl(v11, 0x28uLL, 0x447A636Au);
    v11 = v14;
    if ( !v14 )
    {
      CCursorClip::DeadzoneJumping::Cleanup(this);
      tagDomLock::UnLockExclusive(v20);
      tagDomLock::UnLockExclusive(v19);
      return 0;
    }
    *(_OWORD *)(v14 + 8) = *(_OWORD *)v13;
    *(_WORD *)(v14 + 32) = *((_WORD *)v13 + 10);
    *(_QWORD *)v14 = 0LL;
    *(_QWORD *)(v14 + 24) = 0LL;
    if ( v8 )
      *v8 = v14;
    else
      *(_QWORD *)this = v14;
    v12 = (_QWORD *)*v12;
    v8 = (_QWORD *)v14;
  }
  tagDomLock::UnLockExclusive(v20);
  v16 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)this;
LABEL_12:
  v17 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)this;
  if ( !v16 )
  {
    v2 = 1;
    goto LABEL_21;
  }
  while ( 1 )
  {
    if ( !v17 )
    {
      v16 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)v16;
      goto LABEL_12;
    }
    if ( v16 != v17 )
      break;
LABEL_18:
    v17 = *(struct CCursorClip::DeadzoneJumping::RegionInfo **)v17;
  }
  v21 = 0LL;
  if ( (int)CCursorClip::DeadzoneJumping::CreatePortal(v15, v16, v17, &v21) >= 0 )
  {
    v15 = v21;
    if ( v21 )
    {
      *(_QWORD *)v21 = *((_QWORD *)v16 + 3);
      *((_QWORD *)v16 + 3) = v15;
    }
    goto LABEL_18;
  }
  CCursorClip::DeadzoneJumping::Cleanup(this);
LABEL_21:
  tagDomLock::UnLockExclusive(v19);
  return v2;
}
