/*
 * XREFs of SepSecureBootFindMatchingRegistryRule @ 0x140794174
 * Callers:
 *     SeQuerySecureBootPolicyValue @ 0x140793D80 (SeQuerySecureBootPolicyValue.c)
 * Callees:
 *     SepEqualAsciiWideStringCaseInSensitive @ 0x140793E58 (SepEqualAsciiWideStringCaseInSensitive.c)
 */

_DWORD *__fastcall SepSecureBootFindMatchingRegistryRule(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  _DWORD *v3; // r11
  unsigned __int64 v6; // rbx
  _WORD *v7; // rcx
  _WORD *v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v3 = (_DWORD *)qword_140E67D20;
  v10 = 0LL;
  v6 = qword_140E67D20 + 16LL * *((unsigned __int16 *)qword_140E67CE0 + 19);
  while ( (unsigned __int64)v3 < v6 )
  {
    if ( *v3 == -2130706432 )
    {
      v7 = (_WORD *)(qword_140E67D28 + (unsigned int)v3[1]);
      *((_QWORD *)&v10 + 1) = v7 + 1;
      LOWORD(v10) = *v7;
      WORD1(v10) = v10 + 2;
      if ( SepEqualAsciiWideStringCaseInSensitive(a2, (unsigned __int16 *)&v10) )
      {
        v8 = (_WORD *)(qword_140E67D28 + (unsigned int)v3[2]);
        *((_QWORD *)&v10 + 1) = v8 + 1;
        LOWORD(v10) = *v8;
        WORD1(v10) = v10 + 2;
        if ( SepEqualAsciiWideStringCaseInSensitive(a3, (unsigned __int16 *)&v10) )
          return v3;
      }
    }
    v3 += 4;
  }
  return 0LL;
}
