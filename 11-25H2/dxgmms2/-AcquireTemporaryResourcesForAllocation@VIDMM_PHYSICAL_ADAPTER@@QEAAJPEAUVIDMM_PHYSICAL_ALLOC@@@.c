/*
 * XREFs of ?AcquireTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400A8C98
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1400A88F0 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIREC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     AcquireGPUResourcesFromSegmentSet @ 0x1400A6F90 (AcquireGPUResourcesFromSegmentSet.c)
 *     ValidateSegmentForAcquisitionOfResource @ 0x1400A8FF4 (ValidateSegmentForAcquisitionOfResource.c)
 *     ?FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z @ 0x1400AB9CC (-FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z.c)
 *     EvictAllReclaimedSysmemAllocation @ 0x1400BB57C (EvictAllReclaimedSysmemAllocation.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::AcquireTemporaryResourcesForAllocation(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_PHYSICAL_ALLOC *a2)
{
  __int64 v2; // rbx
  unsigned int v5; // r14d
  __int64 v6; // r15
  int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  unsigned int v12; // eax
  __int64 v14; // r9
  char v15; // dl
  _DWORD *v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rcx

  v2 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 2147;
  }
  if ( *((_QWORD *)a2 + 18) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      WdLogGlobalForLineNumber = 2156;
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v17);
      v18[3] = *((_QWORD *)a2 + 18);
      v18[4] = *((unsigned int *)a2 + 34);
      v18[5] = *((int *)a2 + 35);
      WdLogGlobalForLineNumber = 2160;
    }
    v19 = (_QWORD *)((char *)a2 + 112);
    v20 = *((_QWORD *)a2 + 14);
    if ( *(struct VIDMM_PHYSICAL_ALLOC **)(v20 + 8) != (struct VIDMM_PHYSICAL_ALLOC *)((char *)a2 + 112)
      || (v21 = (_QWORD *)*((_QWORD *)a2 + 15), (_QWORD *)*v21 != v19) )
    {
      __fastfail(3u);
    }
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    v7 = 0;
    *v19 = 0LL;
    *((_QWORD *)a2 + 15) = 0LL;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a2 + 18) + 56LL))(*((_QWORD *)a2 + 18), v2);
  }
  else
  {
    v5 = 0;
    v6 = *(_QWORD *)a2;
    v7 = -1071775488;
    if ( *((_DWORD *)this + 16) )
    {
      while ( 1 )
      {
        v8 = v5;
        v7 = ValidateSegmentForAcquisitionOfResource((_DWORD)this, (_DWORD)a2, v5, 0, 1);
        if ( v7 >= 0 )
          break;
LABEL_6:
        if ( ++v5 >= *((_DWORD *)this + 16) )
          goto LABEL_7;
      }
      v14 = *((_QWORD *)this + 206);
      v15 = *((_BYTE *)this + 476);
      v16 = *(_DWORD **)(v14 + 8LL * v5);
      if ( (v15 & 0x12) != 0
        && (v16[26] & 1) != 0
        && (dword_14008161C & 2) == 0
        && (*(_DWORD *)(*((_QWORD *)this + 6) + 6984LL) & 0x200000) == 0 )
      {
        if ( (**(_DWORD **)(v6 + 376) & 0x8000) != 0 && (v15 & 0x20) == 0 )
        {
LABEL_29:
          if ( (_DWORD)v8 == *((unsigned __int16 *)this + 34) )
          {
            v7 = -1071775488;
LABEL_17:
            if ( g_IsInternalReleaseOrDbg )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v8;
              WdLogGlobalForLineNumber = 2008;
            }
            goto LABEL_6;
          }
LABEL_16:
          v7 = (*(__int64 (__fastcall **)(_DWORD *, struct VIDMM_PHYSICAL_ALLOC *))(*(_QWORD *)v16 + 80LL))(v16, a2);
          if ( v7 >= 0 )
            goto LABEL_7;
          goto LABEL_17;
        }
        v8 = *((unsigned __int16 *)this + 34);
        v16 = *(_DWORD **)(v14 + 8 * v8);
      }
      if ( (v15 & 0x20) != 0 )
        goto LABEL_16;
      goto LABEL_29;
    }
LABEL_7:
    if ( v7 >= 0 )
      goto LABEL_8;
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      WdLogGlobalForLineNumber = 2195;
    }
    VIDMM_PHYSICAL_ADAPTER::FlushTemporaryResources(this, 1, 1);
    v7 = AcquireGPUResourcesFromSegmentSet((__int64)this, (__int64 *)a2, 0, 1, 0, -1LL);
    if ( v7 >= 0 )
    {
LABEL_8:
      EvictAllReclaimedSysmemAllocation(this);
      *((_DWORD *)a2 + 14) |= 0x40u;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v9);
        WdLogGlobalForLineNumber = 2220;
        v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10);
        v11[3] = *((_QWORD *)a2 + 18);
        v11[4] = *((unsigned int *)a2 + 34);
        v11[5] = *((int *)a2 + 35);
        WdLogGlobalForLineNumber = 2224;
      }
      v12 = *((_DWORD *)this + 430) + 1;
      *((_DWORD *)this + 430) = v12;
      if ( v12 > *((_DWORD *)this + 10) )
        *((_DWORD *)this + 10) = v12;
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      WdLogGlobalForLineNumber = 2234;
    }
  }
  return (unsigned int)v7;
}
