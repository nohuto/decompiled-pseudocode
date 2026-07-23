/*
 * XREFs of KdpReportLoadSymbolsStateChange @ 0x140B79C44
 * Callers:
 *     KdpSymbol @ 0x140B7B220 (KdpSymbol.c)
 * Callees:
 *     KdpSetCommonState @ 0x1404CF704 (KdpSetCommonState.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KdpSetContextState @ 0x140B77164 (KdpSetContextState.c)
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 *     KdpCopyMemoryChunks @ 0x140B7CACC (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpReportLoadSymbolsStateChange(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v8; // rcx
  __int128 *v9; // r8
  __int64 result; // rax
  __int128 v11; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v12; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14[3]; // [rsp+70h] [rbp-90h] BYREF
  int v15; // [rsp+88h] [rbp-78h]
  int v16; // [rsp+8Ch] [rbp-74h]
  char v17; // [rsp+90h] [rbp-70h]

  v11 = 0LL;
  v12 = 0LL;
  memset_0(v13, 0, 0xF0uLL);
  do
  {
    KdpSetCommonState(12337, a4, (__int64)v13);
    KdpSetContextState((__int64)v13, a4);
    v14[1] = *(_QWORD *)a2;
    v14[2] = *(unsigned int *)(a2 + 8);
    v15 = *(_DWORD *)(a2 + 16);
    v16 = *(_DWORD *)(a2 + 20);
    v17 = a3;
    if ( a1 )
    {
      KdpCopyMemoryChunks(*(void **)(a1 + 8), 4, (__int64)v14);
      v9 = &v11;
      *((_QWORD *)&v11 + 1) = KdpPathBuffer;
      ++LODWORD(v14[0]);
      LOWORD(v11) = v14[0];
      KdpPathBuffer[LOWORD(v14[0]) - 1] = 0;
    }
    else
    {
      LODWORD(v14[0]) = 0;
      v9 = 0LL;
    }
    LOWORD(v12) = 240;
    *((_QWORD *)&v12 + 1) = v13;
    result = KdpSendWaitContinue(v8, &v12, v9, a4);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
