/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x18005BC50
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlUnicodeStringToInteger @ 0x18005BFF0 (RtlUnicodeStringToInteger.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x18006831C (RtlpAtomMapAtomToHandleEntry.c)
 *     NLS_UPCASE @ 0x180069080 (NLS_UPCASE.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 */

__int64 __fastcall RtlLookupAtomInAtomTable(__int64 a1, unsigned __int64 a2, _WORD *a3)
{
  unsigned int v6; // esi
  unsigned __int16 *v7; // rbx
  unsigned int v8; // r9d
  __int16 v9; // r10
  unsigned __int16 v10; // ax
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int16 v15; // cx
  _WORD *i; // rax
  __int128 v18; // [rsp+40h] [rbp-58h] BYREF
  const wchar_t *v19; // [rsp+50h] [rbp-48h]
  __int64 v20; // [rsp+58h] [rbp-40h]
  __int64 v21; // [rsp+60h] [rbp-38h]
  __int16 v22; // [rsp+A0h] [rbp+8h]
  int v23; // [rsp+B8h] [rbp+20h] BYREF

  v20 = a1;
  v6 = 0;
  if ( a1 && *(_DWORD *)a1 == 1836020801 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 8));
    v19 = (const wchar_t *)a2;
    v18 = 0LL;
    v23 = 0;
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_WORD *)a2 == 35 )
      {
        v15 = a2 + 2;
        v19 = (const wchar_t *)(a2 + 2);
        for ( i = (_WORD *)(a2 + 2); *i; ++i )
        {
          if ( (unsigned __int16)(*i - 48) > 9u )
            goto LABEL_5;
        }
        v23 = 0;
        *((_QWORD *)&v18 + 1) = a2 + 2;
        LOWORD(v18) = (_WORD)i - v15;
        WORD1(v18) = (_WORD)i - v15;
        if ( (int)RtlUnicodeStringToInteger(&v18, 10LL, &v23) >= 0 )
        {
          if ( (unsigned int)(v23 - 1) > 0xBFFF )
            v22 = -16384;
          else
            v22 = v23;
          LOWORD(a2) = v22;
LABEL_37:
          if ( (unsigned __int16)a2 >= 0xC000u )
          {
            LOWORD(a2) = 0;
            v6 = -1073741811;
          }
          if ( a3 )
            *a3 = a2;
          goto LABEL_56;
        }
      }
    }
    else if ( (unsigned __int16)a2 < 0xC000u )
    {
      if ( !(_WORD)a2 )
        LOWORD(a2) = -16384;
      goto LABEL_37;
    }
LABEL_5:
    if ( *(_WORD *)a2 )
    {
      if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        v7 = (unsigned __int16 *)a2;
        v8 = 0;
        v9 = -32;
        while ( 1 )
        {
          v10 = *v7;
          if ( !*v7 )
            break;
          ++v7;
          if ( v10 >= 0x61u )
          {
            if ( v10 > 0x7Au )
              v10 = NLS_UPCASE(qword_1801CF038, v10);
            else
              v10 += v9;
          }
          v8 += v10 + (v10 >> 1) + 2 * v10;
        }
        v11 = (__int64)((__int64)v7 - a2) >> 1;
        if ( (unsigned int)v11 > 0xFF )
        {
          v12 = 0LL;
        }
        else
        {
          v12 = a1 + 8 * (v8 % *(_DWORD *)(a1 + 64) + 9LL);
          while ( 1 )
          {
            v12 = *(_QWORD *)v12;
            if ( !v12 )
              break;
            if ( *(unsigned __int8 *)(v12 + 16) == (_DWORD)v11
              && !wcsicmp((const wchar_t *)(v12 + 18), (const wchar_t *)a2) )
            {
              goto LABEL_19;
            }
          }
        }
        goto LABEL_22;
      }
      v12 = 0LL;
      if ( (unsigned __int16)a2 >= 0xC000u )
        v12 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
LABEL_19:
      if ( !v12 )
        goto LABEL_22;
      if ( v12 != -12 )
      {
        v21 = v12 + 12;
LABEL_22:
        if ( v12 )
        {
          v13 = *(_QWORD *)(a1 + 40);
          v14 = v13 + (unsigned int)*(unsigned __int16 *)(v12 + 8) * *(_DWORD *)(a1 + 20);
          if ( v14
            && v14 >= v13
            && v14 < *(_QWORD *)(a1 + 48)
            && ((*(_DWORD *)(a1 + 20) - 1) & (unsigned int)v14) == 0
            && (*(_BYTE *)v14 & 1) != 0
            && *(_QWORD *)(v14 + 8) )
          {
            if ( a3 )
              *a3 = *(_WORD *)(v12 + 10);
          }
          else
          {
            v6 = -1073741816;
          }
        }
        else
        {
          v6 = -1073741772;
        }
        goto LABEL_56;
      }
      v6 = -1073741801;
    }
    else
    {
      v6 = -1073741773;
    }
LABEL_56:
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
    return v6;
  }
  return 3221225485LL;
}
