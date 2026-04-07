/*
 * XREFs of ?ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z @ 0x18002BF44
 * Callers:
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18002A410 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18002BC00 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x180030F54 (-GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800DB0CC (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     <none>
 */

struct CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::ChooseWindowFrame(
        CTopLevelWindow *this,
        unsigned int a2,
        char a3)
{
  return CTopLevelWindow::s_ChooseWindowFrameFromStyle(a2, a3, (*(_BYTE *)(*((_QWORD *)this + 89) + 739LL) & 0x10) != 0);
}
