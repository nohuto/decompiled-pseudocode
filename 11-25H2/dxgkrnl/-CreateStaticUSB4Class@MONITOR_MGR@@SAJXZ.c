/*
 * XREFs of ?CreateStaticUSB4Class@MONITOR_MGR@@SAJXZ @ 0x14026BF9C
 * Callers:
 *     ?MonitorInitializeGlobal@@YAJXZ @ 0x140267B20 (-MonitorInitializeGlobal@@YAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0USB4_POWERON_WORK_QUEUE@@QEAA@XZ @ 0x140270250 (--0USB4_POWERON_WORK_QUEUE@@QEAA@XZ.c)
 *     ?Initalize@USB4_HOSTROUTER_MGR@@QEAAJXZ @ 0x140270DA8 (-Initalize@USB4_HOSTROUTER_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::CreateStaticUSB4Class(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = (_QWORD *)operator new(0xB0uLL, 0x4D677844u, 64LL, a4);
  if ( v4 )
  {
    *v4 = 0LL;
    v4[2] = 0LL;
    *((_DWORD *)v4 + 11) = -1;
    v4[3] = 0LL;
    v4[4] = 0LL;
    *((_DWORD *)v4 + 10) = 0;
    *((_DWORD *)v4 + 12) = 1;
    USB4_POWERON_WORK_QUEUE::USB4_POWERON_WORK_QUEUE((USB4_POWERON_WORK_QUEUE *)(v4 + 9));
    MONITOR_MGR::_pUsb4Manager = v4;
    v4[8] = v4 + 7;
    v4[7] = v4 + 7;
    return USB4_HOSTROUTER_MGR::Initalize((USB4_HOSTROUTER_MGR *)(v4 + 7));
  }
  else
  {
    MONITOR_MGR::_pUsb4Manager = 0LL;
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 5142;
  }
  return result;
}
