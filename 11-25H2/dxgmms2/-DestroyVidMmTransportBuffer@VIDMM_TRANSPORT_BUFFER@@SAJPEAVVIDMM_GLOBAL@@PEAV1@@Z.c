/*
 * XREFs of ?DestroyVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@PEAV1@@Z @ 0x14004E6D8
 * Callers:
 *     ?CreateVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@_KPEAPEAV1@PEAPEAX@Z @ 0x14004E244 (-CreateVidMmTransportBuffer@VIDMM_TRANSPORT_BUFFER@@SAJPEAVVIDMM_GLOBAL@@_KPEAPEAV1@PEAPEAX@Z.c)
 *     ?FreeTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_TRANSPORT_BUFFER@@@Z @ 0x140093E1C (-FreeTransportBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_TRANSPORT_BUFFER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140035820 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035890 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14004BCA0 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400B4820 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400B4C3C (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEBAKXZ @ 0x1400F671C (-AdapterId@VIDMM_GLOBAL@@QEBAKXZ.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400FF540 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x14010188C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_TRANSPORT_BUFFER::DestroyVidMmTransportBuffer(
        struct VIDMM_GLOBAL *this,
        struct VIDMM_TRANSPORT_BUFFER *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rax
  struct VIDMM_TRANSPORT_BUFFER **v6; // rcx
  struct _MDL *v7; // rbx
  unsigned __int64 LogicalAddress; // rax
  unsigned int v9; // eax
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  CVirtualAddressAllocator *v11; // rbp
  __int64 v12; // rbx
  bool v13; // r8
  struct _MDL *v14; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  void *v16; // rdx
  _BYTE v18[16]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v19[12]; // [rsp+40h] [rbp-78h] BYREF

  v4 = 0;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v18,
    (struct VIDMM_GLOBAL *)((char *)this + 40128),
    1);
  v5 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
  {
    if ( *(struct VIDMM_TRANSPORT_BUFFER **)(v5 + 8) != a2
      || (v6 = (struct VIDMM_TRANSPORT_BUFFER **)*((_QWORD *)a2 + 1), *v6 != a2) )
    {
      __fastfail(3u);
    }
    *v6 = (struct VIDMM_TRANSPORT_BUFFER *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
    if ( *((_BYTE *)this + 40152) )
    {
      v7 = (struct _MDL *)*((_QWORD *)a2 + 6);
      LogicalAddress = VidMmiGetLogicalAddress(*((void **)a2 + 7), 0LL);
      SysMmUnmapIommuRange(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), LogicalAddress, v7, 0);
    }
  }
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v18);
  v9 = VIDMM_GLOBAL::AdapterId(this);
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(g_pVidMmSystemProcess, v9, 0);
  v11 = VirtualAddressAllocator;
  v12 = *((_QWORD *)a2 + 3);
  if ( *((_BYTE *)a2 + 65) )
  {
    memset(v19, 0, 0x58uLL);
    v19[5] = g_pVidMmSystemProcess;
    v19[8] = *((_QWORD *)a2 + 4) >> 12;
    LODWORD(v19[0]) = 120;
    v19[7] = v12;
    v19[6] = v11;
    LOBYTE(v19[9]) = 1;
    v4 = VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v19, v13);
    *((_BYTE *)a2 + 65) = 0;
  }
  else if ( v12 )
  {
    CVirtualAddressAllocator::FreeVirtualAddressRange(VirtualAddressAllocator, *((_QWORD *)a2 + 3));
    *((_QWORD *)a2 + 3) = 0LL;
  }
  if ( *((_BYTE *)a2 + 64) )
  {
    MmUnlockPages(*((PMDL *)a2 + 6));
    *((_BYTE *)a2 + 64) = 0;
  }
  v14 = (struct _MDL *)*((_QWORD *)a2 + 6);
  if ( v14 )
  {
    IoFreeMdl(v14);
    *((_QWORD *)a2 + 6) = 0LL;
  }
  if ( *((_QWORD *)a2 + 2) )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))VirtualMemoryInterface + 2))(
      -1LL,
      (char *)a2 + 16,
      (char *)a2 + 32,
      0x8000LL);
    *((_QWORD *)a2 + 2) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
  }
  v16 = (void *)*((_QWORD *)a2 + 7);
  if ( v16 )
  {
    SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), v16);
    *((_QWORD *)a2 + 7) = 0LL;
  }
  operator delete(a2);
  return v4;
}
