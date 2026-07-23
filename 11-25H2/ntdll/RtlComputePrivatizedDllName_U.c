/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x1800A0DF0
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x1800A0C84 (sxsisol_RespectDotLocal.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __cdecl RtlComputePrivatizedDllName_U(
        PUNICODE_STRING DllName,
        PUNICODE_STRING RealName,
        PUNICODE_STRING LocalName)
{
  wchar_t *Buffer; // r9
  unsigned __int64 Length; // r10
  wchar_t *v6; // r12
  wchar_t *v7; // r11
  wchar_t *v8; // rdx
  wchar_t *v9; // rdi
  int v10; // esi
  int v11; // r8d
  unsigned int v12; // r9d
  unsigned __int64 v13; // r14
  wchar_t *v14; // rcx
  wchar_t *j; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rbx
  unsigned int v19; // r15d
  wchar_t *Atom; // rax
  wchar_t *v21; // rbp
  wchar_t *v22; // r12
  unsigned __int64 v23; // rbx
  unsigned int v24; // ecx
  unsigned __int16 v25; // bp
  wchar_t *v26; // rax
  wchar_t *v27; // r15
  unsigned __int64 v28; // rbx
  wchar_t *v29; // rdi
  unsigned __int64 v30; // rbx
  wchar_t *i; // rcx
  wchar_t *v33; // rax
  wchar_t *Src; // [rsp+20h] [rbp-58h]
  wchar_t *v35; // [rsp+28h] [rbp-50h]
  wchar_t *v36; // [rsp+30h] [rbp-48h]
  unsigned int Size; // [rsp+80h] [rbp+8h]
  __int64 v39; // [rsp+98h] [rbp+20h]

  Buffer = DllName->Buffer;
  Length = DllName->Length;
  Src = Buffer;
  v6 = 0LL;
  v35 = 0LL;
  v7 = Buffer;
  v8 = 0LL;
  if ( (_WORD)Length )
  {
    for ( i = &Buffer[(Length >> 1) - 1]; i > Buffer; --i )
    {
      if ( *i == 46 )
      {
        v33 = i;
        if ( v8 )
          v33 = v8;
        v8 = v33;
        v35 = v33;
      }
      else if ( *i == 92 || *i == 47 )
      {
        v7 = i + 1;
        Src = i + 1;
        break;
      }
    }
  }
  v9 = (wchar_t *)*((_QWORD *)&LdrpOriginalAppPackagesPath + 1);
  Size = 0;
  v10 = 0;
  v11 = v8 == 0LL ? 8 : 0;
  v12 = Length + 2 * (1 - (v7 - Buffer));
  LODWORD(v39) = v12;
  if ( *((_QWORD *)&LdrpOriginalAppPackagesPath + 1) )
  {
    LODWORD(v13) = 0;
    Size = 92;
    if ( (_WORD)LdrpOriginalAppPackagesPath )
    {
      do
      {
        if ( *(_WORD *)(*((_QWORD *)&LdrpOriginalAppPackagesPath + 1) + 2 * ((unsigned __int64)(unsigned int)v13 >> 1)) == 59 )
          break;
        LODWORD(v13) = v13 + 2;
      }
      while ( (unsigned int)v13 < (unsigned __int16)LdrpOriginalAppPackagesPath );
    }
    v19 = v11 + v12;
    v39 = v12;
  }
  else
  {
    v13 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    v9 = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      v9 = (wchar_t *)((char *)v9 + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v14 = v9;
    for ( j = &v9[(v13 >> 1) - 1]; j > v9; --j )
    {
      if ( *j == 47 || *j == 92 )
      {
        v14 = j + 1;
        break;
      }
    }
    v16 = v14 - v9;
    if ( (unsigned __int64)(2 * v16) > 0xFFFFFFFF )
      return -1073741562;
    v17 = 2 * v16;
    if ( v17 > 0xFFFE )
      return -1073741562;
    v18 = (unsigned __int16)v17;
    if ( (unsigned __int16)Length > 0xFFFCu )
      return -1073741562;
    v19 = v11 + v12;
    if ( v11 + v12 + (unsigned __int16)v17 > 0xFFFE )
      return -1073741562;
    v10 = (unsigned __int16)(v19 + v17);
    Atom = (wchar_t *)RtlpAllocateAtom((unsigned __int16)(v19 + v17));
    v36 = Atom;
    v21 = Atom;
    if ( !Atom )
      return -1073741801;
    memmove(Atom, v9, (unsigned int)v18);
    v22 = &v21[v18 >> 1];
    v39 = (unsigned int)v39;
    memmove(v22, Src, (unsigned int)v39 - 2LL);
    v23 = ((unsigned __int64)(unsigned int)v39 - 2) >> 1;
    if ( v35 )
    {
      v22[v23] = 0;
    }
    else
    {
      *(_QWORD *)&v22[v23] = *(_QWORD *)L".DLL";
      v22[v23 + 4] = aDll[4];
    }
    v6 = v36;
  }
  v24 = v19 + v13 + Size + 14;
  if ( v24 > 0xFFFE )
    return -1073741562;
  v25 = v19 + v13 + Size + 14;
  v26 = (wchar_t *)RtlpAllocateAtom((unsigned __int16)v24);
  v27 = v26;
  if ( !v26 )
    return -1073741801;
  memmove(v26, v9, (unsigned int)v13);
  v28 = (unsigned __int64)(unsigned int)v13 >> 1;
  v29 = &v27[v28];
  if ( Size )
  {
    memmove(&v27[v28], L"\\microsoft.system.package.metadata\\Application", Size);
    v29 += (unsigned __int64)Size >> 1;
  }
  *(_QWORD *)v29 = *(_QWORD *)L".Local";
  *((_DWORD *)v29 + 2) = *(_DWORD *)L"al";
  v29[6] = 92;
  memmove(v29 + 7, Src, v39 - 2);
  v30 = (unsigned __int64)(v39 - 2) >> 1;
  if ( v35 )
  {
    v29[v30 + 7] = 0;
  }
  else
  {
    *(_QWORD *)&v29[v30 + 7] = *(_QWORD *)L".DLL";
    v29[v30 + 11] = aDll[4];
  }
  RealName->Buffer = v6;
  RealName->MaximumLength = v10;
  RealName->Length = v10;
  if ( v10 )
    RealName->Length = v10 - 2;
  LocalName->MaximumLength = v25;
  LocalName->Length = v25 - 2;
  LocalName->Buffer = v27;
  return 0;
}
