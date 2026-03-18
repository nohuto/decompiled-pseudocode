/*
 * XREFs of ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAllocator@@_K2E@Z @ 0x1400B519C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140036484 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400B5364 (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400B5380 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1400B6400 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RecordVaPagingHistoryFreeGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1400B6B78 (-RecordVaPagingHistoryFreeGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z.c)
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
  __int64 i; // rbp
  _QWORD *v13; // rcx
  _QWORD *v14; // rbx
  __int64 result; // rax
  _QWORD **v16; // rcx
  _QWORD *v17; // rax
  _QWORD *j; // rcx
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
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1736); i = (unsigned int)(i + 1) )
      {
        v13 = (_QWORD *)*((_QWORD *)v10 + i + 12);
        v14 = 0LL;
        while ( v13 )
        {
          v14 = v13;
          v13 = (_QWORD *)*v13;
        }
        while ( v14 )
        {
          VIDMM_GLOBAL::UncommitVirtualAddressRange(
            this,
            (struct CVirtualAddressAllocator *)a3,
            (struct VIDMM_MAPPED_VA_RANGE *)(v14 - 1),
            1u,
            0LL);
          v16 = (_QWORD **)v14[1];
          v17 = v14;
          if ( v16 )
          {
            v14 = (_QWORD *)v14[1];
            for ( j = *v16; j; j = (_QWORD *)*j )
              v14 = j;
          }
          else
          {
            while ( 1 )
            {
              v14 = (_QWORD *)(v14[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !v14 || (_QWORD *)*v14 == v17 )
                break;
              v17 = v14;
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
      WdLogGlobalForLineNumber = 19051;
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, a3, a4);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 19084;
  }
  return result;
}
