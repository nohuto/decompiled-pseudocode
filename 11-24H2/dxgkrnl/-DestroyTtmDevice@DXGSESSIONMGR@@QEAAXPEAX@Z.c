/*
 * XREFs of ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1401FA838
 * Callers:
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1403C37C0 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x14004CD50 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1403D5030 (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroyTtmDevice(DXGSESSIONMGR *this, char *a2)
{
  bool v4; // zf
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+50h] [rbp-18h] BYREF
  char v11; // [rsp+58h] [rbp-10h]

  if ( a2 && *((_DWORD *)a2 + 10) == 1299018836 )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v10,
      (struct DXGPUSHLOCKFAST *)(a2 + 888));
    v4 = v11 == 0;
    a2[912] = 1;
    if ( !v4 )
    {
      v5 = v10;
      *(_QWORD *)(v10 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v5, 0LL);
      KeLeaveCriticalRegion();
      v11 = 0;
    }
    v6 = CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
           (DXGSESSIONMGR *)((char *)this + 376),
           (void (*)(void *))DXGSESSIONMGR::DestroyTtmDeviceWorker,
           a2);
    if ( v6 < 0 )
    {
      v7 = v6;
      WdLogSingleEntry3(2LL, *((unsigned int *)a2 + 20), *((_QWORD *)a2 + 8), v6);
      v9 = *((_QWORD *)a2 + 8);
      v8 = *((unsigned int *)a2 + 20);
      WdLogGlobalForLineNumber = 7664;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to queue a Serialized work item to destroy TTM device for target 0x%I64x on adapter 0x%I64x, (Status = 0x%I64x).",
        v8,
        v9,
        v7,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 7634;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified invalid TTM device 0x%I64x.",
      (__int64)a2,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
