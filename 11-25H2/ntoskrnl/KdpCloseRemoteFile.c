/*
 * XREFs of KdpCloseRemoteFile @ 0x140B666D0
 * Callers:
 *     KdpPullRemoteFile @ 0x140B66B48 (KdpPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     KdExitDebugger @ 0x140B65008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B6A96C (KdEnterDebugger.c)
 */

__int64 __fastcall KdpCloseRemoteFile(int a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  char v4; // di
  __int64 v5; // rax
  int v6; // eax
  int v7; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v8[2]; // [rsp+40h] [rbp-31h] BYREF
  int *v9; // [rsp+48h] [rbp-29h]
  __int128 v10; // [rsp+50h] [rbp-21h] BYREF
  int v11; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v12; // [rsp+6Ch] [rbp-5h]
  __int64 v13; // [rsp+70h] [rbp-1h]

  v1 = (unsigned int)(a1 - 1);
  memset_0(&v11, 0, 0x40uLL);
  if ( (unsigned int)v1 >= 0x10 )
    return 3221225485LL;
  v4 = KdEnterDebugger(0LL, 0LL);
  if ( KdpRemoteFiles[v1] )
  {
    while ( 1 )
    {
      v5 = KdpRemoteFiles[v1];
      v8[1] = 0;
      v7 = 0;
      v12 = 0;
      v13 = v5;
      v11 = 13363;
      v10 = 0LL;
      v8[0] = 4194368;
      v9 = &v11;
      KdSendPacket(11LL, v8, 0LL, &KdpContext);
      if ( (_BYTE)KdDebuggerNotPresent )
        break;
      WORD1(v10) = 12288;
      *((_QWORD *)&v10 + 1) = &KdpMessageBuffer;
      if ( !(unsigned int)KdReceivePacket(11LL, v8, &v10, &v7, &KdpContext) )
      {
        v6 = v12;
        goto LABEL_9;
      }
    }
    v6 = -1073740972;
    v12 = -1073740972;
LABEL_9:
    if ( v6 >= 0 )
      KdpRemoteFiles[v1] = 0LL;
  }
  else
  {
    v12 = -1073741811;
  }
  LOBYTE(v3) = v4;
  KdExitDebugger(v3);
  return v12;
}
