/*
 * XREFs of RtlpCompareKnownObjectAces @ 0x1406F8DA4
 * Callers:
 *     RtlpIsDuplicateAce @ 0x14090C5D0 (RtlpIsDuplicateAce.c)
 *     RtlpGenerateInheritedAce @ 0x14090C760 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 */

bool __fastcall RtlpCompareKnownObjectAces(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 v3; // r8
  unsigned int v5; // edi
  _DWORD *v6; // r9
  int v7; // ebp
  unsigned __int8 *v8; // r8
  _DWORD *v9; // rcx
  unsigned int v10; // ebx
  _DWORD *v11; // rdx
  bool v13; // zf

  v3 = *a2;
  if ( *((_BYTE *)RtlBaseAceType + v3) != *((_BYTE *)RtlBaseAceType + *a1)
    || *((_BYTE *)RtlIsSystemAceType + v3) && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
  {
    return 0;
  }
  v5 = *((_DWORD *)a2 + 2) & 1;
  v6 = (_DWORD *)((unsigned __int64)(a2 + 12) & -(__int64)(v5 != 0));
  v7 = *((_DWORD *)a2 + 2) & 2;
  if ( v7 )
    v8 = &a2[16 * v5 + 12];
  else
    v8 = 0LL;
  v9 = a1 + 12;
  v10 = *((_DWORD *)a1 + 2) & 1;
  v11 = (_DWORD *)((unsigned __int64)(a1 + 12) & -(__int64)(v10 != 0));
  if ( (*((_DWORD *)a1 + 2) & 2) != 0 )
  {
    if ( v10 )
      v9 = a1 + 28;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v8 )
  {
    if ( !v9
      || *(_DWORD *)v8 != *v9
      || *((_DWORD *)v8 + 1) != v9[1]
      || *((_DWORD *)v8 + 2) != v9[2]
      || *((_DWORD *)v8 + 3) != v9[3] )
    {
      return 0;
    }
  }
  else if ( v9 )
  {
    return 0;
  }
  if ( v6 )
  {
    if ( !v11
      || *v6 != *v11
      || v6[1] != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 4)
      || v6[2] != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 8) )
    {
      return 0;
    }
    v13 = v6[3] == *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 0xC);
  }
  else
  {
    v13 = v11 == 0LL;
  }
  return v13
      && RtlEqualSid(
           &a2[16 * v5 + (v7 != 0 ? 28LL : 12LL)],
           &a1[16 * v10 + ((*((_DWORD *)a1 + 2) & 2) != 0 ? 28LL : 12LL)]);
}
