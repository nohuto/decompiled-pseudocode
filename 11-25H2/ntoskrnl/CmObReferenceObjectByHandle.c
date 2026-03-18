/*
 * XREFs of CmObReferenceObjectByHandle @ 0x140BA93B0
 * Callers:
 *     CmpSaveBootControlSet @ 0x1407BCF4C (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x1407BFCB0 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x1407C0060 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407C02F0 (NtCompressKey.c)
 *     NtLockRegistryKey @ 0x1407C0680 (NtLockRegistryKey.c)
 *     NtRenameKey @ 0x1407C0DC0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1407C1280 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407C15D0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1407C1980 (NtSaveMergedKeys.c)
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     NtSetValueKey @ 0x140869680 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14086CE00 (NtDeleteValueKey.c)
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     NtQueryMultipleValueKey @ 0x140995DD0 (NtQueryMultipleValueKey.c)
 *     NtDeleteKey @ 0x140A0A070 (NtDeleteKey.c)
 *     NtSaveKeyEx @ 0x140A6BD80 (NtSaveKeyEx.c)
 *     NtFlushKey @ 0x140A73170 (NtFlushKey.c)
 *     NtEnumerateKey @ 0x140AD2D00 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 *     CmSaveKeyToBuffer @ 0x140BA9010 (CmSaveKeyToBuffer.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140C51EBC (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
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
