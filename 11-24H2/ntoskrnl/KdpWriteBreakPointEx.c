/*
 * XREFs of KdpWriteBreakPointEx @ 0x140B7A6D4
 * Callers:
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KdpAddBreakpoint @ 0x140B7B7E8 (KdpAddBreakpoint.c)
 *     KdpDeleteBreakpoint @ 0x140B7B988 (KdpDeleteBreakpoint.c)
 *     KdpCopyMemoryChunks @ 0x140B7CACC (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpWriteBreakPointEx(_DWORD *a1, void **a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r8
  _DWORD *v8; // rdi
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-E0h]
  __int64 v15; // [rsp+28h] [rbp-D8h]
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v18[504]; // [rsp+58h] [rbp-A8h] BYREF

  LODWORD(v16) = 0;
  v2 = (unsigned int)a1[4];
  v17[0] = 56LL;
  v17[1] = a1;
  if ( (unsigned int)v2 > 0x20 || (v5 = 16LL * (unsigned int)v2, v6 = (unsigned int)v2, *(unsigned __int16 *)a2 != v5) )
  {
    a1[2] = -1073741823;
    goto LABEL_19;
  }
  KdpCopyMemoryChunks(a2[1], 4, (__int64)&v16);
  if ( (unsigned int)v16 != v5 )
  {
    a1[2] = -1073741823;
LABEL_19:
    KdSendPacket(2LL, v17, a2, &KdpContext);
    return (unsigned int)a1[2];
  }
  a1[2] = 0;
  if ( (_DWORD)v2 )
  {
    v8 = v18;
    do
    {
      v9 = (unsigned int)*v8;
      if ( (_DWORD)v9 )
      {
        if ( !(unsigned __int8)KdpDeleteBreakpoint(v9) )
          a1[2] = -1073741823;
        *v8 = 0;
      }
      v8 += 4;
      --v2;
    }
    while ( v2 );
    v10 = v18;
    do
    {
      v11 = *((_QWORD *)v10 - 1);
      if ( v11 )
      {
        LOBYTE(v7) = 1;
        v12 = KdpAddBreakpoint(v11, 204LL, v7, 0LL, v14, v15);
        *v10 = v12;
        if ( !v12 )
          a1[2] = -1073741823;
      }
      v10 += 4;
      --v6;
    }
    while ( v6 );
  }
  KdpCopyMemoryChunks(a2[1], 5, (__int64)&v16);
  KdSendPacket(2LL, v17, a2, &KdpContext);
  return (unsigned int)a1[5];
}
