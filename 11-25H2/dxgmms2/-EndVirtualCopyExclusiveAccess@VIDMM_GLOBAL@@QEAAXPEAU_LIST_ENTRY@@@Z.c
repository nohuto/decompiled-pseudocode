/*
 * XREFs of ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14009335C
 * Callers:
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1400BC1BC (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1400FFA00 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEG.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchSuspendResumeDevice @ 0x14002BAF0 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VIDMM_GLOBAL::EndVirtualCopyExclusiveAccess(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rdi
  __int64 Blink; // rcx
  struct _LIST_ENTRY *v6; // rbx

  if ( (byte_140081242 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer();
  Flink = a2->Flink;
  while ( Flink != a2 )
  {
    Blink = (__int64)Flink[-10].Blink;
    v6 = Flink;
    Flink = Flink->Flink;
    VidSchSuspendResumeDevice(Blink, 0, 0, 2);
    v6->Flink = 0LL;
    v6->Blink = 0LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 11142);
  ExReleasePushLockSharedEx((char *)this + 44552, 0LL);
  KeLeaveCriticalRegion();
}
