/*
 * XREFs of KsepDbQueryRegistryDeviceData @ 0x1409442E4
 * Callers:
 *     KseQueryDeviceData @ 0x140944120 (KseQueryDeviceData.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     KsepRegistryQueryValue @ 0x14073EE48 (KsepRegistryQueryValue.c)
 *     KsepRegistryCloseKey @ 0x140942610 (KsepRegistryCloseKey.c)
 *     KsepStringConcatenate @ 0x140943A10 (KsepStringConcatenate.c)
 *     KsepStringTransform @ 0x140944488 (KsepStringTransform.c)
 *     KsepStringDuplicate @ 0x1409445C4 (KsepStringDuplicate.c)
 */

__int64 __fastcall KsepDbQueryRegistryDeviceData(__int64 a1, const WCHAR *a2, _DWORD *a3, _DWORD *a4, void *a5)
{
  HANDLE v8; // rsi
  int v9; // eax
  _WORD *v10; // rdi
  int v11; // ebx
  int v13; // eax
  NTSTATUS v14; // ebx
  unsigned __int64 v15; // rax
  HANDLE KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  __int64 v17; // [rsp+40h] [rbp-29h] BYREF
  __int64 v18; // [rsp+48h] [rbp-21h] BYREF
  void *v19; // [rsp+50h] [rbp-19h]
  __int64 v20; // [rsp+58h] [rbp-11h] BYREF
  _WORD *v21; // [rsp+60h] [rbp-9h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  v8 = 0LL;
  v9 = KsepStringTransform(&v20, a1);
  v10 = v21;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v18 = 0LL;
    v19 = 0LL;
    KeyHandle = 0LL;
    memset(&ObjectAttributes, 0, 44);
    if ( v21 )
      v13 = KsepStringConcatenate(
              (__int64)&v18,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
              v21,
              1);
    else
      v13 = KsepStringDuplicate(&v18, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device");
    v14 = v13;
    if ( v13 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v14 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v14 >= 0 )
      {
        v8 = KeyHandle;
        _InterlockedIncrement(&dword_140F0F618);
        v10 = v21;
      }
    }
    if ( v19 )
      KsepPoolFreePaged(v19);
    if ( v14 < 0
      || (v15 = (unsigned int)*a4,
          LODWORD(KeyHandle) = 0,
          v17 = v15,
          v11 = KsepRegistryQueryValue(v8, a2, &KeyHandle, a5, v15, (size_t *)&v17),
          *a4 = v17,
          v11 == -1073741772) )
    {
      v11 = -1073741275;
    }
    else if ( v11 >= 0 )
    {
      v11 = 0;
      *a3 |= (unsigned int)KeyHandle | 0x10000000;
    }
    if ( v8 )
      KsepRegistryCloseKey(v8);
  }
  if ( v10 )
    KsepPoolFreePaged(v10);
  return (unsigned int)v11;
}
