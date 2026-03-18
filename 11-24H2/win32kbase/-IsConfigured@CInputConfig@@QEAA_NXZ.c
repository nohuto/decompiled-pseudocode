/*
 * XREFs of ?IsConfigured@CInputConfig@@QEAA_NXZ @ 0x1401F3E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CInputConfig::IsConfigured(CInputConfig *this)
{
  return *((_BYTE *)this + 1504) == 0;
}
