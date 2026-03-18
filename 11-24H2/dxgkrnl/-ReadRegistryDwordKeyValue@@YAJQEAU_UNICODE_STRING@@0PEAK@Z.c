/*
 * XREFs of ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1401DD5EC
 * Callers:
 *     ?SetModeBehavior@DXGADAPTER@@AEAAXEE@Z @ 0x140195B8C (-SetModeBehavior@DXGADAPTER@@AEAAXEE@Z.c)
 *     DxgDetermineBootImageMode @ 0x1401B4A1C (DxgDetermineBootImageMode.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401D4724 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?CloseRegistrySubkey@@YAXPEAX@Z @ 0x14033C79C (-CloseRegistrySubkey@@YAXPEAX@Z.c)
 */

__int64 __fastcall ReadRegistryDwordKeyValue(
        struct _UNICODE_STRING *const a1,
        struct _UNICODE_STRING *const a2,
        unsigned int *a3)
{
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG ResultLength; // [rsp+30h] [rbp-19h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+70h] [rbp+27h] BYREF
  int v20; // [rsp+74h] [rbp+2Bh]
  unsigned int v21; // [rsp+7Ch] [rbp+33h]

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  *a3 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v5 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
  LODWORD(v10) = v5;
  if ( v5 < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6, v8, v9) + 24) = v5;
    WdLogGlobalForLineNumber = 344;
  }
  else
  {
    ResultLength = 0;
    v10 = ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
    CloseRegistrySubkey(KeyHandle);
    if ( (int)v10 >= 0 && v20 == 4 )
    {
      *a3 = v21;
    }
    else
    {
      *a3 = 0;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = v10;
      WdLogGlobalForLineNumber = 339;
    }
  }
  return (unsigned int)v10;
}
