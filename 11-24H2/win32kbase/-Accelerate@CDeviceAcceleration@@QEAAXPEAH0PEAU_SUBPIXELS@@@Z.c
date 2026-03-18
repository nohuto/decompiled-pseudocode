/*
 * XREFs of ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1400BAD28
 * Callers:
 *     DoAccel @ 0x1400BAA30 (DoAccel.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1400BAA98 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F39BC (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CDeviceAcceleration::Accelerate(CDeviceAcceleration *this, int *a2, int *a3, struct _SUBPIXELS *a4)
{
  unsigned int v4; // esi
  __int64 UserSessionState; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdi
  _DWORD *v17; // r15
  _QWORD **v18; // rdi
  __int64 v19; // rax
  _QWORD *i; // rcx
  _QWORD *v21; // rax
  _DWORD *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r15
  __int64 v33; // r8
  __int64 *v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rbx
  signed __int64 v41; // r10
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 *v46; // [rsp+40h] [rbp-39h] BYREF
  __int64 v47; // [rsp+48h] [rbp-31h] BYREF
  __int64 v48; // [rsp+50h] [rbp-29h] BYREF
  __int64 v49; // [rsp+58h] [rbp-21h]
  __int64 v50; // [rsp+60h] [rbp-19h]
  tagDomLock *v51[2]; // [rsp+68h] [rbp-11h] BYREF
  tagDomLock *v52; // [rsp+78h] [rbp-1h] BYREF
  tagDomLock *v53; // [rsp+80h] [rbp+7h] BYREF
  int v55; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = 0;
  v50 = 0LL;
  UserSessionState = W32GetUserSessionState(this);
  CEResourceLockShared::CEResourceLockShared(
    (CEResourceLockShared *)v51,
    (struct CEResourceLock *)(UserSessionState + 18696));
  v10 = W32GetUserSessionState(v9);
  v51[1] = 0LL;
  v11 = *(_QWORD *)(v10 + 19240);
  v49 = v11;
  v13 = W32GetUserSessionState(v12);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v52, (struct CEResourceLock *)(v13 + 18696));
  v15 = *(_QWORD *)(W32GetUserSessionState(v14) + 18688);
  v16 = *(_QWORD *)(v15 + 24);
  if ( !v16 )
    v16 = v15 + 32;
  v17 = 0LL;
  v18 = (_QWORD **)(v16 + 1456);
  v19 = W32GetUserSessionState(v15);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v53, (struct CEResourceLock *)(v19 + 18696));
  for ( i = *v18; ; i = (_QWORD *)*i )
  {
    v21 = 0LL;
    if ( i != v18 )
      v21 = i + 2;
    if ( !v21 )
      break;
    v22 = 0LL;
    if ( i != v18 )
      v22 = i + 2;
    if ( (int)v11 >= *v22 && (int)v11 < v22[2] && SHIDWORD(v49) >= v22[1] && SHIDWORD(v49) < v22[3] )
    {
      v17 = v22;
      break;
    }
  }
  tagDomLock::UnLockExclusive((PERESOURCE *)v53);
  tagDomLock::UnLockExclusive((PERESOURCE *)v52);
  *(_QWORD *)a4 = 0LL;
  if ( v17 )
  {
    v55 = 0;
    v46 = 0LL;
    v48 = 0LL;
    v47 = 0LL;
    (*(void (__fastcall **)(CDeviceAcceleration *, _DWORD *, int *, __int64 **, __int64 *, __int64 *))(*(_QWORD *)this + 8LL))(
      this,
      v17 + 50,
      &v55,
      &v46,
      &v48,
      &v47);
    v23 = (__int64)*a3 << 16;
    v24 = (__int64)*a2 << 16;
    v25 = -65536LL * *a3;
    v26 = v24;
    if ( v25 < 0 )
      v25 = (__int64)*a3 << 16;
    v27 = -65536LL * *a2;
    if ( v27 < 0 )
      v27 = (__int64)*a2 << 16;
    if ( v27 >= v25 )
      v26 = (__int64)*a3 << 16;
    v28 = -v26;
    if ( v26 > 0 )
      v28 = v26;
    v29 = v28 / 2;
    v30 = (__int64)*a2 << 16;
    if ( v27 <= v25 )
      v30 = (__int64)*a3 << 16;
    v31 = -v30;
    if ( v30 > 0 )
      v31 = v30;
    v32 = v31 + v29;
    if ( v31 + v29 )
    {
      v33 = W32GetUserSessionState(v31) + 19248;
      if ( v55 != 1 )
      {
        v34 = v46;
        do
        {
          if ( v32 <= *v34 )
            break;
          ++v4;
          ++v34;
        }
        while ( v4 < v55 - 1 );
      }
      v35 = v4 - 1;
      v36 = *(unsigned int *)(v33 + 16);
      v37 = *(_QWORD *)(v48 + 8 * v35) + (*(_QWORD *)(v47 + 8 * v35) << 16) / v32;
      if ( (unsigned int)v36 < (unsigned int)v35 )
        v37 = (*(_QWORD *)(v48 + 8LL * *(unsigned int *)(v33 + 16)) + (*(_QWORD *)(v47 + 8 * v36) << 16) / v32 + v37) >> 1;
      *(_DWORD *)(v33 + 16) = v35;
      v38 = *(_QWORD *)v33 + ((v37 * v24) >> 16);
      v39 = -v38;
      v40 = *(_QWORD *)(v33 + 8) + ((v37 * v23) >> 16);
      if ( v38 >= 0 )
      {
        v42 = v38 & 0x7FFFFFFFFFFF0000LL;
        v41 = v38 & 0xFFFFFFFFFFFF0000uLL;
      }
      else
      {
        v41 = v38;
        v42 = -(__int64)(v39 & 0xFFFFFFFFFFFF0000uLL);
      }
      v43 = -(__int64)(v39 & 0xFFFFFFFFFFFF0000uLL);
      *(_QWORD *)v33 = v38 - v42;
      *(_DWORD *)a4 = v38 - v42;
      if ( v38 < 0 )
        v41 = v43;
      *a2 = v41 >> 16;
      if ( v40 >= 0 )
      {
        v45 = v40 & 0x7FFFFFFFFFFF0000LL;
        v44 = -v40;
      }
      else
      {
        v44 = -v40;
        v45 = -(__int64)(-v40 & 0xFFFFFFFFFFFF0000uLL);
      }
      *(_QWORD *)(v33 + 8) = v40 - v45;
      *((_DWORD *)a4 + 1) = v40 - v45;
      if ( v40 < 0 )
        v40 = -(__int64)(v44 & 0xFFFFFFFFFFFF0000uLL);
      *a3 = v40 >> 16;
    }
  }
  tagDomLock::UnLockExclusive((PERESOURCE *)v51[0]);
}
