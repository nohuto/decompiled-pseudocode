/*
 * XREFs of RtlpApplyAclToObject @ 0x140833230
 * Callers:
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14083448C (ExpWnfSpecializeSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpApplyAclToObject(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // r8d
  unsigned __int8 *v5; // rax
  int v6; // ebx
  unsigned int v7; // r9d
  int v8; // edx
  int v9; // edx
  int v10; // ecx

  if ( a1 )
  {
    v4 = 0;
    v5 = (unsigned __int8 *)(a1 + 8);
    if ( *(_WORD *)(a1 + 4) )
    {
      v6 = 1651;
      do
      {
        v7 = *v5;
        if ( ((unsigned __int8)v7 <= 0xAu || (unsigned __int8)(v7 - 13) <= 1u) && (v5[1] & 8) == 0 )
        {
          v8 = *((_DWORD *)v5 + 1);
          if ( v8 < 0 )
            v8 |= *a2;
          if ( (v8 & 0x40000000) != 0 )
            v8 |= a2[1];
          if ( (v8 & 0x20000000) != 0 )
            v8 |= a2[2];
          if ( (v8 & 0x10000000) != 0 )
            v8 |= a2[3];
          v9 = v8 & 0xFFFFFFF;
          *((_DWORD *)v5 + 1) = v9;
          if ( (unsigned __int8)v7 <= 0xAu && _bittest(&v6, v7) )
            v10 = a2[3];
          else
            v10 = a2[3] | 0x1000000;
          *((_DWORD *)v5 + 1) = v9 & v10;
        }
        ++v4;
        v5 += *((unsigned __int16 *)v5 + 1);
      }
      while ( v4 < *(unsigned __int16 *)(a1 + 4) );
    }
  }
}
