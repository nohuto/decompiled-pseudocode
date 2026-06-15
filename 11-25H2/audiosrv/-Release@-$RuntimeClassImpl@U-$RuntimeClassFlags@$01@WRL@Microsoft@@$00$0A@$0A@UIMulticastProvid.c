/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMulticastProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E2270
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800DDD08 (--$MakeAndInitialize@VBluetoothBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerN.c)
 *     ??1?$com_ptr_t@VDummyBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800DF614 (--1-$com_ptr_t@VDummyBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VDummyBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800F65EC (--$MakeAndInitialize@VDummyBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerNotif.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18004FFD0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMulticastProvider>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 96LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
