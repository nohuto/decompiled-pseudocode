/*
 * XREFs of ApiSetClientCallDitThread @ 0x140191210
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x14005FAA0 (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ClientCallDitThread @ 0x1400EC010 (ClientCallDitThread.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetClientCallDitThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  int (*v7)(void); // rax
  __int64 *v9; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6144LL);
  if ( v7 && v7() >= 0 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v9, "HitTestCallout", 0LL);
    v6 = (unsigned int)ClientCallDitThread(a1, a2, a3);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v9);
  }
  return v6;
}
