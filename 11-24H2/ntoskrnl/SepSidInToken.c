/*
 * XREFs of SepSidInToken @ 0x1403CB430
 * Callers:
 *     SeMaximumAuditMask @ 0x140499CD8 (SeMaximumAuditMask.c)
 *     AuthzBasepMemberOf @ 0x1404D2354 (AuthzBasepMemberOf.c)
 *     SepMaximumAccessCheck @ 0x1404E8A30 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1404E9F90 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x1404EA720 (SepNormalAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x1404EB6BC (SepNormalAccessCheckEx.c)
 *     SeTokenIsAdmin @ 0x14085AA10 (SeTokenIsAdmin.c)
 *     SeExamineSacl @ 0x14088DA20 (SeExamineSacl.c)
 *     SeTokenCanImpersonate @ 0x1408E8180 (SeTokenCanImpersonate.c)
 *     SepExamineSaclEx @ 0x140A19D34 (SepExamineSaclEx.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

bool __fastcall SepSidInToken(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3, char a4, char a5, char a6)
{
  __int64 v8; // r14
  unsigned __int8 *v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int16 v12; // r9
  size_t v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // bp
  int v16; // edi
  int v17; // r12d
  __int64 v18; // rsi
  unsigned int v19; // ebx
  unsigned int i; // edi
  __int64 v21; // rbp
  char v23; // r12
  int v24; // eax
  __int64 v25; // [rsp+68h] [rbp+10h]
  __int16 v27; // [rsp+80h] [rbp+28h]
  unsigned int v28; // [rsp+88h] [rbp+30h]

  v8 = 504LL;
  v9 = a3;
  if ( !a5 )
    v8 = 232LL;
  v10 = a1 + v8;
  if ( a2
    && *(_WORD *)SePrincipalSelfSid == *(_WORD *)a3
    && !memcmp(SePrincipalSelfSid, a3, 4 * ((unsigned __int64)*(unsigned __int16 *)SePrincipalSelfSid >> 8) + 8) )
  {
    v9 = a2;
  }
  if ( a6
    && *(_WORD *)SeOwnerRightsSid == *(_WORD *)v9
    && !memcmp(SeOwnerRightsSid, v9, 4 * ((unsigned __int64)*(unsigned __int16 *)SeOwnerRightsSid >> 8) + 8) )
  {
    return 1;
  }
  if ( !v10 || !v9 )
    return 0;
  v11 = v9[1];
  v12 = *(_WORD *)v9;
  v27 = *(_WORD *)v9;
  v13 = (unsigned int)(4 * v11 + 8);
  v28 = 4 * v11 + 8;
  v14 = *(_QWORD *)(v10 + 8LL * (v9[4 * v11 + 4] & 0xF) + 16) & *(_QWORD *)(v10
                                                                          + 8 * ((unsigned __int64)v9[4 * v11 + 4] >> 4)
                                                                          + 144);
  v15 = 0;
LABEL_8:
  if ( !v14 )
  {
    v19 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 > 0x40u )
    {
      for ( i = 64; i < v19; ++i )
      {
        v21 = *(_QWORD *)(v10 + 8);
        v18 = v21 + 16LL * i;
        if ( **(_WORD **)v18 == v12 )
        {
          if ( !memcmp(v9, *(const void **)v18, v13) )
            goto LABEL_24;
          v13 = v28;
          v12 = v27;
        }
      }
    }
    return 0;
  }
  LOBYTE(v16) = v14;
  while ( 1 )
  {
    if ( !(_BYTE)v16 )
    {
      v15 += 8;
      v14 >>= 8;
      goto LABEL_8;
    }
    v17 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v16);
    v18 = *(_QWORD *)(v10 + 8) + 16LL * (v17 + (unsigned int)v15);
    v25 = *(_QWORD *)(v10 + 8);
    if ( **(_WORD **)v18 == v12 )
      break;
LABEL_15:
    v16 = (unsigned __int8)v16 ^ (1 << v17);
  }
  if ( memcmp(v9, *(const void **)v18, v13) )
  {
    v13 = v28;
    v12 = v27;
    goto LABEL_15;
  }
  v21 = v25;
LABEL_24:
  if ( a5 || v18 != v21 )
  {
    v23 = a4;
    goto LABEL_26;
  }
  if ( (*(_DWORD *)(v18 + 8) & 0x10) != 0 )
  {
    v23 = a4;
    if ( !a4 )
    {
LABEL_26:
      v24 = *(_DWORD *)(v18 + 8);
      return (v24 & 4) != 0 || v23 && (v24 & 0x10) != 0;
    }
  }
  return 1;
}
