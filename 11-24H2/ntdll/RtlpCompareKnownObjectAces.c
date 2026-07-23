/*
 * XREFs of RtlpCompareKnownObjectAces @ 0x1800C4ECC
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x1800C3BC0 (RtlpGenerateInheritedAce.c)
 *     RtlpIsDuplicateAce @ 0x1800C4D30 (RtlpIsDuplicateAce.c)
 *     RtlpCompareAces @ 0x1800C5BC0 (RtlpCompareAces.c)
 * Callees:
 *     RtlEqualPrefixSid @ 0x1800C5120 (RtlEqualPrefixSid.c)
 *     RtlEqualSid @ 0x1800C5DD0 (RtlEqualSid.c)
 *     RtlInitializeSid @ 0x1800DF620 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

char __fastcall RtlpCompareKnownObjectAces(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, void *a4)
{
  __int64 v6; // rcx
  unsigned int v9; // r11d
  _DWORD *v10; // r9
  int v11; // ebx
  unsigned __int8 *v12; // r8
  _DWORD *v13; // rcx
  unsigned int v14; // r10d
  _DWORD *v15; // rdx
  int v16; // r15d
  bool v18; // zf
  __int64 v19; // rbp
  unsigned __int8 *v20; // rbx
  int v21; // r8d
  void *v22; // rdx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-78h] BYREF
  _BYTE Sid[8]; // [rsp+28h] [rbp-70h] BYREF
  int v25; // [rsp+30h] [rbp-68h]

  v6 = *a2;
  if ( RtlBaseAceType[v6] != RtlBaseAceType[*a1] || RtlIsSystemAceType[v6] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    return 0;
  v9 = *((_DWORD *)a2 + 2) & 1;
  v10 = (_DWORD *)((unsigned __int64)(a2 + 12) & -(__int64)(v9 != 0));
  v11 = *((_DWORD *)a2 + 2) & 2;
  if ( v11 )
    v12 = &a2[16 * v9 + 12];
  else
    v12 = 0LL;
  v13 = a1 + 12;
  v14 = *((_DWORD *)a1 + 2) & 1;
  v15 = (_DWORD *)((unsigned __int64)(a1 + 12) & -(__int64)(v14 != 0));
  v16 = *((_DWORD *)a1 + 2) & 2;
  if ( v16 )
  {
    if ( v14 )
      v13 = a1 + 28;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v12 )
  {
    if ( !v13
      || *(_DWORD *)v12 != *v13
      || *((_DWORD *)v12 + 1) != v13[1]
      || *((_DWORD *)v12 + 2) != v13[2]
      || *((_DWORD *)v12 + 3) != v13[3] )
    {
      return 0;
    }
  }
  else if ( v13 )
  {
    return 0;
  }
  if ( v10 )
  {
    if ( !v15
      || *v10 != *v15
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 4) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 4)
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 8) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 8) )
    {
      return 0;
    }
    v18 = *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 0xC) == *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 0xC);
  }
  else
  {
    v18 = v15 == 0LL;
  }
  if ( !v18 )
    return 0;
  v19 = 16LL * v14;
  v20 = &a2[16 * v9 + (v11 != 0 ? 28LL : 12LL)];
  if ( !RtlEqualSid(v20, &a1[(v16 != 0 ? 28LL : 12LL) + v19]) )
  {
    if ( (a2[1] & 3 | ~a2[1] & 8) != 8 || !a3 && !a4 )
      return 0;
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 768;
    if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) < 0 )
      return 0;
    v25 = 0;
    if ( !RtlEqualPrefixSid(&a1[(v16 != 0 ? 28LL : 12LL) + v19], Sid) )
      return 0;
    v21 = *(_DWORD *)&a1[(v16 != 0 ? 36LL : 20LL) + v19];
    if ( v21 )
    {
      if ( v21 != 1 || !a4 )
        return 0;
      v22 = a4;
    }
    else
    {
      if ( !a3 )
        return 0;
      v22 = a3;
    }
    if ( !RtlEqualSid(v20, v22) )
      return 0;
  }
  return 1;
}
