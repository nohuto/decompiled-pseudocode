/*
 * XREFs of _CcdRetrieveSubkeyInfoFromRegistry @ 0x14036AB00
 * Callers:
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x14036A7AC (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CcdRetrieveSubkeyInfoFromRegistry(HANDLE KeyHandle, ULONG Index, _QWORD *a3)
{
  void *v3; // rdi
  __int64 v7; // r9
  void *v8; // rax
  NTSTATUS v9; // eax
  unsigned int v10; // ebx
  ULONG Length; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  Length = 1024;
  *a3 = 0LL;
  do
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
    v8 = (void *)operator new[](Length, 0x63644356u, 256LL, v7);
    v3 = v8;
    if ( !v8 )
    {
      WdLogSingleEntry1(2LL, Length);
      WdLogGlobalForLineNumber = 385;
      v10 = -1073741801;
      goto LABEL_9;
    }
    v9 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, v8, Length, &Length);
    v10 = v9;
  }
  while ( v9 == -2147483643 || v9 == -1073741789 );
  if ( v9 >= 0 )
  {
    *a3 = v3;
    return v10;
  }
LABEL_9:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
  return v10;
}
