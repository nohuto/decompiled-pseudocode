/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x1800B31E4
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800B2F18 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlPrefixUnicodeString @ 0x1800B3990 (RtlPrefixUnicodeString.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     NtEnumerateKey @ 0x180163860 (NtEnumerateKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, unsigned int a2, __int128 *a3)
{
  unsigned int v3; // ebx
  int v5; // edi
  __int64 v7; // rsi
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
  __int64 v18; // r9
  size_t v19; // rax
  int v20; // ecx
  int v21; // eax
  __int64 v22; // r9
  char *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v25; // eax
  HANDLE *v26; // rsi
  unsigned int v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  const wchar_t *v29; // [rsp+40h] [rbp-C0h]
  int v30; // [rsp+48h] [rbp-B8h]
  _BYTE *v31; // [rsp+50h] [rbp-B0h]
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v33; // [rsp+60h] [rbp-A0h]
  HANDLE *v34; // [rsp+68h] [rbp-98h]
  __int128 v35; // [rsp+70h] [rbp-90h] BYREF
  __int128 v36; // [rsp+80h] [rbp-80h] BYREF
  __int128 v37; // [rsp+90h] [rbp-70h]
  __int128 v38; // [rsp+A0h] [rbp-60h]
  _BYTE v39[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v40; // [rsp+B4h] [rbp-4Ch]
  int v41; // [rsp+B8h] [rbp-48h]
  int v42; // [rsp+BCh] [rbp-44h]

  v3 = 0;
  v34 = a1;
  v33 = a2;
  v27 = 0;
  Handle = 0LL;
  *(_QWORD *)&v38 = 0LL;
  v5 = 544;
  v29 = L"UseFilter";
  DWORD2(v38) = 0;
  v36 = 0LL;
  v7 = 0LL;
  v30 = 544;
  v37 = 0LL;
  v8 = v39;
  HIDWORD(v28) = 0;
  v9 = wcslen(L"UseFilter");
  if ( v9 > 0x7FFE )
    return 3221225734LL;
  v10 = *a1;
  LOWORD(v28) = 2 * v9;
  WORD1(v28) = 2 * v9 + 2;
  result = NtQueryValueKey(v10, &v28, 2LL, v39, 544, &v27);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 || (_DWORD)result == -1073741789 || (_DWORD)result == -2147483643 )
      return v3;
    return result;
  }
  if ( v40 != 4 || v41 != 4 || !v42 )
    return 0LL;
  v12 = *a3;
  v28 = 0LL;
  v29 = L"\\??\\";
  v35 = v12;
  v13 = wcslen(L"\\??\\");
  if ( v13 > 0x7FFE )
    return 3221225734LL;
  LOWORD(v28) = 2 * v13;
  LOBYTE(v14) = 1;
  WORD1(v28) = 2 * v13 + 2;
  if ( (unsigned __int8)RtlPrefixUnicodeString(&v28, &v35, v14) )
  {
    LOWORD(v35) = v35 - 8;
    *((_QWORD *)&v35 + 1) += 8LL;
  }
  v15 = v39;
  v16 = 0;
  v31 = v39;
  while ( 1 )
  {
    v17 = NtEnumerateKey(*v34, v16, 0LL, v15, v5, &v27);
    if ( v17 >= 0 )
    {
      LOWORD(v28) = *((_WORD *)v31 + 6);
      WORD1(v28) = *((_WORD *)v31 + 6);
      v29 = (const wchar_t *)(v31 + 16);
      LODWORD(v36) = 48;
      DWORD2(v37) = 576;
      v38 = 0LL;
      *((_QWORD *)&v36 + 1) = *v34;
      *(_QWORD *)&v37 = &v28;
      v17 = NtOpenKey(&Handle, v33, &v36);
      if ( v17 >= 0 )
        break;
    }
LABEL_35:
    ++v16;
    if ( v17 < 0 )
      goto LABEL_36;
LABEL_31:
    v15 = v31;
    v5 = v30;
  }
  v28 = 0LL;
  v29 = L"FilterFullPath";
  v19 = wcslen(L"FilterFullPath");
  if ( v19 > 0x7FFE )
  {
    v17 = -1073741562;
    NtClose(Handle);
    goto LABEL_36;
  }
  v20 = v30;
  LOWORD(v28) = 2 * v19;
  WORD1(v28) = 2 * v19 + 2;
  while ( 1 )
  {
    v21 = NtQueryValueKey(Handle, &v28, 2LL, v8, v20, &v27);
    v17 = v21;
    if ( v21 != -2147483643 && v21 != -1073741789 )
    {
      Heap = (__int64)v31;
      v20 = v30;
      goto LABEL_24;
    }
    if ( v7 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7, v22);
    ProcessHeap = (char *)NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap )
      break;
    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, v27);
    v7 = Heap;
    if ( !Heap )
      goto LABEL_47;
    v20 = v27;
    v8 = (_BYTE *)Heap;
    v30 = v27;
    v31 = (_BYTE *)Heap;
LABEL_24:
    if ( v17 != -2147483643 )
    {
      v31 = (_BYTE *)Heap;
      v30 = v20;
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
    v25 = 0;
    if ( v17 != -1073741772 )
      v25 = v17;
    v17 = v25;
    goto LABEL_35;
  }
  if ( *((_DWORD *)v8 + 1) != 1
    || *((_DWORD *)v8 + 2) > 0xFFFEu
    || (unsigned int)RtlCompareUnicodeStrings(
                       *((unsigned __int16 **)&v35 + 1),
                       (unsigned __int64)(unsigned __int16)v35 >> 1,
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
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7, v18);
  if ( v17 >= 0 )
  {
    v26 = v34;
    NtClose(*v34);
    *v26 = Handle;
  }
  if ( v17 != -2147483622 )
    return (unsigned int)v17;
  return v3;
}
