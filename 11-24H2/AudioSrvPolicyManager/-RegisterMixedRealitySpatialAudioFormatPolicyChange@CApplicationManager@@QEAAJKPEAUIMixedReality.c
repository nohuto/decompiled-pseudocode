/*
 * XREFs of ?RegisterMixedRealitySpatialAudioFormatPolicyChange@CApplicationManager@@QEAAJKPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x180038ED8
 * Callers:
 *     ?RegisterMixedRealitySpatialAudioFormatPolicyChange@CWindowsPolicyManager@@UEAAJKPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x180029D70 (-RegisterMixedRealitySpatialAudioFormatPolicyChange@CWindowsPolicyManager@@UEAAJKPEAUIMixedReali.c)
 * Callees:
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A130 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z @ 0x18000D800 (-TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z.c)
 *     ?RegisterMixedRealitySpatialAudioFormatPolicyChange@CProcess@@QEAAJPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x180033748 (-RegisterMixedRealitySpatialAudioFormatPolicyChange@CProcess@@QEAAJPEAUIMixedRealitySpatialAudio.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RegisterMixedRealitySpatialAudioFormatPolicyChange(
        CApplicationManager *this,
        int a2,
        struct IMixedRealitySpatialAudioFormatPolicyChange *a3)
{
  int ProcessFromProcessId; // ebx
  CProcess *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  ProcessFromProcessId = CApplicationManager::TryFindProcessFromProcessId((RTL_SRWLOCK *)g_ApplicationManager, a2, &v6);
  if ( ProcessFromProcessId >= 0 )
  {
    if ( v6 )
      ProcessFromProcessId = CProcess::RegisterMixedRealitySpatialAudioFormatPolicyChange(v6, a3);
    else
      ProcessFromProcessId = -2147023728;
  }
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v6);
  return (unsigned int)ProcessFromProcessId;
}
