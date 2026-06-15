/*
 * XREFs of ??0DeactivatableDuckingDescriptor@@QEAA@PEAUIDuckingController@@AEBV?$shared_ptr@VDuckingDescriptor@@@std@@@Z @ 0x18002EB70
 * Callers:
 *     ??$_Construct_in_place@VDeactivatableDuckingDescriptor@@AEAPEAUIDuckingController@@AEAV?$shared_ptr@VDuckingDescriptor@@@std@@@std@@YAXAEAVDeactivatableDuckingDescriptor@@AEAPEAUIDuckingController@@AEAV?$shared_ptr@VDuckingDescriptor@@@0@@Z @ 0x18002E30C (--$_Construct_in_place@VDeactivatableDuckingDescriptor@@AEAPEAUIDuckingController@@AEAV-$shared_.c)
 * Callees:
 *     ??0?$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioStreamInfo@@@Z @ 0x180018990 (--0-$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioStreamInfo@@@.c)
 */

_QWORD *__fastcall DeactivatableDuckingDescriptor::DeactivatableDuckingDescriptor(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax

  *a1 = &DeactivatableDuckingDescriptor::`vftable';
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = a3[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  a1[1] = *a3;
  a1[2] = a3[1];
  wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>(
    a1 + 3,
    a2);
  return a1;
}
