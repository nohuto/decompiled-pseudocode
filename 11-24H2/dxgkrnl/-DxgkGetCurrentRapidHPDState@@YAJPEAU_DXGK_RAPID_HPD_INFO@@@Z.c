/*
 * XREFs of ?DxgkGetCurrentRapidHPDState@@YAJPEAU_DXGK_RAPID_HPD_INFO@@@Z @ 0x140078150
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x140051B58 (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 */

__int64 __fastcall DxgkGetCurrentRapidHPDState(struct _DXGK_RAPID_HPD_INFO *a1)
{
  struct DXGGLOBAL *Global; // rax

  if ( !a1 )
    return 3221225485LL;
  Global = DXGGLOBAL::GetGlobal();
  RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
    (struct DXGGLOBAL *)((char *)Global + 305624),
    1u,
    a1,
    (struct _GUID *)((char *)a1 + 4),
    (struct _DXGK_RAPID_HPD_INFO *)((char *)a1 + 24));
  return 0LL;
}
