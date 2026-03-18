/*
 * XREFs of ?DpiDisplayMuxObjectDelete@@YAXPEAX@Z @ 0x140084390
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U?$default_delete@VDISPLAY_MUX_SWITCH_OPERATION@@@wistd@@@wistd@@QEAAXPEAVDISPLAY_MUX_SWITCH_OPERATION@@@Z @ 0x1400889A4 (-reset@-$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U-$default_delete@VDISPLAY_MUX_SWITCH_OPERATI.c)
 */

void __fastcall DpiDisplayMuxObjectDelete(void *a1)
{
  wistd::unique_ptr<DISPLAY_MUX_SWITCH_OPERATION,wistd::default_delete<DISPLAY_MUX_SWITCH_OPERATION>>::reset(a1, 0LL);
}
