/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x18008E210
 * Callers:
 *     RtlCapabilityCheck @ 0x18008D9E0 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlPrefixUnicodeString @ 0x1800B3990 (RtlPrefixUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x1800CD400 (RtlUpcaseUnicodeString.c)
 *     SymCryptSha256 @ 0x18015B808 (SymCryptSha256.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memcmp @ 0x180168C50 (memcmp.c)
 */

__int64 __fastcall RtlDeriveCapabilitySidsFromName(__int64 a1, __int64 a2, _OWORD *a3)
{
  _OWORD *v3; // rsi
  __int64 result; // rax
  unsigned int v7; // ebx
  const void *v8; // r14
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // xmm0
  size_t v12; // rbp
  const void **v13; // rbx
  __int128 v14; // xmm0
  unsigned int v15; // edi
  char v16; // al
  int v17; // ecx
  __int128 v18; // xmm1
  void *Buf1[2]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v20; // [rsp+30h] [rbp-78h]
  __int128 v21; // [rsp+40h] [rbp-68h]
  __int128 v22; // [rsp+50h] [rbp-58h] BYREF
  __int128 v23; // [rsp+60h] [rbp-48h]

  v3 = a3;
  *(_OWORD *)Buf1 = 0LL;
  if ( !a1 || !a2 || !a3 )
    __fastfail(5u);
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  LOBYTE(a3) = 1;
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_DWORD *)(a2 + 40) = 0;
  result = RtlUpcaseUnicodeString(Buf1, a1, a3);
  if ( (int)result >= 0 )
  {
    v7 = LOWORD(Buf1[0]);
    v8 = Buf1[1];
    SymCryptSha256(Buf1[1], LOWORD(Buf1[0]), &v22);
    v11 = v22;
    *(_WORD *)a2 = 2305;
    v12 = v7;
    v13 = (const void **)&RtlpLegacyApplicationCapabilityNames;
    *(_DWORD *)(a2 + 2) = RtlpNtAuthority;
    *(_WORD *)(a2 + 6) = 1280;
    *(_DWORD *)(a2 + 8) = 32;
    *(_OWORD *)(a2 + 12) = v11;
    v20 = v11;
    v14 = v23;
    *(_OWORD *)(a2 + 28) = v23;
    v15 = 0;
    v21 = v14;
    while ( (_DWORD)v12 != *(unsigned __int16 *)v13 || memcmp(v8, v13[1], v12) )
    {
      ++v15;
      v13 += 2;
      if ( v15 >= 0xC )
        goto LABEL_11;
    }
    *(_WORD *)v3 = 513;
    *(_DWORD *)((char *)v3 + 2) = RtlpAppPackageAuthority;
    *((_WORD *)v3 + 3) = 3840;
    *((_DWORD *)v3 + 2) = 3;
    *((_DWORD *)v3 + 3) = v15 + 1;
LABEL_11:
    if ( v8 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Buf1[1], v10);
      v21 = v23;
      v20 = v22;
    }
    if ( v15 == 12 )
    {
      *(_WORD *)v3 = 2561;
      LOBYTE(v9) = 1;
      *(_DWORD *)((char *)v3 + 2) = RtlpAppPackageAuthority;
      *((_WORD *)v3 + 3) = 3840;
      *((_DWORD *)v3 + 2) = 3;
      v16 = RtlPrefixUnicodeString(&unk_180176AA0, a1, v9);
      v17 = 0x10000;
      if ( !v16 )
        v17 = 1024;
      *((_DWORD *)v3 + 3) = v17;
      v18 = v21;
      v3[1] = v20;
      v3[2] = v18;
    }
    return 0LL;
  }
  return result;
}
