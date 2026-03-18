/*
 * XREFs of RtlpStdGetRecordedStackTraceIndex @ 0x14048AA78
 * Callers:
 *     ExInitializeResourceLite @ 0x1402D6540 (ExInitializeResourceLite.c)
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     ExInitializeFastResource2 @ 0x140490B40 (ExInitializeFastResource2.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     RtlpStdExtendUpperWatermark @ 0x1405DC48C (RtlpStdExtendUpperWatermark.c)
 */

__int64 __fastcall RtlpStdGetRecordedStackTraceIndex(KSPIN_LOCK *SpinLock, unsigned __int16 *a2)
{
  __int64 v2; // r8
  unsigned int v5; // eax
  _DWORD *v6; // rdx
  KSPIN_LOCK *v7; // rsi
  unsigned __int16 **v8; // rax
  __int64 v9; // rbx

  v2 = a2[7];
  v5 = 0;
  if ( (_WORD)v2 )
  {
    v6 = a2 + 8;
    do
    {
      v5 += *v6;
      v6 += 2;
      --v2;
    }
    while ( v2 );
  }
  v7 = &SpinLock[3 * (v5 % *((_DWORD *)SpinLock + 180))];
  *((_BYTE *)v7 + 744) = KeAcquireSpinLockRaiseToDpc(v7 + 92);
  if ( *(_DWORD *)(a2 + 5) )
  {
    LODWORD(v9) = a2[6] + (a2[5] << 16);
  }
  else
  {
    v8 = (unsigned __int16 **)RtlpStdExtendUpperWatermark(SpinLock);
    if ( v8 )
    {
      *v8 = a2;
      v9 = (__int64)(SpinLock[23] - (_QWORD)v8) >> 3;
      a2[6] = v9;
      a2[5] = WORD1(v9);
    }
    else
    {
      LODWORD(v9) = 0;
    }
  }
  KeReleaseSpinLock(v7 + 92, *((_BYTE *)v7 + 744));
  return (unsigned int)v9;
}
