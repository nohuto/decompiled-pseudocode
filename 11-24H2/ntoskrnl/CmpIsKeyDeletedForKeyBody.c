/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x140BB9480
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041AAA8 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x140462148 (CmQueryLayeredKey.c)
 *     CmpLoadKeyCommon @ 0x140464478 (CmpLoadKeyCommon.c)
 *     CmRestoreKey @ 0x1407CCF24 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x1407CE060 (CmSaveMergedKeys.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407DA6B4 (CmpIsHiveAlreadyLoaded.c)
 *     CmpCloseKeyObject @ 0x140841890 (CmpCloseKeyObject.c)
 *     CmpCheckKeyBodyAccess @ 0x140851B40 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140852140 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x14086C850 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x140874900 (CmQueryValueKey.c)
 *     CmQueryKey @ 0x140877890 (CmQueryKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14090B974 (CmEnumerateValueFromLayeredKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14097A13C (CmKeyBodyNeedsVirtualImage.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A66364 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpResolveHiveLoadConflict @ 0x140A86DC4 (CmpResolveHiveLoadConflict.c)
 *     CmpNotifyChangeKey @ 0x140AE4A64 (CmpNotifyChangeKey.c)
 * Callees:
 *     CmEqualTrans @ 0x140879280 (CmEqualTrans.c)
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
