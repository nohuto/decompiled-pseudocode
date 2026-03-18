/*
 * XREFs of ?NotifyPinned@CDxHandleBitmapRealization@@UEAAXXZ @ 0x1802D8050
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0xqxt_EventWriteTransfer @ 0x1802D85BC (McTemplateU0xqxt_EventWriteTransfer.c)
 */

void __fastcall CDxHandleBitmapRealization::NotifyPinned(CDxHandleBitmapRealization *this)
{
  char *v1; // rbx

  v1 = (char *)this + 50;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McTemplateU0xqxt_EventWriteTransfer(
      (_DWORD)this,
      *((_QWORD *)this - 31),
      *((_QWORD *)this - 31),
      *((_DWORD *)this - 23),
      *((_QWORD *)this - 9),
      *v1);
  *v1 = 1;
}
