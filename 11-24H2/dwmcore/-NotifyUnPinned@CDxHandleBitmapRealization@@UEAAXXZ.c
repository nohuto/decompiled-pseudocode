/*
 * XREFs of ?NotifyUnPinned@CDxHandleBitmapRealization@@UEAAXXZ @ 0x1802D80B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0xqx_EventWriteTransfer @ 0x1802D852C (McTemplateU0xqx_EventWriteTransfer.c)
 */

void __fastcall CDxHandleBitmapRealization::NotifyUnPinned(CDxHandleBitmapRealization *this)
{
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McTemplateU0xqx_EventWriteTransfer(
      (_DWORD)this,
      *((_QWORD *)this - 31),
      *((_QWORD *)this - 31),
      *((_DWORD *)this - 23),
      *((_QWORD *)this - 9));
  *((_BYTE *)this + 50) = 0;
}
