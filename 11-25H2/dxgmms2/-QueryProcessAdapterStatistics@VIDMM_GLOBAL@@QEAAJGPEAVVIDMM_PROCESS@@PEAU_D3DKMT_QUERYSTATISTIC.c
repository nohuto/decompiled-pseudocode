/*
 * XREFs of ?QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJGPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x140098F18
 * Callers:
 *     VidMmQueryProcessAdapterStatistics @ 0x14004C810 (VidMmQueryProcessAdapterStatistics.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140036484 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAUVIDMM_PROCESS_COMMITMENT_INFO@@IGG@Z @ 0x1400DFC78 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAUVIDMM_PROCESS_COMMITMENT_INFO@@IGG@Z.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1400F93E0 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryProcessAdapterStatistics(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        struct VIDMM_PROCESS *a3,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *a4)
{
  __int64 v5; // rbp
  unsigned int v6; // ecx
  __int64 result; // rax
  unsigned int v10; // edi
  __int64 v11; // rdx
  unsigned __int16 v12; // r9
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rdi
  struct VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int16 v18; // r9
  __int64 v19; // r10
  __int64 v20; // r11
  _BYTE v21[32]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+78h] [rbp+10h]

  v5 = a2;
  v6 = *((_DWORD *)this + 1736);
  if ( a2 < v6 )
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v21, (struct _KTHREAD **)this + 5135);
    v10 = 0;
    v11 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
    if ( v11 )
    {
      *(_DWORD *)a4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v5) + 64LL);
      *((_QWORD *)a4 + 3) = *(_QWORD *)(v11 + 136);
      *((_DWORD *)a4 + 4) = *(_DWORD *)(v11 + 128);
      *((_DWORD *)a4 + 8) = *(_DWORD *)(v11 + 144);
      *((_DWORD *)a4 + 9) = *(_DWORD *)(v11 + 148);
      *((_QWORD *)a4 + 23) = 1LL;
      *((_QWORD *)a4 + 22) = *(int *)(v11 + 164);
      *((_QWORD *)a4 + 21) = (int)VIDMM_POLICY::IsActive((VIDMM_POLICY *)(v11 + 152));
      v12 = 0;
      *(_OWORD *)((char *)a4 + 40) = 0LL;
      *(_OWORD *)((char *)a4 + 56) = 0LL;
      *(_OWORD *)((char *)a4 + 72) = 0LL;
      v22 = *(_DWORD *)a4;
      if ( *(_DWORD *)a4 )
      {
        v13 = *((_QWORD *)a4 + 7);
        v14 = *((_QWORD *)a4 + 8);
        v15 = *((_QWORD *)a4 + 9);
        v16 = *((_QWORD *)a4 + 10);
        do
        {
          CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                                    a3,
                                    *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                    v5,
                                    v12);
          v12 = v18 + 1;
          *((_QWORD *)a4 + 5) = *((_QWORD *)CommitmentInformation + 20) + v19;
          *((_QWORD *)a4 + 6) = *((_QWORD *)CommitmentInformation + 9) + v20;
          v13 += *((_QWORD *)CommitmentInformation + 11);
          *((_QWORD *)a4 + 7) = v13;
          v14 += *((_QWORD *)CommitmentInformation + 13);
          *((_QWORD *)a4 + 8) = v14;
          v15 += *((_QWORD *)CommitmentInformation + 15);
          *((_QWORD *)a4 + 9) = v15;
          v16 += *((_QWORD *)CommitmentInformation + 17);
          *((_QWORD *)a4 + 10) = v16;
        }
        while ( v12 < v22 );
        v10 = 0;
      }
    }
    else
    {
      v10 = -1073741811;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
    return v10;
  }
  else
  {
    WdLogSingleEntry2(3LL, a2, v6);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 568;
  }
  return result;
}
