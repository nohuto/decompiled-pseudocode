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

NTSTATUS __cdecl RtlSidDominates(PSID Sid1, PSID Sid2, PBOOLEAN Dominates)
{
  int v4; // r9d
  int v7; // eax
  __int16 v9; // di
  __int16 v10; // bx
  unsigned int v11; // edx

  *Dominates = 0;
  v4 = *(_DWORD *)((char *)Sid1 + 2);
  if ( !v4 )
    v4 = *((unsigned __int16 *)Sid1 + 3) - 4096;
  if ( v4 )
    return -1073741811;
  v7 = *(_DWORD *)((char *)Sid2 + 2);
  if ( !v7 )
    v7 = *((unsigned __int16 *)Sid2 + 3) - 4096;
  if ( v7 )
    return -1073741811;
  v9 = HIBYTE(*(_WORD *)Sid1);
  v10 = HIBYTE(*(_WORD *)Sid2);
  if ( *(_WORD *)Sid1 == *(_WORD *)Sid2 && !memcmp(Sid1, Sid2, 4LL * (unsigned __int8)v9 + 8)
    || (!(_BYTE)v9 ? (v11 = 0) : (v11 = *((_DWORD *)Sid1 + (unsigned int)(unsigned __int8)v9 + 1)),
        !(_BYTE)v10 || v11 >= *((_DWORD *)Sid2 + (unsigned int)(unsigned __int8)v10 + 1)) )
  {
    *Dominates = 1;
    return 0;
  }
  else
  {
    *Dominates = 0;
    return 0;
  }
}
