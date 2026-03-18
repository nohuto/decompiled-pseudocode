/*
 * XREFs of CmObReferenceObjectByHandle @ 0x140BB9350
 * Callers:
 *     CmpSaveBootControlSet @ 0x1407CC764 (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407CF3E0 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x1407CF750 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407CF9F0 (NtCompressKey.c)
 *     NtLockRegistryKey @ 0x1407CFD80 (NtLockRegistryKey.c)
 *     NtRenameKey @ 0x1407D04D0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407D0990 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407D0CE0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1407D1090 (NtSaveMergedKeys.c)
 *     NtDeleteKey @ 0x1408697B0 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x14086A810 (NtSetValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     NtEnumerateValueKey @ 0x14090C2D0 (NtEnumerateValueKey.c)
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 *     NtQueryMultipleValueKey @ 0x1409790C0 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x140979A90 (NtDeleteValueKey.c)
 *     NtSaveKeyEx @ 0x140A6DF30 (NtSaveKeyEx.c)
 *     NtFlushKey @ 0x140A74F60 (NtFlushKey.c)
 *     NtEnumerateKey @ 0x140AE3CA0 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AE41C0 (NtQueryValueKey.c)
 *     CmSaveKeyToBuffer @ 0x140BB9010 (CmSaveKeyToBuffer.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140C631D0 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmObReferenceObjectByHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        KPROCESSOR_MODE a4,
        PVOID *a5,
        _QWORD *a6)
{
  _QWORD *v6; // rbx
  struct _OBJECT_HANDLE_INFORMATION *v7; // rax
  NTSTATUS v8; // edi
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v6 = a6;
  v7 = (struct _OBJECT_HANDLE_INFORMATION *)&v10;
  v10 = 0LL;
  Object = 0LL;
  if ( !a6 )
    v7 = 0LL;
  v8 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)CmKeyObjectType, a4, &Object, v7);
  if ( v8 < 0 )
    goto LABEL_4;
  if ( *(_DWORD *)Object != 1803104306 )
  {
    v8 = -1073741816;
LABEL_4:
    if ( Object )
      ObfDereferenceObject(Object);
    return (unsigned int)v8;
  }
  *a5 = Object;
  if ( v6 )
    *v6 = v10;
  return 0LL;
}
