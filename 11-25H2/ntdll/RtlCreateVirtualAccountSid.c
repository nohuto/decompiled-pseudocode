/*
 * XREFs of RtlCreateVirtualAccountSid @ 0x1800CD2A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlUpcaseUnicodeString @ 0x1800CD400 (RtlUpcaseUnicodeString.c)
 *     SymCryptSha1Append @ 0x18015A480 (SymCryptSha1Append.c)
 *     SymCryptSha1Init @ 0x18015B680 (SymCryptSha1Init.c)
 *     SymCryptSha1Result @ 0x18015B6B0 (SymCryptSha1Result.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateVirtualAccountSid(__int64 a1, int a2, __int64 a3, unsigned int *a4)
{
  __int64 v8; // r8
  unsigned int v9; // eax
  __int64 result; // rax
  __int64 v11; // rdi
  int v12; // eax
  __int128 v13; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v14[4]; // [rsp+30h] [rbp-B8h] BYREF
  int v15; // [rsp+34h] [rbp-B4h]
  _DWORD v16[6]; // [rsp+B0h] [rbp-38h] BYREF

  v15 = 0;
  v13 = 0LL;
  memset_thunk_772440563353939046(v14, 0, 0x7CuLL);
  if ( !a1 || !a4 || (unsigned int)(a2 - 80) > 0x1F )
    return 3221225485LL;
  v9 = *a4;
  *a4 = 32;
  if ( v9 < 0x20 )
    return 3221225507LL;
  LOBYTE(v8) = 1;
  result = RtlUpcaseUnicodeString(&v13, a1, v8);
  if ( (int)result >= 0 )
  {
    SymCryptSha1Init(v14);
    v11 = *((_QWORD *)&v13 + 1);
    SymCryptSha1Append(v14, *((_QWORD *)&v13 + 1), (unsigned __int16)v13);
    SymCryptSha1Result(v14, v16);
    if ( v11 )
      RtlpSysVolFree(v11);
    *(_WORD *)a3 = 1537;
    *(_DWORD *)(a3 + 2) = RtlpNtAuthority;
    *(_WORD *)(a3 + 6) = 1280;
    v12 = v16[0];
    *(_DWORD *)(a3 + 8) = a2;
    *(_DWORD *)(a3 + 12) = v12;
    *(_DWORD *)(a3 + 16) = v16[1];
    *(_DWORD *)(a3 + 20) = v16[2];
    *(_DWORD *)(a3 + 24) = v16[3];
    *(_DWORD *)(a3 + 28) = v16[4];
    return 0LL;
  }
  return result;
}
