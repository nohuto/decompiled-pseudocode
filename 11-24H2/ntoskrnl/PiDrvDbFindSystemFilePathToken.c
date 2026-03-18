/*
 * XREFs of PiDrvDbFindSystemFilePathToken @ 0x140736E38
 * Callers:
 *     PiDrvDbResolveSystemFilePath @ 0x1407392C4 (PiDrvDbResolveSystemFilePath.c)
 * Callees:
 *     iswalnum @ 0x1404FEAD0 (iswalnum.c)
 *     iswalpha @ 0x1404FEAEC (iswalpha.c)
 *     RtlFindUnicodeSubstring @ 0x1409A0970 (RtlFindUnicodeSubstring.c)
 */

unsigned __int64 __fastcall PiDrvDbFindSystemFilePathToken(__int128 *a1, unsigned __int16 *a2, _WORD *a3)
{
  __int64 v5; // rbx
  _WORD *v6; // r14
  __int16 i; // r12
  unsigned __int64 UnicodeSubstring; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  wint_t v11; // r15
  wint_t v12; // cx
  __int16 v13; // dx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0LL;
  v15 = *a1;
  v6 = (_WORD *)*((_QWORD *)&v15 + 1);
  for ( i = v15; *v6; LOWORD(v15) = i )
  {
    LOBYTE(a3) = 1;
    UnicodeSubstring = RtlFindUnicodeSubstring(&v15, a2, a3);
    v9 = UnicodeSubstring;
    if ( !UnicodeSubstring )
      break;
    v10 = *a2 >> 1;
    if ( UnicodeSubstring > *((_QWORD *)a1 + 1) )
    {
      v11 = *(_WORD *)(UnicodeSubstring - 2);
      v12 = **((_WORD **)a2 + 1);
      if ( v12 == 92 )
      {
        if ( iswalnum(v11) || v11 == 92 )
          goto LABEL_17;
      }
      else if ( iswalpha(v12) && iswalnum(v11) )
      {
        goto LABEL_17;
      }
    }
    if ( i == *a2 && !*(_WORD *)(v9 + 2 * v10) )
      return v9;
    a3 = (_WORD *)*((_QWORD *)a2 + 1);
    v13 = a3[(unsigned int)(v10 - 1)];
    if ( v13 == 92 || *(_WORD *)(v9 + 2 * v10) == 92 || v13 == 37 && *a3 == 37 )
      return v9;
LABEL_17:
    i -= *a2;
    v6 += v10;
    *((_QWORD *)&v15 + 1) = v6;
  }
  return v5;
}
