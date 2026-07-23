/*
 * XREFs of LdrpReleaseTlsEntry @ 0x180008C0C
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveProcedureAddress @ 0x180013B70 (LdrpResolveProcedureAddress.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18004E920 (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindTlsEntry @ 0x180020450 (LdrpFindTlsEntry.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
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
