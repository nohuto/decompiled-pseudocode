/*
 * XREFs of LdrpBuildSystem32FileName @ 0x1800AD5E0
 * Callers:
 *     LdrpCorInitialize @ 0x1800ACFF8 (LdrpCorInitialize.c)
 *     LdrpInitShimEngine @ 0x1800AD3A8 (LdrpInitShimEngine.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     NtdllpReallocateStringRoutine @ 0x18011CE08 (NtdllpReallocateStringRoutine.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall LdrpBuildSystem32FileName(unsigned __int16 *a1, const void **a2)
{
  _DWORD *SharedData; // rcx
  __int64 v5; // rsi
  size_t v6; // rax
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // bp
  unsigned int v9; // edx
  unsigned __int16 v10; // bp
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  unsigned __int16 *v14; // r8
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // esi
  unsigned int v19; // edx
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v23; // esi
  unsigned __int16 *v24; // rdx
  unsigned int v25; // esi
  PVOID v26; // rbp
  unsigned int v27; // r14d
  unsigned __int16 *v28; // rdx
  unsigned int v29; // r14d
  __int64 v30; // rax
  PVOID Atom; // r15
  unsigned __int16 *v32; // rdx
  unsigned int v33; // esi
  PVOID v34; // rbp

  *a1 = 0;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v5 = (__int64)NtCurrentPeb()->SharedData + 30;
  else
    v5 = 2147352624LL;
  LOWORD(v6) = 0;
  v7 = 0;
  if ( v5 )
  {
    v6 = 2 * wcslen((const wchar_t *)v5);
    if ( v6 >= 0xFFFE )
      LOWORD(v6) = -4;
    v8 = v6;
    v7 = v6;
  }
  else
  {
    v8 = 0;
  }
  if ( (_WORD)v6 )
  {
    v9 = v7 + *a1 + 2;
    if ( v9 <= a1[1] )
    {
LABEL_9:
      memmove((void *)(*((_QWORD *)a1 + 1) + *a1), (const void *)v5, v8);
      v10 = *a1 + v8;
      v11 = *((_QWORD *)a1 + 1);
      *a1 = v10;
      *(_WORD *)(v11 + 2 * ((unsigned __int64)v10 >> 1)) = 0;
      goto LABEL_10;
    }
    if ( v9 <= 0xFFFE )
    {
      v27 = v9 + 63;
      v28 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
      v29 = v27 & 0xFFFFFFC0;
      if ( v29 > 0xFFFE )
        v29 = 65534;
      if ( v28 == a1 + 8 )
      {
        Atom = RtlpAllocateAtom(v29);
        if ( Atom )
        {
          if ( *a1 )
            memmove(Atom, *((const void **)a1 + 1), *a1);
          *((_QWORD *)a1 + 1) = Atom;
          a1[1] = v29;
          goto LABEL_9;
        }
      }
      else
      {
        v30 = NtdllpReallocateStringRoutine(v29, v28);
        if ( v30 )
        {
          *((_QWORD *)a1 + 1) = v30;
          a1[1] = v29;
          goto LABEL_9;
        }
      }
    }
  }
LABEL_10:
  v12 = *a1 + 22;
  if ( v12 <= a1[1] )
  {
LABEL_11:
    v13 = *((_QWORD *)a1 + 1) + *a1;
    v14 = a1 + 1;
    *(_OWORD *)v13 = *(_OWORD *)SlashSystem32SlashString.Buffer;
    *(_DWORD *)(v13 + 16) = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
    v15 = (unsigned __int16)(*a1 + 20);
    v16 = *((_QWORD *)a1 + 1);
    *a1 = v15;
    *(_WORD *)(v16 + 2 * (v15 >> 1)) = 0;
    goto LABEL_12;
  }
  if ( v12 <= 0xFFFE )
  {
    v32 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v33 = (*a1 + 85) & 0xFFFFFFC0;
    if ( v33 > 0xFFFE )
      v33 = 65534;
    if ( v32 == a1 + 8 )
    {
      v34 = RtlpAllocateAtom(v33);
      if ( !v34 )
        goto LABEL_46;
      if ( *a1 )
        memmove(v34, *((const void **)a1 + 1), *a1);
    }
    else
    {
      v34 = (PVOID)NtdllpReallocateStringRoutine(v33, v32);
      if ( !v34 )
        goto LABEL_46;
    }
    *((_QWORD *)a1 + 1) = v34;
    a1[1] = v33;
    goto LABEL_11;
  }
LABEL_46:
  v14 = a1 + 1;
LABEL_12:
  if ( !a2 )
    return 0LL;
  v17 = *(unsigned __int16 *)a2;
  v18 = 0;
  if ( (_WORD)v17 )
  {
    v19 = v17 + 2 + *a1;
    if ( v19 <= *v14 )
    {
LABEL_15:
      memmove((void *)(*((_QWORD *)a1 + 1) + *a1), a2[1], *(unsigned __int16 *)a2);
      v20 = (unsigned __int16)(*(_WORD *)a2 + *a1);
      v21 = *((_QWORD *)a1 + 1);
      *a1 = v20;
      *(_WORD *)(v21 + 2 * (v20 >> 1)) = 0;
      return v18;
    }
    if ( v19 > 0xFFFE )
      return (unsigned int)-1073741562;
    v23 = v19 + 63;
    v24 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v25 = v23 & 0xFFFFFFC0;
    if ( v25 > 0xFFFE )
      v25 = 65534;
    if ( v24 == a1 + 8 )
    {
      v26 = RtlpAllocateAtom(v25);
      if ( !v26 )
        return (unsigned int)-1073741801;
      if ( *a1 )
        memmove(v26, *((const void **)a1 + 1), *a1);
    }
    else
    {
      v26 = (PVOID)NtdllpReallocateStringRoutine(v25, v24);
      if ( !v26 )
        return (unsigned int)-1073741801;
    }
    a1[1] = v25;
    v18 = 0;
    *((_QWORD *)a1 + 1) = v26;
    goto LABEL_15;
  }
  return v18;
}
