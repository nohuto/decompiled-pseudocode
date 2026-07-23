/*
 * XREFs of EtwpSendBufferToDebugger @ 0x1407AD07C
 * Callers:
 *     EtwpSendDbgId @ 0x1407AD190 (EtwpSendDbgId.c)
 * Callees:
 *     EtwpGetNextEventOffsetType @ 0x1404A7234 (EtwpGetNextEventOffsetType.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KdSendTraceData @ 0x140B78F48 (KdSendTraceData.c)
 */

__int64 __fastcall EtwpSendBufferToDebugger(__int128 *a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  unsigned int v6; // esi
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  int v9; // r9d
  int v10; // r14d
  _OWORD *v11; // [rsp+20h] [rbp-29h] BYREF
  int v12; // [rsp+28h] [rbp-21h]
  __int64 v13; // [rsp+30h] [rbp-19h]
  int v14; // [rsp+38h] [rbp-11h]
  _OWORD v15[3]; // [rsp+40h] [rbp-9h] BYREF
  __int128 v16; // [rsp+70h] [rbp+27h]
  __int64 v17; // [rsp+80h] [rbp+37h]
  unsigned int v18; // [rsp+B0h] [rbp+67h] BYREF

  v2 = 72;
  memset_0(v15, 0, 0x48uLL);
  v18 = 0;
  if ( *((_DWORD *)a1 + 12) > (unsigned int)(KdTransportMaxPacketSize - 64) )
  {
    v4 = *a1;
    v12 = 72;
    v5 = a1[1];
    v6 = KdTransportMaxPacketSize - 136;
    v11 = v15;
    v15[0] = v4;
    v7 = a1[2];
    v15[1] = v5;
    v8 = a1[3];
    v15[2] = v7;
    v17 = *((_QWORD *)a1 + 8);
    v16 = v8;
    do
    {
      v13 = (__int64)a1 + v2;
      while ( 1 )
      {
        result = EtwpGetNextEventOffsetType((unsigned int *)a1, v2, &v18);
        v10 = result;
        if ( !(_DWORD)result )
          break;
        if ( v9 + v18 > v6 )
        {
          if ( v18 > v6 )
            v2 += v18;
          break;
        }
        v2 += v18;
      }
      if ( v9 )
      {
        v14 = v9;
        LODWORD(v16) = v9 + 72;
        LODWORD(v15[0]) = v9 + 72;
        result = KdSendTraceData(&v11, 2LL);
      }
    }
    while ( v10 );
  }
  else
  {
    v12 = *((_DWORD *)a1 + 12);
    v11 = a1;
    return KdSendTraceData(&v11, 1LL);
  }
  return result;
}
