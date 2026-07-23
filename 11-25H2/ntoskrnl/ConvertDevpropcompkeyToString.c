/*
 * XREFs of ConvertDevpropcompkeyToString @ 0x140A89228
 * Callers:
 *     PnpConvertDevpropcompkeyArrayToString @ 0x140717078 (PnpConvertDevpropcompkeyArrayToString.c)
 *     ConvertDevpropertyToString @ 0x140A88B10 (ConvertDevpropertyToString.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140292E0C (RtlStringCbPrintfExW.c)
 *     RtlStringFromGUIDEx @ 0x140965070 (RtlStringFromGUIDEx.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

__int64 __fastcall ConvertDevpropcompkeyToString(__int64 a1, wchar_t *a2, unsigned int a3, unsigned int *a4)
{
  size_t v4; // rbp
  NTSTATUS v8; // eax
  wchar_t *Buffer; // rsi
  unsigned int v10; // ebx
  int v11; // r8d
  int v12; // ecx
  const wchar_t *v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  const wchar_t *v17; // rcx
  const wchar_t *v18; // rax
  UNICODE_STRING GuidString; // [rsp+50h] [rbp-28h] BYREF

  v4 = a3;
  GuidString = 0LL;
  if ( a3 >= 2 )
    *a2 = 0;
  v8 = RtlStringFromGUIDEx((PGUID)a1, &GuidString, 1u);
  Buffer = GuidString.Buffer;
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
    v16 = v15 + GuidString.Length + v12;
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
      v10 = RtlStringCbPrintfExW(a2, v4, 0LL, 0LL, 0x800u, L"[(%s %3d) %s %s]", Buffer, *(_DWORD *)(a1 + 16), v18, v17);
    }
  }
LABEL_23:
  if ( Buffer )
    ExFreePool(Buffer);
  return v10;
}
