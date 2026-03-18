/*
 * XREFs of ?ProcessSetHasOwningTrigger@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETHASOWNINGTRIGGER@@@Z @ 0x1802A1224
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseExpression::ProcessSetHasOwningTrigger(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETHASOWNINGTRIGGER *a3)
{
  *((_BYTE *)this + 224) |= 0x20u;
  return 0LL;
}
