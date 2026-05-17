/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x18010BF40
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x18010BDCC (sxsisol_RespectDotLocal.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlComputePrivatizedDllName_U(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  char *v3; // r9
  unsigned __int64 v4; // r10
  void *v6; // r12
  char *v7; // r11
  char *v8; // rdx
  wchar_t *Buffer; // rdi
  int v10; // esi
  int v11; // r8d
  unsigned int v12; // r9d
  unsigned __int64 Length; // r14
  wchar_t *v14; // rcx
  wchar_t *j; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rbx
  unsigned int v19; // r15d
  char *Atom; // rax
  char *v21; // rbp
  char *v22; // r12
  unsigned __int64 v23; // rbx
  unsigned int v24; // ecx
  __int16 v25; // bp
  char *v26; // rax
  char *v27; // r15
  unsigned __int64 v28; // rbx
  char *v29; // rdi
  unsigned __int64 v30; // rbx
  char *i; // rcx
  char *v33; // rax
  void *Src; // [rsp+20h] [rbp-58h]
  char *v35; // [rsp+28h] [rbp-50h]
  void *v36; // [rsp+30h] [rbp-48h]
  unsigned int Size; // [rsp+80h] [rbp+8h]
  __int64 v39; // [rsp+98h] [rbp+20h]

  v3 = (char *)*((_QWORD *)a1 + 1);
  v4 = *a1;
  Src = v3;
  v6 = 0LL;
  v35 = 0LL;
  v7 = v3;
  v8 = 0LL;
  if ( (_WORD)v4 )
  {
    for ( i = &v3[2 * (v4 >> 1) - 2]; i > v3; i -= 2 )
    {
      if ( *(_WORD *)i == 46 )
      {
        v33 = i;
        if ( v8 )
          v33 = v8;
        v8 = v33;
        v35 = v33;
      }
      else if ( *(_WORD *)i == 92 || *(_WORD *)i == 47 )
      {
        v7 = i + 2;
        Src = i + 2;
        break;
      }
    }
  }
  Buffer = (wchar_t *)*((_QWORD *)&LdrpOriginalAppPackagesPath + 1);
  Size = 0;
  v10 = 0;
  v11 = v8 == 0LL ? 8 : 0;
  v12 = v4 + 2 * (1 - ((v7 - v3) >> 1));
  LODWORD(v39) = v12;
  if ( *((_QWORD *)&LdrpOriginalAppPackagesPath + 1) )
  {
    LODWORD(Length) = 0;
    Size = 92;
    if ( (_WORD)LdrpOriginalAppPackagesPath )
    {
      do
      {
        if ( *(_WORD *)(*((_QWORD *)&LdrpOriginalAppPackagesPath + 1) + 2
                                                                      * ((unsigned __int64)(unsigned int)Length >> 1)) == 59 )
          break;
        LODWORD(Length) = Length + 2;
      }
      while ( (unsigned int)Length < (unsigned __int16)LdrpOriginalAppPackagesPath );
    }
    v19 = v11 + v12;
    v39 = v12;
  }
  else
  {
    Length = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v14 = Buffer;
    for ( j = &Buffer[(Length >> 1) - 1]; j > Buffer; --j )
    {
      if ( *j == 47 || *j == 92 )
      {
        v14 = j + 1;
        break;
      }
    }
    v16 = v14 - Buffer;
    if ( (unsigned __int64)(2 * v16) > 0xFFFFFFFF )
      return 3221225734LL;
    v17 = 2 * v16;
    if ( v17 > 0xFFFE )
      return 3221225734LL;
    v18 = (unsigned __int16)v17;
    if ( (unsigned __int16)v4 > 0xFFFCu )
      return 3221225734LL;
    v19 = v11 + v12;
    if ( v11 + v12 + (unsigned __int16)v17 > 0xFFFE )
      return 3221225734LL;
    v10 = (unsigned __int16)(v19 + v17);
    Atom = (char *)RtlpAllocateAtom((unsigned __int16)(v19 + v17));
    v36 = Atom;
    v21 = Atom;
    if ( !Atom )
      return 3221225495LL;
    memmove(Atom, Buffer, (unsigned int)v18);
    v22 = &v21[2 * (v18 >> 1)];
    v39 = (unsigned int)v39;
    memmove(v22, Src, (unsigned int)v39 - 2LL);
    v23 = ((unsigned __int64)(unsigned int)v39 - 2) >> 1;
    if ( v35 )
    {
      *(_WORD *)&v22[2 * v23] = 0;
    }
    else
    {
      *(_QWORD *)&v22[2 * v23] = *(_QWORD *)L".DLL";
      *(_WORD *)&v22[2 * v23 + 8] = aDll[4];
    }
    v6 = v36;
  }
  v24 = v19 + Length + Size + 14;
  if ( v24 > 0xFFFE )
    return 3221225734LL;
  v25 = v19 + Length + Size + 14;
  v26 = (char *)RtlpAllocateAtom((unsigned __int16)v24);
  v27 = v26;
  if ( !v26 )
    return 3221225495LL;
  memmove(v26, Buffer, (unsigned int)Length);
  v28 = (unsigned __int64)(unsigned int)Length >> 1;
  v29 = &v27[2 * v28];
  if ( Size )
  {
    memmove(&v27[2 * v28], L"\\microsoft.system.package.metadata\\Application", Size);
    v29 += 2 * ((unsigned __int64)Size >> 1);
  }
  *(_QWORD *)v29 = *(_QWORD *)L".Local";
  *((_DWORD *)v29 + 2) = *(_DWORD *)L"al";
  *((_WORD *)v29 + 6) = 92;
  memmove(v29 + 14, Src, v39 - 2);
  v30 = (unsigned __int64)(v39 - 2) >> 1;
  if ( v35 )
  {
    *(_WORD *)&v29[2 * v30 + 14] = 0;
  }
  else
  {
    *(_QWORD *)&v29[2 * v30 + 14] = *(_QWORD *)L".DLL";
    *(_WORD *)&v29[2 * v30 + 22] = aDll[4];
  }
  *(_QWORD *)(a2 + 8) = v6;
  *(_WORD *)(a2 + 2) = v10;
  *(_WORD *)a2 = v10;
  if ( v10 )
    *(_WORD *)a2 = v10 - 2;
  *(_WORD *)(a3 + 2) = v25;
  *(_WORD *)a3 = v25 - 2;
  *(_QWORD *)(a3 + 8) = v27;
  return 0LL;
}
