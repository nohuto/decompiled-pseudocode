/*
 * XREFs of KdpCreateRemoteFile @ 0x140B78920
 * Callers:
 *     KdpPullRemoteFile @ 0x140B78B48 (KdpPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KdExitDebugger @ 0x140B77008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B7C96C (KdEnterDebugger.c)
 *     KdpCopyMemoryChunks @ 0x140B7CACC (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpCreateRemoteFile(__int64 *a1, __int64 *a2, unsigned __int16 *a3)
{
  _QWORD *v7; // rdx
  char v8; // si
  __int64 v9; // rcx
  unsigned int v10; // ebx
  void *v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp-79h] BYREF
  __int128 v16; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v18; // [rsp+60h] [rbp-49h] BYREF
  int v19; // [rsp+68h] [rbp-41h]
  int v20; // [rsp+6Ch] [rbp-3Dh]
  int v21; // [rsp+70h] [rbp-39h]
  __int64 v22; // [rsp+74h] [rbp-35h]
  __int64 v23; // [rsp+80h] [rbp-29h]
  unsigned __int64 v24; // [rsp+88h] [rbp-21h]

  memset_0(&v18, 0, 0x40uLL);
  if ( *a3 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64 )
    return 3221225485LL;
  if ( (_BYTE)KdDebuggerNotPresent )
    return 3221226324LL;
  v8 = KdEnterDebugger(0LL, 0LL);
  v9 = (__int64)KdpRemoteFiles;
  v10 = 0;
  while ( *(_QWORD *)v9 )
  {
    ++v10;
    v9 += 8LL;
    if ( v10 >= 0x10 )
    {
      HIDWORD(v18) = -1073741801;
      goto LABEL_18;
    }
  }
  while ( 1 )
  {
    v17[1] = &v18;
    v17[0] = 4194368LL;
    v11 = (void *)*((_QWORD *)a3 + 1);
    v16 = 0LL;
    LODWORD(v15) = 0;
    v18 = 13360LL;
    v19 = 1179785;
    v20 = 128;
    v21 = 1;
    v22 = 1LL;
    KdpCopyMemoryChunks(v11, 4, (__int64)&v15);
    LOWORD(v16) = v15 + 2;
    *((_QWORD *)&v16 + 1) = &KdpMessageBuffer;
    *(_WORD *)((char *)&KdpMessageBuffer + (unsigned __int16)(v15 + 2) - 2) = 0;
    KdSendPacket(11LL, v17, &v16, &KdpContext);
    if ( (_BYTE)KdDebuggerNotPresent )
      break;
    WORD1(v16) = 12288;
    *((_QWORD *)&v16 + 1) = &KdpMessageBuffer;
    v12 = KdReceivePacket(11LL, v17, &v16, &v15, &KdpContext);
    v9 = (__int64)&KdpMessageBuffer;
    if ( !v12 )
    {
      v13 = HIDWORD(v18);
      goto LABEL_13;
    }
  }
  v13 = -1073740972;
  HIDWORD(v18) = -1073740972;
LABEL_13:
  if ( v13 >= 0 )
  {
    v7 = KdpRemoteFiles;
    KdpRemoteFiles[v10] = v23;
    v9 = v10 + 1;
    *a1 = v9;
    if ( a2 )
    {
      v14 = v24;
      v9 = 4096LL;
      if ( v24 >= 0x10000000 )
        v14 = 4096LL;
      *a2 = v14;
    }
  }
LABEL_18:
  LOBYTE(v9) = v8;
  KdExitDebugger(v9, (unsigned __int64)v7);
  return HIDWORD(v18);
}
