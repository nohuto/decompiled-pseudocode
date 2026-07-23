/*
 * XREFs of MiZeroPageCalibrateDpc @ 0x140695350
 * Callers:
 *     <none>
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiFillMemory @ 0x140402AB0 (MiFillMemory.c)
 *     MiStartDpcZeroingRound @ 0x140694B0C (MiStartDpcZeroingRound.c)
 *     MiWakeAllZeroCalibrationProcessors @ 0x140694B9C (MiWakeAllZeroCalibrationProcessors.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x140694BD4 (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     MiZeroPageCalibrateLastDpcProcessorDone @ 0x140695538 (MiZeroPageCalibrateLastDpcProcessorDone.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiZeroPageCalibrateDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3)
{
  int v6; // r15d
  signed __int32 v8; // ecx
  __int64 result; // rax
  _DWORD *v10; // rdi
  int started; // ebp
  __int64 v12; // rdx
  unsigned int v13; // [rsp+68h] [rbp+10h] BYREF

  _R12D = 0;
  v6 = 0;
  _RSI = (unsigned int *)((char *)KeGetCurrentPrcb()->MmInternal + 192);
  *((_QWORD *)_RSI + 1) = KeFeatureBits2 & 0x800000;
  *_RSI = 0;
  v8 = _InterlockedIncrement((volatile signed __int32 *)(a2 + 264));
  if ( v8 == (_DWORD)KeNumberProcessors_0 )
    _InterlockedAdd((volatile signed __int32 *)(a2 + 128), KeNumberProcessors_0 + 1);
  while ( 1 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 128), 0xFFFFFFFF) != 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( *((_QWORD *)_RSI + 1) )
          __asm { umonitor rsi }
        result = *_RSI;
        if ( (_DWORD)result )
          break;
        if ( *((_QWORD *)_RSI + 1) )
          __asm { umwait  r12d }
        else
          KeYieldProcessorEx(&v13);
      }
      if ( (_DWORD)result == 2 )
        goto LABEL_16;
      v10 = (_DWORD *)(a2 + 256);
      goto LABEL_26;
    }
    v10 = (_DWORD *)(a2 + 256);
    if ( *(_DWORD *)(a2 + 256) )
    {
      if ( *(_DWORD *)(a2 + 260) )
        break;
      goto LABEL_20;
    }
    if ( *(_BYTE *)(a2 + 24) )
      v6 = 1;
    if ( (unsigned int)MiZeroPageCalibrateLastDpcProcessorDone(a2) == 2 )
      break;
LABEL_20:
    if ( v6 && !*v10 )
    {
      *(_DWORD *)(a2 + 256) = 1;
      *(_DWORD *)(a2 + 128) = KeNumberProcessors_0;
      MiWakeAllZeroCalibrationProcessors(1);
      goto LABEL_26;
    }
    *(_DWORD *)(a2 + 256) = 0;
    started = MiStartDpcZeroingRound((LARGE_INTEGER *)a2);
    if ( !started )
      _InterlockedAdd((volatile signed __int32 *)(a2 + 128), 1u);
    MiWakeOnlyParticipatingProcessorsFromAssignedNode(a2);
    if ( started )
    {
LABEL_26:
      *_RSI = 0;
      if ( *v10 )
      {
        if ( KeShouldYieldProcessor() )
          *(_DWORD *)(a2 + 260) = 1;
      }
      else
      {
        MiFillMemory(*((_QWORD *)_RSI + 11), *((void **)_RSI + 9), *((_QWORD *)_RSI + 10), 0LL, _RSI[16]);
        v12 = *((_QWORD *)_RSI + 11);
        if ( v12 )
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a2 + 304), (PSLIST_ENTRY)(v12 - 32));
      }
    }
  }
  result = MiWakeAllZeroCalibrationProcessors(2);
LABEL_16:
  _InterlockedDecrement(a3);
  return result;
}
