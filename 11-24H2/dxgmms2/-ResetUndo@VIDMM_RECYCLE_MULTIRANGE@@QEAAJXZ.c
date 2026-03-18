/*
 * XREFs of ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x140104B0C
 * Callers:
 *     ?ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x14010BA90 (-ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     VidMmAllocateVirtualMemoryFromPartition @ 0x140090500 (VidMmAllocateVirtualMemoryFromPartition.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400BFC24 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1400BFCF4 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1400C6A4C (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::ResetUndo(VIDMM_RECYCLE_MULTIRANGE *this)
{
  int v1; // ebp
  unsigned __int64 v2; // r8
  int v3; // edi
  int v5; // esi
  int v6; // edx
  __int64 v7; // rcx
  __int64 CurrentPartitionHandle; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int VirtualMemoryFromPartition; // eax
  int v12; // eax
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+80h] [rbp+18h] BYREF

  v1 = 0;
  v2 = *((_QWORD *)this + 5) - *((_QWORD *)this + 6);
  v3 = 0;
  v13 = 0LL;
  v14 = v2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    v2 = v14;
    WdLogGlobalForLineNumber = 4184;
  }
  if ( !*((_BYTE *)this + 153) )
  {
    v5 = 1028;
    v6 = **(_DWORD **)(*((_QWORD *)this + 10) + 32LL);
    if ( (unsigned int)(v6 - 3) > 3 )
    {
      v13 = *((_QWORD *)this + 6);
      v12 = 4;
      if ( v6 != 2 )
        v12 = 1028;
      v5 = v12;
    }
    else
    {
      if ( v6 != 3 )
        v5 = 4;
      VIDMM_RECYCLE_MULTIRANGE::Map(this, 0LL, v2, 1u);
      if ( *((_BYTE *)this + 152) && (v7 = *((_QWORD *)this + 20)) != 0 )
      {
        v1 = 1;
        v13 = *((_QWORD *)this + 21) + v7;
      }
      else
      {
        v3 = -1071775472;
      }
      if ( v3 < 0 )
      {
LABEL_15:
        if ( v3 != -1071775472 )
          goto LABEL_16;
        goto LABEL_21;
      }
    }
    CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
    if ( CurrentPartitionHandle == -1 )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      VirtualMemoryFromPartition = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, unsigned __int64 *, int, int))VirtualMemoryInterface)(
                                     -1LL,
                                     &v13,
                                     0LL,
                                     &v14,
                                     0x1000000,
                                     v5);
    }
    else
    {
      VirtualMemoryFromPartition = VidMmAllocateVirtualMemoryFromPartition(
                                     CurrentPartitionHandle,
                                     (__int64)&v13,
                                     (__int64)&v14,
                                     0x1000000u,
                                     v5);
    }
    v3 = VirtualMemoryFromPartition;
    if ( VirtualMemoryFromPartition < 0 )
    {
      WdLogSingleEntry1(4LL, VirtualMemoryFromPartition);
      WdLogGlobalForLineNumber = 4239;
    }
    goto LABEL_15;
  }
  v3 = -1071775472;
LABEL_21:
  if ( (byte_140081241 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer();
LABEL_16:
  if ( v1 )
    VIDMM_RECYCLE_MULTIRANGE::Unmap(this);
  return (unsigned int)v3;
}
