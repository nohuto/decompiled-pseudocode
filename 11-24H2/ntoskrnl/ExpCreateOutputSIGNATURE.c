/*
 * XREFs of ExpCreateOutputSIGNATURE @ 0x1407BBA04
 * Callers:
 *     ExpTranslateNtPath @ 0x1407BD4F4 (ExpTranslateNtPath.c)
 *     ExpTranslateEfiPath @ 0x140A6389C (ExpTranslateEfiPath.c)
 * Callees:
 *     swprintf_s @ 0x140502E50 (swprintf_s.c)
 *     wcscat_s @ 0x140504740 (wcscat_s.c)
 *     wcscpy_s @ 0x1405047E0 (wcscpy_s.c)
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpCreateOutputSIGNATURE(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6,
        wchar_t *a7,
        char a8)
{
  unsigned int v8; // edi
  __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rbp
  unsigned int v13; // r12d
  __int64 v14; // r15
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rsi
  __int128 v21; // [rsp+30h] [rbp-48h] BYREF
  unsigned int *v22; // [rsp+88h] [rbp+10h]

  v22 = a2;
  v8 = 93;
  v21 = 0LL;
  if ( a8 != 1 )
    v8 = 63;
  v10 = -1LL;
  v11 = 0;
  if ( a7 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a7[v12] );
    v8 += v12;
  }
  else
  {
    LODWORD(v12) = 0;
  }
  v13 = 2 * v8 + 12;
  if ( *a2 >= v13 )
  {
    v14 = a1 + 12;
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 4) = v13;
    *(_DWORD *)(a1 + 8) = 2;
    wcscpy_s((wchar_t *)(a1 + 12), v8, L"signature(");
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)(v14 + 2 * v16) );
    if ( a8 == 1 )
    {
      LOBYTE(v15) = 1;
      result = RtlStringFromGUIDEx(a3, &v21, v15);
      if ( (int)result < 0 )
        return result;
      wcscat_s((wchar_t *)(v14 + 2LL * (unsigned int)v16), v8 - (unsigned int)v16, *((const wchar_t **)&v21 + 1));
      ExFreePoolWithTag(*((PVOID *)&v21 + 1), 0);
      LODWORD(v18) = (unsigned __int16)v21 >> 1;
    }
    else
    {
      swprintf_s((wchar_t *)(v14 + 2LL * (unsigned int)v16), v8 - (unsigned int)v16, L"%08x", *a3);
      v18 = -1LL;
      do
        ++v18;
      while ( *(_WORD *)(v14 + 2LL * (unsigned int)v16 + 2 * v18) );
    }
    v19 = (unsigned int)(v18 + v16);
    swprintf_s((wchar_t *)(v14 + 2 * v19), v8 - (unsigned int)v19, L"-%08x-%016I64x-%016I64x)", *a4, *a5, *a6);
    do
      ++v10;
    while ( *(_WORD *)(v14 + 2 * v19 + 2 * v10) );
    v20 = (unsigned int)(v19 + v10);
    if ( (_DWORD)v12 )
      wcscpy_s((wchar_t *)(v14 + 2 * v20), v8 - (unsigned int)v20, a7);
    a2 = v22;
  }
  else
  {
    v11 = -1073741789;
  }
  *a2 = v13;
  return v11;
}
