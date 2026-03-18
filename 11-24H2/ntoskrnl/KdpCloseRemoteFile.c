/*
 * XREFs of KdpCloseRemoteFile @ 0x140B766D0
 * Callers:
 *     KdpPullRemoteFile @ 0x140B76B48 (KdpPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     KdExitDebugger @ 0x140B75008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B7A96C (KdEnterDebugger.c)
 */

__int64 __fastcall KdpCloseRemoteFile(int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // di
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // eax
  int v9; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v10[2]; // [rsp+40h] [rbp-31h] BYREF
  int *v11; // [rsp+48h] [rbp-29h]
  __int128 v12; // [rsp+50h] [rbp-21h] BYREF
  int v13; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v14; // [rsp+6Ch] [rbp-5h]
  __int64 v15; // [rsp+70h] [rbp-1h]

  v1 = (unsigned int)(a1 - 1);
  memset_0(&v13, 0, 0x40uLL);
  if ( (unsigned int)v1 >= 0x10 )
    return 3221225485LL;
  v5 = KdEnterDebugger(0LL, 0LL);
  if ( KdpRemoteFiles[v1] )
  {
    while ( 1 )
    {
      v7 = KdpRemoteFiles[v1];
      v10[1] = 0;
      v9 = 0;
      v14 = 0;
      v15 = v7;
      v13 = 13363;
      v12 = 0LL;
      v10[0] = 4194368;
      v11 = &v13;
      KdSendPacket(11LL, v10, 0LL, &KdpContext);
      if ( (_BYTE)KdDebuggerNotPresent )
        break;
      WORD1(v12) = 12288;
      *((_QWORD *)&v12 + 1) = &KdpMessageBuffer;
      if ( !(unsigned int)KdReceivePacket(11LL, v10, &v12, &v9, &KdpContext) )
      {
        v8 = v14;
        goto LABEL_9;
      }
    }
    v8 = -1073740972;
    v14 = -1073740972;
LABEL_9:
    if ( v8 >= 0 )
      KdpRemoteFiles[v1] = 0LL;
  }
  else
  {
    v14 = -1073741811;
  }
  LOBYTE(v4) = v5;
  KdExitDebugger(v4, v3, v6);
  return v14;
}
