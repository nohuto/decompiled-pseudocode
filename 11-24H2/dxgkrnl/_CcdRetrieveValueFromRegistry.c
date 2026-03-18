/*
 * XREFs of _CcdRetrieveValueFromRegistry @ 0x1403405FC
 * Callers:
 *     _CcdRetrieveSetIdFromRegistry @ 0x140340478 (_CcdRetrieveSetIdFromRegistry.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CcdRetrieveValueFromRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, _QWORD *a3, __int64 a4)
{
  void *v4; // rdi
  void *v8; // rax
  NTSTATUS v9; // eax
  unsigned int v10; // ebx
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF
  int v13; // [rsp+6Ch] [rbp+24h]

  v13 = HIDWORD(a4);
  v4 = 0LL;
  Length = 1024;
  *a3 = 0LL;
  do
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
    v8 = (void *)operator new[](Length, 0x63644356u, 256LL);
    v4 = v8;
    if ( !v8 )
    {
      WdLogSingleEntry1(6LL, Length);
      WdLogGlobalForLineNumber = 286;
      v10 = -1073741801;
      goto LABEL_9;
    }
    v9 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, v8, Length, &Length);
    v10 = v9;
  }
  while ( v9 == -2147483643 || v9 == -1073741789 );
  if ( v9 >= 0 )
  {
    *a3 = v4;
    return v10;
  }
LABEL_9:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
  return v10;
}
