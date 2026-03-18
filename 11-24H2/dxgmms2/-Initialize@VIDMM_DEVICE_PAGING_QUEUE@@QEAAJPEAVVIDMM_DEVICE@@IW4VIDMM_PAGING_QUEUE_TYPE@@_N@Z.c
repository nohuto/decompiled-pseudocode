/*
 * XREFs of ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1400F8528
 * Callers:
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1400B983C (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x140056340 (memset.c)
 *     ??0VIDMM_PAGING_QUEUE@@QEAA@PEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1400F878C (--0VIDMM_PAGING_QUEUE@@QEAA@PEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 *     ?VidMmInitializePagingQueue@@YAJPEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400F88CC (-VidMmInitializePagingQueue@@YAJPEAUVIDMM_PAGING_QUEUE@@@Z.c)
 *     VidSchCreateSyncObject @ 0x1400F8AD0 (VidSchCreateSyncObject.c)
 *     ?MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ @ 0x1400F947C (-MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_DEVICE_PAGING_QUEUE::Initialize(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  __int64 v9; // rbp
  __int64 v10; // rax
  struct VIDMM_PAGING_QUEUE *v11; // rax
  int v12; // eax
  unsigned int v13; // esi
  int SyncObject; // eax
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // [rsp+28h] [rbp-90h]
  _QWORD v21[10]; // [rsp+50h] [rbp-68h] BYREF

  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 744LL);
  *(_DWORD *)(a1 + 16) = a3;
  v10 = operator new(200LL, 0x38346956u, 256LL);
  if ( v10 )
    v11 = (struct VIDMM_PAGING_QUEUE *)VIDMM_PAGING_QUEUE::VIDMM_PAGING_QUEUE(v10, a2, a3, a4);
  else
    v11 = 0LL;
  *(_QWORD *)a1 = v11;
  if ( v11 )
  {
    v12 = VidMmInitializePagingQueue(v11);
    v13 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry2(1LL, a2, v12);
      WdLogGlobalForLineNumber = 2074;
    }
    else
    {
      memset(v21, 0, sizeof(v21));
      v21[1] = 4294962295LL;
      v20 = *(_QWORD *)a1;
      LODWORD(v21[0]) = 5;
      SyncObject = VidSchCreateSyncObject(v9, 0, (unsigned int)v21, 2, 0LL, v20, a1 + 8, 0LL, 0LL, 0LL);
      v13 = SyncObject;
      if ( SyncObject < 0 )
      {
        WdLogSingleEntry2(1LL, a1, SyncObject);
        WdLogGlobalForLineNumber = 2102;
      }
      else
      {
        if ( !*(_BYTE *)(v9 + 55)
          || a5
          || (v19 = VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)a1), v13 = v19, v19 >= 0) )
        {
          v15 = *(_QWORD *)a1;
          *(_QWORD *)(v15 + 88) = *(_QWORD *)(a1 + 8);
          *(_QWORD *)(v15 + 64) = v21[1];
          return 0LL;
        }
        WdLogSingleEntry2(1LL, a2, v19);
        WdLogGlobalForLineNumber = 2115;
      }
    }
    DxgkLogInternalTriageEvent(v18, 0x40000LL);
    return v13;
  }
  else
  {
    _InterlockedIncrement(&dword_1400817E0);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2064;
    DxgkLogInternalTriageEvent(v17, 262145LL);
    return 3221225495LL;
  }
}
