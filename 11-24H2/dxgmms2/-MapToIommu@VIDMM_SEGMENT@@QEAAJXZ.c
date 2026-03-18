/*
 * XREFs of ?MapToIommu@VIDMM_SEGMENT@@QEAAJXZ @ 0x14010D1E4
 * Callers:
 *     ?EnableIommuIsolation@VIDMM_PHYSICAL_ADAPTER@@QEAAJXZ @ 0x14009D09C (-EnableIommuIsolation@VIDMM_PHYSICAL_ADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400F7E8C (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 *     ?MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010D3AC (-MapAllocationToIoMmu@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::MapToIommu(VIDMM_SEGMENT *this)
{
  int v1; // eax
  unsigned __int64 v3; // rdi
  union _LARGE_INTEGER v4; // rbx
  unsigned __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // r14
  char *i; // rbx
  int v10; // eax
  unsigned int v11; // edi
  VIDMM_SEGMENT *j; // rbx
  int v14; // eax
  struct _MDL *v15; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v17; // eax

  v1 = *((_DWORD *)this + 26);
  if ( (v1 & 0x40) == 0 )
  {
    if ( (v1 & 0x1001) != 0 )
    {
      v8 = (char *)this + 8;
      for ( i = (char *)*((_QWORD *)this + 1); i != v8; i = *(char **)i )
      {
        v10 = VIDMM_SEGMENT::MapAllocationToIoMmu(this, (struct VIDMM_GLOBAL_ALLOC *)(i - 264));
        v11 = v10;
        if ( v10 < 0 )
        {
          WdLogSingleEntry2(3LL, i - 264, v10);
          WdLogGlobalForLineNumber = 6617;
          return v11;
        }
      }
      for ( j = (VIDMM_SEGMENT *)*((_QWORD *)this + 27);
            j != (VIDMM_SEGMENT *)((char *)this + 216);
            j = *(VIDMM_SEGMENT **)j )
      {
        v14 = VIDMM_SEGMENT::MapAllocationToIoMmu(this, (VIDMM_SEGMENT *)((char *)j - 264));
        v11 = v14;
        if ( v14 < 0 )
        {
          WdLogSingleEntry2(3LL, (char *)j - 264, v14);
          WdLogGlobalForLineNumber = 6632;
          return v11;
        }
      }
      v15 = (struct _MDL *)*((_QWORD *)this + 38);
      LogicalAddress = VidMmiGetLogicalAddress(*((void **)this + 66), 0LL);
      v17 = SysMmMapIommuRange(
              *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 224LL),
              LogicalAddress,
              v15,
              0);
      v7 = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry2(3LL, this, v17);
        WdLogGlobalForLineNumber = 6648;
        return v7;
      }
    }
    return 0LL;
  }
  v3 = *((_QWORD *)this + 11);
  v4 = *(union _LARGE_INTEGER *)((char *)this + 56);
  v5 = VidMmiGetLogicalAddress(*((void **)this + 65), 0LL);
  v6 = SysMmMapIommuContiguousRange(
         *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 224LL),
         v5,
         v4,
         v3,
         0);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  WdLogSingleEntry1(3LL, v6);
  WdLogGlobalForLineNumber = 6595;
  return v7;
}
