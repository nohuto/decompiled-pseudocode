/*
 * XREFs of ??1DeactivatableDuckingDescriptor@@UEAA@XZ @ 0x18002ED24
 * Callers:
 *     ??_EDeactivatableDuckingDescriptor@@UEAAPEAXI@Z @ 0x18002F7B0 (--_EDeactivatableDuckingDescriptor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D180 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001765C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall DeactivatableDuckingDescriptor::~DeactivatableDuckingDescriptor(DeactivatableDuckingDescriptor *this)
{
  std::_Ref_count_base *v2; // rcx

  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)this + 3);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  *(_QWORD *)this = &IDuckingDescriptor::`vftable';
}
