/*
 * XREFs of ?ndisOidPostRcvFilterClearFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140094BB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x140089870 (-ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostRcvFilterClearFilter(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  int v3; // eax
  int *v4; // r14
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  KIRQL v7; // al
  __m128i BugCheckParameter2; // [rsp+40h] [rbp-88h]
  _BYTE v9[72]; // [rsp+80h] [rbp-48h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  BugCheckParameter2 = *(__m128i *)ndisCaptureIovOidContext(v9, a1);
  if ( !(unsigned __int8)_mm_cvtsi128_si32(BugCheckParameter2) )
    return;
  v3 = *((_DWORD *)a1 + 10);
  if ( v3 )
  {
    v4 = (int *)((char *)a1 + 40);
    if ( v3 != 65539 )
    {
LABEL_8:
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xBu,
          0x18u,
          (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
          BugCheckParameter2.m128i_i8[8],
          *((_DWORD *)a1 + 10));
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2.m128i_i64[1] + 96));
      *(_QWORD *)(BugCheckParameter2.m128i_i64[1] + 520) = KeGetCurrentThread();
      if ( (*(_DWORD *)(v1 + 88) & 0x10000) != 0
        && (*(_DWORD *)(BugCheckParameter2.m128i_i64[1] + 124) & 0x1000000) == 0
        && (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2.m128i_i64[1] + 3760) + 26LL) & 1) == 0 )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          *(_QWORD *)(BugCheckParameter2.m128i_i64[1] + 3856),
          "Miniport has failed OID_RECEIVE_FILTER_CLEAR_FILTER");
        ndisBugCheckEx(0x1CuLL, BugCheckParameter2.m128i_u64[1], *(unsigned int *)(v1 + 32), *v4);
      }
      *(_QWORD *)(BugCheckParameter2.m128i_i64[1] + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2.m128i_i64[1] + 96), v7);
      return;
    }
    _m_prefetchw((const void *)(BugCheckParameter2.m128i_i64[1] + 4424));
    v5 = *(_DWORD *)(BugCheckParameter2.m128i_i64[1] + 4424);
    do
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2.m128i_i64[1] + 4424), v5, v5);
    }
    while ( v6 != v5 );
    if ( (v5 & 0x200) == 0 )
    {
      v4 = (int *)((char *)a1 + 40);
      goto LABEL_8;
    }
  }
  if ( *(_DWORD *)(v1 + 48) >= 0x10u )
  {
    ndisClearReceiveFilter(
      (struct _NDIS_MINIPORT_BLOCK *)BugCheckParameter2.m128i_i64[1],
      *(_DWORD *)(*(_QWORD *)(v1 + 40) + 12LL));
    *((_DWORD *)a1 + 10) = 0;
  }
}
