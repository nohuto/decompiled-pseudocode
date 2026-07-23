/*
 * XREFs of EtwpCovSampStackHashLookup @ 0x1407B2C28
 * Callers:
 *     EtwpCovSampStackHashCheck @ 0x1409231EC (EtwpCovSampStackHashCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCovSampStackHashLookup(__int64 a1, int a2, _QWORD *a3)
{
  int v3; // r10d
  unsigned int i; // r9d
  _DWORD *v6; // r8
  __int64 result; // rax

  v3 = 0;
  for ( i = a2 & (*(_DWORD *)(a1 + 20) - 1); ; i = (*(_DWORD *)(a1 + 20) - 1) & (v3 + i) )
  {
    v6 = (_DWORD *)(a1 + 4 * (i + 6LL));
    if ( *v6 == a2 )
    {
      result = 1LL;
      goto LABEL_9;
    }
    if ( !*v6 )
      break;
    if ( !v3 )
    {
      v3 = -1640531535 * a2 + 1;
      if ( ((-79 * (_BYTE)a2) & 1) != 0 )
        v3 = -1640531535 * a2;
    }
  }
  result = 0LL;
LABEL_9:
  *a3 = v6;
  return result;
}
