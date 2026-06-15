/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMulticastProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DEDF4
 * Callers:
 *     ??0BluetoothBroadcastProvider@@QEAA@XZ @ 0x1800DEE60 (--0BluetoothBroadcastProvider@@QEAA@XZ.c)
 *     ??0DummyBroadcastProvider@@QEAA@XZ @ 0x1800F67CC (--0DummyBroadcastProvider@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMulticastProvider>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMulticastProvider>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMulticastProvider>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
