/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x140BBB480
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x140457758 (CmQueryLayeredKey.c)
 *     CmpLoadKeyCommon @ 0x14045ABA8 (CmpLoadKeyCommon.c)
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x1407CE550 (CmSaveMergedKeys.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407DAC04 (CmpIsHiveAlreadyLoaded.c)
 *     CmpCloseKeyObject @ 0x14083DB50 (CmpCloseKeyObject.c)
 *     CmpCheckKeyBodyAccess @ 0x14084DE00 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14084E400 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140870B80 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x140878C30 (CmQueryValueKey.c)
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1408E3094 (CmEnumerateValueFromLayeredKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14096294C (CmKeyBodyNeedsVirtualImage.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A5F148 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpResolveHiveLoadConflict @ 0x140A8189C (CmpResolveHiveLoadConflict.c)
 *     CmpNotifyChangeKey @ 0x140AE6344 (CmpNotifyChangeKey.c)
 * Callees:
 *     CmEqualTrans @ 0x14087D5B0 (CmEqualTrans.c)
 */

bool __fastcall CmpIsKeyDeletedForKeyBody(__int64 a1, __int64 a2)
{
  _QWORD ***v2; // r8
  _QWORD **v3; // r11
  _QWORD *v4; // rax
  _QWORD **v5; // r9
  _QWORD **v6; // rcx
  bool i; // zf
  _QWORD *v8; // rcx
  _QWORD ***v10; // r10

  if ( (*(_DWORD *)(a1 + 48) & 9) != 0 )
    return 1;
  if ( a2 )
  {
    v2 = (_QWORD ***)(*(_QWORD *)(a1 + 8) + 208LL);
    v3 = *v2;
    v4 = *v2;
    if ( v2 != *v2 )
      v4 = *v3;
    v5 = 0LL;
    v6 = v3 - 4;
    for ( i = v2 == v3; ; i = v2 == v10 )
    {
      if ( !i )
        v5 = v6;
      v8 = v4;
      if ( !v5 )
        break;
      if ( *((_DWORD *)v5 + 17) == 2 )
        return CmEqualTrans((__int64)v5[7], a2) != 0;
      v4 = *v2;
      if ( v8 )
        v4 = v8;
      v10 = (_QWORD ***)v4;
      if ( v2 != v4 )
        v4 = (_QWORD *)*v4;
      v5 = 0LL;
      v6 = v10 - 4;
    }
  }
  return 0;
}
