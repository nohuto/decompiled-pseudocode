/*
 * XREFs of ?swap@?$__compressed_pair@PEAVDISPLAY_MUX_PAIRING@@U?$default_delete@VDISPLAY_MUX_PAIRING@@@wistd@@@wistd@@QEAAXAEAV12@@Z @ 0x1400883AC
 * Callers:
 *     ?swap@?$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U?$default_delete@VDISPLAY_MUX_SWITCH_OPERATION@@@wistd@@@wistd@@QEAAXAEAV12@@Z @ 0x1400883C0 (-swap@-$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U-$default_delete@VDISPLAY_MUX_SWITCH_OPERATIO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__compressed_pair<DISPLAY_MUX_PAIRING *,wistd::default_delete<DISPLAY_MUX_PAIRING>>::swap(
        __int64 *a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = *a2;
  v3 = *a1;
  *a1 = *a2;
  *a2 = v3;
  return result;
}
