/*
 * XREFs of ?ProcessSetSelection@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONDITIONALEXPRESSION_SETSELECTION@@@Z @ 0x18021D1D8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CConditionalExpression::ProcessSetSelection(
        CConditionalExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CONDITIONALEXPRESSION_SETSELECTION *a3)
{
  *((_DWORD *)this + 90) = *((_DWORD *)a3 + 2);
  return 0LL;
}
