/*
 * XREFs of ?DmmUpdateTargetConnectionId@@YAJQEAXI@Z @ 0x140253A9C
 * Callers:
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1402716D8 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?UpdateTargetConnectionId@VIDPN_MGR@@QEAAJI@Z @ 0x140255478 (-UpdateTargetConnectionId@VIDPN_MGR@@QEAAJI@Z.c)
 */

__int64 __fastcall DmmUpdateTargetConnectionId(_QWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  VIDPN_MGR *v6; // rdi
  unsigned int updated; // ebx
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 12287;
    return 3223191554LL;
  }
  v5 = a1[390];
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 12300;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v6 = *(VIDPN_MGR **)(v5 + 104);
  if ( v6 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v8, *(_QWORD *)(v5 + 104));
    updated = VIDPN_MGR::UpdateTargetConnectionId(v6, a2);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v8 + 40));
    return updated;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 12314;
  }
  return result;
}
