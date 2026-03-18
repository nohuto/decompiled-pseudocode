/*
 * XREFs of ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402E58BC
 * Callers:
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1403252DC (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1403ADAF0 (-UnpinResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140187B38 (-UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E5A50 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1402E5AAC (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipAllocation(
        DXGDEVICE *this,
        unsigned int a2,
        __int64 a3,
        struct DXGALLOCATION **a4,
        struct COREDEVICEACCESS *a5)
{
  __int64 v5; // rbx
  __int64 i; // rdi
  struct DXGALLOCATION *v10; // rsi

  LODWORD(v5) = 0;
  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    v10 = a4[i];
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                           + 1272LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
           *((_QWORD *)v10 + 3)) )
    {
      if ( !*((_QWORD *)v10 + 5) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 7337;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"NULL != pCurrentAlloc->m_pOwningResource",
          7337LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DxgkReferenceDxgAllocation(v10);
      DxgkReferenceDxgResource(*((struct DXGRESOURCE **)v10 + 5));
      LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, struct DXGALLOCATION *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                                          + 8LL)
                                                                              + 216LL))(
                      *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                      v10);
      if ( (int)v5 < 0 )
      {
        v5 = (int)DXGDEVICE::UnpinDirectFlipAllocationSynchronous(this, a2, (struct VIDMM_MULTI_ALLOC **)v10, a5);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v10 + 5) + 72LL));
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v10 + 11);
        WdLogSingleEntry1(3LL, v5);
        WdLogGlobalForLineNumber = 7364;
        if ( (int)v5 < 0 )
          break;
      }
    }
  }
  return (unsigned int)v5;
}
