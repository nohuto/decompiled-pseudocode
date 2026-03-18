/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x140BB97D0
 * Callers:
 *     CmpDoQueryKeyName @ 0x14041EA20 (CmpDoQueryKeyName.c)
 *     CmQueryLayeredKey @ 0x140462148 (CmQueryLayeredKey.c)
 *     CmpLoadKeyCommon @ 0x140464478 (CmpLoadKeyCommon.c)
 *     CmpSaveBootControlSet @ 0x1407CC764 (CmpSaveBootControlSet.c)
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 *     CmpLoadHiveVolatile @ 0x1407CE610 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x1407CEAF0 (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407CF3E0 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x1407CF750 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407CF9F0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1407CFFA0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D01B0 (NtQueryOpenSubKeysEx.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpAssignKeySecurity @ 0x1407DC9C0 (CmpAssignKeySecurity.c)
 *     CmpSecurityMethod @ 0x140852E10 (CmpSecurityMethod.c)
 *     CmEnumerateKey @ 0x14087C950 (CmEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x14090C2D0 (NtEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140913E28 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140916054 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140978D18 (CmKeyBodyReplicateToVirtual.c)
 *     CmSetLastWriteTimeKey @ 0x14097A430 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14097A7E4 (CmKeyBodyRemapToVirtual.c)
 *     CmSetKeyFlags @ 0x14097AE70 (CmSetKeyFlags.c)
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 *     CmLockKeyForWrite @ 0x1409E1DB8 (CmLockKeyForWrite.c)
 *     NtFlushKey @ 0x140A74F60 (NtFlushKey.c)
 *     CmpIsKeyBodyEligibleForDump @ 0x140BB926C (CmpIsKeyBodyEligibleForDump.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140C45A08 (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmEqualTrans @ 0x140879280 (CmEqualTrans.c)
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
