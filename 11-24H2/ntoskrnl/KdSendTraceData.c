/*
 * XREFs of KdSendTraceData @ 0x140B76F48
 * Callers:
 *     EtwpSendTraceEvent @ 0x1404AC8C4 (EtwpSendTraceEvent.c)
 *     EtwpSendBufferToDebugger @ 0x1407ACBAC (EtwpSendBufferToDebugger.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     KdExitDebugger @ 0x140B75008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B7A96C (KdEnterDebugger.c)
 */

__int64 __fastcall KdSendTraceData(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  _DWORD *v5; // rax
  __int64 v6; // rcx
  const void **v7; // rbx
  __int64 result; // rax
  char v9; // r15
  char *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int128 v15; // [rsp+28h] [rbp-39h] BYREF
  __int128 v16; // [rsp+38h] [rbp-29h] BYREF
  int v17; // [rsp+48h] [rbp-19h] BYREF
  __int16 v18; // [rsp+4Ch] [rbp-15h]
  __int16 Number; // [rsp+4Eh] [rbp-13h]
  unsigned int v20; // [rsp+50h] [rbp-11h]

  v2 = a2;
  v15 = 0LL;
  v16 = 0LL;
  memset_0(&v17, 0, 0x40uLL);
  v4 = 0;
  if ( (_DWORD)v2 )
  {
    v5 = (_DWORD *)(a1 + 8);
    v6 = (unsigned int)v2;
    do
    {
      v4 += *v5;
      v5 += 4;
      --v6;
    }
    while ( v6 );
  }
  v7 = (const void **)(a1 + 8);
  result = (unsigned int)(KdTransportMaxPacketSize - 64);
  if ( v4 <= (unsigned int)result )
  {
    v9 = KdEnterDebugger(0LL, 0LL);
    v10 = (char *)&KdpMessageBuffer;
    if ( (_DWORD)v2 )
    {
      do
      {
        memmove(v10, *(v7 - 1), *(unsigned int *)v7);
        v11 = *(unsigned int *)v7;
        v7 += 2;
        v10 += v11;
        --v2;
      }
      while ( v2 );
    }
    v18 = KeProcessorLevel;
    v17 = 13104;
    Number = KeGetPcr()->Prcb.Number;
    *((_QWORD *)&v16 + 1) = &v17;
    v20 = v4;
    LOWORD(v16) = 64;
    LOWORD(v15) = v4;
    *((_QWORD *)&v15 + 1) = &KdpMessageBuffer;
    KdSendPacket(9LL, &v16, &v15, &KdpContext);
    LOBYTE(v12) = v9;
    return KdExitDebugger(v12, v13, v14);
  }
  return result;
}
