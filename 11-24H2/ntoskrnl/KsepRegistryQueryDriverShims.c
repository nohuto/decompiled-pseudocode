/*
 * XREFs of KsepRegistryQueryDriverShims @ 0x140942634
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x140942038 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     KsepRegistryQuerySZ @ 0x14073EBDC (KsepRegistryQuerySZ.c)
 *     KsepRegistryCloseKey @ 0x140942610 (KsepRegistryCloseKey.c)
 *     KsepStringConcatenate @ 0x140943A10 (KsepStringConcatenate.c)
 */

__int64 __fastcall KsepRegistryQueryDriverShims(__int64 a1, void *a2, void *a3, _QWORD *a4)
{
  HANDLE v6; // rdi
  int SZ; // ebx
  __int64 v9; // [rsp+30h] [rbp-40h] BYREF
  void *v10; // [rsp+38h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+40h] BYREF

  KeyHandle = a3;
  v6 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v9 = 0LL;
  v10 = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  SZ = KsepStringConcatenate(
         &v9,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Driver",
         a1,
         1LL);
  if ( SZ >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SZ = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( SZ >= 0 )
    {
      v6 = KeyHandle;
      _InterlockedIncrement(&dword_140F0F618);
    }
  }
  if ( v10 )
    KsepPoolFreePaged(v10);
  if ( SZ >= 0 )
    SZ = KsepRegistryQuerySZ(v6, L"Shims", 7, a2, 0x800uLL, a4);
  if ( SZ == -1073741772 )
    SZ = -1073741275;
  KsepRegistryCloseKey(v6);
  return (unsigned int)SZ;
}
