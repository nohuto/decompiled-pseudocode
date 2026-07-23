/*
 * XREFs of CmObReferenceObjectByHandle @ 0x140BBB350
 * Callers:
 *     CmpSaveBootControlSet @ 0x1407CCC54 (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407CF8D0 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x1407CFC40 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407CFEE0 (NtCompressKey.c)
 *     NtLockRegistryKey @ 0x1407D0270 (NtLockRegistryKey.c)
 *     NtRenameKey @ 0x1407D09C0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407D0E80 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407D11D0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1407D1580 (NtSaveMergedKeys.c)
 *     NtDeleteKey @ 0x14086DAE0 (NtDeleteKey.c)
 *     NtSetValueKey @ 0x14086EB40 (NtSetValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 *     NtQueryMultipleValueKey @ 0x1409618D0 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x1409622A0 (NtDeleteValueKey.c)
 *     NtSaveKeyEx @ 0x140A67430 (NtSaveKeyEx.c)
 *     NtFlushKey @ 0x140A6F280 (NtFlushKey.c)
 *     NtEnumerateKey @ 0x140AE5580 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AE5AA0 (NtQueryValueKey.c)
 *     CmSaveKeyToBuffer @ 0x140BBB010 (CmSaveKeyToBuffer.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140C6534C (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
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
