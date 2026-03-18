/*
 * XREFs of RtlFindAceBySid @ 0x1403641E0
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140364418 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlpSetSecurityObject @ 0x140858F70 (RtlpSetSecurityObject.c)
 *     SepAppendAceToTokenObjectAcl @ 0x14090F590 (SepAppendAceToTokenObjectAcl.c)
 * Callees:
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 */

unsigned __int8 *__fastcall RtlFindAceBySid(__int64 a1, _WORD *a2, unsigned int *a3)
{
  unsigned int v5; // ebp
  unsigned __int8 *v6; // rbx
  unsigned int v7; // edi
  int v8; // r15d
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned __int8 *v11; // rcx

  if ( a1 )
  {
    v5 = *(unsigned __int16 *)(a1 + 4);
    v6 = (unsigned __int8 *)(a1 + 8);
    v7 = 0;
    v8 = 4089359;
    while ( 1 )
    {
      if ( v7 >= v5 )
        return 0LL;
      v9 = *v6;
      if ( (unsigned __int8)v9 <= 0x15u && _bittest(&v8, v9) )
      {
        v10 = 8LL;
      }
      else if ( (_BYTE)v9 == 4 )
      {
        v10 = 12LL;
      }
      else
      {
        if ( (unsigned __int8)(v9 - 5) > 3u && (unsigned __int8)(v9 - 11) > 1u && (unsigned __int8)(v9 - 15) > 1u )
          goto LABEL_16;
        v10 = 16LL * (*((_DWORD *)v6 + 2) & 1) + ((8LL * (*((_DWORD *)v6 + 2) & 2)) | 0xC);
      }
      v11 = &v6[v10];
      if ( v11 )
      {
        if ( a3 )
        {
          if ( v7 >= *a3 && RtlEqualSid(v11, a2) )
          {
            *a3 = v7;
            return v6;
          }
        }
        else if ( *(_WORD *)v11 == *a2 && !memcmp(v11, a2, 4 * ((unsigned __int64)*(unsigned __int16 *)v11 >> 8) + 8) )
        {
          return v6;
        }
      }
LABEL_16:
      ++v7;
      v6 += *((unsigned __int16 *)v6 + 1);
    }
  }
  return 0LL;
}
