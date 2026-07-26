/*
 * XREFs of ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x14014474C
 * Callers:
 *     ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x14014839C (-ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1401485A0 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 * Callees:
 *     ??1NDIS_PD_BM_DOMAIN@@QEAA@XZ @ 0x1401444A0 (--1NDIS_PD_BM_DOMAIN@@QEAA@XZ.c)
 *     ??3?$KALLOCATOR@$0GNEBEEEO@$00@@SAXPEAX@Z @ 0x140144590 (--3-$KALLOCATOR@$0GNEBEEEO@$00@@SAXPEAX@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x14015DFC0 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall NDIS_PD_BM_DOMAIN::Deref(NDIS_PD_BM_DOMAIN *this)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v6, qword_140127008);
  if ( (*(_DWORD *)this)-- == 1 )
  {
    v3 = (_QWORD *)((char *)this + 8);
    v4 = *((_QWORD *)this + 1);
    if ( v4 )
    {
      if ( *(_QWORD **)(v4 + 8) != v3 || (v5 = (_QWORD *)*((_QWORD *)this + 2), (_QWORD *)*v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      *v3 = 0LL;
    }
    KLockHolder::ReleaseExclusive(&v6);
    NDIS_PD_BM_DOMAIN::~NDIS_PD_BM_DOMAIN((void (**)(void))this);
    KALLOCATOR<1832993870,1>::operator delete(this);
  }
  KLockHolder::~KLockHolder(&v6);
}
