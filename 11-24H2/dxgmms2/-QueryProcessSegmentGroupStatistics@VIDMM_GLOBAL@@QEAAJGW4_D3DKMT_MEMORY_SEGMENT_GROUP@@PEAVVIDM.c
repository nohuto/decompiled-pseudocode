/*
 * XREFs of ?QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJGW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION@@@Z @ 0x140099250
 * Callers:
 *     VidMmQueryProcessSegmentGroupStatistics @ 0x14004BF40 (VidMmQueryProcessSegmentGroupStatistics.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140035540 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1400F6C50 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryProcessSegmentGroupStatistics(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3,
        struct VIDMM_PROCESS *a4,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION *a5)
{
  unsigned int v5; // eax
  unsigned int v7; // esi
  unsigned int v11; // ebx
  unsigned __int64 v12; // [rsp+60h] [rbp-28h] BYREF
  _BYTE v13[24]; // [rsp+68h] [rbp-20h] BYREF
  unsigned __int64 v14; // [rsp+90h] [rbp+8h] BYREF

  v5 = *((_DWORD *)this + 1736);
  v7 = a2;
  if ( a2 >= v5 )
  {
    WdLogSingleEntry2(3LL, a2, v5);
    WdLogGlobalForLineNumber = 807;
    return 3221225485LL;
  }
  if ( (unsigned int)a3 > D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL )
    return 3221225485LL;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v13, (struct _KTHREAD **)this + 5135);
  v11 = VIDMM_PROCESS::QueryVideoMemoryInfo(
          a4,
          this,
          *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
          v7,
          a3,
          (unsigned __int64 *)a5,
          (unsigned __int64 *)a5 + 1,
          &v12,
          &v14,
          (unsigned __int64 *)a5 + 3,
          (unsigned __int64 *)a5 + 2);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  return v11;
}
