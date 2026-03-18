/*
 * XREFs of ?SetFirmwareRecommendedVidPn@VIDPN_MGR@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1403E9408
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x140259010 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14004575C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 */

void __fastcall VIDPN_MGR::SetFirmwareRecommendedVidPn(VIDPN_MGR *this, struct DMMVIDPN *a2)
{
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 8);
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 40, (__int64)a2);
}
