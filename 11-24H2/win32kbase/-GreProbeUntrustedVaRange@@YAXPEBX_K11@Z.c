/*
 * XREFs of ?GreProbeUntrustedVaRange@@YAXPEBX_K11@Z @ 0x1400ED230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreProbeUntrustedVaRange(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  if ( a3 == 1 )
  {
    if ( a2 && ((a4 - 1) & a1) != 0 )
      goto LABEL_4;
  }
  else
  {
    if ( !is_mul_ok(a2, a3) )
      RtlRaiseStatus(-1073741675);
    if ( a2 * a3 && ((a4 - 1) & a1) != 0 )
LABEL_4:
      ExRaiseDatatypeMisalignment();
  }
}
