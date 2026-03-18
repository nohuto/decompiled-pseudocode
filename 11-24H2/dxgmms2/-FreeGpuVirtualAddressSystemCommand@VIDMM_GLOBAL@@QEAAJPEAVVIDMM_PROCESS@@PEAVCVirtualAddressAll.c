/*
 * XREFs of ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAllocator@@_K2E@Z @ 0x1400FBBC4
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140035540 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400FBD98 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400FBDB4 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1400FBFBC (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RecordVaPagingHistoryFreeGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1400FC268 (-RecordVaPagingHistoryFreeGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _KTHREAD **a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int8 a6)
{
  struct _KTHREAD *v10; // rdi
  int started; // eax
  unsigned int i; // ebp
  _QWORD *v13; // rbx
  _QWORD *j; // rcx
  __int64 result; // rax
  _QWORD **v16; // rcx
  _QWORD *v17; // rax
  _QWORD *k; // rcx
  _BYTE v19[24]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v20[24]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v21; // [rsp+90h] [rbp+18h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v19, a3 + 7);
  v10 = a3[6];
  v21 = a4;
  while ( v10 )
  {
    started = CompareVadByStartAddressAvl(&v21, (struct _RTL_BALANCED_NODE *)v10);
    if ( started >= 0 )
    {
      if ( started <= 0 )
        break;
      v10 = (struct _KTHREAD *)*((_QWORD *)v10 + 1);
    }
    else
    {
      v10 = *(struct _KTHREAD **)v10;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
  if ( v10 )
  {
    if ( (*((_DWORD *)v10 + 18) & 0x800) == 0 || a6 )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryFreeGpuVa(
        this,
        a2,
        *((_QWORD *)v10 + 3),
        *((_QWORD *)v10 + 4) - *((_QWORD *)v10 + 3));
      for ( i = 0; i < *((_DWORD *)this + 1736); ++i )
      {
        v13 = 0LL;
        for ( j = (_QWORD *)*((_QWORD *)v10 + 3 * i + 12); j; j = (_QWORD *)*j )
          v13 = j;
        while ( v13 )
        {
          VIDMM_GLOBAL::UncommitVirtualAddressRange(
            this,
            (struct CVirtualAddressAllocator *)a3,
            (struct VIDMM_MAPPED_VA_RANGE *)(v13 - 1),
            1u,
            0LL);
          v16 = (_QWORD **)v13[1];
          v17 = v13;
          if ( v16 )
          {
            v13 = (_QWORD *)v13[1];
            for ( k = *v16; k; k = (_QWORD *)*k )
              v13 = k;
          }
          else
          {
            while ( 1 )
            {
              v13 = (_QWORD *)(v13[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !v13 || (_QWORD *)*v13 == v17 )
                break;
              v17 = v13;
            }
          }
        }
      }
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v20, a3 + 7);
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a3, v10);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
    }
    else
    {
      WdLogSingleEntry2(3LL, a3, a4);
      WdLogGlobalForLineNumber = 19309;
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, a3, a4);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 19342;
  }
  return result;
}
