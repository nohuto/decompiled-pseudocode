/*
 * XREFs of ?VmBusShareObjectWithHost@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022A070
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14003E990 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051B58 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkShareObjectsInternal @ 0x14029DC00 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x14029E7B4 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1403B87BC (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusShareObjectWithHost(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  struct DXGPROCESS *v4; // rbx
  struct _KTHREAD **v5; // r13
  int v6; // ebx
  unsigned int *v7; // r14
  char *v8; // rbx
  unsigned int v9; // edx
  int v10; // r9d
  int EntryType; // eax
  unsigned int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // edx
  unsigned int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // edx
  __int64 v20; // rdx
  struct DXGVAILOBJECT *v21; // rax
  DxgkCompositionObject *v22; // rsi
  DXGAUTOPUSHLOCK *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  struct VMBPACKETCOMPLETION__ *v26; // rcx
  __int64 Src; // [rsp+28h] [rbp-79h]
  __int64 Srca; // [rsp+28h] [rbp-79h]
  __int64 Srcb; // [rsp+28h] [rbp-79h]
  __int64 v31; // [rsp+30h] [rbp-71h]
  __int64 v32; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v33[24]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v34[24]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v35[4]; // [rsp+90h] [rbp-11h] BYREF
  __int128 v36; // [rsp+B0h] [rbp+Fh]
  __int128 v37; // [rsp+C0h] [rbp+1Fh] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = (struct DXGPROCESS *)*((_QWORD *)a1 + 11);
    v5 = (struct _KTHREAD **)*((_QWORD *)a1 + 13);
    v37 = 0LL;
    if ( !v4 )
    {
      v6 = -1073741811;
LABEL_40:
      v26 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      LODWORD(v37) = v6;
      VmBusCompletePacket(v26, &v37, 0x10u);
      LOBYTE(v2) = 1;
      return v2;
    }
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v34, v4);
    v7 = (unsigned int *)(v3 + 28);
    v8 = (char *)v4 + 280;
    v9 = (*(_DWORD *)(v3 + 28) >> 6) & 0xFFFFFF;
    if ( v9 < *((_DWORD *)v8 + 4)
      && (v10 = *(_DWORD *)(*(_QWORD *)v8 + 16LL * v9 + 8),
          ((*(_DWORD *)(v3 + 28) >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v8 + 16LL * v9 + 8) & 0x60))
      && (v10 & 0x2000) == 0
      && (v10 & 0x1F) != 0 )
    {
      EntryType = HMGRTABLE::GetEntryType(v8);
      if ( EntryType == 11 )
      {
        v16 = *v7;
        v17 = (*v7 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v17 < *((_DWORD *)v8 + 4) )
        {
          v18 = *(_QWORD *)v8;
          v19 = *(_DWORD *)(*(_QWORD *)v8 + 16 * v17 + 8);
          if ( ((v16 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v8 + 16 * v17 + 8) & 0x60)
            && (v19 & 0x2000) == 0
            && (v19 & 0x1F) != 0 )
          {
            if ( (*(_BYTE *)(v18 + 16 * (((unsigned __int64)v16 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xB )
            {
              v20 = *(_QWORD *)(v18 + 16 * (((unsigned __int64)v16 >> 6) & 0xFFFFFF));
              if ( v20 && (*(_DWORD *)(v20 + 72) & 2) != 0 )
              {
                *(_DWORD *)(*(_QWORD *)(v20 + 32) + 412LL) |= 0x20u;
LABEL_10:
                v12 = *(_DWORD *)(v3 + 24);
                v13 = (v12 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v13 < *((_DWORD *)v8 + 4) )
                {
                  v14 = *(_QWORD *)v8;
                  v15 = *(_DWORD *)(*(_QWORD *)v8 + 16 * v13 + 8);
                  if ( ((v12 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v8 + 16 * v13 + 8) & 0x60)
                    && (v15 & 0x2000) == 0
                    && (v15 & 0x1F) != 0 )
                  {
                    if ( (*(_BYTE *)(v14 + 16 * (((unsigned __int64)v12 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 3 )
                    {
                      if ( *(_QWORD *)(v14 + 16 * (((unsigned __int64)v12 >> 6) & 0xFFFFFF)) )
                      {
                        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
                        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v33, v5 + 8);
                        v21 = DXGVIRTUALMACHINE::ReferenceVailObject((DXGVIRTUALMACHINE *)v5);
                        v22 = v21;
                        if ( v21 )
                        {
                          v24 = *((_QWORD *)v21 + 12);
                          if ( v24 )
                          {
                            v32 = 0LL;
                            v35[0] = 48LL;
                            memset(&v35[1], 0, 24);
                            v36 = 0LL;
                            v6 = DxgkShareObjectsInternal(
                                   0,
                                   0,
                                   v24,
                                   1,
                                   v7,
                                   (__int64)v35,
                                   0x10000000u,
                                   (__int64)&v32,
                                   0LL);
                            if ( v6 >= 0 )
                            {
                              *((_QWORD *)&v37 + 1) = v32;
                            }
                            else
                            {
                              WdLogSingleEntry1(2LL, *v7);
                              Srcb = *v7;
                              WdLogGlobalForLineNumber = 8333;
                              DxgkLogInternalTriageEvent(
                                0LL,
                                0x40000,
                                0xFFFFFFFFLL,
                                L"Fail to create NT shared sync object, handle: 0x%I64x",
                                Srcb,
                                0LL,
                                0LL,
                                0LL,
                                0LL);
                            }
                          }
                          else
                          {
                            WdLogSingleEntry0(2LL);
                            WdLogGlobalForLineNumber = 8320;
                            DxgkLogInternalTriageEvent(
                              0LL,
                              0x40000,
                              0xFFFFFFFFLL,
                              L"Vail process is not registered",
                              8320LL,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                            v6 = -1073741823;
                          }
                          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
                          DxgkCompositionObject::Release(v22);
                          goto LABEL_40;
                        }
                        WdLogSingleEntry0(2LL);
                        WdLogGlobalForLineNumber = 8313;
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000,
                          0xFFFFFFFFLL,
                          L"Failed to reference vail object",
                          8313LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                        v23 = (DXGAUTOPUSHLOCK *)v33;
                        v6 = -1073741823;
                        goto LABEL_39;
                      }
                    }
                    else
                    {
                      WdLogSingleEntry0(2LL);
                      WdLogGlobalForLineNumber = 318;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        0xFFFFFFFFLL,
                        L"Handle type mismatch",
                        318LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                  }
                }
                WdLogSingleEntry1(2LL, *(unsigned int *)(v3 + 24));
                Src = *(unsigned int *)(v3 + 24);
                WdLogGlobalForLineNumber = 8302;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Invalid device handle: 0x%I64x",
                  Src,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
LABEL_38:
                v23 = (DXGAUTOPUSHLOCK *)v34;
                v6 = -1073741811;
LABEL_39:
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK(v23);
                goto LABEL_40;
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
        WdLogSingleEntry1(2LL, *v7);
        Srca = *v7;
        WdLogGlobalForLineNumber = 8292;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Invalid sync object handle: 0x%I64x",
          Srca,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_38;
      }
      if ( EntryType == 4 )
        goto LABEL_10;
    }
    else
    {
      EntryType = 0;
    }
    v25 = EntryType;
    WdLogSingleEntry2(2LL, EntryType, *v7);
    v31 = *v7;
    WdLogGlobalForLineNumber = 8280;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid object type: 0x%I64x 0x%I64x",
      v25,
      v31,
      0LL,
      0LL,
      0LL);
    goto LABEL_38;
  }
  return v2;
}
