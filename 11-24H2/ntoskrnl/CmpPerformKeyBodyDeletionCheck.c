/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140414760 (CmpDoQueryKeyName.c)
 *     CmQueryLayeredKey @ 0x140457758 (CmQueryLayeredKey.c)
 *     CmpLoadKeyCommon @ 0x14045ABA8 (CmpLoadKeyCommon.c)
 *     CmpSaveBootControlSet @ 0x1407CCC54 (CmpSaveBootControlSet.c)
 *     CmSaveKey @ 0x1407CE0EC (CmSaveKey.c)
 *     CmpLoadHiveVolatile @ 0x1407CEB00 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1407CEFE0 (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407CF8D0 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x1407CFC40 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407CFEE0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1407D0490 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D06A0 (NtQueryOpenSubKeysEx.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpAssignKeySecurity @ 0x1407DCF10 (CmpAssignKeySecurity.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     CmEnumerateKey @ 0x140880800 (CmEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14090789C (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140909AC4 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140961528 (CmKeyBodyReplicateToVirtual.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x140962FF4 (CmKeyBodyRemapToVirtual.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 *     CmLockKeyForWrite @ 0x1409DBB68 (CmLockKeyForWrite.c)
 *     NtFlushKey @ 0x140A6F280 (NtFlushKey.c)
 *     CmpIsKeyBodyEligibleForDump @ 0x140BBB26C (CmpIsKeyBodyEligibleForDump.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140C47B58 (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmEqualTrans @ 0x14087D5B0 (CmEqualTrans.c)
 */

__int64 __fastcall CmpPerformKeyBodyDeletionCheck(__int64 a1, __int64 a2)
{
  _QWORD ***v3; // r9
  _QWORD **v4; // r11
  _QWORD *v5; // rax
  _QWORD **v6; // r8
  _QWORD **v7; // rcx
  bool i; // zf
  _QWORD *v9; // rcx
  __int64 result; // rax
  _QWORD ***v11; // r10

  if ( (*(_DWORD *)(a1 + 48) & 9) != 0 )
  {
LABEL_17:
    result = 3221226533LL;
    if ( (*(_DWORD *)(a1 + 48) & 1) == 0 )
      return 3221225852LL;
  }
  else
  {
    if ( a2 )
    {
      v3 = (_QWORD ***)(*(_QWORD *)(a1 + 8) + 208LL);
      v4 = *v3;
      v5 = *v3;
      if ( v3 != *v3 )
        v5 = *v4;
      v6 = 0LL;
      v7 = v4 - 4;
      for ( i = v3 == v4; ; i = v3 == v11 )
      {
        if ( !i )
          v6 = v7;
        v9 = v5;
        if ( !v6 )
          break;
        if ( *((_DWORD *)v6 + 17) == 2 )
        {
          if ( !CmEqualTrans((__int64)v6[7], a2) )
            return 0LL;
          goto LABEL_17;
        }
        v5 = *v3;
        if ( v9 )
          v5 = v9;
        v11 = (_QWORD ***)v5;
        if ( v3 != v5 )
          v5 = (_QWORD *)*v5;
        v6 = 0LL;
        v7 = v11 - 4;
      }
    }
    return 0LL;
  }
  return result;
}
