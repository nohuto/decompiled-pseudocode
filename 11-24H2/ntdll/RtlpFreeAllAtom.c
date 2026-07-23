/*
 * XREFs of RtlpFreeAllAtom @ 0x18007B560
 * Callers:
 *     RtlpDereferenceAtom @ 0x18007B248 (RtlpDereferenceAtom.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x18007B20C (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpFreeHandleForAtom @ 0x18007B6A8 (RtlpFreeHandleForAtom.c)
 *     NLS_UPCASE @ 0x18007BF60 (NLS_UPCASE.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 */

int __fastcall RtlpFreeAllAtom(__int64 a1, __int64 a2, __int64 a3)
{
  const wchar_t *v3; // r15
  __int64 v5; // rax
  unsigned __int16 *v6; // rsi
  __int64 v7; // r9
  int v8; // ecx
  __int64 v9; // rsi
  void **v10; // r14
  wchar_t *i; // rbx

  v3 = (const wchar_t *)(a1 + 18);
  if ( ((a1 + 18) & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    LODWORD(v5) = *v3;
    v6 = (unsigned __int16 *)(a1 + 18);
    v7 = 0LL;
    while ( (_WORD)v5 )
    {
      ++v6;
      if ( (unsigned __int16)v5 >= 0x61u )
      {
        if ( (unsigned __int16)v5 > 0x7Au )
          LOWORD(v5) = NLS_UPCASE(qword_1801CC038, (unsigned __int16)v5, a3, v7);
        else
          LOWORD(v5) = v5 - 32;
      }
      v8 = (unsigned __int16)v5 + ((unsigned __int16)v5 >> 1) + 2 * (unsigned __int16)v5;
      LODWORD(v5) = *v6;
      v7 = (unsigned int)(v8 + v7);
    }
    v9 = v6 - v3;
    if ( (unsigned int)v9 > 0xFF )
    {
      v10 = 0LL;
      i = 0LL;
    }
    else
    {
      LODWORD(v5) = (unsigned int)v7 / *(_DWORD *)(a2 + 64);
      v10 = (void **)(a2 + 72 + 8LL * ((unsigned int)v7 % *(_DWORD *)(a2 + 64)));
      for ( i = (wchar_t *)*v10; i; i = *(wchar_t **)i )
      {
        LODWORD(v5) = *((unsigned __int8 *)i + 16);
        if ( (_DWORD)v5 == (_DWORD)v9 )
        {
          LODWORD(v5) = wcsicmp(i + 9, v3);
          if ( !(_DWORD)v5 )
            break;
        }
        v10 = (void **)i;
      }
    }
  }
  else
  {
    LODWORD(v5) = 49152;
    i = 0LL;
    if ( (unsigned __int16)v3 >= 0xC000u )
    {
      v5 = RtlpAtomMapAtomToHandleEntry(a2, (unsigned __int16)v3 & 0x3FFF);
      i = (wchar_t *)v5;
    }
    v10 = 0LL;
  }
  if ( i )
  {
    LODWORD(v5) = (_DWORD)i + 12;
    if ( i != (wchar_t *)-12LL )
    {
      if ( v10 )
        *v10 = *(void **)i;
      RtlpFreeHandleForAtom(a2, i);
      LODWORD(v5) = RtlpSysVolFree(i);
    }
  }
  return v5;
}
