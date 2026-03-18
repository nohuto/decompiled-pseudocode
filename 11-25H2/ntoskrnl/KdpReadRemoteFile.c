/*
 * XREFs of KdpReadRemoteFile @ 0x140B66D18
 * Callers:
 *     KdpPullRemoteFile @ 0x140B66B48 (KdpPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     KdExitDebugger @ 0x140B65008 (KdExitDebugger.c)
 *     KdEnterDebugger @ 0x140B6A96C (KdEnterDebugger.c)
 */

__int64 __fastcall KdpReadRemoteFile(int a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rbx
  int v9; // esi
  __int64 v11; // rcx
  char v12; // r12
  __int64 v13; // rax
  unsigned int v14; // [rsp+30h] [rbp-71h] BYREF
  _DWORD v15[2]; // [rsp+38h] [rbp-69h] BYREF
  int *v16; // [rsp+40h] [rbp-61h]
  __int128 v17; // [rsp+48h] [rbp-59h] BYREF
  int v18; // [rsp+60h] [rbp-41h] BYREF
  int v19; // [rsp+64h] [rbp-3Dh]
  __int64 v20; // [rsp+68h] [rbp-39h]
  __int64 v21; // [rsp+70h] [rbp-31h]
  int v22; // [rsp+78h] [rbp-29h]

  v5 = (unsigned int)(a1 - 1);
  memset_0(&v18, 0, 0x40uLL);
  v9 = 0;
  if ( (unsigned int)v5 >= 0x10 )
    return 3221225485LL;
  v12 = KdEnterDebugger(0LL, 0LL);
  if ( KdpRemoteFiles[v5] )
  {
    while ( a4 )
    {
      v13 = KdpRemoteFiles[v5];
      v15[1] = 0;
      v14 = 0;
      v19 = 0;
      v20 = v13;
      v18 = 13361;
      v21 = a2;
      v17 = 0LL;
      if ( a4 <= (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64 )
        v22 = a4;
      else
        v22 = KdTransportMaxPacketSize - 64;
      v15[0] = 4194368;
      v16 = &v18;
      KdSendPacket(11LL, v15, 0LL, &KdpContext);
      if ( (_BYTE)KdDebuggerNotPresent )
      {
        v19 = -1073740972;
        break;
      }
      WORD1(v17) = v22;
      *((_QWORD *)&v17 + 1) = a3;
      if ( !(unsigned int)KdReceivePacket(11LL, v15, &v17, &v14, &KdpContext) )
      {
        if ( v19 < 0 )
          break;
        v11 = v14;
        v9 += v14;
        a3 += v14;
        a2 += v14;
        a4 -= v14;
      }
    }
    *a5 = v9;
  }
  else
  {
    v19 = -1073741811;
  }
  LOBYTE(v11) = v12;
  KdExitDebugger(v11);
  return (unsigned int)v19;
}
