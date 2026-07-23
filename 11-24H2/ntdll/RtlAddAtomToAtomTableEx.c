/*
 * XREFs of RtlAddAtomToAtomTableEx @ 0x18007AD34
 * Callers:
 *     RtlAddAtomToAtomTable @ 0x1801082B0 (RtlAddAtomToAtomTable.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlUnicodeStringToInteger @ 0x180013E20 (RtlUnicodeStringToInteger.c)
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x18007B1E0 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x18007B20C (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpInsertStringAtom @ 0x18007B2A0 (RtlpInsertStringAtom.c)
 *     NLS_UPCASE @ 0x18007BF60 (NLS_UPCASE.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlAddAtomToAtomTableEx(__int64 a1, unsigned __int64 a2, _WORD *a3)
{
  _WORD *v6; // r13
  unsigned int v7; // esi
  char v8; // al
  __int64 v9; // r8
  __int64 *v10; // r10
  unsigned __int16 *v11; // rsi
  __int64 v12; // r9
  unsigned __int16 v13; // ax
  __int64 v14; // rsi
  __int64 *v15; // r15
  __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // ebx
  _RTL_SRWLOCK *v19; // rdi
  __int16 v20; // dx
  _WORD *v21; // rax
  NTSTATUS v22; // eax
  size_t v23; // r15
  _QWORD *Atom; // rax
  _QWORD *v25; // rsi
  _WORD *v26; // rax
  size_t v27; // r15
  ULONG Value; // [rsp+24h] [rbp-94h] BYREF
  size_t Size; // [rsp+28h] [rbp-90h]
  _WORD *v31; // [rsp+30h] [rbp-88h]
  int i; // [rsp+38h] [rbp-80h]
  __int64 v33; // [rsp+40h] [rbp-78h]
  __int64 *v34; // [rsp+48h] [rbp-70h]
  __int64 *j; // [rsp+50h] [rbp-68h]
  _WORD *v36; // [rsp+58h] [rbp-60h]
  unsigned __int16 *v37; // [rsp+60h] [rbp-58h]
  _UNICODE_STRING String; // [rsp+68h] [rbp-50h] BYREF
  _WORD *v39; // [rsp+78h] [rbp-40h]
  __int64 v40; // [rsp+80h] [rbp-38h]
  __int16 v42; // [rsp+D8h] [rbp+20h]

  v40 = a1;
  v6 = 0LL;
  v34 = 0LL;
  v7 = 0;
  LODWORD(Size) = 0;
  v31 = 0LL;
  v8 = RtlpLockAtomTable();
  v10 = 0LL;
  if ( v8 )
  {
    v39 = (_WORD *)a2;
    String = 0LL;
    v36 = 0LL;
    Value = 0;
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_WORD *)a2 == 35 )
      {
        v20 = a2 + 2;
        v39 = (_WORD *)(a2 + 2);
        v21 = (_WORD *)(a2 + 2);
        v36 = (_WORD *)(a2 + 2);
        while ( *v21 )
        {
          if ( (unsigned __int16)(*v21 - 48) > 9u )
            goto LABEL_4;
          v36 = ++v21;
        }
        Value = 0;
        String.Buffer = (wchar_t *)(a2 + 2);
        String.Length = (_WORD)v21 - v20;
        String.MaximumLength = (_WORD)v21 - v20;
        v22 = RtlUnicodeStringToInteger(&String, 0xAu, &Value);
        v10 = 0LL;
        if ( v22 >= 0 )
        {
          if ( Value - 1 > 0xBFFF )
            v42 = -16384;
          else
            v42 = Value;
          LOWORD(a2) = v42;
LABEL_37:
          if ( (unsigned __int16)a2 >= 0xC000u )
          {
            LOWORD(a2) = 0;
            v18 = -1073741811;
          }
          else
          {
            v18 = 0;
          }
          if ( a3 )
            *a3 = a2;
          goto LABEL_30;
        }
      }
    }
    else if ( (unsigned __int16)a2 < 0xC000u )
    {
      if ( !(_WORD)a2 )
        LOWORD(a2) = -16384;
      goto LABEL_37;
    }
LABEL_4:
    if ( !*(_WORD *)a2 )
    {
      v18 = -1073741773;
      goto LABEL_30;
    }
    i = 0;
    v37 = 0LL;
    j = 0LL;
    v33 = 0LL;
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v11 = (unsigned __int16 *)a2;
      v37 = (unsigned __int16 *)a2;
      v12 = 0LL;
      for ( i = 0; ; i = v12 )
      {
        v13 = *v11;
        if ( !*v11 )
          break;
        v37 = ++v11;
        if ( v13 >= 0x61u )
        {
          if ( v13 > 0x7Au )
            v13 = NLS_UPCASE(qword_1801CC038, v13, v9, v12);
          else
            v13 -= 32;
        }
        v12 = v13 + (v13 >> 1) + 2 * v13 + (unsigned int)v12;
      }
      v14 = (__int64)((__int64)v11 - a2) >> 1;
      if ( (unsigned int)v14 > 0xFF )
      {
        v15 = v10;
        j = v10;
        v16 = (__int64)v10;
        v33 = (__int64)v10;
      }
      else
      {
        v15 = (__int64 *)(a1 + 8LL * ((unsigned int)v12 % *(_DWORD *)(a1 + 64)) + 72);
        for ( j = v15; ; j = (__int64 *)v16 )
        {
          v16 = *v15;
          v33 = v16;
          if ( !v16 )
            break;
          if ( *(unsigned __int8 *)(v16 + 16) == (_DWORD)v14 )
          {
            v17 = wcsicmp((const wchar_t *)(v16 + 18), (const wchar_t *)a2);
            v10 = 0LL;
            if ( !v17 )
              break;
          }
          v15 = (__int64 *)v16;
        }
      }
      v34 = v15;
      if ( !v16 )
        LODWORD(Size) = 2 * v14;
      v7 = Size;
    }
    else
    {
      v16 = 0LL;
      v33 = 0LL;
      if ( (unsigned __int16)a2 >= 0xC000u )
      {
        v16 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
        v33 = v16;
      }
      v34 = v10;
    }
    if ( v16 )
    {
      if ( v16 == -12 )
      {
        v18 = -1073741801;
        goto LABEL_30;
      }
      v31 = (_WORD *)(v16 + 12);
      v6 = (_WORD *)(v16 + 12);
    }
    if ( v16 )
    {
      if ( *v6 == 0xFFFF )
        v6[1] |= 1u;
      else
        ++*v6;
      if ( a3 )
        *a3 = *(_WORD *)(v16 + 10);
      v18 = (unsigned int)v10;
    }
    else if ( v34 == v10 )
    {
      v18 = -1073741811;
    }
    else
    {
      v18 = -1073741801;
      v23 = v7;
      Atom = RtlpAllocateAtom(v7 + 20LL);
      v25 = Atom;
      if ( Atom )
      {
        *Atom = 0LL;
        v26 = (_WORD *)Atom + 6;
        *v26 = 1;
        *((_WORD *)v25 + 7) = 0;
        v31 = v26;
      }
      else
      {
        v25 = 0LL;
      }
      if ( v25 )
      {
        memmove((char *)v25 + 18, (const void *)a2, v23);
        v27 = v23 >> 1;
        *((_BYTE *)v25 + 16) = v27;
        *((_WORD *)v25 + (unsigned __int8)v27 + 9) = 0;
        v19 = (_RTL_SRWLOCK *)a1;
        if ( (unsigned __int8)RtlpInsertStringAtom(a1, v25) )
        {
          *((_WORD *)v25 + 5) = *((_WORD *)v25 + 4) | 0xC000;
          *v34 = (__int64)v25;
          if ( a3 )
            *a3 = *((_WORD *)v25 + 5);
          v18 = 0;
        }
        else
        {
          RtlpSysVolFree(v25);
        }
        goto LABEL_68;
      }
    }
LABEL_30:
    v19 = (_RTL_SRWLOCK *)a1;
LABEL_68:
    RtlReleaseSRWLockExclusive(v19 + 1);
    return v18;
  }
  return 3221225485LL;
}
