/*
 * XREFs of ?InitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x140094B38
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x140109488 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DeInitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ @ 0x140092EE8 (-DeInitPhysicalHeap@VIDMM_GLOBAL@@CAXXZ.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@PEAX@Z @ 0x14009E180 (--0VIDMM_LINEAR_POOL@@QEAA@PEAX@Z.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX1@ZP6A_N1@Z@Z @ 0x14009E878 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX1@ZP6A_N1@Z@Z.c)
 */

void VIDMM_GLOBAL::InitPhysicalHeap(void)
{
  __int64 v0; // rcx
  int v1; // eax
  VIDMM_LINEAR_POOL *v2; // rax
  VIDMM_LINEAR_POOL *v3; // rax
  int v4; // eax

  VIDMM_GLOBAL::m_PhysicalBlockSize = qword_140081640;
  VIDMM_GLOBAL::m_PhysicalBlockLowestAddress.QuadPart = qword_140081648;
  VIDMM_GLOBAL::m_PhysicalBlockHighestAddress.QuadPart = qword_140081650;
  VIDMM_GLOBAL::m_PhysicalBlock = 0LL;
  VIDMM_GLOBAL::m_pPhysicalPool = 0LL;
  if ( qword_140081640 )
  {
    VIDMM_GLOBAL::m_PhysicalBlock = (PVOID)MmAllocateContiguousNodeMemory(
                                             qword_140081640,
                                             qword_140081648,
                                             qword_140081650,
                                             *(_QWORD *)&DOUBLE_0_0,
                                             4,
                                             0x80000000);
    if ( VIDMM_GLOBAL::m_PhysicalBlock )
    {
      v2 = (VIDMM_LINEAR_POOL *)operator new(320LL, 0x37316956u, 64LL);
      if ( v2 )
      {
        v3 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v2, 0LL);
        VIDMM_GLOBAL::m_pPhysicalPool = v3;
        if ( v3 )
        {
          v4 = VIDMM_LINEAR_POOL::Init(v3, VIDMM_GLOBAL::m_PhysicalBlockSize, 0, 0LL, 0LL);
          if ( v4 >= 0 )
            return;
          _InterlockedIncrement(&dword_1400816A4);
          WdLogSingleEntry1(6LL, v4);
          WdLogGlobalForLineNumber = 29560;
          goto LABEL_11;
        }
      }
      else
      {
        VIDMM_GLOBAL::m_pPhysicalPool = 0LL;
      }
      _InterlockedIncrement(&dword_1400816A0);
      WdLogSingleEntry0(6LL);
      v1 = 29549;
    }
    else
    {
      _InterlockedIncrement(&dword_140081818);
      WdLogSingleEntry0(6LL);
      v1 = 29541;
    }
    WdLogGlobalForLineNumber = v1;
LABEL_11:
    DxgkLogInternalTriageEvent(v0, 262145LL);
    VIDMM_GLOBAL::DeInitPhysicalHeap();
  }
}
