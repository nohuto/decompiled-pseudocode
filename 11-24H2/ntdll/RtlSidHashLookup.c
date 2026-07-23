/*
 * XREFs of RtlSidHashLookup @ 0x1800F2E30
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

PSID_AND_ATTRIBUTES __cdecl RtlSidHashLookup(PSID_AND_ATTRIBUTES_HASH SidAttrHash, PSID Sid)
{
  __int64 v4; // rax
  __int16 v5; // r13
  size_t v6; // r8
  SID_HASH_ENTRY v7; // rbx
  unsigned __int8 v8; // bp
  int v9; // edi
  int v10; // r12d
  _SID_AND_ATTRIBUTES *v11; // r15
  DWORD v12; // edi
  _SID_AND_ATTRIBUTES *v14; // rbx
  unsigned int v15; // [rsp+50h] [rbp+8h]

  if ( !SidAttrHash || !Sid )
    return 0LL;
  v4 = *((unsigned __int8 *)Sid + 1);
  v5 = *(_WORD *)Sid;
  v6 = (unsigned int)(4 * v4 + 8);
  v15 = 4 * v4 + 8;
  v7 = SidAttrHash->Hash[*((_BYTE *)Sid + 4 * v4 + 4) & 0xF] & SidAttrHash->Hash[((unsigned __int64)*((unsigned __int8 *)Sid + 4 * v4 + 4) >> 4)
                                                                               + 16];
  v8 = 0;
LABEL_4:
  if ( v7 )
  {
    LOBYTE(v9) = v7;
    while ( 1 )
    {
      if ( !(_BYTE)v9 )
      {
        v8 += 8;
        v7 >>= 8;
        goto LABEL_4;
      }
      v10 = (unsigned __int8)SidHashByteToIndexLookupTable[(unsigned __int8)v9];
      v11 = &SidAttrHash->SidAttr[v10 + (unsigned int)v8];
      if ( *(_WORD *)v11->Sid == v5 )
      {
        if ( !memcmp(Sid, v11->Sid, v6) )
          return v11;
        v6 = v15;
      }
      v9 = (unsigned __int8)v9 ^ (1 << v10);
    }
  }
  v12 = 64;
  if ( SidAttrHash->SidCount <= 0x40 )
    return 0LL;
  while ( 1 )
  {
    if ( v12 >= SidAttrHash->SidCount )
      return 0LL;
    v14 = &SidAttrHash->SidAttr[v12];
    if ( *(_WORD *)v14->Sid == v5 )
      break;
LABEL_19:
    ++v12;
  }
  if ( memcmp(Sid, v14->Sid, v6) )
  {
    v6 = v15;
    goto LABEL_19;
  }
  return v14;
}
