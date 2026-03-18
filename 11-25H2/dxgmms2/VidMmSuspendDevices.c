/*
 * XREFs of VidMmSuspendDevices @ 0x1400DF9D0
 * Callers:
 *     VidMmHandleRecoverablePageInFailure @ 0x1400DED10 (VidMmHandleRecoverablePageInFailure.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14003C2C8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Suspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400E03E8 (-Suspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1400E0B34 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1400E1744 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400E1B20 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ??1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ @ 0x1400F8D84 (--1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ.c)
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x140106118 (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM.c)
 *     ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEBV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x140111564 (-GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEBV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W.c)
 */

char __fastcall VidMmSuspendDevices(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v7; // r15
  _QWORD *v8; // r13
  char v10; // si
  __int64 v11; // r12
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // r15d
  __int64 v19; // r9
  unsigned int v20; // r12d
  int v21; // r8d
  unsigned int v22; // r14d
  char v23; // cl
  int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // eax
  __int64 v27; // rdi
  VIDMM_GLOBAL *v28; // rcx
  struct _LIST_ENTRY *v29; // rdi
  struct _LIST_ENTRY *v30; // rdx
  VIDMM_DEVICE *p_Blink; // rbx
  __int64 DeviceToSuspend; // rax
  VIDMM_DEVICE *v33; // rdi
  VIDMM_PROCESS_ADAPTER_INFO *v34; // rcx
  __int64 v36; // [rsp+38h] [rbp-61h]
  __int64 v37; // [rsp+40h] [rbp-59h]
  __int64 v38; // [rsp+48h] [rbp-51h]
  struct _LIST_ENTRY *v39[2]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v40[2]; // [rsp+60h] [rbp-39h] BYREF
  char v41; // [rsp+70h] [rbp-29h]
  _BYTE v42[96]; // [rsp+78h] [rbp-21h] BYREF
  int v43; // [rsp+E8h] [rbp+4Fh]

  v8 = a1 + 42;
  v38 = *a1;
  v7 = v38;
  v10 = 1;
  v40[1] = a1 + 42;
  v41 = 1;
  v11 = a4;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  ++*((_DWORD *)a1 + 94);
  v14 = PerformanceCounter;
  v15 = *a2;
  v16 = a2[3] & 0x3F;
  v40[0] = PerformanceCounter.QuadPart;
  v17 = *(_QWORD *)(v7 + 40232);
  v18 = 0;
  v36 = v15;
  v19 = *(_QWORD *)(v17 + 8 * v16);
  v37 = v19;
LABEL_2:
  if ( (signed int)v18 > *(_DWORD *)(v11 + 4) )
  {
    *v8 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v14.QuadPart;
    return 0;
  }
  v20 = 0;
  v21 = *(_DWORD *)(v15 + 40);
  v22 = *(_DWORD *)(v15 + 44) == 0 ? 6 : 0;
  while ( 1 )
  {
    do
    {
      if ( !v21 )
      {
        v11 = a4;
        ++v18;
        goto LABEL_2;
      }
      if ( v22 > 5 )
      {
        v26 = v20;
        v25 = v20++;
        if ( !_bittest(&v21, v26) )
          goto LABEL_4;
      }
      else
      {
        v23 = 6 * v22++;
        v24 = (*(_DWORD *)(v15 + 44) >> v23) & 0x1F;
        if ( !v24 )
          goto LABEL_4;
        v25 = v24 - 1;
      }
      v43 = ~(1 << v25) & v21;
      v27 = *(_QWORD *)(*(_QWORD *)(v19 + 1648) + 8LL * v25);
      if ( (*(_DWORD *)a2[47] & 0x20000) != 0 )
      {
        v18 = *(_DWORD *)(a4 + 4);
        v39[1] = (struct _LIST_ENTRY *)v39;
        v39[0] = (struct _LIST_ENTRY *)v39;
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v42,
          (struct _KTHREAD **)(v38 + 44552));
        if ( (unsigned __int8)VIDMM_SEGMENT::FreeSpaceForSecureResource(v27, v39, a2, a6) )
        {
          if ( *(_DWORD *)(v27 + 452) )
          {
            v29 = v39[0];
            if ( (struct _LIST_ENTRY **)v39[0] == v39 )
            {
LABEL_27:
              v10 = 0;
            }
            else
            {
              do
              {
                v30 = v29;
                p_Blink = (VIDMM_DEVICE *)&v29[-12].Blink;
                v29 = v29->Flink;
                VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v28, v30);
                VIDMM_DEVICE::PartiallySuspend(p_Blink);
                VIDMM_DEVICE::FaultAllAllocations(p_Blink);
              }
              while ( v29 != (struct _LIST_ENTRY *)v39 );
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v42);
            goto LABEL_30;
          }
        }
        else
        {
          while ( (struct _LIST_ENTRY **)v39[0] != v39 )
            VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v28, v39[0]);
          if ( *(_DWORD *)(v27 + 452) )
            goto LABEL_27;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v42);
      }
      LOBYTE(v19) = a5;
      DeviceToSuspend = VIDMM_SEGMENT::GetDeviceToSuspend(v27, a3, v18, v19, a7);
      v21 = v43;
      v33 = (VIDMM_DEVICE *)DeviceToSuspend;
      v15 = v36;
      v19 = v37;
    }
    while ( !DeviceToSuspend );
    if ( (*(_BYTE *)(DeviceToSuspend + 312) & 7) == 1 || v18 == 2 )
      break;
    v34 = *(VIDMM_PROCESS_ADAPTER_INFO **)(DeviceToSuspend + 16);
    if ( v34 )
    {
      if ( VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(v34, 0) )
        goto LABEL_30;
      v21 = v43;
      v19 = v37;
LABEL_4:
      v15 = v36;
    }
  }
  VIDMM_DEVICE::Suspend((VIDMM_DEVICE *)DeviceToSuspend, 1);
  VIDMM_DEVICE::FaultAllAllocations(v33);
LABEL_30:
  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v40);
  return v10;
}
