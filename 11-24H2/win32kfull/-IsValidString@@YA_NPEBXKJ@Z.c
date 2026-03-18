/*
 * XREFs of ?IsValidString@@YA_NPEBXKJ@Z @ 0x1401B38B8
 * Callers:
 *     ?IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z @ 0x1401B371C (-IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsValidString(char *a1, unsigned int a2, int a3)
{
  unsigned int v3; // edx
  char *v4; // rax

  if ( a3 >= 0 && a3 < (unsigned __int64)a2 && (a3 & 1) == 0 )
  {
    v3 = a2 - 1;
    v4 = &a1[a3];
    while ( a3 < v3 )
    {
      if ( !*(_WORD *)v4 )
        return 1;
      a3 += 2;
      v4 += 2;
    }
  }
  return 0;
}
