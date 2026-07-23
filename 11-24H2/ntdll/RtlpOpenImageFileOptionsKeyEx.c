/*
 * XREFs of RtlpOpenImageFileOptionsKeyEx @ 0x1800A5A48
 * Callers:
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800A30F8 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800A3620 (RtlQueryImageMitigationPolicy.c)
 *     LdrpInitializeExecutionOptions @ 0x1800A4268 (LdrpInitializeExecutionOptions.c)
 *     RtlQueryImageFileExecutionOptions @ 0x1800A5570 (RtlQueryImageFileExecutionOptions.c)
 *     RtlOpenImageFileOptionsKey @ 0x180104990 (RtlOpenImageFileOptionsKey.c)
 *     RtlSetImageMitigationPolicy @ 0x1801350B0 (RtlSetImageMitigationPolicy.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x180136210 (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     RtlpHpQueryGCTimerInterval @ 0x180140A0C (RtlpHpQueryGCTimerInterval.c)
 * Callees:
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1800A5990 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800A5D14 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800A6C54 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800A6F4C (RtlpCreateIFEOKeyFilterKey.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     ZwCreateKey @ 0x1801603F0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x180160C40 (ZwSetValueKey.c)
 *     NtDeleteKey @ 0x180161BC0 (NtDeleteKey.c)
 */

NTSTATUS __fastcall RtlpOpenImageFileOptionsKeyEx(unsigned __int16 *a1, ACCESS_MASK a2, char a3, _QWORD *a4)
{
  __int64 v6; // r9
  char v8; // r12
  _WORD *v9; // r8
  int v10; // edx
  int v11; // r9d
  char v12; // r15
  NTSTATUS result; // eax
  void *v14; // rdi
  NTSTATUS v15; // eax
  NTSTATUS v16; // ebx
  int v17; // eax
  void *v18; // rdi
  size_t v19; // rax
  size_t v20; // rax
  int v21; // eax
  _UNICODE_STRING Handle; // [rsp+40h] [rbp-29h] BYREF
  __int128 v23; // [rsp+50h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp+67h] BYREF
  int Data; // [rsp+E0h] [rbp+77h] BYREF
  _QWORD *v27; // [rsp+E8h] [rbp+7Fh]

  v27 = a4;
  *a4 = 0LL;
  *(_QWORD *)&Handle.Length = 0LL;
  KeyHandle = 0LL;
  v6 = *a1;
  v8 = 0;
  v9 = (_WORD *)(v6 + *((_QWORD *)a1 + 1));
  v10 = *a1;
  v23 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( a3 && (v6 + 2 > (unsigned __int64)a1[1] || *v9) )
    return -1073741811;
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
  *((_QWORD *)&v23 + 1) = v9;
  LOWORD(v23) = v11;
  if ( (unsigned __int16)v11 != v11 )
    return -1073741789;
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
  if ( result >= 0 )
  {
    v14 = *(void **)&Handle.Length;
    ObjectAttributes.RootDirectory = *(HANDLE *)&Handle.Length;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v23;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( a3 )
      v15 = ZwCreateKey(&KeyHandle, a2, &ObjectAttributes, 0, 0LL, 0, 0LL);
    else
      v15 = NtOpenKey(&KeyHandle, a2, &ObjectAttributes);
    v16 = v15;
    if ( v12 )
      NtClose(v14);
    if ( v16 < 0 )
      return v16;
    *(_QWORD *)&Handle.Length = KeyHandle;
    v21 = RtlpProcessIFEOKeyFilter(&Handle, a2, a1);
    v18 = *(void **)&Handle.Length;
    v16 = v21;
    if ( v21 < 0 )
      goto LABEL_37;
    if ( *(HANDLE *)&Handle.Length != KeyHandle || !v8 || !a3 )
      goto LABEL_31;
    *(_QWORD *)&Handle.Length = 0LL;
    v17 = RtlpCreateIFEOKeyFilterKey(&Handle, KeyHandle, a2 | 0x10000);
    v18 = *(void **)&Handle.Length;
    v16 = v17;
    if ( v17 < 0 )
    {
LABEL_30:
      NtClose(KeyHandle);
      if ( v16 >= 0 )
      {
LABEL_31:
        *v27 = v18;
        return v16;
      }
LABEL_37:
      if ( v18 )
        NtClose(v18);
      return v16;
    }
    *(_DWORD *)(&Handle.MaximumLength + 1) = 0;
    Handle.Buffer = (wchar_t *)L"FilterFullPath";
    v19 = wcslen(L"FilterFullPath");
    if ( v19 <= 0x7FFE )
    {
      Handle.Length = 2 * v19;
      Handle.MaximumLength = 2 * v19 + 2;
      v16 = ZwSetValueKey(v18, &Handle, 0, 1u, *((PVOID *)a1 + 1), a1[1]);
      if ( v16 < 0 )
      {
LABEL_29:
        NtDeleteKey(v18);
        goto LABEL_30;
      }
      Data = 1;
      Handle.Buffer = (wchar_t *)L"UseFilter";
      *(_DWORD *)(&Handle.MaximumLength + 1) = 0;
      v20 = wcslen(L"UseFilter");
      if ( v20 <= 0x7FFE )
      {
        Handle.Length = 2 * v20;
        Handle.MaximumLength = 2 * v20 + 2;
        v16 = ZwSetValueKey(KeyHandle, &Handle, 0, 4u, &Data, 4u);
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
