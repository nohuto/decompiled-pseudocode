/*
 * XREFs of ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1401289F8
 * Callers:
 *     ResetAccelerationCurves @ 0x1401289C0 (ResetAccelerationCurves.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CEResourceLockExclusive@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F3990 (--0CEResourceLockExclusive@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F39BC (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1401F4000 (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CDeviceAcceleration::ResetAccelerationCurves(CDeviceAcceleration *this)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  _QWORD **v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD **v7; // rdx
  _QWORD *i; // rdi
  _QWORD **v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  tagDomLock *v12; // rbx
  char *v13; // rcx
  struct CInputSpaceRegion *v14; // rax
  tagDomLock *v15[3]; // [rsp+20h] [rbp-58h] BYREF
  tagDomLock *v16; // [rsp+38h] [rbp-40h] BYREF
  tagDomLock *v17; // [rsp+88h] [rbp+10h] BYREF

  UserSessionState = W32GetUserSessionState(this);
  CEResourceLockExclusive::CEResourceLockExclusive(
    (CEResourceLockExclusive *)&v17,
    (struct CEResourceLock *)(UserSessionState + 18696));
  v4 = *(_QWORD ***)(W32GetUserSessionState(v3) + 18688);
  v6 = W32GetUserSessionState(v5);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v16, (struct CEResourceLock *)(v6 + 18696));
  v7 = (_QWORD **)*v4;
  for ( i = (_QWORD *)**v4; ; i = (_QWORD *)*i )
  {
    v9 = 0LL;
    if ( v7 != v4 )
      v9 = v7 + 2;
    if ( !v9 )
      break;
    v10 = 1456LL;
    if ( v7 != v4 )
      v10 = (__int64)(v7 + 184);
    v11 = W32GetUserSessionState(v9);
    CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)v15, (struct CEResourceLock *)(v11 + 18696));
    v12 = *(tagDomLock **)v10;
    v15[1] = (tagDomLock *)v10;
    while ( 1 )
    {
      v13 = 0LL;
      v15[2] = v12;
      if ( v12 != (tagDomLock *)v10 )
        v13 = (char *)v12 + 16;
      if ( !v13 )
        break;
      v14 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v15);
      (**(void (__fastcall ***)(CDeviceAcceleration *, _QWORD, __int64))this)(
        this,
        *((unsigned __int16 *)v14 + 10),
        (__int64)v14 + 200);
      v12 = *(tagDomLock **)v12;
    }
    tagDomLock::UnLockExclusive((PERESOURCE *)v15[0]);
    v7 = (_QWORD **)i;
  }
  tagDomLock::UnLockExclusive((PERESOURCE *)v16);
  tagDomLock::UnLockExclusive((PERESOURCE *)v17);
}
