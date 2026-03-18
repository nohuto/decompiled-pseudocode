/*
 * XREFs of ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1401C1998
 * Callers:
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401C127C (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 *     ?TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ @ 0x1401C1AC0 (-TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ.c)
 * Callees:
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x14006D18C (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?NeedLidStateRecovery@DISPLAYDIAGNOSTICADAPTERDATA@@QEAA_NXZ @ 0x1401C18C4 (-NeedLidStateRecovery@DISPLAYDIAGNOSTICADAPTERDATA@@QEAA_NXZ.c)
 */

char __fastcall DISPLAYSTATECHECKER::NeedLidStateRecovery(DISPLAYSTATECHECKER *this)
{
  unsigned int i; // ebx
  DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax

  for ( i = 0; i < *((_DWORD *)this + 3522); ++i )
  {
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, i);
    if ( DISPLAYDIAGNOSTICADAPTERDATA::NeedLidStateRecovery(DisplayAdapterDiagData) )
      return 1;
  }
  return 0;
}
