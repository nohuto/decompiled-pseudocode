/*
 * XREFs of HUBDSM_QueryingDescriptorForFdoRequestFromStoppedEnumerated @ 0x140023670
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x14002B46C (HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb.c)
 */

__int64 __fastcall HUBDSM_QueryingDescriptorForFdoRequestFromStoppedEnumerated(__int64 a1)
{
  HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
