/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x14086DD20
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041AAA8 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x140462148 (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407CF3E0 (CmOpenKeyForBugCheckRecovery.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407DB5E4 (CmpDoBuildVirtualStack.c)
 *     CmpAssignKeySecurity @ 0x1407DC9C0 (CmpAssignKeySecurity.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140852140 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpReportNotify @ 0x140869438 (CmpReportNotify.c)
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408768A0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x14087B570 (CmpDoWritethroughReparse.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14090B974 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140913E28 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140916054 (CmpEnumerateLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x14097A430 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x14097AE70 (CmSetKeyFlags.c)
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409E2450 (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 */

__int64 __fastcall CmpStartKcbStackForTopLayerKcb(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 Pool; // rcx
  __int64 v6; // rcx
  __int64 i; // rdx
  __int64 v9; // r8

  v2 = *(__int16 *)(a2 + 66);
  Pool = 0LL;
  if ( v2 >= 2 )
  {
    Pool = CmpAllocatePool(0x100uLL);
    if ( !Pool )
      return 3221225626LL;
  }
  *(_WORD *)(a1 + 2) = -1;
  *(_WORD *)a1 = v2;
  *(_QWORD *)(a1 + 24) = Pool;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 66);
  v6 = *(__int16 *)(a2 + 66);
  if ( (_WORD)v6 )
  {
    for ( i = *(_QWORD *)(a2 + 192); i; LOWORD(v6) = v6 - 1 )
    {
      v9 = *(_QWORD *)(i + 16);
      if ( (__int16)v6 >= 2 )
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (__int16)v6 - 16) = v9;
      else
        *(_QWORD *)(a1 + 8LL * (__int16)v6 + 8) = v9;
      i = *(_QWORD *)(i + 24);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8 * v6 + 8) = a2;
  }
  return 0LL;
}
