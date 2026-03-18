/*
 * XREFs of _CcdReadRegistryValues @ 0x1402D8B00
 * Callers:
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1402D8188 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIQEAGPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1402D88E8 (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIQEAGPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall CcdReadRegistryValues(HANDLE a1, const WCHAR *a2, const void *a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v5; // r13
  unsigned __int64 v9; // rax
  char *v10; // rax
  size_t v11; // r8
  char *v12; // rbx
  __int64 v13; // r12
  char *v14; // rcx
  __int64 v15; // rdx
  _DWORD *v16; // rax
  int RegistryValues; // eax
  unsigned int v18; // esi
  __int64 result; // rax
  NTSTATUS v20; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+38h] BYREF

  v5 = a4;
  Handle = 0LL;
  if ( a2 && *a2 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = a1;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v20 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    v18 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry5(2LL, v20, a1, a2, a3, a5);
      WdLogGlobalForLineNumber = 518;
      return v18;
    }
  }
  else
  {
    Handle = a1;
  }
  v9 = 56 * v5;
  if ( !is_mul_ok(v5, 0x38uLL) )
    v9 = -1LL;
  v10 = (char *)operator new[](v9, 0x63644356u, 64LL);
  v11 = 56 * v5;
  v12 = v10;
  if ( v10 )
  {
    memmove(v10, a3, v11);
    v13 = a5;
    if ( (_DWORD)v5 != 1 )
    {
      v14 = v12 + 40;
      v15 = (unsigned int)(v5 - 1);
      do
      {
        *((_QWORD *)v14 - 2) += v13;
        v16 = (_DWORD *)*((_QWORD *)v14 - 2);
        *((_DWORD *)v14 - 2) = 0x4000000;
        *(_QWORD *)v14 = 0LL;
        *((_DWORD *)v14 + 2) = 0;
        v14 += 56;
        *v16 = 0;
        --v15;
      }
      while ( v15 );
    }
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, Handle, v12, 0LL, 0LL);
    v18 = RegistryValues;
    if ( RegistryValues < 0 )
    {
      WdLogSingleEntry5(3LL, RegistryValues, Handle, a3, v5, v13);
      WdLogGlobalForLineNumber = 577;
    }
    if ( Handle != a1 )
      ZwClose(Handle);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v12);
    return v18;
  }
  WdLogSingleEntry2(6LL, v5, v11);
  result = 3221225495LL;
  WdLogGlobalForLineNumber = 537;
  return result;
}
