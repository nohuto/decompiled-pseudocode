/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x140BA9880
 * Callers:
 *     CmpDoQueryKeyName @ 0x140206830 (CmpDoQueryKeyName.c)
 *     CmQueryLayeredKey @ 0x140462ABC (CmQueryLayeredKey.c)
 *     CmpLoadKeyCommon @ 0x140465264 (CmpLoadKeyCommon.c)
 *     CmpSaveBootControlSet @ 0x1407BCF4C (CmpSaveBootControlSet.c)
 *     CmSaveKey @ 0x1407BE3E4 (CmSaveKey.c)
 *     CmpLoadHiveVolatile @ 0x1407BEDF8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1407BF2D8 (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407BFCB0 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x1407C0060 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407C02F0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1407C08A0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407C0AA0 (NtQueryOpenSubKeysEx.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpAssignKeySecurity @ 0x1407CD200 (CmpAssignKeySecurity.c)
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140863588 (CmKeyBodyReplicateToVirtual.c)
 *     CmSetLastWriteTimeKey @ 0x1408639C0 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x1408640B0 (CmSetKeyFlags.c)
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 *     CmEnumerateKey @ 0x14087C630 (CmEnumerateKey.c)
 *     CmpEnumerateLayeredKey @ 0x140974D5C (CmpEnumerateLayeredKey.c)
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 *     CmLockKeyForWrite @ 0x1409E3164 (CmLockKeyForWrite.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1409EE0AC (CmQueryMultipleValueForLayeredKey.c)
 *     NtFlushKey @ 0x140A73170 (NtFlushKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x140AAC100 (CmKeyBodyRemapToVirtual.c)
 *     CmpIsKeyBodyEligibleForDump @ 0x140BA9264 (CmpIsKeyBodyEligibleForDump.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140C3474C (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
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
    if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
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
