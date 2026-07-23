/*
 * XREFs of RtlSidDominates @ 0x1800C0480
 * Callers:
 *     RtlpValidLabelSubjectContext @ 0x1800BE964 (RtlpValidLabelSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x1800C0E40 (RtlpNewSecurityObject.c)
 * Callees:
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

NTSTATUS __cdecl RtlSidDominates(PSID Sid1, PSID Sid2, PBOOLEAN Dominates)
{
  int v4; // r9d
  int v7; // eax
  __int16 v9; // bp
  __int16 v10; // bx
  unsigned int v11; // ecx

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
    || ((_BYTE)v9 ? (v11 = *((_DWORD *)Sid1 + (unsigned int)(unsigned __int8)v9 + 1)) : (v11 = 0),
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
