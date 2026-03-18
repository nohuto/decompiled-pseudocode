/*
 * XREFs of ConvertDevpropcompkeyToString @ 0x140A8E188
 * Callers:
 *     PnpConvertDevpropcompkeyArrayToString @ 0x140723178 (PnpConvertDevpropcompkeyArrayToString.c)
 *     ConvertDevpropertyToString @ 0x140A8DA70 (ConvertDevpropertyToString.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140356698 (RtlStringCbPrintfExW.c)
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

__int64 __fastcall ConvertDevpropcompkeyToString(__int64 a1, wchar_t *a2, unsigned int a3, unsigned int *a4)
{
  size_t v4; // rbp
  int v8; // eax
  void *v9; // rsi
  unsigned int v10; // ebx
  int v11; // r8d
  int v12; // ecx
  const wchar_t *v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  const wchar_t *v17; // rcx
  const wchar_t *v18; // rax
  __int128 v20; // [rsp+50h] [rbp-28h] BYREF

  v4 = a3;
  v20 = 0LL;
  if ( a3 >= 2 )
    *a2 = 0;
  v8 = RtlStringFromGUIDEx((unsigned int *)a1, (__int64)&v20, 1);
  v9 = (void *)*((_QWORD *)&v20 + 1);
  v10 = v8;
  if ( v8 >= 0 )
  {
    v11 = *(_DWORD *)(a1 + 20);
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        v10 = -1073741811;
        goto LABEL_23;
      }
      v12 = 44;
    }
    else
    {
      v12 = 48;
    }
    v13 = *(const wchar_t **)(a1 + 24);
    if ( v13 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v13[v14] );
      v15 = 2 * v14;
    }
    else
    {
      v15 = 12;
    }
    v16 = v15 + (unsigned __int16)v20 + v12;
    if ( a4 )
      *a4 = v16;
    if ( v16 > (unsigned int)v4 )
    {
      v10 = -1073741789;
    }
    else
    {
      v17 = L"(NULL)";
      v18 = L"System";
      if ( v13 )
        v17 = v13;
      if ( v11 )
        v18 = L"User";
      v10 = RtlStringCbPrintfExW(a2, v4, 0LL, 0LL, 0x800u, L"[(%s %3d) %s %s]", v9, *(_DWORD *)(a1 + 16), v18, v17);
    }
  }
LABEL_23:
  if ( v9 )
    ExFreePool(v9);
  return v10;
}
