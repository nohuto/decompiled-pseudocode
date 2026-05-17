/*
 * XREFs of LdrpIsReparsePoint @ 0x1800D02AC
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B3A0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A4170 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpGetLoadAsEntry @ 0x18002037C (LdrpGetLoadAsEntry.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrFindEntryForAddress @ 0x1800D0470 (LdrFindEntryForAddress.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     ZwQueryAttributesFile @ 0x1801639C0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpIsReparsePoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  const wchar_t *v5; // rcx
  size_t v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r9
  _QWORD v11[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v12; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v13; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v14; // [rsp+78h] [rbp-90h]
  _DWORD v15[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v16; // [rsp+90h] [rbp-78h]
  __int128 *v17; // [rsp+98h] [rbp-70h]
  int v18; // [rsp+A0h] [rbp-68h]
  int v19; // [rsp+A4h] [rbp-64h]
  __int128 v20; // [rsp+A8h] [rbp-60h]
  wchar_t *String[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v22; // [rsp+C8h] [rbp-40h]
  __int128 v23; // [rsp+D8h] [rbp-30h]
  _OWORD v24[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v25; // [rsp+108h] [rbp+0h]

  v11[0] = 0LL;
  v15[1] = 0;
  v19 = 0;
  v4 = -1073741823;
  v25 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  memset(v24, 0, sizeof(v24));
  *(_OWORD *)String = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    if ( (int)LdrpGetLoadAsEntry(a1, String, a3, a4) < 0 )
      return v4;
    v5 = String[1];
  }
  else
  {
    if ( (int)LdrFindEntryForAddress(a1, v11) < 0 )
      return v4;
    v5 = *(const wchar_t **)(v11[0] + 80LL);
  }
  v11[0] = 0LL;
  v11[1] = v5;
  if ( v5 )
  {
    v6 = wcslen(v5);
    if ( v6 > 0x7FFE )
      return v4;
    LOWORD(v11[0]) = 2 * v6;
    WORD1(v11[0]) = 2 * v6 + 2;
  }
  if ( (int)RtlpDosPathNameToRelativeNtPathName(
              2,
              (unsigned __int16 *)v11,
              0LL,
              (unsigned __int16 *)&v12,
              0LL,
              0LL,
              (__int64)&v13) >= 0 )
  {
    v7 = *((_QWORD *)&v12 + 1);
    if ( (_WORD)v13 )
    {
      v8 = v14;
      v12 = v13;
    }
    else
    {
      v8 = 0LL;
    }
    v15[0] = 48;
    v18 = 64;
    v17 = &v12;
    v16 = v8 & -(__int64)(v7 != 0);
    v20 = 0LL;
    if ( (int)ZwQueryAttributesFile(v15, v24) >= 0 && (v25 & 0x400) != 0 )
      v4 = 0;
    if ( v7 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7, v9);
  }
  return v4;
}
