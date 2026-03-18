/*
 * XREFs of RtlSidHashLookup @ 0x140363CE0
 * Callers:
 *     SepMaximumAccessCheck @ 0x140363250 (SepMaximumAccessCheck.c)
 * Callees:
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 */

const void **__fastcall RtlSidHashLookup(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rax
  __int16 v5; // r13
  unsigned int v6; // ecx
  unsigned __int64 v7; // rbx
  unsigned __int8 v8; // bp
  int v9; // edi
  int v10; // r12d
  const void **v11; // r15
  unsigned int v12; // ebx
  unsigned int i; // ebp
  const void **v15; // rdi
  unsigned int v16; // [rsp+50h] [rbp+8h]

  if ( !a1 || !a2 )
    return 0LL;
  v4 = a2[1];
  v5 = *(_WORD *)a2;
  v6 = 4 * v4 + 8;
  v16 = v6;
  v7 = *(_QWORD *)(a1 + 8LL * (a2[4 * v4 + 4] & 0xF) + 16) & *(_QWORD *)(a1
                                                                       + 8 * ((unsigned __int64)a2[4 * v4 + 4] >> 4)
                                                                       + 144);
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
      v10 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v9);
      v11 = (const void **)(*(_QWORD *)(a1 + 8) + 16LL * (v10 + (unsigned int)v8));
      if ( *(_WORD *)*v11 == v5 )
      {
        if ( !memcmp(a2, *v11, v6) )
          return v11;
        v6 = v16;
      }
      v9 = (unsigned __int8)v9 ^ (1 << v10);
    }
  }
  v12 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 0x40u )
    return 0LL;
  for ( i = 64; ; ++i )
  {
    if ( i >= v12 )
      return 0LL;
    v15 = (const void **)(*(_QWORD *)(a1 + 8) + 16LL * i);
    if ( *(_WORD *)*v15 == v5 )
      break;
LABEL_18:
    ;
  }
  if ( memcmp(a2, *v15, v6) )
  {
    v6 = v16;
    goto LABEL_18;
  }
  return v15;
}
