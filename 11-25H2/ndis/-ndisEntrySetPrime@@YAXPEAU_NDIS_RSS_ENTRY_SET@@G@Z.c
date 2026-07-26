/*
 * XREFs of ?ndisEntrySetPrime@@YAXPEAU_NDIS_RSS_ENTRY_SET@@G@Z @ 0x1400B3B98
 * Callers:
 *     ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1400B4124 (-ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU.c)
 * Callees:
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisEntrySetPrime(struct _NDIS_RSS_ENTRY_SET *a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // bx
  unsigned __int16 v4; // di
  __int64 v5; // rsi

  v2 = a2;
  v4 = 0;
  *(_OWORD *)a1 = 0LL;
  if ( a2 > 0x3Fu )
  {
    v5 = (unsigned __int16)(((unsigned __int16)(a2 - 64) >> 6) + 1);
    memset(a1, -1, 8 * v5);
    do
    {
      ++v4;
      v2 -= 64;
      --v5;
    }
    while ( v5 );
  }
  if ( v2 )
    *((_QWORD *)a1 + v4) = (1LL << v2) - 1;
}
