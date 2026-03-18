/*
 * XREFs of PfpRpControlRequestPerform @ 0x140A76194
 * Callers:
 *     PfpRpControlRequest @ 0x140A75E88 (PfpRpControlRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     PfpRpControlRequestUpdate @ 0x14094E7F8 (PfpRpControlRequestUpdate.c)
 *     PfpRpControlRequestReset @ 0x140A9E17C (PfpRpControlRequestReset.c)
 */

__int64 __fastcall PfpRpControlRequestPerform(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rsi
  unsigned int v5; // eax
  unsigned int v6; // ebx

  v2 = a1 + 17;
  if ( !ExAcquireRundownProtection(a1 + 17) )
    return (unsigned int)-1073741696;
  if ( *(_WORD *)(a2 + 2) )
  {
    if ( *(_WORD *)(a2 + 2) != 1 )
    {
      v6 = -1073741811;
      goto LABEL_5;
    }
    v5 = PfpRpControlRequestReset(a1);
  }
  else
  {
    v5 = PfpRpControlRequestUpdate((__int64)a1, (_DWORD *)a2);
  }
  v6 = v5;
LABEL_5:
  ExReleaseRundownProtection_0(v2);
  return v6;
}
