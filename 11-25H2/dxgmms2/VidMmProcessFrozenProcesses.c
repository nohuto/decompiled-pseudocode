/*
 * XREFs of VidMmProcessFrozenProcesses @ 0x1400E0A70
 * Callers:
 *     VidMmFlushDeferredEvictions @ 0x1400DEEE0 (VidMmFlushDeferredEvictions.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140036484 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1400E0B34 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 */

char __fastcall VidMmProcessFrozenProcesses(__int64 a1, __int64 a2)
{
  char v4; // di
  _QWORD **v5; // rax
  _QWORD *v6; // rbx
  VIDMM_PROCESS_ADAPTER_INFO *v7; // rcx
  __int64 v8; // rdx
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v10,
    (struct _KTHREAD **)(*(_QWORD *)a1 + 41080LL));
  v5 = (_QWORD **)(*(_QWORD *)a1 + 41128LL);
  v6 = *v5;
  if ( *v5 != v5 )
  {
    do
    {
      v7 = (VIDMM_PROCESS_ADAPTER_INFO *)(v6 - 3);
      if ( *(_QWORD **)(a2 + 16) != v6 - 3 )
      {
        v8 = *(_QWORD *)(*((_QWORD *)v7 + 5) + 32LL);
        if ( v8 )
        {
          if ( *(_BYTE *)(v8 + 572) && VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(v7, 1) )
            v4 = 1;
        }
      }
      v6 = (_QWORD *)*v6;
    }
    while ( v6 != (_QWORD *)(*(_QWORD *)a1 + 41128LL) );
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
  return v4;
}
