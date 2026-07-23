/*
 * XREFs of EtwpSendTraceEvent @ 0x1404A70B8
 * Callers:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwpTraceMessageVa @ 0x1402CF490 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x1402D0080 (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x140325740 (EtwTraceEvent.c)
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwTraceRaw @ 0x14064D8FC (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     EtwpGetNextEventOffsetType @ 0x1404A7234 (EtwpGetNextEventOffsetType.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpSendDbgId @ 0x1407AD190 (EtwpSendDbgId.c)
 *     KdSendTraceData @ 0x140B78F48 (KdSendTraceData.c)
 */

unsigned __int64 __fastcall EtwpSendTraceEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 result; // rax
  __int128 *v7; // r9
  __int64 v8; // r10
  __int128 v9; // xmm0
  _OWORD *v10; // [rsp+20h] [rbp-19h] BYREF
  int v11; // [rsp+28h] [rbp-11h]
  __int64 v12; // [rsp+30h] [rbp-9h]
  unsigned int v13; // [rsp+38h] [rbp-1h]
  _OWORD v14[3]; // [rsp+40h] [rbp+7h] BYREF
  __int128 v15; // [rsp+70h] [rbp+37h]
  __int64 v16; // [rsp+80h] [rbp+47h]
  unsigned int v17; // [rsp+A0h] [rbp+67h] BYREF

  memset_0(v14, 0, 0x48uLL);
  v17 = 0;
  if ( (*(_DWORD *)(a1 + 824) & 0x800) != 0 && KeGetEffectiveIrql(v5, v4) < 2u )
    EtwpSendDbgId(a1);
  result = EtwpGetNextEventOffsetType(*(_QWORD *)a2, *(unsigned int *)(a2 + 16), &v17);
  if ( (_DWORD)result )
  {
    result = v17 + 72LL;
    if ( result <= (unsigned int)(KdTransportMaxPacketSize - 64) )
    {
      v9 = *v7;
      v11 = 72;
      v13 = v17;
      v14[0] = v9;
      v14[1] = v7[1];
      v14[2] = v7[2];
      v15 = v7[3];
      *(_QWORD *)&v9 = *((_QWORD *)v7 + 8);
      LODWORD(v14[0]) = v17 + 72;
      LODWORD(v15) = v17 + 72;
      v10 = v14;
      v12 = (__int64)v7 + v8;
      v16 = v9;
      return KdSendTraceData(&v10, 2LL);
    }
  }
  return result;
}
