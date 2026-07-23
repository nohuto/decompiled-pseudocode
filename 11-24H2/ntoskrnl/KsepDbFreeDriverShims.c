/*
 * XREFs of KsepDbFreeDriverShims @ 0x140941710
 * Callers:
 *     KsepDbGetShimInfo @ 0x14073C4E4 (KsepDbGetShimInfo.c)
 *     KseDriverUnloadImage @ 0x14094179C (KseDriverUnloadImage.c)
 *     KsepGetShimsForDriver @ 0x140941A34 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409428D4 (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetDriverShims @ 0x140942B68 (KsepDbGetDriverShims.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x140943154 (KsepStringFree.c)
 */

void __fastcall KsepDbFreeDriverShims(_QWORD *a1, unsigned int a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  char *v5; // rdi

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = a1 + 3;
      v4 = a2;
      v5 = (char *)(a1 + 2);
      do
      {
        if ( v3[2] )
          KsepStringFree(v5 + 16);
        if ( *v3 )
          KsepStringFree(v5);
        if ( v3[4] )
          KsepStringFree(v5 + 32);
        v5 += 80;
        v3 += 10;
        --v4;
      }
      while ( v4 );
    }
    KsepPoolFreePaged(a1);
  }
}
