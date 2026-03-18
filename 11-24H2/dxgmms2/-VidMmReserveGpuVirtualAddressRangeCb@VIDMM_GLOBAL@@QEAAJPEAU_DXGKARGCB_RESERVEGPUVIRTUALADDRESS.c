/*
 * XREFs of ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1400BEBA0
 * Callers:
 *     VidMmReserveGpuVirtualAddressRange @ 0x1400438F0 (VidMmReserveGpuVirtualAddressRange.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400B9DA4 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400BC6E0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1400BCFA0 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddressRangeCb(
        VIDMM_GLOBAL *this,
        struct _DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE *a2)
{
  UINT Alignment; // ecx
  UINT64 v5; // rcx
  __int64 v6; // rax
  UINT64 v7; // rcx
  unsigned int v8; // r14d
  unsigned int v9; // r12d
  struct _KTHREAD **v10; // r13
  unsigned int i; // r15d
  CVirtualAddressAllocator *VirtualAddressAllocator; // r10
  __int64 result; // rax
  UINT64 BaseAddress; // rax
  UINT64 SizeInBytes; // rax
  __int64 v16; // rcx
  int v17; // eax

  if ( (*((_BYTE *)this + 40936) & 2) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v17 = 21289;
    goto LABEL_25;
  }
  Alignment = a2->Alignment;
  if ( !Alignment || ((Alignment - 1) & Alignment) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v17 = 21295;
    goto LABEL_25;
  }
  if ( (a2->Flags & 1) != 0 )
  {
    BaseAddress = a2->BaseAddress;
    if ( BaseAddress && (BaseAddress & 0xFFF) != 0 )
    {
      WdLogSingleEntry0(1LL);
      v17 = 21318;
    }
    else
    {
      SizeInBytes = a2->SizeInBytes;
      if ( SizeInBytes && (SizeInBytes & 0xFFF) == 0 )
        goto LABEL_9;
      WdLogSingleEntry0(1LL);
      v17 = 21324;
    }
LABEL_25:
    WdLogGlobalForLineNumber = v17;
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
    return 3221225485LL;
  }
  v5 = a2->BaseAddress;
  v6 = (1LL << *((_DWORD *)this + 10233) << 12) - 1;
  if ( v5 && (v5 & v6) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v17 = 21304;
    goto LABEL_25;
  }
  v7 = a2->SizeInBytes;
  if ( !v7 || (v7 & v6) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v17 = 21310;
    goto LABEL_25;
  }
LABEL_9:
  v8 = 0;
  v9 = 1;
  v10 = (struct _KTHREAD **)*((_QWORD *)a2->hDxgkProcess + 1);
  if ( (*(_DWORD *)(*((_QWORD *)a2->hDxgkProcess + 4) + 408LL) & 2) != 0 )
  {
    if ( !*((_BYTE *)this + 40939) )
    {
      result = VIDMM_PROCESS::OpenAdapter(v10, this);
      v8 = result;
      if ( (int)result < 0 )
        return result;
      *((_BYTE *)this + 40939) = 1;
    }
    v9 = *((_DWORD *)this + 1736);
  }
  for ( i = 0; i < v9; ++i )
  {
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                (VIDMM_PROCESS *)v10,
                                *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                i);
    if ( VirtualAddressAllocator )
    {
      v8 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
             VirtualAddressAllocator,
             a2->SizeInBytes,
             a2->BaseAddress,
             0LL,
             0LL,
             a2->Alignment,
             D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_COMMIT,
             0LL,
             (*(_BYTE *)&a2->0 & 1) == 0,
             &a2->StartVirtualAddress,
             0LL,
             0);
    }
    else if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * i) + 476LL) & 1) != 0 )
    {
      return 3221225485LL;
    }
  }
  return v8;
}
