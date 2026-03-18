/*
 * XREFs of SendWinlogonPowerMessageWorker @ 0x1C00D0550
 * Callers:
 *     xxxSendWinlogonPowerMessage @ 0x1C0132140 (xxxSendWinlogonPowerMessage.c)
 * Callees:
 *     ??0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z @ 0x1C00D02A8 (--0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z.c)
 *     ??0PoWin32CalloutDeadlockTracker@@QEAA@W4_POPWIN32CALLOUT_WATCHDOG_STATE_INDEX@@@Z @ 0x1C00D02EC (--0PoWin32CalloutDeadlockTracker@@QEAA@W4_POPWIN32CALLOUT_WATCHDOG_STATE_INDEX@@@Z.c)
 *     ??1CAcquireReleaseRundownProtection@@QEAA@XZ @ 0x1C00D036C (--1CAcquireReleaseRundownProtection@@QEAA@XZ.c)
 *     ??1PoWin32CalloutDeadlockTracker@@QEAA@XZ @ 0x1C00D0390 (--1PoWin32CalloutDeadlockTracker@@QEAA@XZ.c)
 *     WmsgpSendPSPMessage @ 0x1C02BFE24 (WmsgpSendPSPMessage.c)
 */

__int64 __fastcall SendWinlogonPowerMessageWorker(unsigned int a1, struct _EX_RUNDOWN_REF *a2)
{
  unsigned int v2; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _EX_RUNDOWN_REF *v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF
  signed int v16; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v15 = 0;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  CAcquireReleaseRundownProtection::CAcquireReleaseRundownProtection((CAcquireReleaseRundownProtection *)v13, a2);
  if ( v13[0] )
  {
    PoWin32CalloutDeadlockTracker::PoWin32CalloutDeadlockTracker(&v16, 1LL, v6, v7);
    v14 = *(_OWORD *)&a2->Count;
    v9 = WmsgpSendPSPMessage(v8, a1, &v14, &v15);
    PoWin32CalloutDeadlockTracker::~PoWin32CalloutDeadlockTracker((PoWin32CalloutDeadlockTracker *)&v16, v10, v11, v12);
    v2 = v15;
    if ( v9 < 0 )
      v2 = v9;
  }
  CAcquireReleaseRundownProtection::~CAcquireReleaseRundownProtection(v13);
  return v2;
}
