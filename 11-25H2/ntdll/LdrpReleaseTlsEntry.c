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

__int64 __fastcall LdrpReleaseTlsEntry(__int64 a1, _QWORD *a2)
{
  _QWORD *TlsEntry; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax

  if ( !a2 )
    RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  TlsEntry = (_QWORD *)LdrpFindTlsEntry(a1);
  v5 = TlsEntry;
  if ( TlsEntry )
  {
    v6 = *TlsEntry;
    if ( *(_QWORD **)(*TlsEntry + 8LL) != TlsEntry || (v7 = (_QWORD *)TlsEntry[1], (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *((_BYTE *)qword_1801D4768 + ((unsigned __int64)*((unsigned int *)v5 + 16) >> 3)) &= ~(1 << (v5[8] & 7));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( !v5 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v5;
  else
    RtlFreeHeap(LdrpTlsHeap, 0LL, v5);
  return 0LL;
}
