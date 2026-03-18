/*
 * XREFs of ?OnReset@VIDSCH_VSYNC_SMOOTHER@@UEAAXXZ @ 0x14003B430
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall VIDSCH_VSYNC_SMOOTHER::OnReset(VIDSCH_VSYNC_SMOOTHER *this)
{
  if ( (byte_140081244 & 4) != 0 )
    McTemplateK0q_EtwWriteTransfer();
}
