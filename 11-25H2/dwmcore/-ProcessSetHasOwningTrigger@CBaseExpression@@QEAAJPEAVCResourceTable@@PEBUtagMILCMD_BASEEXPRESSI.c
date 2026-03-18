/*
 * XREFs of ?ProcessSetHasOwningTrigger@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETHASOWNINGTRIGGER@@@Z @ 0x1802AAE0C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
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
