/*
 * XREFs of LdrpReleaseTlsEntry @ 0x1800D73C8
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003C480 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     LdrpResolveProcedureAddress @ 0x18006DB10 (LdrpResolveProcedureAddress.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindTlsEntry @ 0x1800D7480 (LdrpFindTlsEntry.c)
 */

__int64 __fastcall LdrpReleaseTlsEntry(__int64 a1, unsigned int **a2)
{
  unsigned int *TlsEntry; // rax
  unsigned int *v5; // rbx
  __int64 v6; // rcx
  unsigned int **v7; // rax

  if ( !a2 )
    RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  TlsEntry = (unsigned int *)LdrpFindTlsEntry(a1);
  v5 = TlsEntry;
  if ( TlsEntry )
  {
    v6 = *(_QWORD *)TlsEntry;
    if ( *(unsigned int **)(*(_QWORD *)TlsEntry + 8LL) != TlsEntry
      || (v7 = (unsigned int **)*((_QWORD *)TlsEntry + 1), *v7 != v5) )
    {
      __fastfail(3u);
    }
    *v7 = (unsigned int *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    *((_BYTE *)LdrpTlsBitmap.Buffer + ((unsigned __int64)v5[16] >> 3)) &= ~(1 << (v5[16] & 7));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( !v5 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v5;
  else
    RtlFreeHeap(LdrpTlsHeap, 0, v5);
  return 0LL;
}
