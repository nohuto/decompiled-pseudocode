/*
 * XREFs of _lambda_7b359f7de2cb9222ee62c5860a33e596_::operator() @ 0x1800608E8
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_7b359f7de2cb9222ee62c5860a33e596___ @ 0x18005FDB0 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005EEF0 (--$As@UISubscriptionPriv@Internal@TargetedContent@ContentManagement@@@WeakRef@WRL@Microsoft@@QEB.c)
 */

bool __fastcall lambda_7b359f7de2cb9222ee62c5860a33e596_::operator()(
        struct IInspectable **a1,
        Microsoft::WRL::WeakRef *a2)
{
  bool v3; // bl
  struct IInspectable *v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v5 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<ContentManagement::TargetedContent::Internal::ISubscriptionPriv>(a2, &v5) >= 0 )
    v3 = *a1 == v5;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v5);
  return v3;
}
