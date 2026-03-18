/*
 * XREFs of KdpReadRemoteFile @ 0x140B76D18
 * Callers:
 *     KdpPullRemoteFile @ 0x140B76B48 (KdpPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     KdExitDebugger @ 0x140B75008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B7A96C (KdEnterDebugger.c)
 */

__int64 __fastcall KdpReadRemoteFile(int a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rbx
  int v9; // esi
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // r12
  __int64 v15; // rax
  unsigned int v16; // [rsp+30h] [rbp-71h] BYREF
  _DWORD v17[2]; // [rsp+38h] [rbp-69h] BYREF
  int *v18; // [rsp+40h] [rbp-61h]
  __int128 v19; // [rsp+48h] [rbp-59h] BYREF
  int v20; // [rsp+60h] [rbp-41h] BYREF
  int v21; // [rsp+64h] [rbp-3Dh]
  __int64 v22; // [rsp+68h] [rbp-39h]
  __int64 v23; // [rsp+70h] [rbp-31h]
  int v24; // [rsp+78h] [rbp-29h]

  v5 = (unsigned int)(a1 - 1);
  memset_0(&v20, 0, 0x40uLL);
  v9 = 0;
  if ( (unsigned int)v5 >= 0x10 )
    return 3221225485LL;
  v14 = KdEnterDebugger(0LL, 0LL);
  if ( KdpRemoteFiles[v5] )
  {
    while ( a4 )
    {
      v15 = KdpRemoteFiles[v5];
      v17[1] = 0;
      v16 = 0;
      v21 = 0;
      v22 = v15;
      v20 = 13361;
      v23 = a2;
      v19 = 0LL;
      if ( a4 <= (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64 )
        v24 = a4;
      else
        v24 = KdTransportMaxPacketSize - 64;
      v17[0] = 4194368;
      v18 = &v20;
      KdSendPacket(11LL, v17, 0LL, &KdpContext);
      if ( (_BYTE)KdDebuggerNotPresent )
      {
        v21 = -1073740972;
        break;
      }
      WORD1(v19) = v24;
      *((_QWORD *)&v19 + 1) = a3;
      if ( !(unsigned int)KdReceivePacket(11LL, v17, &v19, &v16, &KdpContext) )
      {
        if ( v21 < 0 )
          break;
        v12 = v16;
        v9 += v16;
        a3 += v16;
        a2 += v16;
        a4 -= v16;
      }
    }
    *a5 = v9;
  }
  else
  {
    v21 = -1073741811;
  }
  LOBYTE(v12) = v14;
  KdExitDebugger(v12, v11, v13);
  return (unsigned int)v21;
}
