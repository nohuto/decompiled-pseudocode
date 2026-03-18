/*
 * XREFs of DxgkSetDeviceCandidateTarget @ 0x140059398
 * Callers:
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x14030C9B4 (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 * Callees:
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400593B8 (DpiFdoIsMsBddAnchoredDevice.c)
 */

__int64 DxgkSetDeviceCandidateTarget()
{
  __int64 result; // rax
  int v1; // edx

  result = DpiFdoIsMsBddAnchoredDevice();
  if ( (_BYTE)result )
    dword_14015E154 = v1;
  return result;
}
