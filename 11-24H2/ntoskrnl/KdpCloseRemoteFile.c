/*
 * XREFs of KdpCloseRemoteFile @ 0x140B786D0
 * Callers:
 *     KdpPullRemoteFile @ 0x140B78B48 (KdpPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KdExitDebugger @ 0x140B77008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B7C96C (KdEnterDebugger.c)
 */

__int64 __fastcall KdpCloseRemoteFile(int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // di
  __int64 v6; // rax
  int v7; // eax
  int v8; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v9[2]; // [rsp+40h] [rbp-31h] BYREF
  int *v10; // [rsp+48h] [rbp-29h]
  __int128 v11; // [rsp+50h] [rbp-21h] BYREF
  int v12; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v13; // [rsp+6Ch] [rbp-5h]
  __int64 v14; // [rsp+70h] [rbp-1h]

  v1 = (unsigned int)(a1 - 1);
  memset_0(&v12, 0, 0x40uLL);
  if ( (unsigned int)v1 >= 0x10 )
    return 3221225485LL;
  v5 = KdEnterDebugger(0LL, 0LL);
  if ( KdpRemoteFiles[v1] )
  {
    while ( 1 )
    {
      v6 = KdpRemoteFiles[v1];
      v9[1] = 0;
      v8 = 0;
      v13 = 0;
      v14 = v6;
      v12 = 13363;
      v11 = 0LL;
      v9[0] = 4194368;
      v10 = &v12;
      KdSendPacket(11LL, v9, 0LL, &KdpContext);
      if ( (_BYTE)KdDebuggerNotPresent )
        break;
      WORD1(v11) = 12288;
      *((_QWORD *)&v11 + 1) = &KdpMessageBuffer;
      if ( !(unsigned int)KdReceivePacket(11LL, v9, &v11, &v8, &KdpContext) )
      {
        v7 = v13;
        goto LABEL_9;
      }
    }
    v7 = -1073740972;
    v13 = -1073740972;
LABEL_9:
    if ( v7 >= 0 )
      KdpRemoteFiles[v1] = 0LL;
  }
  else
  {
    v13 = -1073741811;
  }
  LOBYTE(v4) = v5;
  KdExitDebugger(v4, v3);
  return v13;
}
