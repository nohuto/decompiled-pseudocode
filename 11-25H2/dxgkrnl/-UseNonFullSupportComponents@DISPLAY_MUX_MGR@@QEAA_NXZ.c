/*
 * XREFs of ?UseNonFullSupportComponents@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x140088334
 * Callers:
 *     ?Init@DISPLAY_MUX_PAIRING@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140084C0C (-Init@DISPLAY_MUX_PAIRING@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     DpiMdmProcessStartAdapter @ 0x140088D14 (DpiMdmProcessStartAdapter.c)
 * Callees:
 *     <none>
 */

char __fastcall DISPLAY_MUX_MGR::UseNonFullSupportComponents(DISPLAY_MUX_MGR *this)
{
  char result; // al

  result = 0;
  if ( *(_BYTE *)this || *((_BYTE *)this + 8) )
    return 1;
  return result;
}
