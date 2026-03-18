/*
 * XREFs of RtlSidDominates @ 0x1403F2890
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14047E350 (SepMandatorySubProcessToken.c)
 *     SeTokenCanImpersonate @ 0x1408A58F0 (SeTokenCanImpersonate.c)
 *     RtlpSetSecurityObject @ 0x14091A030 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 *     SepAdjustPrivileges @ 0x1409353B0 (SepAdjustPrivileges.c)
 *     SeIsTokenAssignableToProcess @ 0x140A2AC34 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 */

__int64 __fastcall RtlSidDominates(char *Buf1, char *Buf2, _BYTE *a3)
{
  int v4; // r9d
  int v7; // eax
  __int16 v9; // di
  __int16 v10; // bx
  unsigned int v11; // edx

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
    || (!(_BYTE)v9 ? (v11 = 0) : (v11 = *(_DWORD *)&Buf1[4 * (unsigned __int8)v9 + 4]),
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
