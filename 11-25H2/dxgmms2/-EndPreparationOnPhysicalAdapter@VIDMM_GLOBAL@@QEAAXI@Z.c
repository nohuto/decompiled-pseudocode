/*
 * XREFs of ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400ACCD0
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400AB430 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400188F8 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400AC280 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(VIDMM_GLOBAL *this, unsigned int a2)
{
  __int64 v3; // rsi

  v3 = a2;
  if ( (byte_140081241 & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer();
  if ( *((_DWORD *)this + v3 + 414) != *((_DWORD *)this + v3 + 478)
    || *((_DWORD *)this + v3 + 542) != *((_DWORD *)this + v3 + 606) )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, v3, 0, 0LL, 0LL, 0, 0);
  }
}
