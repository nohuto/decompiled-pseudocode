/*
 * XREFs of ?UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180013AE4
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180011C00 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 * Callees:
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180013E84 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 */

void __fastcall MPCHolographicInputManager::UpdateGazeCursor(
        MPCHolographicInputManager *this,
        struct LegacyInputInfo *a2)
{
  if ( *((_DWORD *)a2 + 16) == 8 )
  {
    MPCHolographicInputManager::ProcessCursorData(this, *((_QWORD *)this + 418), (char *)a2 + 240, 0LL);
    memcpy_0((char *)this + 264, a2, 0xBC0uLL);
  }
}
