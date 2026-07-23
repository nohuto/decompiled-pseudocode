/*
 * XREFs of EtwpKernelTraceRundown @ 0x140A0F024
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x14048A210 (EtwpUpdateSelectedGroupMasks.c)
 *     EtwKernelMemoryRundown @ 0x1407A964C (EtwKernelMemoryRundown.c)
 *     EtwpLogKernelTraceRundown @ 0x140A0EFB0 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpCloseLogger @ 0x140326790 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x140326950 (EtwpOpenLogger.c)
 *     PopExecuteOnTargetProcessors @ 0x140370234 (PopExecuteOnTargetProcessors.c)
 *     IoSetThreadHardErrorMode @ 0x1404523B0 (IoSetThreadHardErrorMode.c)
 *     KeTraceHgsPlusRundown @ 0x1405BF858 (KeTraceHgsPlusRundown.c)
 *     KeTraceThreadAffinityRundown @ 0x1405BF8CC (KeTraceThreadAffinityRundown.c)
 *     KeTraceSchedulingGroupRundown @ 0x1405C4F40 (KeTraceSchedulingGroupRundown.c)
 *     KeTraceParkingRundown @ 0x1405C5874 (KeTraceParkingRundown.c)
 *     PsPerfLogSessionRundown @ 0x14077B830 (PsPerfLogSessionRundown.c)
 *     EtwpClockSourceRunDown @ 0x1407B0E1C (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1407B0F98 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogMemInfoRundown @ 0x1407B1080 (EtwpLogMemInfoRundown.c)
 *     EtwpLogRefSetAutoMark @ 0x1407B10E4 (EtwpLogRefSetAutoMark.c)
 *     EtwpObjectTypeRundown @ 0x1407B1434 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1407B1590 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1407B17A8 (EtwpProcessorRundown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1407B1A94 (EtwpSpinLockConfigRunDown.c)
 *     MmIdentifyPhysicalMemory @ 0x1407EC118 (MmIdentifyPhysicalMemory.c)
 *     MmLogSystemShareablePfnInfo @ 0x1407F8804 (MmLogSystemShareablePfnInfo.c)
 *     MmLogQueryCombineStats @ 0x1408F78D4 (MmLogQueryCombineStats.c)
 *     EtwpProcessThreadImageRundown @ 0x140A0F50C (EtwpProcessThreadImageRundown.c)
 *     WmiTraceRundownNotify @ 0x140A0F684 (WmiTraceRundownNotify.c)
 *     EtwpSampledProfileRunDown @ 0x140A6192C (EtwpSampledProfileRunDown.c)
 *     CmEtwRunDown @ 0x140A6836C (CmEtwRunDown.c)
 */

BOOLEAN __fastcall EtwpKernelTraceRundown(
        _DWORD *a1,
        struct _ETW_SILODRIVERSTATE *a2,
        unsigned int a3,
        unsigned __int8 a4,
        __int64 a5,
        int a6)
{
  int v7; // esi
  unsigned int v8; // r15d
  BOOLEAN v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // r8
  int v14; // r9d
  int v15; // r8d
  __int64 v16; // rdi
  _DWORD *v17; // r14
  _DWORD *v18; // rdi
  _DWORD *v19; // r14
  __int64 v20; // rdi
  _DWORD *v21; // rdi
  __int16 v22; // r8
  int v23; // r9d
  __int64 v24; // rdi
  char v26[16]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+80h] [rbp+18h] BYREF

  v27 = a3;
  v7 = a4;
  v26[0] = 0;
  v8 = a3;
  v10 = IoSetThreadHardErrorMode(0);
  v12 = EtwpOpenLogger(v8, (__int64)a2, 0, v26);
  if ( v12 )
  {
    if ( !a1 )
    {
      v16 = 4LL;
      goto LABEL_21;
    }
    if ( (a1[1] & 0x20) != 0 && !(_BYTE)v7 )
      EtwpLogRefSetAutoMark(0);
    if ( (*a1 & 0xC004) != 0 || (a1[4] & 0x40) != 0 || (*a1 & 1) != 0 || (*a1 & 2) != 0 || (a1[1] & 0x8000000) != 0 )
    {
      LOBYTE(v13) = v7;
      EtwpProcessThreadImageRundown((_DWORD)a1, v12, v13, a5, a6);
    }
    if ( (*a1 & 0x20000) != 0 )
    {
      if ( (a1[2] & 0x1000000) == 0 )
      {
        v14 = 0;
LABEL_17:
        v15 = *a1 >> 17;
        LOBYTE(v15) = (*a1 & 0x20000) != 0;
        CmEtwRunDown((_DWORD)a2, v8, v15, v14, v7);
LABEL_18:
        v16 = (__int64)(a1 + 1);
        if ( (a1[1] & 2) != 0 )
        {
          LOBYTE(v13) = 1;
          LOBYTE(v11) = v7;
          EtwpSampledProfileRunDown(v12, v11, v13);
LABEL_22:
          if ( (*(_DWORD *)v16 & 0x400) != 0 )
          {
            LOBYTE(v11) = v7;
            EtwpSampledProfileRunDown(v12, v11, 0LL);
            v17 = a1 + 1;
LABEL_25:
            if ( (*(_DWORD *)v16 & 0x10000) != 0 )
            {
              EtwpSpinLockConfigRunDown(v12, v7);
              v18 = a1 + 1;
LABEL_28:
              if ( (*v17 & 0x20000) != 0 )
              {
                EtwpExecutiveResourceConfigRunDown(v12, v7);
                v19 = a1 + 1;
                goto LABEL_31;
              }
LABEL_30:
              v19 = v18;
              if ( !a1 )
              {
                v20 = 20LL;
                goto LABEL_40;
              }
LABEL_31:
              if ( (*v18 & 0x400008) != 0 )
                PsPerfLogSessionRundown((__int64)a2, v8, v7);
              if ( (*v19 & 0x8000049) != 0 )
                EtwpPoolRunDown(v12, v7);
              if ( (a1[2] & 0x100000) != 0 )
              {
                LOBYTE(v11) = v7;
                EtwpClockSourceRunDown(v12, v11);
              }
              v20 = (__int64)(a1 + 5);
              if ( (a1[5] & 0x180) != 0 )
              {
                KeTraceHgsPlusRundown(v7);
LABEL_41:
                if ( (*(_DWORD *)v20 & 0x2000) != 0 )
                {
                  KeTraceParkingRundown(v7);
                  v20 = (__int64)(a1 + 5);
                }
                if ( (a1[1] & 0x1000) != 0 )
                  KeTraceThreadAffinityRundown(v7);
                if ( (*(_DWORD *)v20 & 0x4000) != 0 )
                  KeTraceSchedulingGroupRundown(a2, v8);
LABEL_47:
                v21 = a1 + 1;
                if ( (_BYTE)v7 )
                {
                  if ( a1 )
                  {
                    if ( (*v21 & 0x8000000) != 0 )
                    {
                      MmIdentifyPhysicalMemory((__int64)a2, v8, 645, 1);
                      MmLogSystemShareablePfnInfo((__int64)a2, v8);
                    }
                    if ( (*v21 & 0x20) != 0 )
                      EtwpLogRefSetAutoMark(v7);
                  }
                  goto LABEL_75;
                }
                if ( a1 )
                {
                  if ( (*v21 & 0x8000000) != 0 )
                  {
                    MmLogSystemShareablePfnInfo((__int64)a2, v8);
                    MmIdentifyPhysicalMemory((__int64)a2, v8, 645, 1);
                  }
                  if ( (*v21 & 9) != 0 || (a1[5] & 0x40) != 0 )
                  {
                    EtwpLogMemInfoRundown(v12);
                    if ( (a1[5] & 0x40) != 0 )
                    {
                      v22 = 650;
                      v23 = 2;
                    }
                    else
                    {
                      v22 = 547;
                      v23 = 0;
                    }
                    MmIdentifyPhysicalMemory((__int64)a2, v8, v22, v23);
                  }
                  if ( (a1[1] & 0x80000) != 0 )
                  {
                    MmLogQueryCombineStats((__int64)a2, &v27, 0LL);
                    v8 = v27;
                  }
                  if ( (*a1 & 0x200) != 0 )
                    WmiTraceRundownNotify(**(_QWORD **)(v12 + 1360), v8);
                  v24 = (__int64)(a1 + 4);
                  if ( (a1[4] & 0x8000) != 0 )
                  {
                    PopExecuteOnTargetProcessors(
                      (__int64)&KeActiveProcessors,
                      (__int64)PpmTracePerfIdleRundown,
                      0LL,
                      0LL);
                    goto LABEL_65;
                  }
                }
                else
                {
                  v24 = 16LL;
                }
                if ( !a1 )
                {
LABEL_75:
                  EtwpCloseLogger(v8, (__int64)a2, v26[0]);
                  return IoSetThreadHardErrorMode(v10);
                }
LABEL_65:
                if ( (*(_DWORD *)v24 & 0x40) != 0 || (*(_DWORD *)v24 & 0x80u) != 0 )
                  EtwpObjectTypeRundown(v12, 0);
                if ( (a1[2] & 0x10000) != 0 )
                  EtwpProcessorRundown(v12);
                goto LABEL_75;
              }
LABEL_40:
              if ( !a1 )
                goto LABEL_47;
              goto LABEL_41;
            }
LABEL_27:
            v18 = v17;
            if ( !a1 )
              goto LABEL_30;
            goto LABEL_28;
          }
LABEL_24:
          v17 = (_DWORD *)v16;
          if ( !a1 )
            goto LABEL_27;
          goto LABEL_25;
        }
LABEL_21:
        if ( !a1 )
          goto LABEL_24;
        goto LABEL_22;
      }
    }
    else if ( (a1[2] & 0x1000000) == 0 )
    {
      goto LABEL_18;
    }
    LOBYTE(v14) = 1;
    goto LABEL_17;
  }
  return IoSetThreadHardErrorMode(v10);
}
