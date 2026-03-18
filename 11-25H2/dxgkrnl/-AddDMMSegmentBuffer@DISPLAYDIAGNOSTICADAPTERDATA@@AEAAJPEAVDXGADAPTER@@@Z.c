/*
 * XREFs of ?AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1401BBD24
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401BCC9C (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z @ 0x140250E64 (-DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z.c)
 */

int __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddDMMSegmentBuffer(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  int result; // eax
  __int64 v5; // r9
  void *v6; // rax
  unsigned __int64 v7; // rdx
  int v8; // edi

  if ( !a2 )
    return -1073741811;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1222;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1222LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = (void *)operator new[](0x2000uLL, 0x4B677844u, 256LL, v5);
  *((_QWORD *)this + 6) = v6;
  if ( v6 )
  {
    result = DmmCollectBlackScreenDiagInfo(a2, v7, v6);
    v8 = result;
    if ( result >= 0 )
    {
      *((_BYTE *)this + 56) = 1;
    }
    else
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 6));
      *((_QWORD *)this + 6) = 0LL;
      result = v8;
      *((_BYTE *)this + 56) = 0;
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, 0x2000LL);
    WdLogGlobalForLineNumber = 1227;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Out of memory allocating DMM Segment data (size 0x%I64x)",
      0x2000LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741801;
  }
  return result;
}
