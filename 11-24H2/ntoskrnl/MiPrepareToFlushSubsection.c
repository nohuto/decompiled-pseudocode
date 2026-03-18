/*
 * XREFs of MiPrepareToFlushSubsection @ 0x14036F8DC
 * Callers:
 *     MiDeleteCachedSubsection @ 0x14023C35C (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MiDeleteControlArea @ 0x14036F6E8 (MiDeleteControlArea.c)
 *     MiDecrementModifiedWriteCount @ 0x140370FD4 (MiDecrementModifiedWriteCount.c)
 *     ObFastReferenceObjectLocked @ 0x140397714 (ObFastReferenceObjectLocked.c)
 *     MiTranslateSubsectionState @ 0x14047129C (MiTranslateSubsectionState.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409D1DE0 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409D2090 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MiPrepareToFlushSubsection(__int64 *a1, unsigned __int8 a2, __int64 a3, struct _FILE_OBJECT **a4)
{
  __int64 v4; // rdi
  struct _FILE_OBJECT *v9; // rsi
  _QWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // ebx
  KIRQL v14; // al
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ebx
  __int64 result; // rax
  unsigned __int8 v19; // r9

  v4 = *a1;
  *a4 = 0LL;
  *(_QWORD *)(a3 + 72) = v4;
  _InterlockedIncrement64((volatile signed __int64 *)(v4 + 112));
  v9 = (struct _FILE_OBJECT *)ObFastReferenceObjectLocked(v4 + 64, 1666411853LL);
  v10 = (_QWORD *)MiDecrementModifiedWriteCount(v4, 1LL);
  MiReleaseSpinLockExclusive((_DWORD *)(v4 + 72), a2);
  if ( v10 )
    MiReleaseControlAreaWaiters(v10, v11, v12);
  v13 = FsRtlAcquireFileForCcFlushEx(v9);
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  *(_QWORD *)(a3 + 72) = 0LL;
  LOBYTE(v16) = v14;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 112), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    MiReleaseSpinLockExclusive((_DWORD *)(v4 + 72), v14);
    if ( v13 >= 0 )
      FsRtlReleaseFileForCcFlush(v9);
    MiDeleteControlArea((PVOID)v4);
    v17 = -1073741797;
    goto LABEL_7;
  }
  ++*(_DWORD *)(v4 + 76);
  if ( v13 < 0 )
  {
    v17 = -1073740748;
LABEL_7:
    ObfDereferenceObjectWithTag(v9, 0x63536D4Du);
    return v17;
  }
  *a4 = v9;
  result = MiTranslateSubsectionState(a1, 0LL, v15, v16);
  if ( (int)result >= 0 )
  {
    MiReleaseSpinLockExclusive((_DWORD *)(v4 + 72), v19);
    return 0LL;
  }
  return result;
}
