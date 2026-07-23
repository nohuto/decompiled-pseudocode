/*
 * XREFs of MiPageAttributeBatchChangeNeeded @ 0x140393500
 * Callers:
 *     MiConvertContiguousPages @ 0x1403932BC (MiConvertContiguousPages.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x1403F8E00 (MiUpdateCacheAttributeListsForPage.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 */

__int64 __fastcall MiPageAttributeBatchChangeNeeded(unsigned __int64 a1, unsigned int a2)
{
  int v2; // eax
  __int64 v4; // rax
  unsigned int v5; // r9d
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6;
  if ( v2 == a2 )
    return 0LL;
  if ( v2 != 1 )
  {
    if ( v2 == 3
      || (v4 = (*(_QWORD *)(a1 + 24) >> 59) & 7LL, ((*(_QWORD *)(a1 + 24) >> 59) & 7) != 0)
      && ((_InterlockedOr(v6, 0), v5 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v4) & 7, v5 > 2) || (v4 & 1) == 0 && v5 >= 2) )
    {
      MiChangePageAttribute(a1, a2);
      return 0LL;
    }
  }
  return 1LL;
}
