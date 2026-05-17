/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x18008A254
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180089F88 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlCompareUnicodeStrings @ 0x180072550 (RtlCompareUnicodeStrings.c)
 *     RtlPrefixUnicodeString @ 0x18008AA00 (RtlPrefixUnicodeString.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     NtEnumerateKey @ 0x1801622D0 (NtEnumerateKey.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, unsigned int a2, __int128 *a3)
{
  unsigned int v3; // ebx
  int v5; // edi
  unsigned __int64 v7; // rsi
  _BYTE *v8; // r14
  size_t v9; // rax
  HANDLE v10; // rcx
  __int64 result; // rax
  __int128 v12; // xmm0
  size_t v13; // rax
  __int64 v14; // r8
  _BYTE *v15; // rax
  unsigned int v16; // r13d
  int v17; // edi
  size_t v18; // rax
  int v19; // ecx
  int v20; // eax
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v23; // eax
  HANDLE *v24; // rsi
  unsigned int v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  const wchar_t *v27; // [rsp+40h] [rbp-C0h]
  int v28; // [rsp+48h] [rbp-B8h]
  _BYTE *v29; // [rsp+50h] [rbp-B0h]
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-A0h]
  HANDLE *v32; // [rsp+68h] [rbp-98h]
  __int128 v33; // [rsp+70h] [rbp-90h] BYREF
  __int128 v34; // [rsp+80h] [rbp-80h] BYREF
  __int128 v35; // [rsp+90h] [rbp-70h]
  __int128 v36; // [rsp+A0h] [rbp-60h]
  _BYTE v37[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v38; // [rsp+B4h] [rbp-4Ch]
  int v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+BCh] [rbp-44h]

  v3 = 0;
  v32 = a1;
  v31 = a2;
  v25 = 0;
  Handle = 0LL;
  *(_QWORD *)&v36 = 0LL;
  v5 = 544;
  v27 = L"UseFilter";
  DWORD2(v36) = 0;
  v34 = 0LL;
  v7 = 0LL;
  v28 = 544;
  v35 = 0LL;
  v8 = v37;
  HIDWORD(v26) = 0;
  v9 = wcslen(L"UseFilter");
  if ( v9 > 0x7FFE )
    return 3221225734LL;
  v10 = *a1;
  LOWORD(v26) = 2 * v9;
  WORD1(v26) = 2 * v9 + 2;
  result = NtQueryValueKey(v10, &v26, 2LL, v37, 544, &v25);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 || (_DWORD)result == -1073741789 || (_DWORD)result == -2147483643 )
      return v3;
    return result;
  }
  if ( v38 != 4 || v39 != 4 || !v40 )
    return 0LL;
  v12 = *a3;
  v26 = 0LL;
  v27 = L"\\??\\";
  v33 = v12;
  v13 = wcslen(L"\\??\\");
  if ( v13 > 0x7FFE )
    return 3221225734LL;
  LOWORD(v26) = 2 * v13;
  LOBYTE(v14) = 1;
  WORD1(v26) = 2 * v13 + 2;
  if ( (unsigned __int8)RtlPrefixUnicodeString(&v26, &v33, v14) )
  {
    LOWORD(v33) = v33 - 8;
    *((_QWORD *)&v33 + 1) += 8LL;
  }
  v15 = v37;
  v16 = 0;
  v29 = v37;
  while ( 1 )
  {
    v17 = ((__int64 (__fastcall *)(HANDLE, _QWORD, _QWORD, _BYTE *, int, unsigned int *))NtEnumerateKey)(
            *v32,
            v16,
            0LL,
            v15,
            v5,
            &v25);
    if ( v17 >= 0 )
    {
      LOWORD(v26) = *((_WORD *)v29 + 6);
      WORD1(v26) = *((_WORD *)v29 + 6);
      v27 = (const wchar_t *)(v29 + 16);
      LODWORD(v34) = 48;
      DWORD2(v35) = 576;
      v36 = 0LL;
      *((_QWORD *)&v34 + 1) = *v32;
      *(_QWORD *)&v35 = &v26;
      v17 = NtOpenKey(&Handle, v31, &v34);
      if ( v17 >= 0 )
        break;
    }
LABEL_35:
    ++v16;
    if ( v17 < 0 )
      goto LABEL_36;
LABEL_31:
    v15 = v29;
    v5 = v28;
  }
  v26 = 0LL;
  v27 = L"FilterFullPath";
  v18 = wcslen(L"FilterFullPath");
  if ( v18 > 0x7FFE )
  {
    v17 = -1073741562;
    NtClose(Handle);
    goto LABEL_36;
  }
  v19 = v28;
  LOWORD(v26) = 2 * v18;
  WORD1(v26) = 2 * v18 + 2;
  while ( 1 )
  {
    v20 = NtQueryValueKey(Handle, &v26, 2LL, v8, v19, &v25);
    v17 = v20;
    if ( v20 != -2147483643 && v20 != -1073741789 )
    {
      Heap = (__int64)v29;
      v19 = v28;
      goto LABEL_24;
    }
    if ( v7 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap )
      break;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v25);
    v7 = Heap;
    if ( !Heap )
      goto LABEL_47;
    v19 = v25;
    v8 = (_BYTE *)Heap;
    v28 = v25;
    v29 = (_BYTE *)Heap;
LABEL_24:
    if ( v17 != -2147483643 )
    {
      v29 = (_BYTE *)Heap;
      v28 = v19;
      if ( v17 != -1073741789 )
        goto LABEL_26;
    }
  }
  v7 = 0LL;
LABEL_47:
  v17 = -1073741801;
LABEL_26:
  if ( v17 < 0 )
  {
    NtClose(Handle);
    v23 = 0;
    if ( v17 != -1073741772 )
      v23 = v17;
    v17 = v23;
    goto LABEL_35;
  }
  if ( *((_DWORD *)v8 + 1) != 1
    || *((_DWORD *)v8 + 2) > 0xFFFEu
    || (unsigned int)RtlCompareUnicodeStrings(
                       *((unsigned __int16 **)&v33 + 1),
                       (unsigned __int64)(unsigned __int16)v33 >> 1,
                       v8 + 12,
                       (unsigned __int64)(unsigned __int16)(*((_WORD *)v8 + 4) - 2) >> 1,
                       1) )
  {
    NtClose(Handle);
    ++v16;
    goto LABEL_31;
  }
LABEL_36:
  if ( v7 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
  if ( v17 >= 0 )
  {
    v24 = v32;
    NtClose(*v32);
    *v24 = Handle;
  }
  if ( v17 != -2147483622 )
    return (unsigned int)v17;
  return v3;
}
