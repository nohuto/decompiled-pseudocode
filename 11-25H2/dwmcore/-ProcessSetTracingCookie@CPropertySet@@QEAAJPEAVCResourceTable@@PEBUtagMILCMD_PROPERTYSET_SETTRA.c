/*
 * XREFs of ?ProcessSetTracingCookie@CPropertySet@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYSET_SETTRACINGCOOKIE@@@Z @ 0x1802AC144
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPropertySet::ProcessSetTracingCookie(
        CPropertySet *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROPERTYSET_SETTRACINGCOOKIE *a3)
{
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 2);
  return 0LL;
}
