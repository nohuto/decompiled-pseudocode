/*
 * XREFs of KdpCreateRemoteFile @ 0x140B66920
 * Callers:
 *     KdpPullRemoteFile @ 0x140B66B48 (KdpPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     KdExitDebugger @ 0x140B65008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B6A96C (KdEnterDebugger.c)
 *     KdpCopyMemoryChunks @ 0x140B6AACC (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpCreateRemoteFile(__int64 *a1, __int64 *a2, unsigned __int16 *a3)
{
  char v7; // si
  __int64 v8; // rcx
  unsigned int v9; // ebx
  void *v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-79h] BYREF
  __int128 v15; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v16[3]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v17; // [rsp+60h] [rbp-49h] BYREF
  int v18; // [rsp+68h] [rbp-41h]
  int v19; // [rsp+6Ch] [rbp-3Dh]
  int v20; // [rsp+70h] [rbp-39h]
  __int64 v21; // [rsp+74h] [rbp-35h]
  __int64 v22; // [rsp+80h] [rbp-29h]
  unsigned __int64 v23; // [rsp+88h] [rbp-21h]

  memset_0(&v17, 0, 0x40uLL);
  if ( *a3 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64 )
    return 3221225485LL;
  if ( (_BYTE)KdDebuggerNotPresent )
    return 3221226324LL;
  v7 = KdEnterDebugger(0LL, 0LL);
  v8 = (__int64)KdpRemoteFiles;
  v9 = 0;
  while ( *(_QWORD *)v8 )
  {
    ++v9;
    v8 += 8LL;
    if ( v9 >= 0x10 )
    {
      HIDWORD(v17) = -1073741801;
      goto LABEL_18;
    }
  }
  while ( 1 )
  {
    v16[1] = &v17;
    v16[0] = 4194368LL;
    v10 = (void *)*((_QWORD *)a3 + 1);
    v15 = 0LL;
    LODWORD(v14) = 0;
    v17 = 13360LL;
    v18 = 1179785;
    v19 = 128;
    v20 = 1;
    v21 = 1LL;
    KdpCopyMemoryChunks(v10, 4, (__int64)&v14);
    LOWORD(v15) = v14 + 2;
    *((_QWORD *)&v15 + 1) = &KdpMessageBuffer;
    *(_WORD *)((char *)&KdpMessageBuffer + (unsigned __int16)(v14 + 2) - 2) = 0;
    KdSendPacket(11LL, v16, &v15, &KdpContext);
    if ( (_BYTE)KdDebuggerNotPresent )
      break;
    WORD1(v15) = 12288;
    *((_QWORD *)&v15 + 1) = &KdpMessageBuffer;
    v11 = KdReceivePacket(11LL, v16, &v15, &v14, &KdpContext);
    v8 = (__int64)&KdpMessageBuffer;
    if ( !v11 )
    {
      v12 = HIDWORD(v17);
      goto LABEL_13;
    }
  }
  v12 = -1073740972;
  HIDWORD(v17) = -1073740972;
LABEL_13:
  if ( v12 >= 0 )
  {
    KdpRemoteFiles[v9] = v22;
    v8 = v9 + 1;
    *a1 = v8;
    if ( a2 )
    {
      v13 = v23;
      v8 = 4096LL;
      if ( v23 >= 0x10000000 )
        v13 = 4096LL;
      *a2 = v13;
    }
  }
LABEL_18:
  LOBYTE(v8) = v7;
  KdExitDebugger(v8);
  return HIDWORD(v17);
}
