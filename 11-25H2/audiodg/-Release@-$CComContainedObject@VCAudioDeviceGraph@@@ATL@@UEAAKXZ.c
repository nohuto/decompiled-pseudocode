/*
 * XREFs of ?Release@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x14005DC70
 * Callers:
 *     ?Release@?$CComContainedObject@VCStreamInstance@@@ATL@@W7EAAKXZ @ 0x14005DCA0 (-Release@-$CComContainedObject@VCStreamInstance@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ @ 0x14005DCB0 (-Release@-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComContainedObject<CAudioDeviceGraph>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
}
