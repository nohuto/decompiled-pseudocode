/*
 * XREFs of LdrpReleaseTlsEntry @ 0x1800049CC
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18000FA80 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     LdrpResolveProcedureAddress @ 0x180057F30 (LdrpResolveProcedureAddress.c)
 * Callees:
 *     LdrpFindTlsEntry @ 0x180004A90 (LdrpFindTlsEntry.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
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
    *((_BYTE *)Src + ((unsigned __int64)*((unsigned int *)v5 + 16) >> 3)) &= ~(1 << (v5[8] & 7));
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
