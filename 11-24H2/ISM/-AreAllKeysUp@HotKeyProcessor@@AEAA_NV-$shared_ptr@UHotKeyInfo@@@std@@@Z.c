/*
 * XREFs of ?AreAllKeysUp@HotKeyProcessor@@AEAA_NV?$shared_ptr@UHotKeyInfo@@@std@@@Z @ 0x1801CAA4C
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801CAB08 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

bool __fastcall HotKeyProcessor::AreAllKeysUp(__int64 a1, _QWORD *a2)
{
  bool v2; // bl
  std::_Ref_count_base *v3; // rcx

  v2 = 0;
  if ( *(char *)(*(unsigned int *)(*a2 + 28LL) + a1 + 56) >= 0 )
    v2 = (*(_DWORD *)(a1 + 312) & *(_DWORD *)(*a2 + 20LL)) == 0;
  v3 = (std::_Ref_count_base *)a2[1];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return v2;
}
