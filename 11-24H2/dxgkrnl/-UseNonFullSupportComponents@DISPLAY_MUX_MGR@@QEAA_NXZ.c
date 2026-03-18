/*
 * XREFs of ?UseNonFullSupportComponents@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x14008895C
 * Callers:
 *     ?Init@DISPLAY_MUX_PAIRING@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x14008529C (-Init@DISPLAY_MUX_PAIRING@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     DpiMdmProcessStartAdapter @ 0x1400893FC (DpiMdmProcessStartAdapter.c)
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
