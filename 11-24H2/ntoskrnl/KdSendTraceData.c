/*
 * XREFs of KdSendTraceData @ 0x140B78F48
 * Callers:
 *     EtwpSendTraceEvent @ 0x1404A70B8 (EtwpSendTraceEvent.c)
 *     EtwpSendBufferToDebugger @ 0x1407AD07C (EtwpSendBufferToDebugger.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KdExitDebugger @ 0x140B77008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B7C96C (KdEnterDebugger.c)
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
  __int128 v14; // [rsp+28h] [rbp-39h] BYREF
  __int128 v15; // [rsp+38h] [rbp-29h] BYREF
  int v16; // [rsp+48h] [rbp-19h] BYREF
  __int16 v17; // [rsp+4Ch] [rbp-15h]
  __int16 Number; // [rsp+4Eh] [rbp-13h]
  unsigned int v19; // [rsp+50h] [rbp-11h]

  v2 = a2;
  v14 = 0LL;
  v15 = 0LL;
  memset_0(&v16, 0, 0x40uLL);
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
    v17 = KeProcessorLevel;
    v16 = 13104;
    Number = KeGetPcr()->Prcb.Number;
    *((_QWORD *)&v15 + 1) = &v16;
    v19 = v4;
    LOWORD(v15) = 64;
    LOWORD(v14) = v4;
    *((_QWORD *)&v14 + 1) = &KdpMessageBuffer;
    KdSendPacket(9LL, &v15, &v14, &KdpContext);
    LOBYTE(v12) = v9;
    return KdExitDebugger(v12, v13);
  }
  return result;
}
