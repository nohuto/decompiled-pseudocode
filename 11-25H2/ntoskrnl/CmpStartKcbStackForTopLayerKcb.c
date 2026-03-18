/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x14086CAF0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041D4E4 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x140462ABC (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x1407BE3E4 (CmSaveKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407BFCB0 (CmOpenKeyForBugCheckRecovery.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407CBE24 (CmpDoBuildVirtualStack.c)
 *     CmpAssignKeySecurity @ 0x1407CD200 (CmpAssignKeySecurity.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14083F9D0 (CmEnumerateValueFromLayeredKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140855F70 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmSetLastWriteTimeKey @ 0x1408639C0 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x1408640B0 (CmSetKeyFlags.c)
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpReportNotify @ 0x14086DEF4 (CmpReportNotify.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14088A6C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpEnumerateLayeredKey @ 0x140974D5C (CmpEnumerateLayeredKey.c)
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 *     CmpDoWritethroughReparse @ 0x14098A930 (CmpDoWritethroughReparse.c)
 *     CmpProcessLightWeightUOW @ 0x1409D96AC (CmpProcessLightWeightUOW.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409E3800 (CmpStartSiloRegistryNamespace.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1409EE0AC (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
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
