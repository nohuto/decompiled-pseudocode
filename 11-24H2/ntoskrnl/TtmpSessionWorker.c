/*
 * XREFs of TtmpSessionWorker @ 0x14076AF20
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionLock @ 0x1406F53C8 (TtmpAcquireSessionLock.c)
 *     TtmiSessionDeviceListWorker @ 0x140768C60 (TtmiSessionDeviceListWorker.c)
 *     TtmpActivateSessionWorker @ 0x14076A64C (TtmpActivateSessionWorker.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x14076A858 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmpInitiateModernStandbyTransition @ 0x14076A9D8 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x14076AE8C (TtmpSessionPowerControl.c)
 *     TtmiLogSessionDeactivate @ 0x14076DEB4 (TtmiLogSessionDeactivate.c)
 *     TtmiLogSessionWorkerPass @ 0x14076E7B8 (TtmiLogSessionWorkerPass.c)
 *     TtmiLogSessionWorkerStart @ 0x14076E87C (TtmiLogSessionWorkerStart.c)
 *     TtmiLogSessionWorkerStop @ 0x14076E910 (TtmiLogSessionWorkerStop.c)
 *     TtmiSessionTerminalListWorker @ 0x14076FDD4 (TtmiSessionTerminalListWorker.c)
 */

__int64 __fastcall TtmpSessionWorker(unsigned int *a1)
{
  unsigned int v2; // r14d
  unsigned int v3; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  char v11; // bl
  unsigned int v12; // ebp
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // r8d
  char v18; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 v19; // [rsp+58h] [rbp+10h] BYREF

  v19 = 0;
  v18 = 0;
  TtmpAcquireSessionLock();
  v2 = *a1;
  TtmiLogSessionWorkerStart(*a1);
  v3 = 0;
  a1[1] = a1[1] & 0xFFFFFFFC | 2;
  CurrentThread = KeGetCurrentThread();
  v5 = 1;
  v6 = a1[56];
  a1[56] = 0;
  *((_QWORD *)a1 + 29) = CurrentThread;
  while ( 1 )
  {
    v9 = v6 & 7;
    if ( !v9 )
      break;
    TtmiLogSessionWorkerPass(v2, v9, v5);
    if ( (v9 & 2) != 0 )
    {
      TtmiSessionTerminalListWorker(a1, &v18, &v19);
      v8 = v9 & 0xFFFFFFF9 ^ (v9 & 4 | (4 * v18) & 4);
      v9 = v8 & 0xFFFFFFFE ^ ((unsigned __int8)v8 | v19) & 1;
    }
    v10 = v9;
    v11 = v9 & 0xFB;
    v12 = v10 >> 2;
    if ( (_BYTE)v12 )
    {
      if ( (a1[1] & 0x10) != 0 )
      {
        v3 = TtmpActivateSessionWorker((__int64)a1, v7);
        if ( v3 != 259 )
        {
          v13 = a1[1];
          if ( (v13 & 0x1000) != 0 )
          {
            a1[1] = v13 & 0xFFFFEFFF;
LABEL_10:
            TtmiSessionDeviceListWorker((__int64)a1);
            goto LABEL_11;
          }
        }
      }
    }
    if ( (v11 & 1) != 0 )
      goto LABEL_10;
LABEL_11:
    if ( (_BYTE)v12 )
    {
      v14 = a1[1];
      if ( (v14 & 0x20) != 0 )
      {
        if ( (v14 & 4) != 0 )
          goto LABEL_14;
        if ( (v14 & 0x180) == 0 )
        {
          if ( (v14 & 8) != 0 )
          {
            a1[1] = v14 & 0xFFFFFFF7;
            TtmiLogSessionDeactivate();
          }
          v15 = a1[1];
          if ( (v15 & 0x400) != 0 )
          {
            if ( (v15 & 0x200) == 0 )
            {
              TtmpInitiateModernStandbyTransition((__int64)a1, 1, a1[4]);
              v15 = a1[1] | 0x200;
            }
            a1[1] = v15 & 0xFFFFFFDF;
LABEL_14:
            v3 = 0;
            goto LABEL_22;
          }
          if ( (v15 & 0x40) == 0 )
          {
            v16 = a1[4];
            a1[1] = v15 | 0x40;
            TtmpSessionPowerControl((int *)a1, 0, v16);
          }
        }
        v3 = 259;
      }
    }
LABEL_22:
    v6 = a1[56];
    a1[56] = 0;
    ++v5;
  }
  a1[1] &= ~2u;
  *((_QWORD *)a1 + 29) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  TtmpDereferenceSessionMaybeLast((volatile signed __int32 *)a1);
  return TtmiLogSessionWorkerStop(v2, v3);
}
