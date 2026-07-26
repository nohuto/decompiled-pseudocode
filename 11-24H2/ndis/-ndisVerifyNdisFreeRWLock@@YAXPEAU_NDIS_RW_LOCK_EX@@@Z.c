/*
 * XREFs of ?ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1400C26D0
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeRWLock @ 0x14004F170 (NdisFreeRWLock.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisVerifyNdisFreeRWLock(KSPIN_LOCK *BugCheckParameter3)
{
  unsigned int i; // edx

  if ( !KeTestSpinLock(BugCheckParameter3 + 2) )
LABEL_7:
    ndisBugCheckEx(0x30uLL, 2uLL, (ULONG_PTR)BugCheckParameter3, 0LL);
  for ( i = 0; i < ndisMaxNumberOfProcessors; ++i )
  {
    if ( *(_QWORD *)((i << 12) + BugCheckParameter3[4]) )
      goto LABEL_7;
  }
  NdisFreeRWLock((PNDIS_RW_LOCK_EX)BugCheckParameter3);
}
