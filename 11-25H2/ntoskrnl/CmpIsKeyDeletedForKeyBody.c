/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x140BA94E0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041D4E4 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x140462ABC (CmQueryLayeredKey.c)
 *     CmpLoadKeyCommon @ 0x140465264 (CmpLoadKeyCommon.c)
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x1407BE848 (CmSaveMergedKeys.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407CAEF0 (CmpIsHiveAlreadyLoaded.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14083F9D0 (CmEnumerateValueFromLayeredKey.c)
 *     CmpCloseKeyObject @ 0x140845600 (CmpCloseKeyObject.c)
 *     CmpCheckKeyBodyAccess @ 0x1408559A0 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140855F70 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14086392C (CmKeyBodyNeedsVirtualImage.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x14086B654 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x140878350 (CmQueryValueKey.c)
 *     CmQueryKey @ 0x14087AC40 (CmQueryKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x1409391FC (CmpNotifyChangeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A639DC (CmEnumerateValueKeyFromMergedView.c)
 *     CmpResolveHiveLoadConflict @ 0x140A82524 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
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
