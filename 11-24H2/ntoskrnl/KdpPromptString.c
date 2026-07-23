/*
 * XREFs of KdpPromptString @ 0x140B7BDE0
 * Callers:
 *     KdpPrompt @ 0x140B7B0AC (KdpPrompt.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x140B7CACC (KdpCopyMemoryChunks.c)
 */

char __fastcall KdpPromptString(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp-40h] BYREF
  __int128 v7; // [rsp+38h] [rbp-38h] BYREF
  __int128 v8; // [rsp+48h] [rbp-28h] BYREF
  int v9; // [rsp+58h] [rbp-18h] BYREF
  __int16 v10; // [rsp+5Ch] [rbp-14h]
  __int16 Number; // [rsp+5Eh] [rbp-12h]
  int v12; // [rsp+60h] [rbp-10h]
  int v13; // [rsp+64h] [rbp-Ch]

  v2 = *(void **)(a1 + 8);
  LODWORD(v6) = 0;
  v7 = 0LL;
  v8 = 0LL;
  KdpCopyMemoryChunks(v2, 4, (__int64)&v6);
  if ( (unsigned __int64)(unsigned int)v6 + 16 > (unsigned int)KdTransportMaxPacketSize )
    LODWORD(v6) = KdTransportMaxPacketSize - 16;
  v10 = KeProcessorLevel;
  v9 = 12849;
  Number = KeGetPcr()->Prcb.Number;
  v13 = *(unsigned __int16 *)(a2 + 2);
  v12 = v6;
  LOWORD(v7) = v6;
  *((_QWORD *)&v8 + 1) = &v9;
  LOWORD(v8) = 16;
  *((_QWORD *)&v7 + 1) = &KdpMessageBuffer;
  KdSendPacket(3LL, &v8, &v7, &KdpContext);
  WORD1(v8) = 16;
  WORD1(v7) = 12288;
  do
  {
    v4 = KdReceivePacket(3LL, &v8, &v7, &v6, &KdpContext);
    if ( v4 == 2 )
      return 1;
  }
  while ( v4 );
  if ( (unsigned int)v6 > *(unsigned __int16 *)(a2 + 2) )
    LODWORD(v6) = *(unsigned __int16 *)(a2 + 2);
  KdpCopyMemoryChunks(*(void **)(a2 + 8), 5, (__int64)&v6);
  *(_WORD *)a2 = v6;
  return 0;
}
