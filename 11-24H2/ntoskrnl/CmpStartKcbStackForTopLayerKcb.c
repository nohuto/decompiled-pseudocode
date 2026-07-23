/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x140872050
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x140457758 (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x1407CE0EC (CmSaveKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407CF8D0 (CmOpenKeyForBugCheckRecovery.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407DBB34 (CmpDoBuildVirtualStack.c)
 *     CmpAssignKeySecurity @ 0x1407DCF10 (CmpAssignKeySecurity.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14084E400 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpReportNotify @ 0x14086D768 (CmpReportNotify.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x14087F420 (CmpDoWritethroughReparse.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1408E3094 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14090789C (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140909AC4 (CmpEnumerateLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409DC200 (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
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
    Pool = CmpAllocatePool(0x100uLL, 8LL * (unsigned int)(v2 - 1), 0x35364D43u);
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
