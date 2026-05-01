/*
 * XREFs of ?HampSessionMarkLogoffInProgress@@YAJPEAU_HAM_SESSION@@@Z @ 0x1800716FC
 * Callers:
 *     ?HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800460F0 (-HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     ?HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x180045EA0 (-HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 *     ?HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x180045F00 (-HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 */

__int64 __fastcall HampSessionMarkLogoffInProgress(struct _HAM_SESSION *a1)
{
  int v2; // eax
  unsigned int v3; // edi

  HampSessionAcquireLockExclusive(a1);
  v2 = *((_DWORD *)a1 + 36);
  if ( (v2 & 2) != 0 )
  {
    v3 = -1073740682;
  }
  else
  {
    *((_DWORD *)a1 + 36) = v2 | 2;
    v3 = 0;
  }
  HampSessionReleaseLockExclusive(a1);
  return v3;
}
