/*
 * XREFs of ??1?$ComPtr@VSpatialAudioDeviceStateWriter@@@WRL@Microsoft@@QEAA@XZ @ 0x180060154
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDeviceStateWriter_SpatialAudioDeviceStateWriter_unsigned_short_const___&_IPropertyStore___&__::_1_::dtor$1 @ 0x18016AD25 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDeviceStateWriter_SpatialAu_ea_18016AD25.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<SpatialAudioDeviceStateWriter>::~ComPtr<SpatialAudioDeviceStateWriter>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(result + 568) + 16LL))(result + 568);
  }
  return result;
}
