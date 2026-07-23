/*
 * XREFs of MiValidateStrongCodeDriverImage @ 0x140A709EC
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateStrongCodeDriverImage(__int64 a1)
{
  unsigned int *v1; // rdx
  unsigned int *v2; // r10
  unsigned int v3; // r8d
  __int64 v5; // r9

  v1 = (unsigned int *)(a1 + *(unsigned __int16 *)(a1 + 20) + 24LL);
  v2 = &v1[10 * *(unsigned __int16 *)(a1 + 6)];
  while ( v1 < v2 )
  {
    v3 = v1[9];
    if ( (v3 & 0x20000000) != 0 )
    {
      if ( (v3 & 0x82000000) == 0x80000000 )
      {
        dword_140E2D838 = 194;
        return 3221225595LL;
      }
      v5 = v1[4];
      if ( ((v5 + 4095) & 0xFFFFFFFFFFFFF000uLL) < ((v1[2] + 4095LL) & 0xFFFFFFFFFFFFF000uLL)
        && ((_DWORD)v5 || (v3 & 0x2000000) == 0) )
      {
        dword_140E2D838 = 196;
        return 3221225595LL;
      }
    }
    v1 += 10;
  }
  return 0LL;
}
