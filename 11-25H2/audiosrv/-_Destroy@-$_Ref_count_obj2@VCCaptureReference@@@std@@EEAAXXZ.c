/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VCCaptureReference@@@std@@EEAAXXZ @ 0x1801042B0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18001681C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z @ 0x1800751D4 (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall std::_Ref_count_obj2<CCaptureReference>::_Destroy(__int64 a1)
{
  std::_Mutex_base *v1; // rbp
  char v2; // bl
  char v3; // di
  unsigned int v4; // esi

  v1 = *(std::_Mutex_base **)(a1 + 16);
  v2 = *(_BYTE *)(a1 + 29);
  v3 = *(_BYTE *)(a1 + 28);
  v4 = *(_DWORD *)(a1 + 24);
  std::_Mutex_base::lock(v1);
  CCaptureNotifier::UpdateAudioCaptureStatus(v1, 1, v4, v3, v2);
  return _Mtx_unlock(v1);
}
