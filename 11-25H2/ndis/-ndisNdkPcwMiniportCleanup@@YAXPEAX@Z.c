/*
 * XREFs of ?ndisNdkPcwMiniportCleanup@@YAXPEAX@Z @ 0x14014B5E4
 * Callers:
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140185AE0 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x14015DFC0 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall ndisNdkPcwMiniportCleanup(struct _NDIS_NDK_BLOCK *a1)
{
  struct _NDIS_NDK_BLOCK *v2; // rax
  struct _NDIS_NDK_BLOCK **v3; // rdx
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v5, &ndisPcwMutex);
  if ( *((_DWORD *)a1 + 4) )
  {
    v2 = NdkPcwNdkBlockList;
    v3 = &NdkPcwNdkBlockList;
    while ( v2 )
    {
      if ( v2 == a1 )
      {
        *v3 = *(struct _NDIS_NDK_BLOCK **)v2;
        *(_QWORD *)v2 = 0LL;
        goto LABEL_8;
      }
      v3 = (struct _NDIS_NDK_BLOCK **)v2;
      v2 = *(struct _NDIS_NDK_BLOCK **)v2;
    }
    if ( a1 )
      goto LABEL_9;
LABEL_8:
    v4 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 1) = 0LL;
    *((_DWORD *)a1 + 4) = 0;
    KLockHolder::ReleaseExclusive(&v5);
    ndisDereferenceMiniport(v4, 0x5Du);
  }
LABEL_9:
  KLockHolder::~KLockHolder(&v5);
}
