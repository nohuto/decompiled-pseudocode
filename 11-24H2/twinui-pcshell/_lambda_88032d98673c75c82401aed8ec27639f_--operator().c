/*
 * XREFs of _lambda_88032d98673c75c82401aed8ec27639f_::operator() @ 0x1804E0828
 * Callers:
 *     ?BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ @ 0x1804E08D0 (-BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f___::OnStoryboardStatusChanged @ 0x1804E1850 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_3f14cb8a0624f1150359153641_ea_1804E1850.c)
 * Callees:
 *     ??1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ @ 0x1800B3740 (--1_lambda_2982927e39568cdd3df99df702aa65a9_@@QEAA@XZ.c)
 *     ??0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1804E075C (--0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_88032d98673c75c82401aed8ec27639f_::operator()(__int64 a1)
{
  const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *v1; // rdi
  const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *v2; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(const struct ItemAnimationCoordinatorBase::ItemRemovedInfo **)(*(_QWORD *)a1 + 56LL);
  v2 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)((char *)v1 + 16
                                                                                 * *(_QWORD *)(*(_QWORD *)a1 + 64LL));
  while ( v1 != v2 )
  {
    ItemAnimationCoordinatorBase::ItemRemovedInfo::ItemRemovedInfo(
      (ItemAnimationCoordinatorBase::ItemRemovedInfo *)v3,
      v1);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3[0] + 80LL))(v3[0]);
    _lambda_2982927e39568cdd3df99df702aa65a9_::~_lambda_2982927e39568cdd3df99df702aa65a9_((_lambda_2982927e39568cdd3df99df702aa65a9_ *)v3);
    v1 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)((char *)v1 + 16);
  }
}
