/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x1800329C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringToInteger @ 0x180032D60 (RtlUnicodeStringToInteger.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1800AEA2C (RtlpAtomMapAtomToHandleEntry.c)
 *     NLS_UPCASE @ 0x1800AF6C0 (NLS_UPCASE.c)
 *     _wcsicmp @ 0x180122C70 (_wcsicmp.c)
 */

__int64 __fastcall RtlLookupAtomInAtomTable(__int64 a1, unsigned __int64 a2, _WORD *a3)
{
  unsigned int v6; // esi
  __int64 v7; // r8
  unsigned __int16 *v8; // rbx
  __int64 v9; // r9
  __int16 v10; // r10
  unsigned __int16 v11; // ax
  __int64 v12; // rbx
  __int64 v13; // rdi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int16 v16; // cx
  _WORD *i; // rax
  __int128 v19; // [rsp+40h] [rbp-58h] BYREF
  const wchar_t *v20; // [rsp+50h] [rbp-48h]
  __int64 v21; // [rsp+58h] [rbp-40h]
  __int64 v22; // [rsp+60h] [rbp-38h]
  __int16 v23; // [rsp+A0h] [rbp+8h]
  int v24; // [rsp+B8h] [rbp+20h] BYREF

  v21 = a1;
  v6 = 0;
  if ( a1 && *(_DWORD *)a1 == 1836020801 )
  {
    RtlAcquireSRWLockExclusive(a1 + 8);
    v20 = (const wchar_t *)a2;
    v19 = 0LL;
    v24 = 0;
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_WORD *)a2 == 35 )
      {
        v16 = a2 + 2;
        v20 = (const wchar_t *)(a2 + 2);
        for ( i = (_WORD *)(a2 + 2); *i; ++i )
        {
          if ( (unsigned __int16)(*i - 48) > 9u )
            goto LABEL_5;
        }
        v24 = 0;
        *((_QWORD *)&v19 + 1) = a2 + 2;
        LOWORD(v19) = (_WORD)i - v16;
        WORD1(v19) = (_WORD)i - v16;
        if ( (int)RtlUnicodeStringToInteger(&v19, 10LL, &v24) >= 0 )
        {
          if ( (unsigned int)(v24 - 1) > 0xBFFF )
            v23 = -16384;
          else
            v23 = v24;
          LOWORD(a2) = v23;
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
        v8 = (unsigned __int16 *)a2;
        v9 = 0LL;
        v10 = -32;
        while ( 1 )
        {
          v11 = *v8;
          if ( !*v8 )
            break;
          ++v8;
          if ( v11 >= 0x61u )
          {
            if ( v11 > 0x7Au )
              v11 = NLS_UPCASE(qword_1801CD038, v11, v7, v9);
            else
              v11 += v10;
          }
          v9 = v11 + (v11 >> 1) + 2 * v11 + (unsigned int)v9;
        }
        v12 = (__int64)((__int64)v8 - a2) >> 1;
        if ( (unsigned int)v12 > 0xFF )
        {
          v13 = 0LL;
        }
        else
        {
          v13 = a1 + 8 * ((unsigned int)v9 % *(_DWORD *)(a1 + 64) + 9LL);
          while ( 1 )
          {
            v13 = *(_QWORD *)v13;
            if ( !v13 )
              break;
            if ( *(unsigned __int8 *)(v13 + 16) == (_DWORD)v12
              && !wcsicmp((const wchar_t *)(v13 + 18), (const wchar_t *)a2) )
            {
              goto LABEL_19;
            }
          }
        }
        goto LABEL_22;
      }
      v13 = 0LL;
      if ( (unsigned __int16)a2 >= 0xC000u )
        v13 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
LABEL_19:
      if ( !v13 )
        goto LABEL_22;
      if ( v13 != -12 )
      {
        v22 = v13 + 12;
LABEL_22:
        if ( v13 )
        {
          v14 = *(_QWORD *)(a1 + 40);
          v15 = v14 + (unsigned int)*(unsigned __int16 *)(v13 + 8) * *(_DWORD *)(a1 + 20);
          if ( v15
            && v15 >= v14
            && v15 < *(_QWORD *)(a1 + 48)
            && ((*(_DWORD *)(a1 + 20) - 1) & (unsigned int)v15) == 0
            && (*(_BYTE *)v15 & 1) != 0
            && *(_QWORD *)(v15 + 8) )
          {
            if ( a3 )
              *a3 = *(_WORD *)(v13 + 10);
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
    RtlReleaseSRWLockExclusive(a1 + 8);
    return v6;
  }
  return 3221225485LL;
}
