/*
 * XREFs of _CcdRetrieveValueFromRegistry @ 0x14036C1EC
 * Callers:
 *     _CcdRetrieveSetIdFromRegistry @ 0x14036C068 (_CcdRetrieveSetIdFromRegistry.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CcdRetrieveValueFromRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, _QWORD *a3, __int64 a4)
{
  void *v4; // rdi
  __int64 v8; // r9
  void *v9; // rax
  NTSTATUS v10; // eax
  unsigned int v11; // ebx
  ULONG Length; // [rsp+68h] [rbp+20h] BYREF
  int v14; // [rsp+6Ch] [rbp+24h]

  v14 = HIDWORD(a4);
  v4 = 0LL;
  Length = 1024;
  *a3 = 0LL;
  do
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
    v9 = (void *)operator new[](Length, 0x63644356u, 256LL, v8);
    v4 = v9;
    if ( !v9 )
    {
      WdLogSingleEntry1(6LL, Length);
      WdLogGlobalForLineNumber = 286;
      v11 = -1073741801;
      goto LABEL_9;
    }
    v10 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, v9, Length, &Length);
    v11 = v10;
  }
  while ( v10 == -2147483643 || v10 == -1073741789 );
  if ( v10 >= 0 )
  {
    *a3 = v4;
    return v11;
  }
LABEL_9:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
  return v11;
}
