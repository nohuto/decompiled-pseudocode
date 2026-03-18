/*
 * XREFs of ?DxgIsRemoteSession@@YAHXZ @ 0x1403733A4
 * Callers:
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x140187524 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140373174 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1400345DC (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

DXGPROCESS *__fastcall DxgIsRemoteSession(__int64 a1)
{
  DXGPROCESS *result; // rax

  result = DXGPROCESS::GetCurrent(a1);
  if ( result )
    return (DXGPROCESS *)DXGPROCESS::IsRemoteConnection(result);
  return result;
}
