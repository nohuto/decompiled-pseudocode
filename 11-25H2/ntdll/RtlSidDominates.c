/*
 * XREFs of RtlSidDominates @ 0x1800DD780
 * Callers:
 *     RtlpNewSecurityObject @ 0x180061400 (RtlpNewSecurityObject.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E831C (RtlpValidLabelSubjectContext.c)
 * Callees:
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memcmp @ 0x180168C50 (memcmp.c)
 */

__int64 __fastcall RtlSidDominates(char *Buf1, char *Buf2, _BYTE *a3)
{
  int v4; // r9d
  int v7; // eax
  __int16 v9; // bp
  __int16 v10; // bx
  unsigned int v11; // ecx

  *a3 = 0;
  v4 = *(_DWORD *)(Buf1 + 2);
  if ( !v4 )
    v4 = *((unsigned __int16 *)Buf1 + 3) - 4096;
  if ( v4 )
    return 3221225485LL;
  v7 = *(_DWORD *)(Buf2 + 2);
  if ( !v7 )
    v7 = *((unsigned __int16 *)Buf2 + 3) - 4096;
  if ( v7 )
    return 3221225485LL;
  v9 = HIBYTE(*(_WORD *)Buf1);
  v10 = HIBYTE(*(_WORD *)Buf2);
  if ( *(_WORD *)Buf1 == *(_WORD *)Buf2 && !memcmp(Buf1, Buf2, 4LL * (unsigned __int8)v9 + 8)
    || ((_BYTE)v9 ? (v11 = *(_DWORD *)&Buf1[4 * (unsigned __int8)v9 + 4]) : (v11 = 0),
        !(_BYTE)v10 || v11 >= *(_DWORD *)&Buf2[4 * (unsigned __int8)v10 + 4]) )
  {
    *a3 = 1;
    return 0LL;
  }
  else
  {
    *a3 = 0;
    return 0LL;
  }
}
