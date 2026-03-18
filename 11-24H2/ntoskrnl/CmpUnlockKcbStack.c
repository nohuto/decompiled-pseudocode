/*
 * XREFs of CmpUnlockKcbStack @ 0x14086E6E0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041AAA8 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x140462148 (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407CF3E0 (CmOpenKeyForBugCheckRecovery.c)
 *     CmpDoBuildVirtualStack @ 0x1407DB5E4 (CmpDoBuildVirtualStack.c)
 *     CmpAssignKeySecurity @ 0x1407DC9C0 (CmpAssignKeySecurity.c)
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x140874900 (CmQueryValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408768A0 (CmpGetSymbolicLinkTarget.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14090B974 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140913E28 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140916054 (CmpEnumerateLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x14097A430 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x14097AE70 (CmSetKeyFlags.c)
 *     CmpPromoteKey @ 0x1409880D8 (CmpPromoteKey.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409E2450 (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpUnlockKcbStack(__int64 a1)
{
  __int16 i; // bx
  ULONG_PTR v3; // rcx
  __int64 result; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    if ( i >= 2 )
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16);
    else
      v3 = *(_QWORD *)(a1 + 8LL * i + 8);
    result = CmpUnlockKcb(v3);
  }
  return result;
}
