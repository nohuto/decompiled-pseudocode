/*
 * XREFs of ??$As@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005EA10
 * Callers:
 *     _lambda_7b359f7de2cb9222ee62c5860a33e596_::operator() @ 0x180060408 (_lambda_7b359f7de2cb9222ee62c5860a33e596_--operator().c)
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x1800622FC (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::WeakRef::As<ContentManagement::TargetedContent::Internal::ISubscriptionPriv>(
        Microsoft::WRL::WeakRef *this,
        struct IInspectable **a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a2);
  return Microsoft::WRL::WeakRef::InternalResolve(this, &GUID_abd0aea7_14e7_4d83_80d4_ee8a293e8af9, a2);
}
