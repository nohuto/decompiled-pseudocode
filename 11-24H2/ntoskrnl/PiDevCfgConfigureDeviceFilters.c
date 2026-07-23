/*
 * XREFs of PiDevCfgConfigureDeviceFilters @ 0x140A8BA3C
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x14094C3DC (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     _PnpCtxRegCopyTree @ 0x14081800C (_PnpCtxRegCopyTree.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceFilters(int a1, void *a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _DWORD v7[2]; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v8; // [rsp+38h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  v7[1] = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v8 = L"Filters";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v7;
  v7[0] = 1048590;
  ObjectAttributes.Attributes = 576;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v5 = v3;
  if ( v3 == -1073741772 )
  {
    v5 = 0;
  }
  else if ( v3 >= 0 )
  {
    v5 = PnpCtxRegCopyTree(v4, (int)KeyHandle, 0, a1, (__int64)L"Filters");
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v5;
}
