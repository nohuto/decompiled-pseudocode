/*
 * XREFs of ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_N@Z @ 0x1400F5180
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x1400F4F90 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140023720 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1400365BC (-IsGpuVaPagingHistoryEnabled@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline @ 0x14004C5AC (Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x14009AF84 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400B970C (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400BA8FC (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUE.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400BC6E0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_PAGING_QUEUE@@_K@Z @ 0x1400F1B60 (-RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400FBDB4 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 ***a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        bool a5)
{
  unsigned int v5; // eax
  D3DGPU_SIZE_T *p_SizeInPages; // rdi
  D3DGPU_SIZE_T SizeInPages; // rdx
  int v9; // r8d
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  unsigned __int64 *v14; // r12
  __int64 v15; // r9
  D3DGPU_SIZE_T OffsetInPages; // rax
  D3DGPU_SIZE_T v17; // rcx
  __int64 result; // rax
  D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE *p_Protection; // r15
  struct VIDMM_PROCESS *v20; // rcx
  __int64 v21; // rcx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  struct CVirtualAddressAllocator *v23; // rbp
  __int64 v24; // r8
  __int64 v25; // rax
  volatile signed __int32 *v26; // rdi
  bool v27; // zf
  struct VIDMM_PAGING_QUEUE *v28; // r15
  unsigned int v29; // esi
  VIDMM_GLOBAL *v30; // rcx
  int v31; // [rsp+20h] [rbp-B8h]
  struct _DXGK_ADL *BaseAddress; // [rsp+28h] [rbp-B0h]
  unsigned __int64 *MinimumAddress; // [rsp+30h] [rbp-A8h]
  struct VIDMM_VAD_PENDING_OPERATION *MaximumAddress; // [rsp+38h] [rbp-A0h]
  _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE v35; // [rsp+48h] [rbp-90h]
  UINT64 DriverProtection; // [rsp+50h] [rbp-88h]
  struct VIDMM_VAD_PENDING_OPERATION *v37; // [rsp+80h] [rbp-58h] BYREF
  struct VIDMM_PROCESS *v38; // [rsp+88h] [rbp-50h]
  D3DGPU_SIZE_T v39; // [rsp+90h] [rbp-48h]
  unsigned int v41; // [rsp+F0h] [rbp+18h]
  unsigned int v42; // [rsp+F8h] [rbp+20h]
  int v43; // [rsp+100h] [rbp+28h]

  v5 = *((_DWORD *)a2 + 28);
  p_SizeInPages = &a4->SizeInPages;
  SizeInPages = a4->SizeInPages;
  v9 = 4096;
  v42 = (v5 >> 5) & 0x1F;
  v41 = 4096;
  v12 = SizeInPages << 12;
  v13 = 0LL;
  v39 = SizeInPages << 12;
  v14 = (unsigned __int64 *)((unsigned __int64)&a4->PagingFenceValue & -(__int64)a5);
  v43 = 0;
  if ( a3 )
  {
    v15 = ***a3;
    if ( !SizeInPages )
    {
      v12 = *(_QWORD *)(v15 + 16);
      v39 = v12;
    }
    if ( *((_BYTE *)a3 + 24) )
      a4->Protection.Value &= ~1uLL;
    OffsetInPages = a4->OffsetInPages;
    v17 = *(_QWORD *)(v15 + 16) >> 12;
    if ( OffsetInPages >= v17 )
    {
      WdLogSingleEntry1(3LL, a4->OffsetInPages);
      WdLogGlobalForLineNumber = 19500;
      return 3221225485LL;
    }
    if ( v17 - OffsetInPages < v12 >> 12 && (*((_BYTE *)this + 40937) & 2) == 0 )
    {
      WdLogSingleEntry1(3LL, SizeInPages);
      WdLogGlobalForLineNumber = 19511;
      return 3221225485LL;
    }
    p_SizeInPages = &a4->SizeInPages;
    v43 = 1;
    p_Protection = &a4->Protection;
    if ( *(_DWORD *)(v15 + 32) > 0x1000u )
      v9 = *(_DWORD *)(v15 + 32);
    v41 = v9;
    v20 = (struct VIDMM_PROCESS *)(*a3)[1];
    v38 = v20;
  }
  else
  {
    v21 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v21 )
      v20 = *(struct VIDMM_PROCESS **)(v21 + 8);
    else
      v20 = 0LL;
    p_Protection = &a4->Protection;
    v38 = v20;
    if ( (*(_BYTE *)&a4->Protection.0 & 4) != 0 )
      v43 = 6;
  }
  if ( !v12 )
  {
    WdLogSingleEntry1(3LL, *p_SizeInPages);
    WdLogGlobalForLineNumber = 19533;
    return 3221225485LL;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              v20,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                              0xFFFFFFFF);
  v23 = VirtualAddressAllocator;
  if ( VirtualAddressAllocator )
  {
    DriverProtection = a4->DriverProtection;
    v35.0 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)p_Protection->Value;
    MaximumAddress = (struct VIDMM_VAD_PENDING_OPERATION *)a4->MaximumAddress;
    MinimumAddress = (unsigned __int64 *)a4->MinimumAddress;
    BaseAddress = (struct _DXGK_ADL *)a4->BaseAddress;
    v24 = a4->OffsetInPages << 12;
    v37 = 0LL;
    v25 = CVirtualAddressAllocator::MapVirtualAddressRange(
            VirtualAddressAllocator,
            a3,
            v24,
            v43,
            v39,
            (unsigned __int64)BaseAddress,
            (unsigned __int64)MinimumAddress,
            (unsigned __int64)MaximumAddress,
            v41,
            v35,
            DriverProtection,
            v42,
            (void **)&v37,
            1,
            1);
    v26 = (volatile signed __int32 *)v25;
    if ( v25 )
    {
      v27 = (*(_BYTE *)&p_Protection->0 & 8) == 0;
      a4->VirtualAddress = *(_QWORD *)(v25 + 104);
      a4->PagingFenceValue = 0LL;
      if ( v27 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 136));
        v28 = a2;
        LOBYTE(v31) = 0;
        v29 = VIDMM_GLOBAL::CommitVirtualAddressRange(
                (struct VIDMM_WORKER_THREAD **)this,
                v23,
                a2,
                (struct VIDMM_MAPPED_VA_RANGE *)v25,
                v31,
                (const struct _DXGK_ADL *)&unk_14005AAC8,
                v14,
                v37);
        if ( v29 == 259 && a3 && (*((_DWORD *)a3 + 7) & 0x20) != 0 )
        {
          a3[33] = (__int64 **)a2;
          a3[36] = (__int64 **)*v14;
        }
      }
      else
      {
        if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline()
          && (unsigned int)Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline() )
        {
          _InterlockedIncrement(v26 + 34);
        }
        v28 = a2;
        v29 = VIDMM_GLOBAL::UncommitVirtualAddressRange(this, v23, (struct VIDMM_MAPPED_VA_RANGE *)v26, 0, v37);
      }
      if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this) )
      {
        if ( v14 )
          v13 = *v14;
        VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(v30, v38, (struct VIDMM_MAPPED_VA_RANGE *)v26, v28, v13);
      }
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((VIDMM_MAPPED_VA_RANGE *)v26, (struct _KTHREAD **)v23);
      return v29;
    }
    else
    {
      WdLogSingleEntry0(2LL);
      result = 3221225473LL;
      WdLogGlobalForLineNumber = 19568;
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 19542;
  }
  return result;
}
