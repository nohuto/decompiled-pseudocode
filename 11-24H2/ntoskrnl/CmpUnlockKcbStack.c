/*
 * XREFs of CmpUnlockKcbStack @ 0x140872A10
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x140457758 (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x1407CE0EC (CmSaveKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407CF8D0 (CmOpenKeyForBugCheckRecovery.c)
 *     CmpDoBuildVirtualStack @ 0x1407DBB34 (CmpDoBuildVirtualStack.c)
 *     CmpAssignKeySecurity @ 0x1407DCF10 (CmpAssignKeySecurity.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x140878C30 (CmQueryValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1408E3094 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14090789C (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140909AC4 (CmpEnumerateLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 *     CmpPromoteKey @ 0x1409708BC (CmpPromoteKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409DC200 (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
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
