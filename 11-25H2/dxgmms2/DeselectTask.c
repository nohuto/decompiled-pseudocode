/*
 * XREFs of DeselectTask @ 0x14009F7C0
 * Callers:
 *     WorkerThreadRun @ 0x14009FC84 (WorkerThreadRun.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140035820 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x140036410 (McTemplateK0pp_EtwWriteTransfer.c)
 *     McTemplateK0pxuuii_EtwWriteTransfer @ 0x14004EFC0 (McTemplateK0pxuuii_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?VidMmDequeueTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x14009F43C (-VidMmDequeueTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z.c)
 */

void __fastcall DeselectTask(struct VIDMM_WORKER_THREAD2 *a1, struct VIDMM_TASK *a2, _QWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  char v14; // [rsp+28h] [rbp-40h]
  char v15; // [rsp+30h] [rbp-38h]
  _BYTE v16[16]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v16,
    (struct VIDMM_WORKER_THREAD2 *)((char *)a1 + 5392),
    1);
  v6 = *((_QWORD *)a1 + 673) - *a3;
  if ( v6 > 0x7A120 )
    v6 = 500000LL;
  v7 = *(_QWORD *)a2;
  *((_QWORD *)a2 + 7) += v6;
  (*(void (__fastcall **)(struct VIDMM_TASK *, struct VIDMM_WORKER_THREAD2 *, _QWORD *))(v7 + 24))(a2, a1, a3);
  if ( (byte_140081243 & 1) != 0 )
  {
    v10 = *((_QWORD *)a2 + 4);
    v15 = *((_BYTE *)a2 + 76);
    v14 = *(_BYTE *)(v10 + 21);
    McTemplateK0pxuuii_EtwWriteTransfer(
      v10,
      v8,
      v9,
      *(_QWORD *)(*(_QWORD *)a1 + 24LL),
      *((_QWORD *)a2 + 6),
      v14,
      v15,
      v6,
      *((_QWORD *)a2 + 7));
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 18, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(struct VIDMM_TASK *, struct VIDMM_WORKER_THREAD2 *))(*(_QWORD *)a2 + 8LL))(a2, a1);
    if ( (byte_140081243 & 1) != 0 )
      McTemplateK0pp_EtwWriteTransfer(
        v11,
        &EventCompleteTask,
        v12,
        *(_QWORD *)(*(_QWORD *)a1 + 24LL),
        *((_QWORD *)a2 + 6));
    VidMmDequeueTask(a1, a2, v12);
    while ( 1 )
    {
      v13 = *((_QWORD *)a2 + 5);
      if ( !v13 )
        break;
      *((_QWORD *)a2 + 5) = *(_QWORD *)v13;
      KeSetEvent((PRKEVENT)(v13 + 8), 0, 0);
    }
  }
  *((_QWORD *)a1 + 746) = 0LL;
  *((_BYTE *)a1 + 5976) = 0;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v16);
}
