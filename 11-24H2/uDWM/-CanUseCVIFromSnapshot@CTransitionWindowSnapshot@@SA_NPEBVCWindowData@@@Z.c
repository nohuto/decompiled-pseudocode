/*
 * XREFs of ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x180005458
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180004E74 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180005B60 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x18009AEB4 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
 */

char __fastcall CTransitionWindowSnapshot::CanUseCVIFromSnapshot(const struct CWindowData *a1)
{
  char v1; // r11
  CWindowSnapshot *v3; // r8

  v1 = 0;
  if ( (*((_BYTE *)a1 + 740) & 8) != 0 )
  {
    v3 = (CWindowSnapshot *)*((_QWORD *)a1 + 60);
    if ( v3 )
      return CWindowSnapshot::HasCVIOfCompatibleSize(
               v3,
               (const struct tagRECT *)((char *)a1 + ((*((_DWORD *)a1 + 186) & 0x1000000) != 0 ? 0x2BC : 0) + 48));
  }
  return v1;
}
