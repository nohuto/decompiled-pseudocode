/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x18003A820
 * Callers:
 *     RtlCapabilityCheck @ 0x180039FF0 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlPrefixUnicodeString @ 0x18008AA00 (RtlPrefixUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x1800D06E0 (RtlUpcaseUnicodeString.c)
 *     SymCryptSha256 @ 0x18015A258 (SymCryptSha256.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memcmp @ 0x1801676D0 (memcmp.c)
 */

__int64 __fastcall RtlDeriveCapabilitySidsFromName(__int64 a1, __int64 a2, _OWORD *a3)
{
  _OWORD *v3; // rsi
  __int64 result; // rax
  unsigned int v7; // ebx
  const void *v8; // r14
  __int64 v9; // r8
  __int128 v10; // xmm0
  size_t v11; // rbp
  const void **v12; // rbx
  __int128 v13; // xmm0
  unsigned int v14; // edi
  char v15; // al
  int v16; // ecx
  __int128 v17; // xmm1
  void *Buf1[2]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v19; // [rsp+30h] [rbp-78h]
  __int128 v20; // [rsp+40h] [rbp-68h]
  __int128 v21; // [rsp+50h] [rbp-58h] BYREF
  __int128 v22; // [rsp+60h] [rbp-48h]

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
    SymCryptSha256(Buf1[1], LOWORD(Buf1[0]), &v21);
    v10 = v21;
    *(_WORD *)a2 = 2305;
    v11 = v7;
    v12 = (const void **)&RtlpLegacyApplicationCapabilityNames;
    *(_DWORD *)(a2 + 2) = RtlpNtAuthority;
    *(_WORD *)(a2 + 6) = 1280;
    *(_DWORD *)(a2 + 8) = 32;
    *(_OWORD *)(a2 + 12) = v10;
    v19 = v10;
    v13 = v22;
    *(_OWORD *)(a2 + 28) = v22;
    v14 = 0;
    v20 = v13;
    while ( (_DWORD)v11 != *(unsigned __int16 *)v12 || memcmp(v8, v12[1], v11) )
    {
      ++v14;
      v12 += 2;
      if ( v14 >= 0xC )
        goto LABEL_11;
    }
    *(_WORD *)v3 = 513;
    *(_DWORD *)((char *)v3 + 2) = RtlpAppPackageAuthority;
    *((_WORD *)v3 + 3) = 3840;
    *((_DWORD *)v3 + 2) = 3;
    *((_DWORD *)v3 + 3) = v14 + 1;
LABEL_11:
    if ( v8 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Buf1[1]);
      v20 = v22;
      v19 = v21;
    }
    if ( v14 == 12 )
    {
      *(_WORD *)v3 = 2561;
      LOBYTE(v9) = 1;
      *(_DWORD *)((char *)v3 + 2) = RtlpAppPackageAuthority;
      *((_WORD *)v3 + 3) = 3840;
      *((_DWORD *)v3 + 2) = 3;
      v15 = RtlPrefixUnicodeString(&unk_180174AF0, a1, v9);
      v16 = 0x10000;
      if ( !v15 )
        v16 = 1024;
      *((_DWORD *)v3 + 3) = v16;
      v17 = v20;
      v3[1] = v19;
      v3[2] = v17;
    }
    return 0LL;
  }
  return result;
}
