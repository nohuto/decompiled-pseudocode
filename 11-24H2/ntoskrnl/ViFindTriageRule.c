/*
 * XREFs of ViFindTriageRule @ 0x140C3E528
 * Callers:
 *     VfTriageSystem @ 0x140C3E1C0 (VfTriageSystem.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 */

_DWORD *__fastcall ViFindTriageRule(_DWORD *a1, __int64 a2, int a3)
{
  _DWORD *v3; // rbx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rcx

  v3 = a1;
  v4 = (unsigned __int64)a1 + a2;
  while ( (unsigned __int64)v3 < v4 )
  {
    v5 = (unsigned int)*v3;
    if ( (*v3 & 0x70000) == 0 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: zeroed rules structure (hit an invalid type rule).\n");
      return 0LL;
    }
    if ( (HIWORD(*v3) & 7) == 1 )
    {
      if ( (unsigned __int16)a3 == (unsigned __int16)v5 )
      {
        DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: rule was found for crash code %X.\n", a3);
        return v3;
      }
LABEL_8:
      v3 = (_DWORD *)((char *)v3 + (v5 >> 19) + 8);
    }
    else if ( (HIWORD(*v3) & 7) == 2 )
    {
      goto LABEL_8;
    }
  }
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: no rule found for crash code %X.\n", a3);
  return 0LL;
}
