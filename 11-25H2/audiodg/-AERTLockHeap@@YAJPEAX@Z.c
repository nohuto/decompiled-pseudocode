/*
 * XREFs of ?AERTLockHeap@@YAJPEAX@Z @ 0x140022910
 * Callers:
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140021AF0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 *     ?RuntimeClassInitialize@CCpuMemoryBufferFactory@@QEAAJ_K00@Z @ 0x14003491C (-RuntimeClassInitialize@CCpuMemoryBufferFactory@@QEAAJ_K00@Z.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDAC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x14004AE00 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 */

__int64 __fastcall AERTLockHeap(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  char v4; // di
  int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp-28h]

  v3 = 0LL;
  v4 = a1;
  if ( a1 )
  {
    do
    {
      v5 = RtlLockMemoryBlockLookaside();
      if ( v5 != -1073741663 )
        break;
      if ( v3 > 0x6400000 )
        break;
      v3 += 0x100000LL;
    }
    while ( (int)IncreaseProcessWorkingSet(v3) >= 0 );
  }
  else
  {
    v5 = 0;
  }
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(a1, a2, a3, 8, v4, 0, 0, 0, v7, 0, v5);
  return v5 | 0x10000000u;
}
