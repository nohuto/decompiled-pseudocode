/*
 * XREFs of ?DmmAreAllVidpnTargetsPowerComponents@@YAEPEAVVIDPN_MGR@@@Z @ 0x140250BC0
 * Callers:
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1401971D0 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003EB9C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 */

char __fastcall DmmAreAllVidpnTargetsPowerComponents(struct VIDPN_MGR *a1)
{
  _QWORD *v2; // rbx
  char v3; // di
  _QWORD *v4; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v7, (__int64)a1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL));
  v2 = (_QWORD *)*((_QWORD *)a1 + 15);
  v3 = 0;
  v4 = (_QWORD *)v2[3];
  NextTarget = 0LL;
  if ( v4 != v2 + 3 )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v4 - 1);
  while ( NextTarget )
  {
    if ( *((_DWORD *)NextTarget + 100) == -1 )
    {
      if ( v2 )
        ReferenceCounted::Release((ReferenceCounted *)(v2 + 8));
      goto LABEL_11;
    }
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v2, NextTarget);
  }
  if ( v2 )
    ReferenceCounted::Release((ReferenceCounted *)(v2 + 8));
  v3 = 1;
LABEL_11:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v7 + 40));
  return v3;
}
