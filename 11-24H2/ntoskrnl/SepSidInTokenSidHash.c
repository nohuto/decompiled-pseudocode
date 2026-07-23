/*
 * XREFs of SepSidInTokenSidHash @ 0x1403BEFB0
 * Callers:
 *     AuthzBasepDeviceMemberOf @ 0x1404D2464 (AuthzBasepDeviceMemberOf.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     SeTokenCanImpersonate @ 0x1408E8180 (SeTokenCanImpersonate.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

bool __fastcall SepSidInTokenSidHash(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3, char a4, char a5, char a6)
{
  unsigned __int8 *v6; // r15
  __int64 v9; // rax
  __int16 v10; // r9
  size_t v11; // r8
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // bp
  int v14; // edi
  __int64 v15; // r13
  int v16; // r12d
  __int64 v17; // rsi
  unsigned int v18; // ebx
  unsigned int i; // edi
  char v21; // r12
  int v22; // eax
  unsigned int v23; // [rsp+68h] [rbp+10h]
  __int16 v25; // [rsp+88h] [rbp+30h]

  v6 = a3;
  if ( a2
    && *(_WORD *)SePrincipalSelfSid == *(_WORD *)a3
    && !memcmp(SePrincipalSelfSid, a3, 4 * ((unsigned __int64)*(unsigned __int16 *)SePrincipalSelfSid >> 8) + 8) )
  {
    v6 = a2;
  }
  if ( a6
    && *(_WORD *)SeOwnerRightsSid == *(_WORD *)v6
    && !memcmp(SeOwnerRightsSid, v6, 4 * ((unsigned __int64)*(unsigned __int16 *)SeOwnerRightsSid >> 8) + 8) )
  {
    return 1;
  }
  if ( a1 && v6 )
  {
    v9 = v6[1];
    v10 = *(_WORD *)v6;
    v25 = *(_WORD *)v6;
    v11 = (unsigned int)(4 * v9 + 8);
    v23 = 4 * v9 + 8;
    v12 = *(_QWORD *)(a1 + 8LL * (v6[4 * v9 + 4] & 0xF) + 16) & *(_QWORD *)(a1
                                                                          + 8 * ((unsigned __int64)v6[4 * v9 + 4] >> 4)
                                                                          + 144);
    v13 = 0;
    while ( v12 )
    {
      LOBYTE(v14) = v12;
      while ( (_BYTE)v14 )
      {
        v15 = *(_QWORD *)(a1 + 8);
        v16 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v14);
        v17 = v15 + 16LL * (v16 + (unsigned int)v13);
        if ( **(_WORD **)v17 == v10 )
        {
          if ( !memcmp(v6, *(const void **)v17, v11) )
            goto LABEL_21;
          v11 = v23;
          v10 = v25;
        }
        v14 = (unsigned __int8)v14 ^ (1 << v16);
      }
      v13 += 8;
      v12 >>= 8;
    }
    v18 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > 0x40u )
    {
      for ( i = 64; i < v18; ++i )
      {
        v15 = *(_QWORD *)(a1 + 8);
        v17 = v15 + 16LL * i;
        if ( **(_WORD **)v17 == v10 )
        {
          if ( !memcmp(v6, *(const void **)v17, v11) )
          {
LABEL_21:
            if ( a5 || v17 != v15 )
            {
              v21 = a4;
            }
            else
            {
              if ( (*(_DWORD *)(v17 + 8) & 0x10) == 0 )
                return 1;
              v21 = a4;
              if ( a4 )
                return 1;
            }
            v22 = *(_DWORD *)(v17 + 8);
            return (v22 & 4) != 0 || v21 && (v22 & 0x10) != 0;
          }
          v11 = v23;
          v10 = v25;
        }
      }
    }
  }
  return 0;
}
