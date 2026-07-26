/*
 * XREFs of ?NdisPDBMRemoveMemberFromDomain@@YAXPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z @ 0x14013E8B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ??3?$KALLOCATOR@$0GNEBEEEO@$00@@SAXPEAX@Z @ 0x1401396A8 (--3-$KALLOCATOR@$0GNEBEEEO@$00@@SAXPEAX@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x14015F780 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall NdisPDBMRemoveMemberFromDomain(struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *a1)
{
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *v2; // rcx
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v3; // rax
  __int64 v4; // rcx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v5, *((struct KPushLockBase **)a1 + 2));
  v2 = *(struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **)a1;
  if ( *(struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **)(*(_QWORD *)a1 + 8LL) != a1
    || (v3 = (struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **)*((_QWORD *)a1 + 1), *v3 != a1) )
  {
    __fastfail(3u);
  }
  *v3 = v2;
  *((_QWORD *)v2 + 1) = v3;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  v4 = *((_QWORD *)a1 + 3);
  if ( v4 )
  {
    (*(void (**)(void))(*(_QWORD *)(v4 + 8) + 8LL))();
    *((_QWORD *)a1 + 3) = 0LL;
  }
  KLockHolder::ReleaseExclusive(&v5);
  KALLOCATOR<1832993870,1>::operator delete(a1);
  KLockHolder::~KLockHolder(&v5);
}
