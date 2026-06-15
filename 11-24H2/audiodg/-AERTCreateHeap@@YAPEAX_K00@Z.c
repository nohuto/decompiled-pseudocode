/*
 * XREFs of ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x1400346CC
 * Callers:
 *     ?AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x140032900 (-AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 *     ?RuntimeClassInitialize@CCpuMemoryBufferFactory@@QEAAJ_K00@Z @ 0x14003461C (-RuntimeClassInitialize@CCpuMemoryBufferFactory@@QEAAJ_K00@Z.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDDC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall AERTCreateHeap(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  char v4; // di
  char v5; // si
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v12 = 0LL;
  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = RtlCreateMemoryBlockLookaside(&v12, 0LL, a1, a2, a3);
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v8, v7, v9, 3, v12, v5, v4, v3, v11, 0, v6);
  return v12;
}
