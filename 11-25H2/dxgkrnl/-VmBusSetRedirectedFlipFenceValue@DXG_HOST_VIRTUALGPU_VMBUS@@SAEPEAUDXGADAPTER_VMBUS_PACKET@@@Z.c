/*
 * XREFs of ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14033D160
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051B58 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x140217C90 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x14033DBDC (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetRedirectedFlipFenceValue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  char v2; // di
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  DXGGLOBAL *Global; // rax
  int v15; // edx
  __int64 v17; // [rsp+20h] [rbp-39h]
  _BYTE v18[8]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v19; // [rsp+58h] [rbp-1h]
  char v20; // [rsp+60h] [rbp+7h]
  _BYTE v21[24]; // [rsp+68h] [rbp+Fh] BYREF
  _BYTE v22[32]; // [rsp+80h] [rbp+27h] BYREF
  int v23; // [rsp+C0h] [rbp+67h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  v2 = 0;
  if ( *(_BYTE *)(v1 + 155) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3751;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Presentation is disabled", 3751LL, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)(v1 + 248), 0);
    DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v21);
    if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
    {
      v23 = 0;
      v4 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
      if ( !v4 )
      {
LABEL_19:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
        return v2;
      }
      v5 = *((_QWORD *)a1 + 10);
      v20 = 0;
      v19 = *(_QWORD *)(v5 + 16);
      v6 = v19;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
      if ( *(_DWORD *)(v6 + 200) != 1 )
      {
        v15 = -1073741130;
        v23 = -1073741130;
        goto LABEL_21;
      }
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v22,
        *((struct DXGPROCESS **)a1 + 12));
      v7 = *((_QWORD *)a1 + 12);
      v8 = (*(_DWORD *)(v4 + 24) >> 6) & 0xFFFFFF;
      if ( v8 < *(_DWORD *)(v7 + 296) )
      {
        v9 = *(_QWORD *)(v7 + 280);
        if ( ((*(_DWORD *)(v4 + 24) >> 25) & 0x60) == (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x60)
          && (*(_DWORD *)(v9 + 16LL * v8 + 8) & 0x2000) == 0 )
        {
          v10 = *(_DWORD *)(v9 + 16LL * v8 + 8) & 0x1F;
          if ( v10 )
          {
            if ( v10 == 13 )
            {
              v11 = *(_QWORD *)(v9 + 16LL * v8);
              if ( v11 && (*(_DWORD *)v11 == 11 || *(_DWORD *)v11 == 8) )
              {
                v12 = *(_QWORD *)(v11 + 8);
                if ( !v12 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 3781;
                  DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pSyncObject", 3781LL, 0LL, 0LL, 0LL, 0LL);
                }
                _InterlockedIncrement((volatile signed __int32 *)(v12 + 24));
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
                v13 = *(_QWORD *)(v12 + 120);
                if ( v13 <= *(_QWORD *)(v4 + 32) )
                  v13 = *(_QWORD *)(v4 + 32);
                *(_QWORD *)(v12 + 120) = v13;
                Global = DXGGLOBAL::GetGlobal();
                DXGGLOBAL::DestroySyncObject(Global, (struct DXGSYNCOBJECT *)v12, 0);
LABEL_17:
                v15 = v23;
                if ( v23 >= 0 )
                {
LABEL_18:
                  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v23, 4u);
                  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v18);
                  v2 = 1;
                  goto LABEL_19;
                }
LABEL_21:
                HandleAsyncCommandError(a1, v15, 0, 3);
                goto LABEL_18;
              }
            }
            else
            {
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 318;
              DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
            }
          }
        }
      }
      WdLogSingleEntry1(2LL, *(unsigned int *)(v4 + 24));
      v17 = *(unsigned int *)(v4 + 24);
      WdLogGlobalForLineNumber = 3776;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid sync object handle: 0x%I64x",
        v17,
        0LL,
        0LL,
        0LL,
        0LL);
      v23 = -1073741811;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
      goto LABEL_17;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3755;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      3755LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
  }
  return 0;
}
