/*
 * XREFs of ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x14028EC2C
 * Callers:
 *     DxgkCheckMonitorPowerState @ 0x140408DE0 (DxgkCheckMonitorPowerState.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1400345B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1400384F0 (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x140040D40 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x14028ED8C (-GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z @ 0x14028EDE8 (-IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DmmIsWaitingForPowerOn(_QWORD *a1, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v6; // rax
  VIDPN_MGR *v7; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  ADAPTER_DISPLAY *v9; // rcx
  const struct DMMVIDPN *v10; // rbx
  struct DMMVIDPNPRESENTPATH *MostImportantPathFromSource; // rax
  unsigned int v12; // edx
  const struct DMMVIDPN *v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0;
  if ( a1 )
  {
    if ( !a1[390] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 15211;
    }
    if ( !a1[391] )
      return 0LL;
    v6 = a1[390];
    v7 = *(VIDPN_MGR **)(v6 + 104);
    if ( v7 )
    {
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v15, *(_QWORD *)(v6 + 104));
      ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v7);
      v9 = (ADAPTER_DISPLAY *)a1[390];
      v10 = ClientCommittedVidPnRef;
      v14 = ClientCommittedVidPnRef;
      if ( !(unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(v9, a2) )
      {
        if ( v10 )
        {
          if ( DMMVIDPNTOPOLOGY::IsSourceInTopology((const struct DMMVIDPN *)((char *)v10 + 96), a2) )
          {
            MostImportantPathFromSource = DMMVIDPNTOPOLOGY::GetMostImportantPathFromSource(
                                            (const struct DMMVIDPN *)((char *)v10 + 96),
                                            a2);
            if ( MostImportantPathFromSource )
            {
              if ( (unsigned __int8)*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)MostImportantPathFromSource + 12)
                                                                      + 96LL)
                                                          + 536LL)
                                              + 168LL) == 14
                && !DMMVIDPN::IsPathFromSourcePoweredOff(v10, v12) )
              {
                *a3 = 1;
              }
            }
          }
        }
      }
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v14, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v15 + 40));
      return 0LL;
    }
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 15229;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 15203;
  }
  return 3221225473LL;
}
