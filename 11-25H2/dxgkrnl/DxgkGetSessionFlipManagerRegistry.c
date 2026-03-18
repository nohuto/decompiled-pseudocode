/*
 * XREFs of DxgkGetSessionFlipManagerRegistry @ 0x14006FDFC
 * Callers:
 *     ?Initialize@CFlipManager@@IEAAJPEAX@Z @ 0x14005B880 (-Initialize@CFlipManager@@IEAAJPEAX@Z.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x14005EDD0 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?FlipManagerCreateFlipObjectHandle@@YAJPEAUFlipManagerObject@@_KPEAPEAX@Z @ 0x14009C0D0 (-FlipManagerCreateFlipObjectHandle@@YAJPEAUFlipManagerObject@@_KPEAPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetFlipManagerRegistry@DXGSESSIONDATA@@QEAAJPEAPEAUIFlipManagerRegistry@@@Z @ 0x1401F4594 (-GetFlipManagerRegistry@DXGSESSIONDATA@@QEAAJPEAPEAUIFlipManagerRegistry@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
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
