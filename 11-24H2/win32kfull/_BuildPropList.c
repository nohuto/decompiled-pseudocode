/*
 * XREFs of _BuildPropList @ 0x140085418
 * Callers:
 *     NtUserBuildPropList @ 0x140085640 (NtUserBuildPropList.c)
 * Callees:
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1400638D0 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140083708 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x140085600 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall BuildPropList(__int64 a1, char *a2, unsigned int a3, int *a4)
{
  SIZE_T v6; // r14
  char *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rbx
  _DWORD *v10; // rdx
  int v11; // r9d
  __int64 v12; // r8
  int v13; // r10d
  unsigned int v14; // edx
  __int64 v15; // rcx
  _DWORD *v17; // rdx
  int v18; // [rsp+24h] [rbp-94h]
  unsigned int v19; // [rsp+28h] [rbp-90h]
  _BYTE v21[48]; // [rsp+50h] [rbp-68h] BYREF

  v18 = 0;
  v6 = 16LL * a3;
  v7 = &a2[v6 - 16];
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    (__int64)v21,
    *(tagObjLock **)(a1 + 144));
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144), v8);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL);
  if ( v9 )
  {
    v19 = 0;
    ProbeForWrite(a2, v6, 4u);
    v10 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
    v11 = *(_DWORD *)(v9 + 4);
    v12 = v9 + 8;
    v13 = 0;
    v14 = 0;
    while ( v11 )
    {
      if ( &a2[16 * v14] > v7 )
      {
        v14 = 0;
        v19 = -1073741789;
      }
      if ( (*(_BYTE *)(v12 + 10) & 1) == 0 )
      {
        v15 = 2LL * v14;
        *(_QWORD *)&a2[8 * v15] = *(_QWORD *)v12;
        *(_WORD *)&a2[8 * v15 + 8] = *(_WORD *)(v12 + 8);
        ++v14;
        v18 = ++v13;
      }
      v12 += 16LL;
      --v11;
    }
    *a4 = v18;
    SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(v21);
    return v19;
  }
  else
  {
    v17 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v17 = (_DWORD *)MmUserProbeAddress;
    *v17 = 0;
    SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(v21);
    return 0LL;
  }
}
