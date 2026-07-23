/*
 * XREFs of KiConfigureCpuSetSchedulingInformation @ 0x14037342C
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x14042B440 (KeConfigureHeteroProcessors.c)
 *     KiConfigureSchedulingInformation @ 0x140B58128 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiConfigureCpuSetSchedulingInformation(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // bp
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  _WORD *v5; // r14
  unsigned __int16 *v6; // r15
  _BYTE *v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 result; // rax

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  KxAcquireSpinLock(&KiCpuSetLock);
  _m_prefetchw(&KiCpuSetSequence);
  v3 = KiCpuSetSequence;
  while ( (v3 & 1) != 0 )
  {
    v3 = KiCpuSetSequence;
LABEL_17:
    _mm_pause();
  }
  v4 = v3;
  v3 = _InterlockedCompareExchange64(&KiCpuSetSequence, v3 + 1, v3);
  if ( v4 != v3 )
    goto LABEL_17;
  v5 = (_WORD *)(v1 + 44800);
  v6 = (unsigned __int16 *)(v1 + 44800);
  v7 = (_BYTE *)(KiCpuSetData
               + 16 * (*(unsigned __int8 *)(v1 + 209) + ((unsigned __int64)*(unsigned __int8 *)(v1 + 208) << 6)));
  *v7 = *(_BYTE *)(v1 + 208);
  v7[1] = *(_BYTE *)(v1 + 209);
  _BitScanForward64(&v8, *(_QWORD *)(v1 + 36448));
  v9 = 0LL;
  v7[2] = v8;
  v10 = 5LL;
  do
  {
    if ( !(unsigned int)KeIsEmptyAffinityEx(v6) )
    {
      v11 = *(unsigned __int8 *)(v1 + 208);
      if ( (unsigned __int16)v11 >= *v5 )
        v9 = 0LL;
      else
        v9 = *(_QWORD *)&v5[4 * v11 + 4];
    }
    v6 += 132;
    v5 += 132;
    --v10;
  }
  while ( v10 );
  if ( v9 )
  {
    _BitScanForward64(&v12, v9);
    v7[3] = v12;
  }
  _BitScanForward64(&v13, *(_QWORD *)(*(_QWORD *)(v1 + 192) + 128LL));
  v7[4] = v13;
  v7[5] = *(_BYTE *)(v1 + 35336) != 0;
  v7[6] = *(_BYTE *)(v1 + 35337);
  ++KiCpuSetSequence;
  KxReleaseSpinLock((volatile signed __int64 *)&KiCpuSetLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v14) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
