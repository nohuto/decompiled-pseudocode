/*
 * XREFs of DxgkSetDeviceCandidateTarget @ 0x140058E58
 * Callers:
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x14037C12C (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 * Callees:
 *     DpiFdoIsMsBddAnchoredDevice @ 0x140058E78 (DpiFdoIsMsBddAnchoredDevice.c)
 */

__int64 DxgkSetDeviceCandidateTarget()
{
  __int64 result; // rax
  int v1; // edx

  result = DpiFdoIsMsBddAnchoredDevice();
  if ( (_BYTE)result )
    dword_140161114 = v1;
  return result;
}
