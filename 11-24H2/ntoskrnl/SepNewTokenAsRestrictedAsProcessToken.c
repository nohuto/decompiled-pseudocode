/*
 * XREFs of SepNewTokenAsRestrictedAsProcessToken @ 0x140A0C798
 * Callers:
 *     NtDuplicateToken @ 0x1408E67E0 (NtDuplicateToken.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     SeTokenIsRestricted @ 0x140424A30 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x14044F500 (SeTokenIsWriteRestricted.c)
 */

__int64 __fastcall SepNewTokenAsRestrictedAsProcessToken(signed __int32 *Token, PSID **a2, _BYTE *a3)
{
  int v4; // esi
  unsigned int v6; // eax
  unsigned int v7; // esi
  PSID *v8; // r13
  unsigned __int32 v9; // eax
  unsigned __int32 v10; // ebp
  __int64 v11; // r12
  unsigned __int32 v13; // r13d
  unsigned __int32 i; // esi
  unsigned int v15; // r15d
  unsigned int v16; // ebp
  PSID *v17; // r14
  void *v18; // r12
  unsigned __int32 v19; // [rsp+68h] [rbp+10h]
  unsigned int v21; // [rsp+78h] [rbp+20h]

  *a3 = 0;
  v4 = *((_DWORD *)a2 + 50);
  if ( (v4 & 0x800) != 0 && !_bittest(Token + 50, 0xBu)
    || SeTokenIsRestricted(a2) && !SeTokenIsRestricted(Token)
    || SeTokenIsWriteRestricted(a2) && !SeTokenIsWriteRestricted(Token)
    || SeTokenIsRestricted(a2) && *((_DWORD *)a2 + 32) < (unsigned int)Token[32]
    || (~(unsigned __int64)a2[9] & *((_QWORD *)Token + 9)) != 0
    || (~(unsigned __int64)a2[8] & *((_QWORD *)Token + 8)) != 0
    || (~v4 & Token[50] & 0x1000) != 0 )
  {
    return 3221225569LL;
  }
  if ( SeTokenIsRestricted(a2) )
  {
    v13 = Token[32];
    for ( i = 0; i < v13; ++i )
    {
      v15 = *((_DWORD *)a2 + 32);
      v16 = 0;
      if ( v15 )
      {
        v17 = a2[20];
        v18 = *(void **)(*((_QWORD *)Token + 20) + 16LL * i);
        do
        {
          if ( RtlEqualSid(v18, *v17) )
            break;
          ++v16;
          v17 += 2;
        }
        while ( v16 < v15 );
      }
      if ( v16 == v15 )
        return 3221225569LL;
    }
  }
  v6 = *((_DWORD *)a2 + 31);
  v7 = 0;
  v21 = v6;
  while ( v7 < v6 )
  {
    v8 = a2[19];
    if ( ((__int64)v8[2 * v7 + 1] & 0x10) != 0 )
    {
      v9 = Token[31];
      v10 = 0;
      v19 = v9;
      while ( v10 < v9 )
      {
        v11 = *((_QWORD *)Token + 19);
        if ( RtlEqualSid(v8[2 * v7], *(PSID *)(v11 + 16LL * v10)) )
        {
          if ( (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x10) != 0 )
            break;
          return 3221225569LL;
        }
        v9 = v19;
        ++v10;
      }
    }
    v6 = v21;
    ++v7;
  }
  *a3 = 1;
  return 0LL;
}
