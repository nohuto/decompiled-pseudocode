/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VCPlaybackReference@@@std@@EEAAXXZ @ 0x180016160
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x180016224 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18001681C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall std::_Ref_count_obj2<CPlaybackReference>::_Destroy(__int64 a1)
{
  __int64 v1; // rbx
  std::_Mutex_base *v2; // rdi

  v1 = a1 + 16;
  v2 = *(std::_Mutex_base **)(a1 + 128);
  std::_Mutex_base::lock(v2);
  CPlaybackNotifier::UpdateAudioPlaybackStatus(v2, 1LL, v1);
  return _Mtx_unlock(v2);
}
