/*
 * XREFs of ?push_back@?$vector@UDWM_CAPTURE_TOKEN@@V?$allocator@UDWM_CAPTURE_TOKEN@@@std@@@std@@QEAAX$$QEAUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B5740
 * Callers:
 *     ?OnProcessDisconnected@CCaptureManager@@UEAAJK@Z @ 0x1800AEE60 (-OnProcessDisconnected@CCaptureManager@@UEAAJK@Z.c)
 *     ?StopCapturesForWindow@CCaptureManager@@UEAAJPEAUHWND__@@@Z @ 0x1800B1870 (-StopCapturesForWindow@CCaptureManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<DWM_CAPTURE_TOKEN>::push_back(__int64 a1, char **a2)
{
  char **v3; // rdx
  char *result; // rax

  v3 = *(char ***)(a1 + 8);
  if ( v3 == *(char ***)(a1 + 16) )
    return std::vector<CVisualProxy *>::_Emplace_reallocate<CVisualProxy * const &>((void **)a1, (__int64)v3, a2);
  result = *a2;
  *v3 = *a2;
  *(_QWORD *)(a1 + 8) += 8LL;
  return result;
}
