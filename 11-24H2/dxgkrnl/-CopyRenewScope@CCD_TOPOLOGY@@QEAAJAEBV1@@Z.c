/*
 * XREFs of ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403905D8
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x14026BA4C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038EA8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038F310 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x14031B404 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14031CC98 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x14033F588 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x140390668 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyRenewScope(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  int v3; // ebx
  struct CCD_BTL *v4; // rax
  int v6; // [rsp+20h] [rbp-48h] BYREF
  __int128 v7; // [rsp+28h] [rbp-40h]
  __int64 v8; // [rsp+38h] [rbp-30h]
  __int16 v9; // [rsp+40h] [rbp-28h]
  __int128 v10; // [rsp+48h] [rbp-20h]

  v3 = CCD_TOPOLOGY::CopyInheritScope(this, a2);
  if ( v3 >= 0 )
  {
    v6 = 0;
    v7 = 0LL;
    v8 = 0LL;
    v10 = 0LL;
    v9 = 0;
    v4 = CCD_BTL::Global();
    v3 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v4)(v4, &v6);
    if ( v3 >= 0 )
      v3 = CCD_TOPOLOGY::SetConnectivityHash(this, (const struct CCD_SET_STRING_ID *)&v6);
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v6);
  }
  return (unsigned int)v3;
}
