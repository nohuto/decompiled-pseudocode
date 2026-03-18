/*
 * XREFs of HUBDSM_SettingSEL @ 0x140024A50
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_SetSelUsingControlTransfer @ 0x14002C08C (HUBDTX_SetSelUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SettingSEL(__int64 a1)
{
  HUBDTX_SetSelUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
