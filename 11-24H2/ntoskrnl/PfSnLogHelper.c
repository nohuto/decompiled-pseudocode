/*
 * XREFs of PfSnLogHelper @ 0x14096290C
 * Callers:
 *     PfSnLogVolumeCreate @ 0x1409627D0 (PfSnLogVolumeCreate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     PfSnTraceGetLogEntry @ 0x140276790 (PfSnTraceGetLogEntry.c)
 *     PfSnReferenceProcessTrace @ 0x1402ED090 (PfSnReferenceProcessTrace.c)
 *     PfSnFailProcessTrace @ 0x140962AA0 (PfSnFailProcessTrace.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnLogHelper(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v5; // rbx
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rdi

  v5 = 0LL;
  v6 = PfSnReferenceProcessTrace(a1);
  v7 = v6;
  if ( v6 )
  {
    if ( (int)PfSnTraceGetLogEntry((__int64)v6, a2, a3) < 0 )
    {
      PfSnFailProcessTrace(v7);
      ExReleaseRundownProtection_0(v7 + 45);
    }
    else
    {
      return v7;
    }
  }
  return (struct _EX_RUNDOWN_REF *)v5;
}
