/*
 * XREFs of ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400FE230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A9504 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400A9714 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400AAB80 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ABB28 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C2ADC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1400C2F6C (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1400FE430 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?UnmapAllocationFromIoMmu@VIDMM_SEGMENT@@IEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400FF4B0 (-UnmapAllocationFromIoMmu@VIDMM_SEGMENT@@IEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_APERTURE_SEGMENT::EvictResource(
        VIDMM_GLOBAL **this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        char a3,
        char a4,
        unsigned __int8 a5,
        struct VIDMM_LOCAL_ALLOC *a6)
{
  struct VIDMM_LOCAL_ALLOC *v6; // rbp
  __int64 v8; // rbx
  int v11; // ecx
  _DWORD *v12; // rdi

  v6 = a6;
  v8 = *(_QWORD *)a2;
  if ( !a6 )
    v6 = *(struct VIDMM_LOCAL_ALLOC **)(v8 + 48);
  v11 = *(_DWORD *)(v8 + 24);
  if ( (v11 & 0x200000) != 0 || (*(_DWORD *)(v8 + 28) & 0x800) != 0 )
    a3 = 0;
  if ( *((_DWORD *)this[3] + 10024) )
  {
    if ( a3 )
      (*((void (__fastcall **)(VIDMM_GLOBAL **, __int64))*this + 8))(this, v8);
    if ( (*(_DWORD *)(v8 + 24) & 0x800000) == 0 )
      (*((void (__fastcall **)(VIDMM_GLOBAL **, __int64, _QWORD, __int64, __int64, _QWORD, _DWORD))*this + 26))(
        this,
        v8,
        *((_QWORD *)a2 + 2) >> 12,
        *((_QWORD *)a2 + 9) / 4096LL,
        *((_QWORD *)a2 + 9) / 4096LL,
        *(_QWORD *)(v8 + 56),
        0);
    VIDMM_GLOBAL::WaitForAllPagingEngines(this[3], (struct VIDMM_GLOBAL_ALLOC *)v8);
    if ( a4 )
      return 0;
  }
  else
  {
    *(_DWORD *)(v8 + 24) = v11 | 0x200000;
  }
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(this[3], (struct VIDMM_GLOBAL_ALLOC *)v8, 1);
  if ( *((_BYTE *)this[3] + 40107) )
    VIDMM_SEGMENT::UnmapAllocationFromIoMmu((VIDMM_SEGMENT *)this, (struct VIDMM_GLOBAL_ALLOC *)v8, v6);
  if ( (**(_DWORD **)(v8 + 376) & 0x8000000) == 0 )
    goto LABEL_14;
  v12 = (_DWORD *)(v8 + 32);
  if ( (*(_DWORD *)(v8 + 32) & 2) == 0 )
  {
    if ( (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this[3], *((_QWORD *)a2 + 2)) < 0 )
    {
LABEL_14:
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[3], (struct VIDMM_GLOBAL_ALLOC *)v8, v6);
      v12 = (_DWORD *)(v8 + 32);
      if ( (*(_DWORD *)(v8 + 32) & 2) != 0 )
      {
        VIDMM_GLOBAL::ReturnPinnedBackingStore(this[3], *((_QWORD *)a2 + 2));
        *v12 &= ~2u;
      }
      goto LABEL_16;
    }
    v12 = (_DWORD *)(v8 + 32);
    *(_DWORD *)(v8 + 32) |= 2u;
  }
LABEL_16:
  if ( !a5 )
  {
    if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this[3], (struct VIDMM_GLOBAL_ALLOC *)v8) )
    {
      VIDMM_GLOBAL::ResetBackingStore(this[3], (struct VIDMM_GLOBAL_ALLOC *)v8);
      *v12 |= 0x10u;
      *(_QWORD *)(v8 + 304) = *((_QWORD *)this[3] + 570);
    }
  }
  return 1;
}
