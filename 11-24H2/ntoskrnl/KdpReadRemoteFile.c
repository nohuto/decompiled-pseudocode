/*
 * XREFs of KdpReadRemoteFile @ 0x140B78D18
 * Callers:
 *     KdpPullRemoteFile @ 0x140B78B48 (KdpPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KdExitDebugger @ 0x140B77008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B7C96C (KdEnterDebugger.c)
 */

__int64 __fastcall KdpReadRemoteFile(int a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rbx
  int v9; // esi
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // r12
  __int64 v14; // rax
  unsigned int v15; // [rsp+30h] [rbp-71h] BYREF
  _DWORD v16[2]; // [rsp+38h] [rbp-69h] BYREF
  int *v17; // [rsp+40h] [rbp-61h]
  __int128 v18; // [rsp+48h] [rbp-59h] BYREF
  int v19; // [rsp+60h] [rbp-41h] BYREF
  int v20; // [rsp+64h] [rbp-3Dh]
  __int64 v21; // [rsp+68h] [rbp-39h]
  __int64 v22; // [rsp+70h] [rbp-31h]
  int v23; // [rsp+78h] [rbp-29h]

  v5 = (unsigned int)(a1 - 1);
  memset_0(&v19, 0, 0x40uLL);
  v9 = 0;
  if ( (unsigned int)v5 >= 0x10 )
    return 3221225485LL;
  v13 = KdEnterDebugger(0LL, 0LL);
  if ( KdpRemoteFiles[v5] )
  {
    while ( a4 )
    {
      v14 = KdpRemoteFiles[v5];
      v16[1] = 0;
      v15 = 0;
      v20 = 0;
      v21 = v14;
      v19 = 13361;
      v22 = a2;
      v18 = 0LL;
      if ( a4 <= (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64 )
        v23 = a4;
      else
        v23 = KdTransportMaxPacketSize - 64;
      v16[0] = 4194368;
      v17 = &v19;
      KdSendPacket(11LL, v16, 0LL, &KdpContext);
      if ( (_BYTE)KdDebuggerNotPresent )
      {
        v20 = -1073740972;
        break;
      }
      WORD1(v18) = v23;
      *((_QWORD *)&v18 + 1) = a3;
      if ( !(unsigned int)KdReceivePacket(11LL, v16, &v18, &v15, &KdpContext) )
      {
        if ( v20 < 0 )
          break;
        v12 = v15;
        v9 += v15;
        a3 += v15;
        a2 += v15;
        a4 -= v15;
      }
    }
    *a5 = v9;
  }
  else
  {
    v20 = -1073741811;
  }
  LOBYTE(v12) = v13;
  KdExitDebugger(v12, v11);
  return (unsigned int)v20;
}
