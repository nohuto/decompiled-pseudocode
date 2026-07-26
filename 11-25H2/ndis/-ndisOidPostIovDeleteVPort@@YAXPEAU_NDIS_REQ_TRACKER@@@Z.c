/*
 * XREFs of ?ndisOidPostIovDeleteVPort@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E6C90
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400E582C (-ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisOidPostIovDeleteVPort(struct _NDIS_REQ_TRACKER *a1)
{
  __m128i *v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  signed __int32 *v5; // roff
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __m128i v8; // [rsp+20h] [rbp-88h]
  _BYTE v9[72]; // [rsp+60h] [rbp-48h] BYREF

  v2 = (__m128i *)ndisCaptureIovOidContext((__int64)v9, a1);
  v3 = *((_QWORD *)a1 + 4);
  v8 = *v2;
  if ( (unsigned __int8)_mm_cvtsi128_si32(*v2) )
  {
    v4 = *((_DWORD *)a1 + 10);
    if ( !v4 )
      goto LABEL_7;
    if ( v4 == 65539 )
    {
      v5 = (signed __int32 *)(v8.m128i_i64[1] + 4424);
      _m_prefetchw((const void *)(v8.m128i_i64[1] + 4424));
      v6 = *v5;
      do
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v8.m128i_i64[1] + 4424), v6, v6);
      }
      while ( v7 != v6 );
      if ( (v6 & 0x200) != 0 )
      {
LABEL_7:
        ndisIovDeleteVPort(*(_QWORD **)(v3 + 152));
        *((_DWORD *)a1 + 10) = 0;
      }
    }
  }
}
