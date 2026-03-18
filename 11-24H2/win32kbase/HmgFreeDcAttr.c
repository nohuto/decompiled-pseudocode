/*
 * XREFs of HmgFreeDcAttr @ 0x1400BF91C
 * Callers:
 *     GreCreateDisplayDC @ 0x14000E640 (GreCreateDisplayDC.c)
 *     GrepThreadCallout @ 0x1400BF560 (GrepThreadCallout.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C5800 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     HmgFreeDcAttrFastOpt @ 0x1401C4EA0 (HmgFreeDcAttrFastOpt.c)
 */

__int64 __fastcall HmgFreeDcAttr(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return HmgFreeDcAttrFastOpt(*(_QWORD *)(SessionState + 88), a1);
}
