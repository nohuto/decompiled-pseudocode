/*
 * XREFs of ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x14010CD20
 * Callers:
 *     ?Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x1400A2D00 (-Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z.c)
 *     ?Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x14010CAB0 (-Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z.c)
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x14010D360 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14004BED4 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x14009C534 (-BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@I.c)
 *     ?InitPagesHistory@VIDMM_SEGMENT@@IEAAJXZ @ 0x14009CD3C (-InitPagesHistory@VIDMM_SEGMENT@@IEAAJXZ.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@PEAX@Z @ 0x14009E180 (--0VIDMM_LINEAR_POOL@@QEAA@PEAX@Z.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX1@ZP6A_N1@Z@Z @ 0x14009E878 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX1@ZP6A_N1@Z@Z.c)
 *     ?InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ @ 0x14010D0D8 (-InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x14010E588 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_SEGMENT::Init(VIDMM_SEGMENT *this, void (*a2)(void *, void *), union _LARGE_INTEGER *a3)
{
  VIDMM_LINEAR_POOL *v6; // rax
  VIDMM_LINEAR_POOL *v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 result; // rax
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // r9d
  unsigned int v16; // r9d
  LONGLONG v17; // rax
  PMDL PagesForMdl; // rax
  DXGADAPTER *v19; // rcx
  _DWORD *v20; // rsi
  int v21; // eax
  __int64 v22; // rcx
  struct _DXGKARG_QUERYADAPTERINFO v23; // [rsp+50h] [rbp-30h] BYREF
  int v24; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int64 v25; // [rsp+C8h] [rbp+48h] BYREF

  if ( (*((_DWORD *)this + 26) & 0x1000) != 0 )
  {
    *((_QWORD *)this + 31) = -1LL;
  }
  else
  {
    if ( !*((_QWORD *)this + 31) )
      *((_QWORD *)this + 31) = *((_QWORD *)this + 9) - *((_QWORD *)this + 12);
    v6 = (VIDMM_LINEAR_POOL *)operator new(320LL, 0x37316956u, 64LL);
    if ( v6 )
      v7 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v6, *((void **)this + 4));
    else
      v7 = 0LL;
    *((_QWORD *)this + 26) = v7;
    if ( !v7 )
    {
      _InterlockedIncrement(&dword_1400816A0);
      WdLogSingleEntry0(6LL);
      v9 = 549;
LABEL_9:
      WdLogGlobalForLineNumber = v9;
      DxgkLogInternalTriageEvent(v8, 262145LL);
      return 3221225495LL;
    }
    v11 = VIDMM_LINEAR_POOL::Init(v7, *((_QWORD *)this + 9), 1, a2, (bool (*)(void *))IsAllocationOffered);
    v12 = v11;
    if ( v11 < 0 )
    {
      _InterlockedIncrement(&dword_1400816A4);
      WdLogSingleEntry1(6LL, v11);
      WdLogGlobalForLineNumber = 562;
      v14 = 262145LL;
LABEL_12:
      DxgkLogInternalTriageEvent(v13, v14);
      return v12;
    }
  }
  v15 = *((_DWORD *)this + 27);
  if ( !v15
    || (result = VIDMM_SEGMENT::BlockMemoryRanges((__int64)this, 6u, 12, v15, (unsigned __int64 *)this + 12),
        (int)result >= 0) )
  {
    v16 = *((_DWORD *)this + 28);
    if ( !v16
      || (v25 = 0LL, result = VIDMM_SEGMENT::BlockMemoryRanges((__int64)this, 7u, 18, v16, &v25), (int)result >= 0) )
    {
      v17 = a3 ? a3->QuadPart : *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 2400LL);
      *((_QWORD *)this + 22) = v17;
      result = VIDMM_SEGMENT::InitializeForwardProgressMdl(this);
      v12 = result;
      if ( (int)result >= 0 )
      {
        PagesForMdl = MmAllocatePagesForMdl(0LL, *(PHYSICAL_ADDRESS *)((char *)this + 176), 0LL, 0x1000uLL);
        *((_QWORD *)this + 39) = PagesForMdl;
        if ( !PagesForMdl )
        {
          _InterlockedIncrement(&dword_140081738);
          WdLogSingleEntry0(6LL);
          v9 = 628;
          goto LABEL_9;
        }
        VIDMM_SEGMENT::InitPagesHistory(this);
        v19 = *(DXGADAPTER **)(*((_QWORD *)this + 3) + 24LL);
        if ( (*((_DWORD *)v19 + 1272) & 1) != 0 )
        {
          v20 = (_DWORD *)((char *)this + 536);
          v24 = *((unsigned __int16 *)this + 20);
          *(_QWORD *)&v23.Type = 40LL;
          v23.pInputData = &v24;
          *(_QWORD *)&v23.InputDataSize = 4LL;
          *(_QWORD *)&v23.Flags.0 = 0LL;
          HIDWORD(v23.hKmdProcessHandle) = 0;
          v23.pOutputData = (char *)this + 536;
          v23.OutputDataSize = 4;
          v21 = DXGADAPTER::DdiQueryAdapterInfo(v19, &v23);
          v12 = v21;
          if ( v21 == -1073741822 )
          {
            WdLogSingleEntry1(4LL, *((unsigned __int16 *)this + 20));
            WdLogGlobalForLineNumber = 654;
          }
          else
          {
            if ( v21 < 0 )
            {
              WdLogSingleEntry1(1LL, v21);
              WdLogGlobalForLineNumber = 660;
              v14 = 0x40000LL;
              goto LABEL_12;
            }
            if ( *v20 < 0x1000u || ((*v20 - 1) & *v20) != 0 )
            {
              WdLogSingleEntry1(1LL, (unsigned int)*v20);
              WdLogGlobalForLineNumber = 671;
              DxgkLogInternalTriageEvent(v22, 0x40000LL);
              return 3221225485LL;
            }
          }
        }
        WdLogSingleEntry0(4LL);
        WdLogGlobalForLineNumber = 677;
        WdLogSingleEntry4(4LL, *((_QWORD *)this + 9), *((int *)this + 13));
        WdLogGlobalForLineNumber = 682;
        VIDMM_SEGMENT::ReportSegment(this);
        return v12;
      }
    }
  }
  return result;
}
