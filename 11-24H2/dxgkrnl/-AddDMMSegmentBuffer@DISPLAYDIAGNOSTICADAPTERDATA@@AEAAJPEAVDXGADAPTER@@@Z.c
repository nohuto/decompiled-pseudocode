/*
 * XREFs of ?AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1401BE6A4
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401BF658 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z @ 0x140257C9C (-DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z.c)
 */

int __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddDMMSegmentBuffer(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  int result; // eax
  void *v5; // rax
  unsigned __int64 v6; // rdx
  int v7; // edi

  if ( !a2 )
    return -1073741811;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1222;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1222LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = (void *)operator new[](0x2000uLL, 0x4B677844u, 256LL);
  *((_QWORD *)this + 6) = v5;
  if ( v5 )
  {
    result = DmmCollectBlackScreenDiagInfo(a2, v6, v5);
    v7 = result;
    if ( result >= 0 )
    {
      *((_BYTE *)this + 56) = 1;
    }
    else
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 6));
      *((_QWORD *)this + 6) = 0LL;
      result = v7;
      *((_BYTE *)this + 56) = 0;
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, 0x2000LL);
    WdLogGlobalForLineNumber = 1227;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
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
