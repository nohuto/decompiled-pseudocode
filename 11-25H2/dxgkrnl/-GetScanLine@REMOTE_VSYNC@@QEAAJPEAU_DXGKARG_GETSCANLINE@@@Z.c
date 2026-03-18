/*
 * XREFs of ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1401EE130
 * Callers:
 *     DxgkGetScanLine @ 0x140342C80 (DxgkGetScanLine.c)
 * Callees:
 *     ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x14027B6C8 (-GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z.c)
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1403D1878 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 */

__int64 __fastcall REMOTE_VSYNC::GetScanLine(BLTQUEUE **this, struct _DXGKARG_GETSCANLINE *a2)
{
  __int64 result; // rax

  result = REMOTE_VSYNC::EnsureEmulationRunning((REMOTE_VSYNC *)this);
  if ( (int)result >= 0 )
  {
    BLTQUEUE::GetScanLineEmulation(this[1], &a2->ScanLine, &a2->InVerticalBlank);
    return 0LL;
  }
  return result;
}
