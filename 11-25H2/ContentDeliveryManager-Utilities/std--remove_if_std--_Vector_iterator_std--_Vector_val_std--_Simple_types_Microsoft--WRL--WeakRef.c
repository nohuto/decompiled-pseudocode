/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_7b359f7de2cb9222ee62c5860a33e596___ @ 0x18005F8D0
 * Callers:
 *     ?UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@@Z @ 0x180063980 (-UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAA.c)
 * Callees:
 *     _lambda_7b359f7de2cb9222ee62c5860a33e596_::operator() @ 0x180060408 (_lambda_7b359f7de2cb9222ee62c5860a33e596_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_7b359f7de2cb9222ee62c5860a33e596___(
        char **a1,
        char *a2,
        char *a3,
        __int64 a4)
{
  char *v6; // rsi
  char *v8; // r14
  __int64 *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  char **result; // rax
  char v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  v14 = a4;
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      v8 = v6 + 8;
      if ( (unsigned __int8)lambda_7b359f7de2cb9222ee62c5860a33e596_::operator()(&v14, v6) )
        break;
      v6 += 8;
      if ( v8 == a3 )
        goto LABEL_13;
    }
    v14 = a4;
    while ( v8 != a3 )
    {
      if ( !(unsigned __int8)lambda_7b359f7de2cb9222ee62c5860a33e596_::operator()(&v14, v8) )
      {
        v9 = (__int64 *)v6;
        v6 += 8;
        v10 = 0LL;
        if ( &v13 != v8 )
        {
          v10 = *(_QWORD *)v8;
          *(_QWORD *)v8 = 0LL;
        }
        v11 = *v9;
        *v9 = v10;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v8 += 8;
    }
  }
LABEL_13:
  result = a1;
  *a1 = v6;
  return result;
}
