/*
 * XREFs of CmpUnlockKcbStack @ 0x1408713D0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041D4E4 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x140462ABC (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x1407BE3E4 (CmSaveKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407BFCB0 (CmOpenKeyForBugCheckRecovery.c)
 *     CmpDoBuildVirtualStack @ 0x1407CBE24 (CmpDoBuildVirtualStack.c)
 *     CmpAssignKeySecurity @ 0x1407CD200 (CmpAssignKeySecurity.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14083F9D0 (CmEnumerateValueFromLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x1408639C0 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x1408640B0 (CmSetKeyFlags.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x140878350 (CmQueryValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14088A6C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpPromoteKey @ 0x140972D04 (CmpPromoteKey.c)
 *     CmpEnumerateLayeredKey @ 0x140974D5C (CmpEnumerateLayeredKey.c)
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409E3800 (CmpStartSiloRegistryNamespace.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1409EE0AC (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
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
