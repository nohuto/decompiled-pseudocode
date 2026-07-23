/*
 * XREFs of KdpRestoreBreakPointEx @ 0x140B79D80
 * Callers:
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KdpDeleteBreakpoint @ 0x140B7B988 (KdpDeleteBreakpoint.c)
 *     KdpCopyMemoryChunks @ 0x140B7CACC (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpRestoreBreakPointEx(__int64 a1, void **a2)
{
  unsigned int v2; // r8d
  unsigned int v5; // edx
  char *v6; // rsi
  unsigned int v7; // edi
  __int64 v9; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-C0h] BYREF
  char v11; // [rsp+50h] [rbp-A8h] BYREF

  v2 = *(_DWORD *)(a1 + 16);
  LODWORD(v9) = 0;
  v10[0] = 56LL;
  v10[1] = a1;
  if ( *(unsigned __int16 *)a2 == 4LL * v2
    && (KdpCopyMemoryChunks(a2[1], 4, (__int64)&v9), v5 = *(_DWORD *)(a1 + 16), (unsigned int)v9 == 4LL * v5) )
  {
    *(_DWORD *)(a1 + 8) = 0;
    v6 = &v11;
    v7 = 0;
    if ( v5 )
    {
      do
      {
        if ( !(unsigned __int8)KdpDeleteBreakpoint(*(unsigned int *)v6) )
          *(_DWORD *)(a1 + 8) = -1073741823;
        ++v7;
        v6 += 4;
      }
      while ( v7 < *(_DWORD *)(a1 + 16) );
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return KdSendPacket(2LL, v10, a2, &KdpContext);
}
