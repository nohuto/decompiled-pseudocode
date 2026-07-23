/*
 * XREFs of RtlAddAtomToAtomTableEx @ 0x180067E44
 * Callers:
 *     RtlAddAtomToAtomTable @ 0x18010FE00 (RtlAddAtomToAtomTable.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     RtlUnicodeStringToInteger @ 0x18005BFF0 (RtlUnicodeStringToInteger.c)
 *     RtlpLockAtomTable @ 0x1800682F0 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x18006831C (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpInsertStringAtom @ 0x1800683B0 (RtlpInsertStringAtom.c)
 *     NLS_UPCASE @ 0x180069080 (NLS_UPCASE.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlAddAtomToAtomTableEx(__int64 a1, unsigned __int64 a2, _WORD *a3)
{
  _WORD *v6; // r13
  unsigned int v7; // esi
  char v8; // al
  __int64 *v9; // r10
  unsigned __int16 *v10; // rsi
  unsigned int v11; // r9d
  unsigned __int16 v12; // ax
  __int64 v13; // rsi
  __int64 *v14; // r15
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // ebx
  _RTL_SRWLOCK *v18; // rdi
  __int16 v19; // dx
  _WORD *v20; // rax
  NTSTATUS v21; // eax
  size_t v22; // r15
  _QWORD *Atom; // rax
  _QWORD *v24; // rsi
  _WORD *v25; // rax
  size_t v26; // r15
  ULONG Value; // [rsp+24h] [rbp-94h] BYREF
  size_t Size; // [rsp+28h] [rbp-90h]
  _WORD *v30; // [rsp+30h] [rbp-88h]
  unsigned int i; // [rsp+38h] [rbp-80h]
  __int64 v32; // [rsp+40h] [rbp-78h]
  __int64 *v33; // [rsp+48h] [rbp-70h]
  __int64 *j; // [rsp+50h] [rbp-68h]
  _WORD *v35; // [rsp+58h] [rbp-60h]
  unsigned __int16 *v36; // [rsp+60h] [rbp-58h]
  _UNICODE_STRING String; // [rsp+68h] [rbp-50h] BYREF
  _WORD *v38; // [rsp+78h] [rbp-40h]
  __int64 v39; // [rsp+80h] [rbp-38h]
  __int16 v41; // [rsp+D8h] [rbp+20h]

  v39 = a1;
  v6 = 0LL;
  v33 = 0LL;
  v7 = 0;
  LODWORD(Size) = 0;
  v30 = 0LL;
  v8 = RtlpLockAtomTable();
  v9 = 0LL;
  if ( v8 )
  {
    v38 = (_WORD *)a2;
    String = 0LL;
    v35 = 0LL;
    Value = 0;
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_WORD *)a2 == 35 )
      {
        v19 = a2 + 2;
        v38 = (_WORD *)(a2 + 2);
        v20 = (_WORD *)(a2 + 2);
        v35 = (_WORD *)(a2 + 2);
        while ( *v20 )
        {
          if ( (unsigned __int16)(*v20 - 48) > 9u )
            goto LABEL_4;
          v35 = ++v20;
        }
        Value = 0;
        String.Buffer = (wchar_t *)(a2 + 2);
        String.Length = (_WORD)v20 - v19;
        String.MaximumLength = (_WORD)v20 - v19;
        v21 = RtlUnicodeStringToInteger(&String, 0xAu, &Value);
        v9 = 0LL;
        if ( v21 >= 0 )
        {
          if ( Value - 1 > 0xBFFF )
            v41 = -16384;
          else
            v41 = Value;
          LOWORD(a2) = v41;
LABEL_37:
          if ( (unsigned __int16)a2 >= 0xC000u )
          {
            LOWORD(a2) = 0;
            v17 = -1073741811;
          }
          else
          {
            v17 = 0;
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
      v17 = -1073741773;
      goto LABEL_30;
    }
    i = 0;
    v36 = 0LL;
    j = 0LL;
    v32 = 0LL;
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v10 = (unsigned __int16 *)a2;
      v36 = (unsigned __int16 *)a2;
      v11 = 0;
      for ( i = 0; ; i = v11 )
      {
        v12 = *v10;
        if ( !*v10 )
          break;
        v36 = ++v10;
        if ( v12 >= 0x61u )
        {
          if ( v12 > 0x7Au )
            v12 = NLS_UPCASE(qword_1801CF038, v12);
          else
            v12 -= 32;
        }
        v11 += v12 + (v12 >> 1) + 2 * v12;
      }
      v13 = (__int64)((__int64)v10 - a2) >> 1;
      if ( (unsigned int)v13 > 0xFF )
      {
        v14 = v9;
        j = v9;
        v15 = (__int64)v9;
        v32 = (__int64)v9;
      }
      else
      {
        v14 = (__int64 *)(a1 + 8LL * (v11 % *(_DWORD *)(a1 + 64)) + 72);
        for ( j = v14; ; j = (__int64 *)v15 )
        {
          v15 = *v14;
          v32 = v15;
          if ( !v15 )
            break;
          if ( *(unsigned __int8 *)(v15 + 16) == (_DWORD)v13 )
          {
            v16 = wcsicmp((const wchar_t *)(v15 + 18), (const wchar_t *)a2);
            v9 = 0LL;
            if ( !v16 )
              break;
          }
          v14 = (__int64 *)v15;
        }
      }
      v33 = v14;
      if ( !v15 )
        LODWORD(Size) = 2 * v13;
      v7 = Size;
    }
    else
    {
      v15 = 0LL;
      v32 = 0LL;
      if ( (unsigned __int16)a2 >= 0xC000u )
      {
        v15 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
        v32 = v15;
      }
      v33 = v9;
    }
    if ( v15 )
    {
      if ( v15 == -12 )
      {
        v17 = -1073741801;
        goto LABEL_30;
      }
      v30 = (_WORD *)(v15 + 12);
      v6 = (_WORD *)(v15 + 12);
    }
    if ( v15 )
    {
      if ( *v6 == 0xFFFF )
        v6[1] |= 1u;
      else
        ++*v6;
      if ( a3 )
        *a3 = *(_WORD *)(v15 + 10);
      v17 = (unsigned int)v9;
    }
    else if ( v33 == v9 )
    {
      v17 = -1073741811;
    }
    else
    {
      v17 = -1073741801;
      v22 = v7;
      Atom = RtlpAllocateAtom(v7 + 20LL);
      v24 = Atom;
      if ( Atom )
      {
        *Atom = 0LL;
        v25 = (_WORD *)Atom + 6;
        *v25 = 1;
        *((_WORD *)v24 + 7) = 0;
        v30 = v25;
      }
      else
      {
        v24 = 0LL;
      }
      if ( v24 )
      {
        memmove((char *)v24 + 18, (const void *)a2, v22);
        v26 = v22 >> 1;
        *((_BYTE *)v24 + 16) = v26;
        *((_WORD *)v24 + (unsigned __int8)v26 + 9) = 0;
        v18 = (_RTL_SRWLOCK *)a1;
        if ( (unsigned __int8)RtlpInsertStringAtom(a1, v24) )
        {
          *((_WORD *)v24 + 5) = *((_WORD *)v24 + 4) | 0xC000;
          *v33 = (__int64)v24;
          if ( a3 )
            *a3 = *((_WORD *)v24 + 5);
          v17 = 0;
        }
        else
        {
          RtlpSysVolFree(v24);
        }
        goto LABEL_68;
      }
    }
LABEL_30:
    v18 = (_RTL_SRWLOCK *)a1;
LABEL_68:
    RtlReleaseSRWLockExclusive(v18 + 1);
    return v17;
  }
  return 3221225485LL;
}
