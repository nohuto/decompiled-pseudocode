/*
 * XREFs of EtwpIsPrivateLoggerOn @ 0x180103DAC
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x18004B390 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     EtwpDemuxUmTraceHandle @ 0x18001D750 (EtwpDemuxUmTraceHandle.c)
 */

bool __fastcall EtwpIsPrivateLoggerOn(int a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  __int64 v3; // r8
  int v5; // edx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = EtwpLoggerArray;
  v2 = a1 & 0xFFFF7FFF;
  v6 = a1 & 0xFFFF7FFF;
  if ( !EtwpLoggerArray )
    return 0;
  if ( v2 >= 0x40 )
  {
    if ( (unsigned int)EtwpDemuxUmTraceHandle(a1, &v6) )
      return 0;
    v2 = v6;
    v1 = EtwpLoggerArray;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 16LL * v2 + 8));
  v3 = *(_QWORD *)(EtwpLoggerArray + 16LL * v2);
  if ( (v3 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v6 + 8));
    return 0;
  }
  v5 = *(_DWORD *)(v3 + 312);
  _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v3 + 20) + 8));
  return v5 != 0;
}
