/*
 * XREFs of ?NotifyUnPinned@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x1802D9470
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0xqx_EventWriteTransfer @ 0x1802D852C (McTemplateU0xqx_EventWriteTransfer.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::NotifyUnPinned(CDxHandleYUVBitmapRealization *this)
{
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McTemplateU0xqx_EventWriteTransfer(
      (__int64)this,
      (unsigned int)*((_QWORD *)this - 31),
      (unsigned int)*((_QWORD *)this - 31) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)this - 31)) << 32),
      *((_DWORD *)this - 23),
      *((_QWORD *)this - 9));
  *((_BYTE *)this + 48) = 0;
}
