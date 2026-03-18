/*
 * XREFs of ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140092BE8
 * Callers:
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1400AF41C (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1400B07E8 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEG.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140007FC0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchSuspendResumeDevice @ 0x140020380 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VIDMM_GLOBAL::BeginVirtualCopyExclusiveAccess(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2)
{
  _QWORD **v2; // rsi
  _QWORD *i; // rbx
  struct _LIST_ENTRY *v5; // rdi
  struct _LIST_ENTRY *Blink; // rax

  v2 = (_QWORD **)((char *)this + 44648);
  DXGPUSHLOCK::AcquireShared((VIDMM_GLOBAL *)((char *)this + 44552));
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
  {
    v5 = (struct _LIST_ENTRY *)(i - 2);
    if ( !*(i - 2) && *(i - 22) )
    {
      VidSchSuspendResumeDevice(*(i - 21), 1, 0, 2);
      Blink = a2->Blink;
      if ( Blink->Flink != a2 )
        __fastfail(3u);
      v5->Flink = a2;
      v5->Blink = Blink;
      Blink->Flink = v5;
      a2->Blink = v5;
    }
  }
  if ( (byte_140081242 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer();
}
