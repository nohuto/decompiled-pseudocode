/*
 * XREFs of ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x14014839C
 * Callers:
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140185AE0 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x14014474C (-Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x14015DFC0 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall ndisPDCleanupPDBlock(struct _NDIS_PD_BLOCK *a1)
{
  void *v2; // rcx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  char v7[4]; // [rsp+38h] [rbp-30h]
  KLockHolder v8; // [rsp+40h] [rbp-28h] BYREF

  v2 = (void *)*((_QWORD *)a1 + 3);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)a1 + 3) = 0LL;
    *((_DWORD *)a1 + 8) = 0;
    *((_DWORD *)a1 + 9) = 0;
  }
  v3 = *((_QWORD *)a1 + 9);
  if ( v3 )
  {
    KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v8, qword_140127008);
    v4 = (_QWORD *)((char *)a1 + 56);
    v5 = *((_QWORD *)a1 + 7);
    if ( *(struct _NDIS_PD_BLOCK **)(v5 + 8) != (struct _NDIS_PD_BLOCK *)((char *)a1 + 56)
      || (v6 = (_QWORD *)*((_QWORD *)a1 + 8), (_QWORD *)*v6 != v4) )
    {
      __fastfail(3u);
    }
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *v4 = 0LL;
    KLockHolder::ReleaseExclusive(&v8);
    *((_QWORD *)a1 + 9) = 0LL;
    (*(void (__fastcall **)(_QWORD))(v3 + 72))(*((_QWORD *)a1 + 10));
    *((_QWORD *)a1 + 10) = 0LL;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v7 = *(_DWORD *)(v3 + 24);
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x1Du,
        0xAu,
        (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
        *(_QWORD *)a1,
        v3,
        *(_DWORD *)v7);
    }
    NDIS_PD_BM_DOMAIN::Deref((NDIS_PD_BM_DOMAIN *)v3);
    KLockHolder::~KLockHolder(&v8);
  }
  *(_WORD *)((char *)a1 + 13) = 0;
  *((_DWORD *)a1 + 5) = 0;
}
