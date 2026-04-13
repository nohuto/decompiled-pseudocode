/*
 * XREFs of ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005E9A0
 * Callers:
 *     ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180062EA0 (-RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagem.c)
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x18008D1B0 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 *     ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x18008DC18 (-GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::WeakRef::As<IInspectable>(Microsoft::WRL::WeakRef *this, struct IInspectable **a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a2);
  return Microsoft::WRL::WeakRef::InternalResolve(this, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
}
