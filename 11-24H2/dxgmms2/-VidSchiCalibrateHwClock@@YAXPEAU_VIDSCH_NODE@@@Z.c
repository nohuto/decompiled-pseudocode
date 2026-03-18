/*
 * XREFs of ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14000E788
 * Callers:
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14000D5E0 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000E8B0 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140045C20 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x1400523B8 (VidSchiCreateNodeSchedulingLog.c)
 * Callees:
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall VidSchiCalibrateHwClock(struct _VIDSCH_NODE *a1)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-30h]
  unsigned __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]

  v2 = *((_QWORD *)a1 + 3);
  if ( (*((_DWORD *)a1 + 3) & 2) != 0 && !*((_QWORD *)a1 + 2058) )
  {
    v3 = *((unsigned __int16 *)a1 + 2);
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v11 = 1;
    v4 = *(_QWORD *)(v2 + 688);
    v5 = v4 + 8 * v3;
    if ( (unsigned int)v3 < *(_DWORD *)(v2 + 760) )
      v4 += 8 * v3;
    else
      v5 = *(_QWORD *)(v2 + 688);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64 *))DxgCoreInterface[64])(
      *(_QWORD *)(v2 + 8),
      *(unsigned __int16 *)(*(_QWORD *)v4 + 8LL),
      *(unsigned __int16 *)(*(_QWORD *)v5 + 6LL),
      &v8);
    v6 = *((_QWORD *)a1 + 2057);
    if ( v6 )
    {
      if ( v6 + 1000 <= v10 )
      {
        v7 = v9;
        if ( *((_QWORD *)a1 + 2059) + 1000LL <= v9 )
        {
          *((_QWORD *)a1 + 2058) = v10;
          *((_QWORD *)a1 + 2060) = v7;
        }
      }
    }
    else
    {
      *((_QWORD *)a1 + 2057) = v10;
      *((_QWORD *)a1 + 2059) = v9;
    }
  }
}
