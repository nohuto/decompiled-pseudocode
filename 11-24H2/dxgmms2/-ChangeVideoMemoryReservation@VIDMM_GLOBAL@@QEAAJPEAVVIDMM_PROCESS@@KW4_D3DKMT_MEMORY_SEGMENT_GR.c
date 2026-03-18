/*
 * XREFs of ?ChangeVideoMemoryReservation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x140092CA0
 * Callers:
 *     VidMmChangeVideoMemoryReservation @ 0x14004BB70 (VidMmChangeVideoMemoryReservation.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140035540 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400DF530 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400E819C (-GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ChangeVideoMemoryReservation(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        unsigned int a3,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a4,
        unsigned __int64 a5)
{
  __int64 v6; // rsi
  __int64 result; // rax
  struct _KTHREAD *v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // r14
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v6 = a4;
  if ( a3 < *((_DWORD *)this + 1736) )
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v13, this + 5135);
    v10 = this[3];
    v11 = 0;
    v12 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *((unsigned int *)v10 + 60));
    if ( v12
      && (unsigned int)v6 <= 1
      && a5 <= *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(
                             *(VIDMM_GLOBAL **)v12,
                             a3,
                             (enum _D3DKMT_MEMORY_SEGMENT_GROUP)v6,
                             *((struct VIDMM_PARTITION **)a2 + 37))
               + 5) )
    {
      *(_QWORD *)(*(_QWORD *)(v12 + 16) + 8 * (v6 + 38LL * (unsigned __int16)a3) + 64) = a5;
      VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)v12, 1);
    }
    else
    {
      v11 = -1073741811;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    return v11;
  }
  else
  {
    WdLogSingleEntry1(3LL, a3);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 26290;
  }
  return result;
}
