/*
 * XREFs of ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x14007FA14
 * Callers:
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x14006D810 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x14006E820 (-BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedM.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x14007E0B8 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x14007F1D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPool::Create(
        struct DirectComposition::CBatchSharedMemoryPoolSet *a1,
        char a2,
        struct DirectComposition::CBatchSharedMemoryPool **a3)
{
  NTSTATUS v6; // ebx
  __int64 v7; // rcx
  struct DirectComposition::CBatchSharedMemoryPool *v8; // rax
  PVOID v9; // rcx
  PVOID MappedBase; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  ULONG_PTR ViewSize[2]; // [rsp+50h] [rbp-10h] BYREF
  PVOID Section; // [rsp+98h] [rbp+38h] BYREF

  Section = 0LL;
  MappedBase = 0LL;
  ViewSize[0] = 0LL;
  v12 = 4096LL;
  v6 = MmCreateSection(&Section, 6LL, 0LL, &v12, 4, 138412032, 0LL, 0LL);
  if ( v6 >= 0 )
  {
    v6 = MmMapViewInSessionSpace(Section, &MappedBase, ViewSize);
    if ( v6 >= 0 )
    {
      if ( a2 )
        v8 = (struct DirectComposition::CBatchSharedMemoryPool *)Win32AllocPoolWithQuotaZInitImpl(
                                                                   v7,
                                                                   0x48uLL,
                                                                   0x73624344u);
      else
        v8 = (struct DirectComposition::CBatchSharedMemoryPool *)Win32AllocPoolZInitImpl(256LL, 0x48uLL, 0x73624344u);
      if ( v8 )
      {
        v9 = MappedBase;
        *((_QWORD *)v8 + 3) = Section;
        *((_QWORD *)v8 + 7) = v9;
        *((_QWORD *)v8 + 2) = a1;
        *a3 = v8;
        return (unsigned int)v6;
      }
      v6 = -1073741801;
    }
  }
  if ( MappedBase )
    MmUnmapViewInSessionSpace(MappedBase);
  if ( Section )
    ObfDereferenceObject(Section);
  return (unsigned int)v6;
}
