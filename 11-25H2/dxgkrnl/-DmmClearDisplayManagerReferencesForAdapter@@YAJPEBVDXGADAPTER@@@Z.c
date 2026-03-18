/*
 * XREFs of ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x140250DCC
 * Callers:
 *     _lambda_2f1d6853485b5d874e628a4c686a9f7b_::_lambda_invoker_cdecl_ @ 0x14006E820 (_lambda_2f1d6853485b5d874e628a4c686a9f7b_--_lambda_invoker_cdecl_.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x14018CE9C (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x140061610 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x140062630 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1402587D4 (-ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DmmClearDisplayManagerReferencesForAdapter(const struct DXGADAPTER *a1)
{
  __int64 v1; // rbx
  DMMVIDEOPRESENTTARGETSET *v2; // rbx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdi
  _QWORD *v4; // rcx
  DMMVIDEOPRESENTTARGETSET *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 390) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v7, v1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v1 + 120) + 72LL));
  v2 = *(DMMVIDEOPRESENTTARGETSET **)(v1 + 120);
  NextTarget = 0LL;
  v6 = v2;
  v4 = (_QWORD *)*((_QWORD *)v2 + 3);
  if ( v4 != (_QWORD *)((char *)v2 + 24) )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v4 - 1);
  for ( ; NextTarget; NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(v2, NextTarget) )
    DMMVIDEOPRESENTTARGET::ReleaseDisplayManagerObject(NextTarget);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)&v6, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v7 + 40));
  return 0LL;
}
