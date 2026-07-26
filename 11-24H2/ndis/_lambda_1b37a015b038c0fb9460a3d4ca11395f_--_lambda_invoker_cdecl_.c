/*
 * XREFs of _lambda_1b37a015b038c0fb9460a3d4ca11395f_::_lambda_invoker_cdecl_ @ 0x140144450
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x14015DFA0 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14015E250 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x14015F7C0 (-ReleaseShared@KLockHolder@@QEAAXXZ.c)
 *     ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015FAC0 (--0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

__int64 __fastcall lambda_1b37a015b038c0fb9460a3d4ca11395f_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  bool v5; // bl
  __int64 v6; // rdx
  __int64 v7; // r8
  KLockHolder v9; // [rsp+20h] [rbp-28h] BYREF

  KLockThisShared::KLockThisShared((KLockThisShared *)&v9, (struct KPushLockBase *)(qword_14011D080 + 16));
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 40LL);
  v5 = v4 && *(int *)(v4 + 64) < 0;
  KLockHolder::ReleaseShared(&v9);
  if ( v5 )
    Ndis::BindStack::CreateDynamicBinding(a1 + 5016, a2, a1, 8LL);
  KLockHolder::~KLockHolder(&v9);
  return KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(a2, v6, v7);
}
