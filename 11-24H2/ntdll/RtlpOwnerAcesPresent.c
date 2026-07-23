/*
 * XREFs of RtlpOwnerAcesPresent @ 0x1800E45A0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1800C0E40 (RtlpNewSecurityObject.c)
 *     RtlOwnerAcesPresent @ 0x18010FD60 (RtlOwnerAcesPresent.c)
 * Callees:
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, __int64 a2)
{
  unsigned int v3; // esi
  char *v4; // rdi
  unsigned int i; // ebx
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // cl
  char *v8; // rcx
  unsigned __int64 v9; // rax
  _DWORD Buf2[4]; // [rsp+20h] [rbp-28h] BYREF

  Buf2[0] = 257;
  Buf2[1] = 50331648;
  Buf2[2] = 4;
  if ( a2 )
  {
    v3 = *(unsigned __int16 *)(a2 + 4);
    v4 = (char *)(a2 + 8);
    for ( i = 0; ; ++i )
    {
      if ( i >= v3 )
        return 0;
      v6 = v4[1];
      if ( (v6 & 8) == 0 )
        break;
LABEL_13:
      v4 += *((unsigned __int16 *)v4 + 1);
    }
    v7 = *v4;
    if ( (unsigned __int8)(*v4 - 5) > 3u && (unsigned __int8)(v7 - 11) > 1u )
    {
      if ( v7 < 0xFu )
      {
        if ( v7 == 4 )
        {
          v8 = v4 + 12;
          goto LABEL_11;
        }
        if ( v7 < 0xBu )
          goto LABEL_10;
        goto LABEL_22;
      }
      if ( v7 > 0x10u )
      {
LABEL_22:
        if ( (unsigned __int8)(v7 - 13) > 1u )
          goto LABEL_13;
LABEL_10:
        v8 = v4 + 8;
LABEL_11:
        if ( v8 )
        {
          v9 = *(unsigned __int16 *)v8;
          if ( (_WORD)v9 == LOWORD(Buf2[0]) && !memcmp(v8, Buf2, 4 * (v9 >> 8) + 8) && (!a1 || (v6 & a1) != 0) )
            return 1;
        }
        goto LABEL_13;
      }
    }
    v8 = &v4[16 * (*((_DWORD *)v4 + 2) & 1) + ((8LL * (*((_DWORD *)v4 + 2) & 2)) | 0xC)];
    goto LABEL_11;
  }
  return 0;
}
