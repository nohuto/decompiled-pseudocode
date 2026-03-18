/*
 * XREFs of MiPrepareToFlushSubsection @ 0x140439A60
 * Callers:
 *     MiDeleteCachedSubsection @ 0x14033F8B4 (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDecrementModifiedWriteCount @ 0x14035A754 (MiDecrementModifiedWriteCount.c)
 *     ObFastReferenceObjectLocked @ 0x140439B8C (ObFastReferenceObjectLocked.c)
 *     MiDeleteControlArea @ 0x14043A3F8 (MiDeleteControlArea.c)
 *     MiTranslateSubsectionState @ 0x14043A668 (MiTranslateSubsectionState.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409CEE20 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409CF0D0 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MiPrepareToFlushSubsection(__int64 *a1, unsigned __int8 a2, __int64 a3, struct _FILE_OBJECT **a4)
{
  __int64 v4; // rdi
  struct _FILE_OBJECT *v9; // rsi
  __int64 *v10; // r14
  int v11; // ebx
  KIRQL v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 result; // rax
  unsigned __int8 v17; // r9

  v4 = *a1;
  *a4 = 0LL;
  *(_QWORD *)(a3 + 72) = v4;
  _InterlockedIncrement64((volatile signed __int64 *)(v4 + 112));
  v9 = (struct _FILE_OBJECT *)ObFastReferenceObjectLocked(v4 + 64, 1666411853LL);
  v10 = MiDecrementModifiedWriteCount(v4, 1);
  MiReleaseSpinLockExclusive((_DWORD *)(v4 + 72), a2);
  if ( v10 )
    MiReleaseControlAreaWaiters(v10);
  v11 = FsRtlAcquireFileForCcFlushEx(v9);
  v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  *(_QWORD *)(a3 + 72) = 0LL;
  LOBYTE(v14) = v12;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 112), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    MiReleaseSpinLockExclusive((_DWORD *)(v4 + 72), v12);
    if ( v11 >= 0 )
      FsRtlReleaseFileForCcFlush(v9);
    MiDeleteControlArea((PVOID)v4);
    v15 = -1073741797;
    goto LABEL_7;
  }
  ++*(_DWORD *)(v4 + 76);
  if ( v11 < 0 )
  {
    v15 = -1073740748;
LABEL_7:
    ObfDereferenceObjectWithTag(v9, 0x63536D4Du);
    return v15;
  }
  *a4 = v9;
  result = MiTranslateSubsectionState(a1, 0LL, v13, v14);
  if ( (int)result >= 0 )
  {
    MiReleaseSpinLockExclusive((_DWORD *)(v4 + 72), v17);
    return 0LL;
  }
  return result;
}
