/*
 * XREFs of ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400A99E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x140040078 (McTemplateK0ppq_EtwWriteTransfer.c)
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

char __fastcall VIDMM_SYSMEM_SEGMENT::EvictResource(
        VIDMM_GLOBAL **this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        char a3,
        char a4,
        unsigned __int8 a5,
        struct VIDMM_LOCAL_ALLOC *a6)
{
  struct VIDMM_LOCAL_ALLOC *v6; // rbp
  __int64 v8; // rbx
  __int64 v11; // r8
  __int64 v12; // rax
  bool v13; // si

  v6 = a6;
  v8 = *(_QWORD *)a2;
  if ( !a6 )
    v6 = *(struct VIDMM_LOCAL_ALLOC **)(v8 + 48);
  if ( *((_DWORD *)this[3] + 10024) )
  {
    if ( a3 )
      (*((void (__fastcall **)(VIDMM_GLOBAL **, _QWORD))*this + 8))(this, *(_QWORD *)a2);
    VIDMM_GLOBAL::WaitForAllPagingEngines(this[3], (struct VIDMM_GLOBAL_ALLOC *)v8);
    if ( a4 )
      return 0;
  }
  else
  {
    *(_DWORD *)(v8 + 24) |= 0x200000u;
  }
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(this[3], (struct VIDMM_GLOBAL_ALLOC *)v8, 1u);
  if ( *((_BYTE *)this[3] + 40107) )
    VIDMM_SEGMENT::UnmapAllocationFromIoMmu((VIDMM_SEGMENT *)this, (struct VIDMM_GLOBAL_ALLOC *)v8, v6);
  v12 = *(_QWORD *)(v8 + 376);
  v13 = *(_WORD *)(v12 + 8) == 2;
  if ( (*(_DWORD *)v12 & 0x8000000) == 0 )
    goto LABEL_10;
  if ( (*(_DWORD *)(v8 + 32) & 2) == 0 )
  {
    if ( (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this[3], *((_QWORD *)a2 + 2)) < 0 )
      goto LABEL_10;
    *(_DWORD *)(v8 + 32) |= 2u;
  }
  if ( v13 )
  {
LABEL_10:
    VIDMM_SEGMENT::UnlockAllocationBackingStore(this[3], (struct VIDMM_GLOBAL_ALLOC *)v8, v6);
    if ( (*(_DWORD *)(v8 + 32) & 2) != 0 )
    {
      VIDMM_GLOBAL::ReturnPinnedBackingStore(this[3], *((_QWORD *)a2 + 2));
      *(_DWORD *)(v8 + 32) &= ~2u;
    }
  }
  if ( !a5 && (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this[3], (struct VIDMM_GLOBAL_ALLOC *)v8) )
  {
    VIDMM_GLOBAL::ResetBackingStore(this[3], (struct VIDMM_GLOBAL_ALLOC *)v8);
    *(_DWORD *)(v8 + 32) |= 0x10u;
    *(_QWORD *)(v8 + 304) = *((_QWORD *)this[3] + 570);
  }
  if ( (byte_140081241 & 0x10) != 0 )
    McTemplateK0ppq_EtwWriteTransfer(
      (unsigned __int16)(*((_WORD *)this + 20) + 1),
      &EventPagingOpSysmemUncommit,
      v11,
      *((_QWORD *)this[3] + 3),
      v8,
      (unsigned __int16)(*((_WORD *)this + 20) + 1));
  return 1;
}
