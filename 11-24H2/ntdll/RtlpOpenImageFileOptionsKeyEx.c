/*
 * XREFs of RtlpOpenImageFileOptionsKeyEx @ 0x180089F88
 * Callers:
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x180087634 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlQueryImageMitigationPolicy @ 0x180087B60 (RtlQueryImageMitigationPolicy.c)
 *     LdrpInitializeExecutionOptions @ 0x1800887A8 (LdrpInitializeExecutionOptions.c)
 *     RtlQueryImageFileExecutionOptions @ 0x180089AB0 (RtlQueryImageFileExecutionOptions.c)
 *     RtlOpenImageFileOptionsKey @ 0x180109A60 (RtlOpenImageFileOptionsKey.c)
 *     RtlSetImageMitigationPolicy @ 0x180136E80 (RtlSetImageMitigationPolicy.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x180137FE0 (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     RtlpHpQueryGCTimerInterval @ 0x18014285C (RtlpHpQueryGCTimerInterval.c)
 * Callees:
 *     RtlpOpenBaseImageFileOptionsKey @ 0x180089ED0 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18008A254 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x18008B194 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x18008B48C (RtlpCreateIFEOKeyFilterKey.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     ZwCreateKey @ 0x180162030 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x180162880 (ZwSetValueKey.c)
 *     NtDeleteKey @ 0x180163800 (NtDeleteKey.c)
 */

__int64 __fastcall RtlpOpenImageFileOptionsKeyEx(unsigned __int16 *a1, unsigned int a2, char a3, _QWORD *a4)
{
  __int64 v6; // r9
  char v8; // r12
  _WORD *v9; // r8
  int v10; // edx
  int v11; // r9d
  char v12; // r15
  __int64 result; // rax
  HANDLE v14; // rdi
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  HANDLE v18; // rdi
  size_t v19; // rax
  size_t v20; // rax
  int v21; // eax
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  const wchar_t *v23; // [rsp+48h] [rbp-21h]
  __int128 v24; // [rsp+50h] [rbp-19h] BYREF
  __int128 v25; // [rsp+60h] [rbp-9h] BYREF
  __int128 v26; // [rsp+70h] [rbp+7h]
  __int128 v27; // [rsp+80h] [rbp+17h]
  HANDLE v28; // [rsp+D0h] [rbp+67h] BYREF
  int v29; // [rsp+E0h] [rbp+77h] BYREF
  _QWORD *v30; // [rsp+E8h] [rbp+7Fh]

  v30 = a4;
  *a4 = 0LL;
  Handle = 0LL;
  v28 = 0LL;
  v6 = *a1;
  v8 = 0;
  v9 = (_WORD *)(v6 + *((_QWORD *)a1 + 1));
  *(_QWORD *)&v27 = 0LL;
  DWORD2(v27) = 0;
  v10 = v6;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( a3 && (v6 + 2 > (unsigned __int64)a1[1] || *v9) )
    return 3221225485LL;
  while ( v10 )
  {
    if ( *(v9 - 1) == 92 )
    {
      v8 = 1;
      break;
    }
    --v9;
    v10 -= 2;
  }
  v11 = v6 - v10;
  *((_QWORD *)&v24 + 1) = v9;
  LOWORD(v24) = v11;
  if ( (unsigned __int16)v11 != v11 )
    return 3221225507LL;
  if ( a3 )
  {
    LOBYTE(v9) = a3;
    v12 = 1;
    result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle, a2, v9);
  }
  else
  {
    v12 = 0;
    result = RtlpOpenBaseImageFileOptionsKey(&Handle);
  }
  if ( (int)result >= 0 )
  {
    v14 = Handle;
    *((_QWORD *)&v25 + 1) = Handle;
    *(_QWORD *)&v26 = &v24;
    LODWORD(v25) = 48;
    DWORD2(v26) = 576;
    v27 = 0LL;
    if ( a3 )
      v15 = ZwCreateKey(&v28, a2, &v25, 0LL, 0LL, 0, 0LL);
    else
      v15 = NtOpenKey(&v28, a2, &v25);
    v16 = v15;
    if ( v12 )
      NtClose(v14);
    if ( v16 < 0 )
      return (unsigned int)v16;
    Handle = v28;
    v21 = RtlpProcessIFEOKeyFilter(&Handle, a2, a1);
    v18 = Handle;
    v16 = v21;
    if ( v21 < 0 )
      goto LABEL_37;
    if ( Handle != v28 || !v8 || !a3 )
      goto LABEL_31;
    Handle = 0LL;
    v17 = RtlpCreateIFEOKeyFilterKey(&Handle, v28, a2 | 0x10000);
    v18 = Handle;
    v16 = v17;
    if ( v17 < 0 )
    {
LABEL_30:
      NtClose(v28);
      if ( v16 >= 0 )
      {
LABEL_31:
        *v30 = v18;
        return (unsigned int)v16;
      }
LABEL_37:
      if ( v18 )
        NtClose(v18);
      return (unsigned int)v16;
    }
    HIDWORD(Handle) = 0;
    v23 = L"FilterFullPath";
    v19 = wcslen(L"FilterFullPath");
    if ( v19 <= 0x7FFE )
    {
      LOWORD(Handle) = 2 * v19;
      WORD1(Handle) = 2 * v19 + 2;
      v16 = ZwSetValueKey(v18, &Handle, 0LL, 1LL, *((_QWORD *)a1 + 1), a1[1]);
      if ( v16 < 0 )
      {
LABEL_29:
        NtDeleteKey(v18);
        goto LABEL_30;
      }
      v29 = 1;
      v23 = L"UseFilter";
      HIDWORD(Handle) = 0;
      v20 = wcslen(L"UseFilter");
      if ( v20 <= 0x7FFE )
      {
        LOWORD(Handle) = 2 * v20;
        WORD1(Handle) = 2 * v20 + 2;
        v16 = ZwSetValueKey(v28, &Handle, 0LL, 4LL, &v29, 4);
        if ( v16 >= 0 )
          goto LABEL_30;
        goto LABEL_29;
      }
    }
    v16 = -1073741562;
    goto LABEL_29;
  }
  return result;
}
