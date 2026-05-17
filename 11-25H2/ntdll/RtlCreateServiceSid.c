/*
 * XREFs of RtlCreateServiceSid @ 0x1800CD150
 * Callers:
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x180133630 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlUpcaseUnicodeString @ 0x1800CD400 (RtlUpcaseUnicodeString.c)
 *     SymCryptSha1Append @ 0x18015A480 (SymCryptSha1Append.c)
 *     SymCryptSha1Init @ 0x18015B680 (SymCryptSha1Init.c)
 *     SymCryptSha1Result @ 0x18015B6B0 (SymCryptSha1Result.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateServiceSid(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // r8
  unsigned int v7; // eax
  __int64 result; // rax
  __int64 v9; // rdi
  int v10; // eax
  __int128 v11; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v12[4]; // [rsp+30h] [rbp-B8h] BYREF
  int v13; // [rsp+34h] [rbp-B4h]
  _DWORD v14[6]; // [rsp+B0h] [rbp-38h] BYREF

  v13 = 0;
  v11 = 0LL;
  memset_thunk_772440563353939046(v12, 0, 0x7CuLL);
  if ( !a1 || !a3 )
    return 3221225485LL;
  v7 = *a3;
  *a3 = 32;
  if ( v7 < 0x20 )
    return 3221225507LL;
  LOBYTE(v6) = 1;
  result = RtlUpcaseUnicodeString(&v11, a1, v6);
  if ( (int)result >= 0 )
  {
    SymCryptSha1Init(v12);
    v9 = *((_QWORD *)&v11 + 1);
    SymCryptSha1Append(v12, *((_QWORD *)&v11 + 1), (unsigned __int16)v11);
    SymCryptSha1Result(v12, v14);
    if ( v9 )
      RtlpSysVolFree(v9);
    *(_WORD *)a2 = 1537;
    *(_DWORD *)(a2 + 2) = RtlpNtAuthority;
    *(_WORD *)(a2 + 6) = 1280;
    v10 = v14[0];
    *(_DWORD *)(a2 + 8) = 80;
    *(_DWORD *)(a2 + 12) = v10;
    *(_DWORD *)(a2 + 16) = v14[1];
    *(_DWORD *)(a2 + 20) = v14[2];
    *(_DWORD *)(a2 + 24) = v14[3];
    *(_DWORD *)(a2 + 28) = v14[4];
    return 0LL;
  }
  return result;
}
