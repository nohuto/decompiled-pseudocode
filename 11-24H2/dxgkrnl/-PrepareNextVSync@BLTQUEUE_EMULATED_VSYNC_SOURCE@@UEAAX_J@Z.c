/*
 * XREFs of ?PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAX_J@Z @ 0x14037B510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE_EMULATED_VSYNC_SOURCE::PrepareNextVSync(BLTQUEUE_EMULATED_VSYNC_SOURCE *this, __int64 a2)
{
  if ( *((_BYTE *)this + 8) )
    ExSetTimer(*((_QWORD *)this + 2), a2, 0LL, 0LL);
}
