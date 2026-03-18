/*
 * XREFs of DxgkGetSessionFlipManagerRegistry @ 0x1400707CC
 * Callers:
 *     ?Initialize@CFlipManager@@IEAAJPEAX@Z @ 0x14005B280 (-Initialize@CFlipManager@@IEAAJPEAX@Z.c)
 *     ?FlipManagerCreateFlipObjectHandle@@YAJPEAUFlipManagerObject@@_KPEAPEAX@Z @ 0x14009E430 (-FlipManagerCreateFlipObjectHandle@@YAJPEAUFlipManagerObject@@_KPEAPEAX@Z.c)
 *     ?UnregisterWithRegistry@CFlipManager@@AEAAXXZ @ 0x14009F470 (-UnregisterWithRegistry@CFlipManager@@AEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetFlipManagerRegistry@DXGSESSIONDATA@@QEAAJPEAPEAUIFlipManagerRegistry@@@Z @ 0x1401FADDC (-GetFlipManagerRegistry@DXGSESSIONDATA@@QEAAJPEAPEAUIFlipManagerRegistry@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DxgkGetSessionFlipManagerRegistry(struct IFlipManagerRegistry **a1)
{
  unsigned int v2; // ebx
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax

  v2 = -1073741823;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
    return (unsigned int)DXGSESSIONDATA::GetFlipManagerRegistry(SessionData, a1);
  return v2;
}
