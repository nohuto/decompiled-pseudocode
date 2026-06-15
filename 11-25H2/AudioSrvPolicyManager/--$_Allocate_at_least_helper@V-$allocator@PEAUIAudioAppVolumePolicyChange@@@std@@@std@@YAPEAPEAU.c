/*
 * XREFs of ??$_Allocate_at_least_helper@V?$allocator@PEAUIAudioAppVolumePolicyChange@@@std@@@std@@YAPEAPEAUIAudioAppVolumePolicyChange@@AEAV?$allocator@PEAUIAudioAppVolumePolicyChange@@@0@AEA_K@Z @ 0x1800327A4
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@AEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x1800327FC (--$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@-$vector@PEAUIMixedR.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180018D48 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 */

_QWORD *__fastcall std::_Allocate_at_least_helper<std::allocator<IAudioAppVolumePolicyChange *>>(
        __int64 a1,
        unsigned __int64 *a2)
{
  SIZE_T size_of; // rax

  size_of = std::_Get_size_of_n<8>(*a2);
  return std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
}
