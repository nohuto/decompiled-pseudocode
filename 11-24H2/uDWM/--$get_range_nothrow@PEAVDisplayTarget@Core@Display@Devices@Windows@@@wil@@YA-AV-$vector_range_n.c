/*
 * XREFs of ??$get_range_nothrow@PEAVDisplayTarget@Core@Display@Devices@Windows@@@wil@@YA?AV?$vector_range_nothrow@U?$IVectorView@PEAVDisplayTarget@Core@Display@Devices@Windows@@@Collections@Foundation@Windows@@@0@PEAU?$IVectorView@PEAVDisplayTarget@Core@Display@Devices@Windows@@@Collections@Foundation@Windows@@PEAJ@Z @ 0x1800A2CC0
 * Callers:
 *     ?OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ @ 0x1800A3B70 (-OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::get_range_nothrow<Windows::Devices::Display::Core::DisplayTarget *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)a1 = a2;
  if ( !a3 )
    a3 = a1 + 24;
  *(_QWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  **(_DWORD **)(a1 + 16) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, a1 + 8);
  return a1;
}
