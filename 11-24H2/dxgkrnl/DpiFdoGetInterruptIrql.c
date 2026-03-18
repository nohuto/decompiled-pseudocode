/*
 * XREFs of DpiFdoGetInterruptIrql @ 0x14018BD08
 * Callers:
 *     DpiLdaGetInterruptIrqlForChain @ 0x1403FC8F8 (DpiLdaGetInterruptIrqlForChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoGetInterruptIrql(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // al
  unsigned int v3; // r9d
  unsigned int v4; // r8d
  __int64 v5; // r10
  unsigned __int8 *v6; // rcx

  v2 = 0;
  v3 = -1073741275;
  if ( a1 )
  {
    v4 = *(_DWORD *)(a1 + 16);
    if ( v4 )
    {
      v5 = v4;
      v6 = (unsigned __int8 *)(a1 + 24);
      do
      {
        if ( *(v6 - 4) == 2 && v2 < *v6 )
        {
          v2 = *v6;
          v3 = 0;
        }
        v6 += 20;
        --v5;
      }
      while ( v5 );
    }
    *a2 = v2;
  }
  return v3;
}
