/*
 * XREFs of ?ndisOidPostRcvFilterFreeQueue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B1F00
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400B1C78 (-ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostRcvFilterFreeQueue(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  int v3; // eax
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __m128i v6; // [rsp+20h] [rbp-88h]
  _BYTE v7[72]; // [rsp+60h] [rbp-48h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v6 = *(__m128i *)ndisCaptureIovOidContext(v7, a1);
  if ( (unsigned __int8)_mm_cvtsi128_si32(v6) )
  {
    v3 = *((_DWORD *)a1 + 10);
    if ( !v3 )
      goto LABEL_7;
    if ( v3 == 65539 )
    {
      _m_prefetchw((const void *)(v6.m128i_i64[1] + 4424));
      v4 = *(_DWORD *)(v6.m128i_i64[1] + 4424);
      do
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v6.m128i_i64[1] + 4424), v4, v4);
      }
      while ( v5 != v4 );
      if ( (v4 & 0x200) != 0 )
      {
LABEL_7:
        if ( *(_DWORD *)(v1 + 48) >= 0xCu )
        {
          ndisFreeReceiveQueue((struct _NDIS_MINIPORT_BLOCK *)v6.m128i_i64[1], *(_DWORD *)(*(_QWORD *)(v1 + 40) + 8LL));
          *((_DWORD *)a1 + 10) = 0;
        }
      }
    }
  }
}
