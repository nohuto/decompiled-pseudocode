/*
 * XREFs of PopPepUpdateDripsDeviceVetoMask @ 0x1403A5BE4
 * Callers:
 *     PopFxUpdateVetoMaskWork @ 0x140A97B30 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1403A5BC0 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopFxReinitializeAccountingInstance @ 0x1403A5DA8 (PopFxReinitializeAccountingInstance.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403A6EB0 (PopPepUpdateIdleStateRefCount.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

void __fastcall PopPepUpdateDripsDeviceVetoMask(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rbx
  unsigned int v5; // esi
  KIRQL v6; // al
  unsigned int *v7; // r14
  unsigned int v8; // r11d
  KIRQL v9; // r13
  unsigned int v10; // r11d
  char DeepSleepPlatformStateIndex; // r15
  unsigned int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // r10
  _DWORD *v15; // rdx
  unsigned int v16; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 56);
  v4 = PopPepConstraintOverrides;
  v5 = 0;
  while ( v4 )
  {
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v4 + 8), (PCUNICODE_STRING)(*(_QWORD *)(v2 + 32) + 216LL), 1u) )
      return;
    v4 = *(_QWORD *)v4;
  }
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 64));
  v7 = (unsigned int *)(v2 + 144);
  v8 = *(_DWORD *)(v2 + 144);
  v9 = v6;
  *(_DWORD *)(v2 + 144) = *(_DWORD *)(v2 + 156);
  *(_DWORD *)(v2 + 148) = *(_DWORD *)(v2 + 160);
  *(_DWORD *)(v2 + 152) = *(_DWORD *)(v2 + 164);
  v16 = v8;
  DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
  if ( a2 > 1 )
  {
    v14 = a2 - 1;
    v15 = (_DWORD *)(v2 + 144);
    do
    {
      *v15++ |= 1 << DeepSleepPlatformStateIndex;
      --v14;
    }
    while ( v14 );
  }
  v12 = *v7;
  PopPepUpdateIdleStateRefCount(v10, *v7, 1LL, v2 + 184);
  PopPepUpdateIdleStateRefCount(v16, v12, 0LL, v2 + 184);
  KeGetCurrentIrql();
  if ( *(_DWORD *)(v2 + 172) == 2 )
  {
    do
    {
      if ( ((1 << DeepSleepPlatformStateIndex) & *v7) == 0 )
        break;
      ++v5;
      ++v7;
    }
    while ( v5 < 3 );
    ++v5;
  }
  v13 = *(_QWORD *)(v2 + 32) + 640LL;
  KxAcquireSpinLock((PKSPIN_LOCK)v13);
  if ( v5 == 1 )
  {
    PopFxReinitializeAccountingInstance(v13, 0LL);
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v2 + 32) + 864LL), 0xFFFFF7FF);
  }
  else
  {
    PopFxReinitializeAccountingInstance(v13, 2LL);
    *(_DWORD *)(v13 + 12) = v5;
    *(_QWORD *)(v13 + 24) = MEMORY[0xFFFFF78000000008];
    *(_BYTE *)(v13 + 8) = 1;
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v2 + 32) + 864LL), 0x800u);
  }
  KxReleaseSpinLock((volatile signed __int64 *)v13);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 64), v9);
}
