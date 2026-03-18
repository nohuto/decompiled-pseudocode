/*
 * XREFs of DxgkIsLiveMigrationInterfaceSupported @ 0x140068770
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x140404394 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DxgkIsLiveMigrationInterfaceSupported(_QWORD *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( a1[201] && a1[204] && a1[202] && a1[205] && a1[203] && a1[206] && a1[207] )
  {
    if ( a1[208] )
      return a1[209] != 0LL;
  }
  return result;
}
