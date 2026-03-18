/*
 * XREFs of ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x14035FE10
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x14035F710 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1403BCA40 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x14003B098 (-VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDM.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1402F8FE8 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x140360E8C (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MapGpuVirtualAddressToAllocation(struct ADAPTER_RENDER *a1, struct DXGALLOCATION *a2)
{
  DXGADAPTER *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // r15
  int v11; // r14d
  int v12; // ebp
  __int64 v13; // rsi
  __int64 v14; // rax
  struct DXGPROCESS *Current; // rax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  const wchar_t *v19; // r9
  struct DXGPROCESS *v20; // rax
  struct D3DDDI_MAPGPUVIRTUALADDRESS v21; // [rsp+50h] [rbp-A8h] BYREF

  memset(&v21, 0, sizeof(v21));
  v4 = (DXGADAPTER *)*((_QWORD *)a1 + 2);
  v21.Protection.Value = 1LL;
  if ( DXGADAPTER::ReplicateGdiContent(v4) )
  {
    v10 = *((_QWORD *)a2 + 5);
    v11 = 0;
    v12 = 0;
    v13 = *(_QWORD *)(v10 + 24);
    while ( 1 )
    {
      v14 = *((_QWORD *)a1 + 2);
      if ( !v13 )
        break;
      if ( *(_BYTE *)(v14 + 209) )
      {
        Current = DXGPROCESS::GetCurrent(v5);
        v16 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4664LL),
                *((_DWORD *)Current + 122),
                *(const struct DXGDEVICE **)(v10 + 8),
                0,
                *(_DWORD *)(v13 + 20),
                &v21);
      }
      else
      {
        v16 = VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
                *((VIDMM_EXPORT **)a1 + 95),
                *((struct VIDMM_GLOBAL **)a1 + 96),
                0LL,
                *(struct VIDMM_MULTI_ALLOC **)(v13 + 24),
                &v21,
                0,
                (*(_DWORD *)(v13 + 72) >> 12) & 0x3F);
      }
      v8 = v16;
      if ( v16 < 0 )
      {
        WdLogSingleEntry1(3LL, v16);
        WdLogGlobalForLineNumber = 1754;
        return v8;
      }
      v21.BaseAddress = v21.VirtualAddress;
      v5 = (*(_DWORD *)(v13 + 72) >> 12) & 0x3F;
      v17 = 1 << ((*(_DWORD *)(v13 + 72) >> 12) & 0x3F);
      if ( (v17 & v11) != 0 )
      {
        WdLogSingleEntry0(2LL);
        v18 = 1764LL;
        v19 = L"For GDI replication a resource should have only one allocation per physical adapter";
LABEL_15:
        WdLogGlobalForLineNumber = v18;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v19, v18, 0LL, 0LL, 0LL, 0LL);
        return (unsigned int)-1073741811;
      }
      v13 = *(_QWORD *)(v13 + 64);
      v11 |= v17;
      ++v12;
    }
    if ( v12 != *(_DWORD *)(v14 + 296) )
    {
      WdLogSingleEntry0(2LL);
      v18 = 1773LL;
      v19 = L"For GDI replication a resource must have one allocation per physical adapter";
      goto LABEL_15;
    }
    return 0LL;
  }
  v6 = *((_QWORD *)a1 + 2);
  if ( *(_BYTE *)(v6 + 209) )
  {
    v20 = DXGPROCESS::GetCurrent(v5);
    v7 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
           (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)a1 + 2) + 4664LL),
           *((_DWORD *)v20 + 122),
           *(const struct DXGDEVICE **)(*((_QWORD *)a2 + 5) + 8LL),
           0,
           *((_DWORD *)a2 + 5),
           &v21);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, _BYTE, _DWORD))(*(_QWORD *)(*((_QWORD *)a1 + 95) + 8LL) + 744LL))(
           *((_QWORD *)a1 + 96),
           0LL,
           *((_QWORD *)a2 + 3),
           &v21,
           0,
           *(_DWORD *)(v6 + 3148));
  }
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  WdLogSingleEntry1(3LL, v7);
  WdLogGlobalForLineNumber = 1803;
  return v8;
}
