/*
 * XREFs of ?SwapRTPointer@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAXXZ @ 0x14000C678
 * Callers:
 *     ?InsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@0@Z @ 0x14000C59C (-InsertAfter@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnection.c)
 *     ?Remove@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@@Z @ 0x14000CA7C (-Remove@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeT.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::SwapRTPointer(
        __int64 a1)
{
  signed __int64 result; // rax

  for ( result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 96),
                   a1 + 48 * (*(unsigned __int16 *)(a1 + 112) ^ 1LL),
                   a1 + 48LL * *(unsigned __int16 *)(a1 + 112));
        !result;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 96),
                   a1 + 48 * (*(unsigned __int16 *)(a1 + 112) ^ 1LL),
                   a1 + 48LL * *(unsigned __int16 *)(a1 + 112)) )
  {
    Sleep(1u);
  }
  *(_WORD *)(a1 + 112) ^= 1u;
  return result;
}
